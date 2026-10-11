#include "mindustry/audio/SoundControl_AudioThread.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "arc/func/Prov.h"
#include "java/util/Iterator.h"
#include "java/lang/InterruptedException.h"
#include "mindustry/audio/SoundControl_AudioThread_invoke_arc_func_Prov_1.h"
#include "arc/util/Time.h"
#include "arc/func/Cons2.h"
#include "java/lang/Object.h"
#include "mindustry/audio/SoundControl_AudioThread_invoke_arc_func_Cons2_1.h"
#include "mindustry/audio/SoundControl_SoundData.h"
#include "arc/audio/Sound.h"
#include "arc/struct/Seq.h"
#include "mindustry/audio/SoundControl_AudioThread.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"
#include "arc/math/geom/Position.h"
#include "mindustry/audio/AmbientSource.h"
#include "java/lang/Throwable.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"
#include "java/lang/Thread.h"

extern "C" {

jint SF_mindustry_audio_SoundControl$AudioThread_targetFps;
jlong SF_mindustry_audio_SoundControl$AudioThread_targetNanos;

void mark_mindustry_audio_SoundControl$AudioThread(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Thread(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_audio_SoundControl$AudioThread *) object;
	if (self->F_sources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sources)->clazz)->markFunction)((jobject) self->F_sources, mark, depth + 1);
	if (self->F_inputSources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputSources)->clazz)->markFunction)((jobject) self->F_inputSources, mark, depth + 1);
	if (self->F_sounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sounds)->clazz)->markFunction)((jobject) self->F_sounds, mark, depth + 1);
	if (self->F_localData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localData)->clazz)->markFunction)((jobject) self->F_localData, mark, depth + 1);
	if (self->F_outputData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputData)->clazz)->markFunction)((jobject) self->F_outputData, mark, depth + 1);
}

void init_mindustry_audio_SoundControl$AudioThread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$AudioThread:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl$AudioThread(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(490);
	init_java_lang_Thread(ctx, (frame[0].o));
	LINE_NUMBER(494);
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_running = (jint(1));
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_audio_AmbientSource)));
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_sources = (jref) sp[1].o;
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[1].o);
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_inputSources = (jref) sp[1].o;
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_sounds = (jref) sp[1].o;
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_localData = (jref) sp[1].o;
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_outputData = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl$AudioThread_doLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$AudioThread:doLoop", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sources;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = (checkCast(ctx, getArrayClass(&class_mindustry_audio_AmbientSource, 1), sp[0].o));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sources;
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_localData;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_inputSources;
	sp[0].o = (jobject)((func_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_audio_AmbientSource, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sources;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(515);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(516);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)));
	LINE_NUMBER(517);
	jint temp0 = (jint)((func_mindustry_audio_AmbientSource_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_audio_AmbientSource, INDEX_mindustry_audio_AmbientSource_isValid_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(518);
	jint temp0 = (jint)((func_mindustry_audio_AmbientSource_shouldAmbientSound_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_audio_AmbientSource, INDEX_mindustry_audio_AmbientSource_shouldAmbientSound_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(519);
	jfloat temp0 = (jfloat)((func_mindustry_audio_AmbientSource_getAmbientVolume_R_float) resolveInterfaceMethod(ctx, &class_mindustry_audio_AmbientSource, INDEX_mindustry_audio_AmbientSource_getAmbientVolume_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].f = temp0;
	LINE_NUMBER(520);
	if ((floatCompare((frame[6].f), (jfloat(1,000000e-05f)), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_mindustry_audio_AmbientSource_getAmbientSound_R_arc_audio_Sound) resolveInterfaceMethod(ctx, &class_mindustry_audio_AmbientSource, INDEX_mindustry_audio_AmbientSource_getAmbientSound_R_arc_audio_Sound, (frame[5].o)))(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(523);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sounds;
	sp[1].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = (checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o));
	LINE_NUMBER(524);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[8].o)))->F_sound = (jref) (frame[7].o);
	LINE_NUMBER(526);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[8].o)))->F_volume), (jfloat(0)), -1)) != 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(528);
	SM_mindustry_audio_SoundControl_loop_mindustry_audio_SoundControl$SoundData_arc_audio_Sound_arc_math_geom_Position_float_float(ctx, (frame[8].o), (frame[7].o), (frame[5].o), (frame[6].f), (jfloat(1)));
	LINE_NUMBER(530);
	if ((frame[9].i) == 0) goto label_22;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[8].o)))->F_volume), (jfloat(0)), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_localData;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	}
