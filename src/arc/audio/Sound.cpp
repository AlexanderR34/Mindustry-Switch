#include "arc/audio/Sound.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "arc/audio/AudioBus.h"
#include "arc/audio/Sound_invoke_java_lang_Runnable_1.h"
#include "java/util/concurrent/Future.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "arc/audio/Sound_invoke_java_lang_Runnable_0.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/audio/Audio.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Disposable.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/audio/AudioSource.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "arc/audio/Soloud.h"
#include "arc/graphics/Camera.h"

extern "C" {


void mark_arc_audio_Sound(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_Sound *) object;
	if (self->F_bus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bus)->clazz)->markFunction)((jobject) self->F_bus, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
}

void clinit_arc_audio_Sound(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_AudioSource(ctx);
}

jobject SM_arc_audio_Sound_createStream_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:createStream", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Sound(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(46);
	((arc_audio_Sound *) NULL_CHECK((frame[1].o)))->F_file = (jref) (frame[0].o);
	LINE_NUMBER(47);
	((arc_audio_Sound *) NULL_CHECK((frame[1].o)))->F_stream = (jint(1));
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[0].o));
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(49);
	frame[2].o = sp[0].o;
	LINE_NUMBER(50);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed loading sound from "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_audio_Sound_createLazy_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:createLazy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Sound(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(58);
	((func_arc_audio_Sound_loadLazy_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Sound_loadLazy_arc_files_Fi])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_arc_audio_Sound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Sound(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_arc_audio_AudioSource(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_audio;
	sp[-1].o = (jobject) ((arc_audio_Audio *) NULL_CHECK(sp[-1].o))->F_soundBus;
label_3:;
	{
	sp -= 2;
	((arc_audio_Sound *) NULL_CHECK(sp[0].o))->F_bus = (jref) sp[1].o;
	LINE_NUMBER(32);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_falloffOffset = (jfloat(0));
	LINE_NUMBER(33);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_minInterval = (jlong(16ll));
	LINE_NUMBER(39);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad = (jint(0));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_audio_Sound_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Sound(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	init_arc_audio_AudioSource(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_audio;
	sp[-1].o = (jobject) ((arc_audio_Audio *) NULL_CHECK(sp[-1].o))->F_soundBus;
label_3:;
	{
	sp -= 2;
	((arc_audio_Sound *) NULL_CHECK(sp[0].o))->F_bus = (jref) sp[1].o;
	LINE_NUMBER(32);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_falloffOffset = (jfloat(0));
	LINE_NUMBER(33);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_minInterval = (jlong(16ll));
	LINE_NUMBER(39);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad = (jint(0));
	LINE_NUMBER(69);
	((func_arc_audio_Sound_load_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_load_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Sound_load_Array1_byte_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(73);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_stream = (frame[2].i);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadBytes_Array1_byte_int_R_long(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jlong temp0 = (jlong)SM_arc_audio_Soloud_wavLoadBytes_Array1_byte_int_R_long(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[0].l = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = sp[1].l;
	LINE_NUMBER(76);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_defaultSoundMaxConcurrent) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Sound_setMaxConcurrent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMaxConcurrent_int])(ctx, sp[0].o, ((jint)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_defaultSoundMaxConcurrent));
	}
label_5:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Sound_load_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	((func_arc_audio_Sound_load_Array1_byte_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_load_Array1_byte_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Sound_loadLazy_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:loadLazy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(88);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad = (jint(1));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_Sound_isLazy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:isLazy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad) != 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Sound_checkLazyLoad_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:checkLazyLoad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad) == 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(98);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading = (jint(1));
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_executor;
	{ /* InvokeDynamic */
		clinit_arc_audio_Sound_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_audio_Sound_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_audio_Sound_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(125);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_initialized) == 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(127);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0 && ((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad != 0 && ((arc_audio_Sound *) (frame[0].o))->F_file != 0) {
		((func_arc_audio_Sound_load_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_load_arc_files_Fi])(ctx, (frame[0].o), (jobject)((arc_audio_Sound *) (frame[0].o))->F_file);
		((arc_audio_Sound *) (frame[0].o))->F_lazyLoad = (jint(0));
	}
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_3;
	}
	{
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad) == 0) goto label_3;
	}
	{
	LINE_NUMBER(128);
	frame[7].f = (frame[1].f);
	frame[8].f = (frame[2].f);
	frame[9].f = (frame[3].f);
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_audio_Sound_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_audio_Sound_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_audio_Sound_invoke_java_lang_Runnable_1);
		proxy->F_field6 = (jref) (frame[6].o);
		proxy->F_field5 = (frame[5].i);
		proxy->F_field4 = (frame[9].f);
		proxy->F_field3 = (frame[8].f);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_audio_Sound_checkLazyLoad_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_checkLazyLoad_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(136);
	if (frame[6].o == nullptr) {
		clinit_arc_Core(ctx);
		if (SF_arc_Core_audio) frame[6].o = (jobject)((arc_audio_Audio*)SF_arc_Core_audio)->F_soundBus;
	}
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0 && ((arc_audio_Sound *) (frame[0].o))->F_file != 0) {
		((func_arc_audio_Sound_load_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_load_arc_files_Fi])(ctx, (frame[0].o), (jobject)((arc_audio_Sound *) (frame[0].o))->F_file);
	}
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_8;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_9;
label_8:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(138);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastTimePlayed));
	if ((longCompare(temp0, ((jlong)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_minInterval))) > 0) goto label_10;
	}
	{
	LINE_NUMBER(140);
	if ((floatCompare((frame[1].f), ((jfloat)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastVolume), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(141);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastVoice;
	jfloat temp1 = frame[3].f;
	sp[1].o = frame[0].o;
	jfloat temp2 = (jfloat)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastVolume;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastVolume) + (frame[1].f)), ((frame[1].f) * (jfloat(1.25f))));
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, temp3);
	((arc_audio_Sound *) NULL_CHECK(sp[1].o))->F_lastVolume = temp4;
	((func_arc_audio_Audio_set_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_set_int_float_float])(ctx, sp[0].o, temp0, temp1, temp4);
	}