label_22:;
	LINE_NUMBER(534);
	goto label_19;
label_17:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sources;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(537);
	INST_IINC(4, -1);
	LINE_NUMBER(538);
	INST_IINC(2, -1);
	}
label_19:;
	{
	LINE_NUMBER(515);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_outputData;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_outputData;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(545);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_localData;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_35:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_outputData;
	sp[1].o = (jobject)((func_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(549);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(550);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_39;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	label_39:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_sounds;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl$AudioThread_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl$AudioThread_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$AudioThread:run", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(566);
	if (((jint)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK((frame[0].o)))->F_running) == 0) goto label_1;
	}
	{
	LINE_NUMBER(567);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(569);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_6;
	}
	goto label_1;
label_6:;
	{
	LINE_NUMBER(570);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(571);
	((func_mindustry_audio_SoundControl$AudioThread_doLoop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl$AudioThread_doLoop])(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(574);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, (frame[1].l));
	frame[3].l = temp0;
	LINE_NUMBER(575);
	if ((longCompare((frame[3].l), (clinit_mindustry_audio_SoundControl$AudioThread(ctx), (jlong)SF_mindustry_audio_SoundControl$AudioThread_targetNanos))) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(576);
	frame[5].l = ((clinit_mindustry_audio_SoundControl$AudioThread(ctx), (jlong)SF_mindustry_audio_SoundControl$AudioThread_targetNanos) - (frame[3].l));
	LINE_NUMBER(577);
	SM_java_lang_Thread_sleep_long_int(ctx, ((frame[5].l) / (jlong(1000000ll))), (jint(((frame[5].l) % (jlong(1000000ll))))));
	}
label_10:;
	LINE_NUMBER(579);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(582);
	goto label_13;
label_2:;
	LINE_NUMBER(580);
	INST_ASTORE(1);
label_13:;
	LINE_NUMBER(583);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundControl$AudioThread_lambda$doLoop$0_arc_audio_Sound_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$AudioThread:lambda$doLoop$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl$AudioThread(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(554);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_pitch = (jfloat(0));
	LINE_NUMBER(555);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_volume = (jfloat(0));
	LINE_NUMBER(556);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_total = (jfloat(0));
	LINE_NUMBER(557);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_totalVolume = (jfloat(0));
	LINE_NUMBER(558);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_sumX = (jfloat(0));
	LINE_NUMBER(559);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[1].o)))->F_sumY = (jfloat(0));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_audio_SoundControl$AudioThread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Thread(ctx);
	SF_mindustry_audio_SoundControl$AudioThread_targetFps = jint(20);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$AudioThread:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl$AudioThread(ctx);
	{
	LINE_NUMBER(492);
	jlong temp0 = (jlong)SM_arc_util_Time_millisToNanos_long_R_long(ctx, (jlong(1000ll)));
	clinit_mindustry_audio_SoundControl$AudioThread(ctx);
	SF_mindustry_audio_SoundControl$AudioThread_targetNanos = (temp0 / (jlong(20ll)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_audio_SoundControl$AudioThread[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Thread_toString_R_java_lang_String,
	(void *) M_java_lang_Thread_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_audio_SoundControl$AudioThread_run,
	(void *) M_java_lang_Thread_getId_R_long,
	(void *) M_java_lang_Thread_getName_R_java_lang_String,
	(void *) M_java_lang_Thread_setName_java_lang_String,
	(void *) M_java_lang_Thread_getPriority_R_int,
	(void *) M_java_lang_Thread_interrupt,
	(void *) M_java_lang_Thread_isAlive_R_boolean,
	(void *) M_java_lang_Thread_isInterrupted_R_boolean,
	(void *) M_java_lang_Thread_isDaemon_R_boolean,
	(void *) M_java_lang_Thread_setDaemon_boolean,
	(void *) M_java_lang_Thread_join,
	(void *) M_java_lang_Thread_join_long,
	(void *) M_java_lang_Thread_join_long_int,
	(void *) M_java_lang_Thread_setPriority_int,
	(void *) M_java_lang_Thread_start,
	(void *) M_java_lang_Thread_stop,
	(void *) M_java_lang_Thread_suspend,
	(void *) M_java_lang_Thread_resume,
	(void *) M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getState_R_java_lang_Thread$State,
	(void *) M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup,
	(void *) M_mindustry_audio_SoundControl$AudioThread_doLoop,
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
	{ "run", "()V" },
	{ "getId", "()J" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getPriority", "()I" },
	{ "interrupt", "()V" },
	{ "isAlive", "()Z" },
	{ "isInterrupted", "()Z" },
	{ "isDaemon", "()Z" },
	{ "setDaemon", "(Z)V" },
	{ "join", "()V" },
	{ "join", "(J)V" },
	{ "join", "(JI)V" },
	{ "setPriority", "(I)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "suspend", "()V" },
	{ "resume", "()V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setContextClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "getContextClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" },
	{ "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" },
	{ "getState", "()Ljava/lang/Thread$State;" },
	{ "getThreadGroup", "()Ljava/lang/ThreadGroup;" },
	{ "doLoop", "()V" },
};

static FieldMetadata fields[] {
	{ "targetFps", &class_int, (intptr_t) &SF_mindustry_audio_SoundControl$AudioThread_targetFps, "I", 24 },
	{ "targetNanos", &class_long, (intptr_t) &SF_mindustry_audio_SoundControl$AudioThread_targetNanos, "J", 24 },
	{ "running", &class_boolean, offsetof(mindustry_audio_SoundControl$AudioThread, F_running), "Z", 64 },
	{ "sources", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl$AudioThread, F_sources), "Larc/struct/Seq;", 0 },
	{ "inputSources", &class_java_util_concurrent_LinkedBlockingQueue, offsetof(mindustry_audio_SoundControl$AudioThread, F_inputSources), "Ljava/util/concurrent/LinkedBlockingQueue;", 0 },
	{ "sounds", &class_arc_struct_ObjectMap, offsetof(mindustry_audio_SoundControl$AudioThread, F_sounds), "Larc/struct/ObjectMap;", 0 },
	{ "localData", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl$AudioThread, F_localData), "Larc/struct/Seq;", 16 },
	{ "outputData", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl$AudioThread, F_outputData), "Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundControl$AudioThread, 0, "()V", 0 },
	{ "doLoop", (intptr_t) M_mindustry_audio_SoundControl$AudioThread_doLoop, VTABLE_mindustry_audio_SoundControl$AudioThread_doLoop, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_audio_SoundControl$AudioThread_run, VTABLE_mindustry_audio_SoundControl$AudioThread_run, "()V", 1 },
	{ "lambda$doLoop$0", (intptr_t) SM_mindustry_audio_SoundControl$AudioThread_lambda$doLoop$0_arc_audio_Sound_mindustry_audio_SoundControl$SoundData, 0, "(Larc/audio/Sound;Lmindustry/audio/SoundControl$SoundData;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_audio_SoundControl$AudioThread, 0, "()V", 8 },
};

Class class_mindustry_audio_SoundControl$AudioThread{
		.nativeName = (intptr_t) "mindustry/audio/SoundControl$AudioThread",
		.parentClass = (intptr_t) &class_java_lang_Thread,
		.size = sizeof(mindustry_audio_SoundControl$AudioThread),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundControl$AudioThread,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundControl$AudioThread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundControl$AudioThread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_audio_SoundControl,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundControl$AudioThread = registerClass(&class_mindustry_audio_SoundControl$AudioThread);

}