label_12:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[1].f));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_15;
	}
label_14:;
	INST_FCONST(0);
	INST_FSTORE(1);
label_15:;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[3].f));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[3].f));
	if (temp0 == 0) goto label_17;
	}
label_16:;
	INST_FCONST(0);
	INST_FSTORE(3);
label_17:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_19;
	}
label_18:;
	INST_FCONST(1);
	INST_FSTORE(2);
label_19:;
	{
	LINE_NUMBER(151);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lastVolume = (frame[1].f);
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((arc_audio_Sound *) NULL_CHECK(sp[0].o))->F_lastTimePlayed = temp0;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle;
	jlong temp2 = (jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[6].o)))->F_handle;
	jfloat temp3 = frame[1].f;
	jfloat temp4 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp4 * ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_globalPitch)), (jfloat(1,000000e-04f)), (jfloat(10.0f)));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[3].f), (jfloat(-1.0f)), (jfloat(1)));
	jint temp7 = (jint)SM_arc_audio_Soloud_sourcePlayBus_long_long_float_float_float_boolean_R_int(ctx, temp1, temp2, temp3, temp5, temp6, (frame[4].i));
	((arc_audio_Sound *) NULL_CHECK(sp[0].o))->F_lastVoice = temp7;
	popStackFrame(ctx);
	return temp7;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = frame[4].i;
	jint temp4 = frame[5].i;
	sp[1].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_bus;
	jint temp5 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Sound_setBus_arc_audio_AudioBus(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:setBus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_bus = (jref) (frame[1].o);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Sound_calcPan_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:calcPan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(167);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isHeadless_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isHeadless_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(169);
	jfloat temp0 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp1 / (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))), (jfloat(-0.9f)), (jfloat(0.9f)));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Sound_calcVolume_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:calcVolume", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)((func_arc_audio_Sound_calcFalloff_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_calcFalloff_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_sfxVolume));
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Sound_calcFalloff_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:calcFalloff", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(177);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isHeadless_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isHeadless_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(179);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp3 - (((jfloat)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_falloffOffset) * ((jfloat)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_falloffOffset))), (jfloat(0)));
	frame[3].f = temp4;
	LINE_NUMBER(180);
	jfloat temp5 = jfloat(1);
	jfloat temp6 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp5 / (temp6 / ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_falloff))));
	popStackFrame(ctx);
	return temp7;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_float_float_float_float_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(196);
	jfloat temp0 = (jfloat)((func_arc_audio_Sound_calcVolume_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_calcVolume_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	frame[6].f = (temp0 * (frame[4].f));
	LINE_NUMBER(197);
	if ((floatCompare((frame[6].f), (jfloat(5,000000e-03f)), 1)) >= 0) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((func_arc_audio_Sound_calcPan_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_calcPan_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	jint temp3 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int])(ctx, sp[0].o, temp0, temp1, temp2, (jint(0)), (frame[5].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(206);
	jfloat temp0 = (jfloat)((func_arc_audio_Sound_calcVolume_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_calcVolume_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	frame[6].f = (temp0 * (frame[4].f));
	LINE_NUMBER(207);
	if ((floatCompare((frame[6].f), (jfloat(5,000000e-03f)), 1)) >= 0) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((func_arc_audio_Sound_calcPan_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_calcPan_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	jint temp3 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, sp[0].o, temp0, temp1, temp2, (jint(0)), (jint(1)), (frame[5].o));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_float_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_arc_audio_Sound_at_float_float_float_float_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_boolean_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_arc_math_geom_Position_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_arc_audio_Sound_at_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_R_int])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_at_arc_math_geom_Position_float_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:at", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, (frame[2].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_R_int])(ctx, sp[0].o, ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_sfxVolume));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, sp[0].o, ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_sfxVolume), (jfloat(1)), (jfloat(0)), (jint(0)), (jint(1)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_R_int])(ctx, (frame[0].o), (frame[1].f), (jfloat(1)), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_float_float_float_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_play_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:play", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_loop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:loop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_arc_audio_Sound_loop_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_loop_float_R_int])(ctx, (frame[0].o), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_loop_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:loop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(303);
	jint temp0 = (jint)((func_arc_audio_Sound_loop_float_float_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_loop_float_float_float_R_int])(ctx, (frame[0].o), (frame[1].f), (jfloat(1)), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Sound_loop_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:loop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_R_int])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Sound_getLength_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:getLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
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
	LINE_NUMBER(321);
	if (((jint)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_stream) == 0) goto label_3;
	}
	{
	jdouble temp0 = (jdouble)SM_arc_audio_Soloud_streamLength_long_R_double(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jdouble temp0 = (jdouble)SM_arc_audio_Soloud_wavLength_long_R_double(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Sound_setMinInterval_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:setMinInterval", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(326);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_minInterval = (frame[1].l);
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Sound_setFalloffOffset_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:setFalloffOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(330);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_falloffOffset = (frame[1].f);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_audio_Sound_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Sound: "_j))));
	sp[1].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(uninitialized)"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_audio_Sound *) NULL_CHECK(sp[-1].o))->F_file;
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:lambda$play$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[1].i), (frame[5].i), (frame[6].o));
	}
label_1:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Sound:lambda$checkLazyLoad$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(102);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_lazyLoad = (jint(0));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file;
	((func_arc_audio_Sound_load_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_load_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	((func_arc_audio_Sound_setParamsAfterLoad) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Sound_setParamsAfterLoad])(ctx, (frame[0].o));
	LINE_NUMBER(105);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading = (jint(0));
	LINE_NUMBER(107);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(111);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(108);
	frame[2].o = sp[0].o;
	LINE_NUMBER(109);
	((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_currentlyLoading = (jint(0));
	LINE_NUMBER(110);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error loading sound: "_j))));
	sp[1].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_8:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_audio_Sound;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field file
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_audio_Sound[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_audio_Sound_toString_R_java_lang_String,
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
	(void *) M_arc_audio_AudioSource_stop,
	(void *) M_arc_audio_Sound_getLength_R_float,
	(void *) M_arc_audio_Sound_isLazy_R_boolean,
	(void *) M_arc_audio_Sound_load_Array1_byte_boolean,
	(void *) M_arc_audio_Sound_load_arc_files_Fi,
	(void *) M_arc_audio_Sound_loadLazy_arc_files_Fi,
	(void *) M_arc_audio_Sound_checkLazyLoad_java_lang_Runnable,
	(void *) M_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int,
	(void *) M_arc_audio_Sound_setBus_arc_audio_AudioBus,
	(void *) M_arc_audio_Sound_calcPan_float_float_R_float,
	(void *) M_arc_audio_Sound_calcVolume_float_float_R_float,
	(void *) M_arc_audio_Sound_calcFalloff_float_float_R_float,
	(void *) M_arc_audio_Sound_at_float_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_boolean_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_float_R_int,
	(void *) M_arc_audio_Sound_play_R_int,
	(void *) M_arc_audio_Sound_play_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_play_float_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_boolean_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_R_int,
	(void *) M_arc_audio_Sound_loop_R_int,
	(void *) M_arc_audio_Sound_loop_float_R_int,
	(void *) M_arc_audio_Sound_loop_float_float_float_R_int,
	(void *) M_arc_audio_Sound_setMinInterval_long,
	(void *) M_arc_audio_Sound_setFalloffOffset_float,
	(void *) M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus,
	(void *) M_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable,
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
	{ "load", "([BZ)V" },
	{ "load", "(Larc/files/Fi;)V" },
	{ "loadLazy", "(Larc/files/Fi;)V" },
	{ "checkLazyLoad", "(Ljava/lang/Runnable;)V" },
	{ "play", "(FFFZZLarc/audio/AudioBus;)I" },
	{ "play", "(FFFZZ)I" },
	{ "setBus", "(Larc/audio/AudioBus;)V" },
	{ "calcPan", "(FF)F" },
	{ "calcVolume", "(FF)F" },
	{ "calcFalloff", "(FF)F" },
	{ "at", "(FFF)I" },
	{ "at", "(FFFFZ)I" },
	{ "at", "(FFFFLarc/audio/AudioBus;)I" },
	{ "at", "(Larc/math/geom/Position;FF)I" },
	{ "at", "(FFFF)I" },
	{ "at", "(FF)I" },
	{ "at", "(Larc/math/geom/Position;)I" },
	{ "at", "(Larc/math/geom/Position;F)I" },
	{ "play", "()I" },
	{ "play", "(Larc/audio/AudioBus;)I" },
	{ "play", "(F)I" },
	{ "play", "(FFFZ)I" },
	{ "play", "(FFF)I" },
	{ "loop", "()I" },
	{ "loop", "(F)I" },
	{ "loop", "(FFF)I" },
	{ "setMinInterval", "(J)V" },
	{ "setFalloffOffset", "(F)V" },
	{ "lambda$play$0", "(ZFFFZLarc/audio/AudioBus;)V" },
	{ "lambda$checkLazyLoad$0", "(Ljava/lang/Runnable;)V" },
};

static FieldMetadata fields[] {
	{ "bus", &class_arc_audio_AudioBus, offsetof(arc_audio_Sound, F_bus), "Larc/audio/AudioBus;", 1 },
	{ "file", &class_arc_files_Fi, offsetof(arc_audio_Sound, F_file), "Larc/files/Fi;", 1 },
	{ "falloffOffset", &class_float, offsetof(arc_audio_Sound, F_falloffOffset), "F", 0 },
	{ "minInterval", &class_long, offsetof(arc_audio_Sound, F_minInterval), "J", 0 },
	{ "lastTimePlayed", &class_long, offsetof(arc_audio_Sound, F_lastTimePlayed), "J", 0 },
	{ "lastVoice", &class_int, offsetof(arc_audio_Sound, F_lastVoice), "I", 0 },
	{ "lastVolume", &class_float, offsetof(arc_audio_Sound, F_lastVolume), "F", 0 },
	{ "stream", &class_boolean, offsetof(arc_audio_Sound, F_stream), "Z", 0 },
	{ "lazyLoad", &class_boolean, offsetof(arc_audio_Sound, F_lazyLoad), "Z", 0 },
	{ "currentlyLoading", &class_boolean, offsetof(arc_audio_Sound, F_currentlyLoading), "Z", 64 },
};

static MethodMetadata methods[] {
	{ "createStream", (intptr_t) SM_arc_audio_Sound_createStream_arc_files_Fi_R_arc_audio_Sound, 0, "(Larc/files/Fi;)Larc/audio/Sound;", 9 },
	{ "createLazy", (intptr_t) SM_arc_audio_Sound_createLazy_arc_files_Fi_R_arc_audio_Sound, 0, "(Larc/files/Fi;)Larc/audio/Sound;", 9 },
	{ "<init>", (intptr_t) init_arc_audio_Sound, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_audio_Sound_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "load", (intptr_t) M_arc_audio_Sound_load_Array1_byte_boolean, VTABLE_arc_audio_Sound_load_Array1_byte_boolean, "([BZ)V", 1 },
	{ "load", (intptr_t) M_arc_audio_Sound_load_arc_files_Fi, VTABLE_arc_audio_Sound_load_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "loadLazy", (intptr_t) M_arc_audio_Sound_loadLazy_arc_files_Fi, VTABLE_arc_audio_Sound_loadLazy_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "isLazy", (intptr_t) M_arc_audio_Sound_isLazy_R_boolean, VTABLE_arc_audio_Sound_isLazy_R_boolean, "()Z", 1 },
	{ "checkLazyLoad", (intptr_t) M_arc_audio_Sound_checkLazyLoad_java_lang_Runnable, VTABLE_arc_audio_Sound_checkLazyLoad_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int, VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int, "(FFFZZLarc/audio/AudioBus;)I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int, VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int, "(FFFZZ)I", 1 },
	{ "setBus", (intptr_t) M_arc_audio_Sound_setBus_arc_audio_AudioBus, VTABLE_arc_audio_Sound_setBus_arc_audio_AudioBus, "(Larc/audio/AudioBus;)V", 1 },
	{ "calcPan", (intptr_t) M_arc_audio_Sound_calcPan_float_float_R_float, VTABLE_arc_audio_Sound_calcPan_float_float_R_float, "(FF)F", 1 },
	{ "calcVolume", (intptr_t) M_arc_audio_Sound_calcVolume_float_float_R_float, VTABLE_arc_audio_Sound_calcVolume_float_float_R_float, "(FF)F", 1 },
	{ "calcFalloff", (intptr_t) M_arc_audio_Sound_calcFalloff_float_float_R_float, VTABLE_arc_audio_Sound_calcFalloff_float_float_R_float, "(FF)F", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_float_float_float_R_int, VTABLE_arc_audio_Sound_at_float_float_float_R_int, "(FFF)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_float_float_float_float_boolean_R_int, VTABLE_arc_audio_Sound_at_float_float_float_float_boolean_R_int, "(FFFFZ)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int, VTABLE_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int, "(FFFFLarc/audio/AudioBus;)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int, VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int, "(Larc/math/geom/Position;FF)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_float_float_float_float_R_int, VTABLE_arc_audio_Sound_at_float_float_float_float_R_int, "(FFFF)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_float_float_R_int, VTABLE_arc_audio_Sound_at_float_float_R_int, "(FF)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_arc_math_geom_Position_R_int, VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int, "(Larc/math/geom/Position;)I", 1 },
	{ "at", (intptr_t) M_arc_audio_Sound_at_arc_math_geom_Position_float_R_int, VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int, "(Larc/math/geom/Position;F)I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_R_int, VTABLE_arc_audio_Sound_play_R_int, "()I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_arc_audio_AudioBus_R_int, VTABLE_arc_audio_Sound_play_arc_audio_AudioBus_R_int, "(Larc/audio/AudioBus;)I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_float_R_int, VTABLE_arc_audio_Sound_play_float_R_int, "(F)I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_float_float_float_boolean_R_int, VTABLE_arc_audio_Sound_play_float_float_float_boolean_R_int, "(FFFZ)I", 1 },
	{ "play", (intptr_t) M_arc_audio_Sound_play_float_float_float_R_int, VTABLE_arc_audio_Sound_play_float_float_float_R_int, "(FFF)I", 1 },
	{ "loop", (intptr_t) M_arc_audio_Sound_loop_R_int, VTABLE_arc_audio_Sound_loop_R_int, "()I", 1 },
	{ "loop", (intptr_t) M_arc_audio_Sound_loop_float_R_int, VTABLE_arc_audio_Sound_loop_float_R_int, "(F)I", 1 },
	{ "loop", (intptr_t) M_arc_audio_Sound_loop_float_float_float_R_int, VTABLE_arc_audio_Sound_loop_float_float_float_R_int, "(FFF)I", 1 },
	{ "getLength", (intptr_t) M_arc_audio_Sound_getLength_R_float, VTABLE_arc_audio_Sound_getLength_R_float, "()F", 1 },
	{ "setMinInterval", (intptr_t) M_arc_audio_Sound_setMinInterval_long, VTABLE_arc_audio_Sound_setMinInterval_long, "(J)V", 1 },
	{ "setFalloffOffset", (intptr_t) M_arc_audio_Sound_setFalloffOffset_float, VTABLE_arc_audio_Sound_setFalloffOffset_float, "(F)V", 1 },
	{ "toString", (intptr_t) M_arc_audio_Sound_toString_R_java_lang_String, VTABLE_arc_audio_Sound_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$play$0", (intptr_t) M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus, VTABLE_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus, "(ZFFFZLarc/audio/AudioBus;)V", 4098 },
	{ "lambda$checkLazyLoad$0", (intptr_t) M_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable, VTABLE_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 4098 },
};

Class class_arc_audio_Sound{
		.nativeName = (intptr_t) "arc/audio/Sound",
		.parentClass = (intptr_t) &class_arc_audio_AudioSource,
		.size = sizeof(arc_audio_Sound),
		.classVtable = (intptr_t) vtable_arc_audio_Sound,
		.staticInitializer = (intptr_t) clinit_arc_audio_Sound,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_audio_Sound,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Sound = registerClass(&class_arc_audio_Sound);

}
