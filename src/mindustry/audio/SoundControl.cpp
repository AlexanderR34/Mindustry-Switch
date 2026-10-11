#include "mindustry/audio/SoundControl.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "mindustry/gen/Musics.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "mindustry/audio/SoundControl_SoundData.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/game/EventType_MusicRegisterEvent.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Prov_2.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Prov_3.h"
#include "arc/Settings.h"
#include "mindustry/audio/SoundControl_1.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/func/Boolf.h"
#include "java/lang/Thread.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Func_3.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "arc/func/Cons2.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Func_4.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Func_5.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/Camera.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/audio/AudioBus.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/game/Rules.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Cons_3.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Cons_4.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Cons_5.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "arc/audio/Audio.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "arc/audio/AudioFilter.h"
#include "mindustry/audio/SoundControl_AudioThread.h"
#include "mindustry/audio/AmbientSource.h"
#include "java/lang/Math.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Boolf_6.h"
#include "mindustry/audio/SoundControl_invoke_java_lang_Runnable_2.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Boolf_7.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Boolf_4.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Boolf_5.h"
#include "mindustry/audio/SoundControl_invoke_java_lang_Runnable_3.h"
#include "arc/audio/AudioSource.h"
#include "mindustry/core/UI.h"
#include "mindustry/audio/SoundControl_invoke_arc_func_Cons2_1.h"
#include "mindustry/game/SpawnGroup.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_audio_SoundControl(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_audio_SoundControl *) object;
	if (self->F_ambientMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientMusic)->clazz)->markFunction)((jobject) self->F_ambientMusic, mark, depth + 1);
	if (self->F_darkMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darkMusic)->clazz)->markFunction)((jobject) self->F_darkMusic, mark, depth + 1);
	if (self->F_bossMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bossMusic)->clazz)->markFunction)((jobject) self->F_bossMusic, mark, depth + 1);
	if (self->F_uiBus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uiBus)->clazz)->markFunction)((jobject) self->F_uiBus, mark, depth + 1);
	if (self->F_lastRandomPlayed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastRandomPlayed)->clazz)->markFunction)((jobject) self->F_lastRandomPlayed, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_ambientThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientThread)->clazz)->markFunction)((jobject) self->F_ambientThread, mark, depth + 1);
	if (self->F_localData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localData)->clazz)->markFunction)((jobject) self->F_localData, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
	if (self->F_sounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sounds)->clazz)->markFunction)((jobject) self->F_sounds, mark, depth + 1);
}

void clinit_mindustry_audio_SoundControl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_audio_SoundControl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_finTime = (jfloat(120.0f));
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_foutTime = (jfloat(120.0f));
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicInterval = (jfloat(10800.0f));
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicChance = (jfloat(0.8f));
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicWaveChance = (jfloat(0.46f));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_ambientMusic = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_darkMusic = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_bossMusic = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_uiBus = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (jint(4)));
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_localData = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_audio_SoundControl$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_audio_SoundControl$1);
	init_mindustry_audio_SoundControl$1_mindustry_audio_SoundControl(ctx, sp[1].o, (frame[0].o));
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_sounds = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WaveEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	((func_mindustry_audio_SoundControl_setupFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_setupFilters])(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_setupFilters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:setupFilters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_filter;
	((func_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(88);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_setFilterParam_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_setFilterParam_int_int_float])(ctx, sp[0].o, (jint(0)), (jint(0)), (jfloat(0)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:reload", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(93);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade = (jfloat(0));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (6));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game1;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game3;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game6;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game8;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game9;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_fine;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_ambientMusic = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (jint(4)));
	jint temp6 = jint(0);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game2;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = jint(1);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game5;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(2);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game7;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = jint(3);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game4;
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_darkMusic = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Music, (jint(4)));
	jint temp10 = jint(0);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_boss1;
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = jint(1);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_boss2;
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = jint(2);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game2;
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = jint(3);
	clinit_mindustry_gen_Musics(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Musics_game5;
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_bossMusic = (jref) sp[1].o;
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)SM_arc_files_Fi_get_java_lang_String_R_arc_files_Fi(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ui"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_uiBus;
	((func_arc_audio_Sound_setBus_arc_audio_AudioBus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setBus_arc_audio_AudioBus])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(104);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(106);
	clinit_mindustry_game_EventType$MusicRegisterEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$MusicRegisterEvent);
	init_mindustry_game_EventType$MusicRegisterEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(1));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_stop])(ctx, sp[0].o);
	LINE_NUMBER(113);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(114);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_arc_audio_Music_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(125);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(126);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade = (jfloat(0));
	}
label_5:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(30.0f)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(131);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[1].i) == 0) goto label_10;
	}
	INST_FCONST(1);
	goto label_11;
label_10:;
	INST_FCONST(0);
label_11:;
	(sp++)->f = jfloat(0.4f);
	POP_N(5); // Pop method args
	((func_arc_audio_AudioBus_fadeFilterParam_int_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_fadeFilterParam_int_int_float_float])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].f, sp[4].f);
label_8:;
	{
	LINE_NUMBER(135);
	if ((frame[2].i) == ((jint)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_wasPlaying)) goto label_12;
	}
	{
	LINE_NUMBER(136);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_wasPlaying = (frame[2].i);
	LINE_NUMBER(138);
	if ((frame[2].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(139);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_play])(ctx, sp[0].o);
	LINE_NUMBER(140);
	((func_mindustry_audio_SoundControl_setupFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_setupFilters])(ctx, (frame[0].o));
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(143);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_stop])(ctx, sp[0].o);
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_musicBus;
	((func_arc_audio_AudioBus_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_play])(ctx, sp[0].o);
	LINE_NUMBER(147);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_play])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(151);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	sp[1].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_soundBus;
	jint temp0 = (jint)((arc_audio_AudioBus *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[1].o);
	((func_arc_audio_Audio_setPaused_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_setPaused_int_boolean])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(153);
	if (((jint)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_keepSilent) == 0) goto label_21;
	}
	{
	LINE_NUMBER(154);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_keepSilent = (jint(0));
	LINE_NUMBER(155);
	((func_mindustry_audio_SoundControl_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_stop])(ctx, (frame[0].o));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(157);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(0));
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_launchMusic;
	((func_mindustry_audio_SoundControl_play_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music])(ctx, sp[0].o, sp[1].o);
	goto label_24;
	}
label_28:;
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Musics(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Musics_editor;
	((func_mindustry_audio_SoundControl_play_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music])(ctx, sp[0].o, sp[1].o);
	goto label_24;
	}
label_30:;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Musics(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Musics_menu;
	((func_mindustry_audio_SoundControl_play_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music])(ctx, sp[0].o, sp[1].o);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(165);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_32;
	}
	{
	LINE_NUMBER(166);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(0));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Musics(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Musics_editor;
	((func_mindustry_audio_SoundControl_play_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music])(ctx, sp[0].o, sp[1].o);
	goto label_24;
	}
label_32:;
	{
	LINE_NUMBER(170);
	((func_mindustry_audio_SoundControl_silence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_silence])(ctx, (frame[0].o));
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableMusic) != 0) goto label_24;
	}
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(175);
	((func_mindustry_audio_SoundControl_playRandom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_playRandom])(ctx, (frame[0].o));
	goto label_24;
	}
label_37:;
	{
	LINE_NUMBER(177);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastPlayed));
	if ((floatCompare((jfloat(temp0)), (((jfloat(1000.0f)) * ((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicInterval)) / (jfloat(60.0f))), -1)) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicChance))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_lastPlayed = temp0;
	LINE_NUMBER(181);
	((func_mindustry_audio_SoundControl_playRandom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_playRandom])(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(187);
	((func_mindustry_audio_SoundControl_updateLoops) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_updateLoops])(ctx, (frame[0].o));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_keepSilent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:keepSilent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_keepSilent = (jint(1));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:playMusic", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_stop])(ctx, sp[0].o);
	LINE_NUMBER(197);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(199);
	((func_mindustry_audio_SoundControl_playOnce_arc_audio_Music) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(201);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(1));
	}
label_5:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_audio_SoundControl_isPlaying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:isPlaying", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_arc_audio_Music_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
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

jobject M_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:getCurrent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_playRandom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:playRandom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastRandomPlayed;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_audio_SoundControl_playOnce_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music])(ctx, sp[0].o, (checkCast(ctx, &class_arc_audio_Music, sp[1].o)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_mindustry_audio_SoundControl_isDark_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_isDark_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastRandomPlayed;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_audio_SoundControl_playOnce_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music])(ctx, sp[0].o, (checkCast(ctx, &class_arc_audio_Music, sp[1].o)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastRandomPlayed;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_audio_SoundControl_playOnce_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music])(ctx, sp[0].o, (checkCast(ctx, &class_arc_audio_Music, sp[1].o)));
	}
label_3:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:alwaysPlayMusic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_alwaysPlayMusic) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alwaysmusic"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_alwaysPlayMusic) == 0) goto label_2;
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

jobject M_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:getBossMusic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Func_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(230);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_darkMusic;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_darkMusic;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_audio_SoundControl *) NULL_CHECK(sp[-1].o))->F_bossMusic;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:getAmbientMusic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Func_4(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Func_4 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Func_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_audio_SoundControl *) NULL_CHECK(sp[-1].o))->F_ambientMusic;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:getDarkMusic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Func_5(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Func_5 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Func_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_darkMusic;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_darkMusic;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_audio_SoundControl *) NULL_CHECK(sp[-1].o))->F_darkMusic;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_audio_SoundControl_isDark_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:isDark", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_healthf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_healthf_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.85f)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp0 = (jdouble)SM_java_lang_Math_log10_double_R_double(ctx, (jdouble((((jfloat(((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave))) - (jfloat(17.0f))) / (jfloat(19.0f))))));
	jint temp1 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat((temp0 + (jdouble(1))))) / (jfloat(4.0f))))));
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(256);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble((((jfloat(((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies))) / (jfloat(70.0f))) + (jfloat(0.1f))))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_audio_SoundControl_volumeMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:volumeMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"musicvol"_j))));
	if (temp0 <= 0) temp0 = 100;
	jfloat temp1 = (jfloat(temp0)) / (jfloat(100.0f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_musicVolume));
	popStackFrame(ctx);
	return (temp1 * temp2);
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_play_arc_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:play", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_mindustry_audio_SoundControl_shouldPlay_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_shouldPlay_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, (jfloat(0)));
	}
label_3:;
	{
	LINE_NUMBER(271);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade = (jfloat(0));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	jfloat temp0 = (jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade;
	jfloat temp1 = (jfloat)((func_mindustry_audio_SoundControl_volumeMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_volumeMultiplier_R_float])(ctx, (frame[0].o));
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, (temp0 * temp1));
	}
label_6:;
	{
	LINE_NUMBER(281);
	if (((jint)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced) == 0) goto label_8;
	}
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(287);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_setLooping_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setLooping_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_fade = temp0;
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_play])(ctx, sp[0].o);
	LINE_NUMBER(291);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(0));
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != (frame[1].o)) goto label_17;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_17;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / ((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_finTime))));
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_fade = temp0;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / ((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_foutTime))));
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_fade = temp0;
	LINE_NUMBER(299);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade), (jfloat(1,000000e-02f)), 1)) > 0) goto label_16;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_stop])(ctx, sp[0].o);
	LINE_NUMBER(302);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(303);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(1));
	LINE_NUMBER(304);
	if ((frame[1].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(306);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_fade = temp0;
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_setLooping_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setLooping_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_play])(ctx, sp[0].o);
	LINE_NUMBER(310);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_silenced = (jint(0));
	}
label_16:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_playOnce_arc_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:playOnce", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_audio_SoundControl_shouldPlay_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_shouldPlay_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(321);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastRandomPlayed = (jref) (frame[1].o);
	LINE_NUMBER(324);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_fade = (jfloat(1));
	LINE_NUMBER(325);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	jfloat temp0 = (jfloat)((func_mindustry_audio_SoundControl_volumeMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_volumeMultiplier_R_float])(ctx, (frame[0].o));
	((func_arc_audio_Music_setVolume_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setVolume_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_setLooping_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_setLooping_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_audio_Music_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_play])(ctx, sp[0].o);
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_audio_SoundControl_shouldPlay_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:shouldPlay", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"musicvol"_j))));
	if (temp0 <= 0) temp0 = 100;
	if (temp0 <= 0) goto label_1;
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

void M_mindustry_audio_SoundControl_silence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:silence", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	((func_mindustry_audio_SoundControl_play_arc_audio_Music) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:findMusic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(342);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (((jobject) &class_arc_audio_Music)));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	LINE_NUMBER(343);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.ogg"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(344);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mp3"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(345);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"music/\u0001.ogg"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	}
label_5:;
	{
	LINE_NUMBER(346);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"music/\u0001.mp3"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(347);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"music/\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(349);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(350);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[0].o = (jobject)((func_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:loop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(358);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].f));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:loop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(364);
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:loop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(368);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(1,000000e-05f)), 1)) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_sounds;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	SM_mindustry_audio_SoundControl_loop_mindustry_audio_SoundControl$SoundData_arc_audio_Sound_arc_math_geom_Position_float_float(ctx, (checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o)), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundControl_loop_mindustry_audio_SoundControl$SoundData_arc_audio_Sound_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:loop", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_arc_audio_Sound_calcFalloff_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_calcFalloff_float_float_R_float])(ctx, sp[0].o, temp0, temp1);
	frame[5].f = temp2;
	LINE_NUMBER(375);
	frame[6].f = ((frame[5].f) * (frame[3].f));
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_volume = (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_volume) + (frame[6].f));
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_pitch = (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_pitch) + ((frame[4].f) * (frame[6].f)));
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[0].o)))->F_volume), (jfloat(0)), (jfloat(1)));
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_volume = temp3;
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_total = (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_total) + (frame[5].f));
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_totalVolume = (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_totalVolume) + (frame[6].f));
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_sumX;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_sumX = (temp4 + (temp5 * (frame[5].f)));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_sumY;
	jfloat temp7 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_sumY = (temp6 + (temp7 * (frame[5].f)));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:addAmbientSource", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(387);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(389);
	if (((jint)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_launchingAmbientThread) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_sources;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_inputSources;
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(394);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_launchingAmbientThread = (jint(1));
	LINE_NUMBER(395);
	clinit_mindustry_audio_SoundControl$AudioThread(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_audio_SoundControl$AudioThread);
	init_mindustry_audio_SoundControl$AudioThread(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(396);
	((func_mindustry_audio_SoundControl$AudioThread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_audio_SoundControl$AudioThread_setDaemon_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(397);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread = (jref) (frame[2].o);
	LINE_NUMBER(400);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_updateLoops(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:updateLoops", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_sounds;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(417);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(419);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ambientvol"_j))), (100));
	frame[1].f = ((jfloat(temp0)) / (jfloat(100.0f)));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_sounds;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Cons2_1);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	sp[0].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_outputData;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_localData;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	sp[1].o = (jobject)((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[1].o))->F_outputData;
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(456);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_16:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_localData;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_sounds;
	sp[1].o = (jobject)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_sound;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o));
	LINE_NUMBER(461);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_pitch = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_pitch);
	LINE_NUMBER(462);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_volume = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_volume);
	LINE_NUMBER(463);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_total = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_total);
	LINE_NUMBER(464);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_totalVolume = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_totalVolume);
	LINE_NUMBER(465);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_sumX = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_sumX);
	LINE_NUMBER(466);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[4].o)))->F_sumY = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[3].o)))->F_sumY);
	LINE_NUMBER(467);
	goto label_17;
	}
label_13:;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundControl_lambda$updateLoops$0_float_arc_audio_Sound_mindustry_audio_SoundControl$SoundData(jcontext ctx, jfloat param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$updateLoops$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(422);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_curVolume), (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_volume) * (frame[0].f)), (jfloat(0.11f)));
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_curVolume = temp0;
	LINE_NUMBER(424);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_curVolume), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(425);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_total), (jfloat(1,000000e-04f)));
	if (temp0 == 0) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	{
	jfloat temp0 = (jfloat)((func_arc_audio_Sound_calcPan_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Sound_calcPan_float_float_R_float])(ctx, (frame[1].o), (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_sumX) / ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_total)), (((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_sumY) / ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_total)));
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(426);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_totalVolume), (jfloat(1,000000e-04f)));
	if (temp0 == 0) goto label_8;
	}
	INST_FCONST(1);
	goto label_9;
label_8:;
	{
	jfloat temp0 = ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_pitch) / ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_totalVolume);
	sp[0].f = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(427);
	if (((jint)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID) <= 0) goto label_11;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Audio_isPlaying_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_isPlaying_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID));
	if (temp0 != 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(428);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_audio_Sound_loop_float_float_float_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Sound_loop_float_float_float_R_int])(ctx, (frame[1].o), ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_curVolume), (frame[5].f), (frame[4].f));
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK(sp[0].o))->F_soundID = temp0;
	LINE_NUMBER(430);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_protect_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_protect_int_boolean])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID), (jint(1)));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(433);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_curVolume), (jfloat(1,000000e-03f)), 1)) > 0) goto label_16;
	}
	{
	LINE_NUMBER(434);
	((func_arc_audio_Sound_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Sound_stop])(ctx, (frame[1].o));
	LINE_NUMBER(435);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID = (jint(-1));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(438);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_set_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_set_int_float_float])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID), (frame[4].f), ((jfloat)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_curVolume));
	LINE_NUMBER(439);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, (frame[5].f), (jfloat(1)), (jfloat(1,000000e-03f)));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(440);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_setPitch_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_setPitch_int_float])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_soundID), (frame[5].f));
	}
label_13:;
	{
	LINE_NUMBER(444);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_pitch = (jfloat(0));
	LINE_NUMBER(445);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_volume = (jfloat(0));
	LINE_NUMBER(446);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_total = (jfloat(0));
	LINE_NUMBER(447);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_totalVolume = (jfloat(0));
	LINE_NUMBER(448);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_sumX = (jfloat(0));
	LINE_NUMBER(449);
	((mindustry_audio_SoundControl$SoundData *) NULL_CHECK((frame[2].o)))->F_sumY = (jfloat(0));
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$addAmbientSource$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(403);
	((func_mindustry_audio_SoundControl$AudioThread_start) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_audio_SoundControl$AudioThread_start])(ctx, (frame[1].o));
	LINE_NUMBER(404);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_launchingAmbientThread = (jint(0));
	}
label_1:;
	LINE_NUMBER(406);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_audio_SoundControl_lambda$getDarkMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$getDarkMusic$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(239);
	if ((frame[0].o) != nullptr) goto label_1;
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

jbool SM_mindustry_audio_SoundControl_lambda$getAmbientMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$getAmbientMusic$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(234);
	if ((frame[0].o) != nullptr) goto label_1;
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

jbool SM_mindustry_audio_SoundControl_lambda$getBossMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$getBossMusic$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(229);
	if ((frame[0].o) != nullptr) goto label_1;
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

void M_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$new$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_audio_SoundControl *) NULL_CHECK(sp[0].o))->F_lastPlayed = temp0;
	LINE_NUMBER(74);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_stop])(ctx, sp[0].o);
	LINE_NUMBER(75);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	sp[0].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus;
	((func_arc_audio_AudioBus_play) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_AudioBus_play])(ctx, sp[0].o);
	LINE_NUMBER(77);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_launchingAmbientThread = (jint(0));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	((mindustry_audio_SoundControl$AudioThread *) NULL_CHECK(sp[0].o))->F_running = (jint(0));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread;
	((func_mindustry_audio_SoundControl$AudioThread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl$AudioThread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(81);
	((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_ambientThread = (jref) (jobject(nullptr));
	}
label_5:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(8.0f)), (jfloat(15.0f)));
	jfloat temp1 = temp0 * (jfloat(60.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundControl_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$new$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableMusic) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	{ /* InvokeDynamic */
		clinit_mindustry_audio_SoundControl_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_audio_SoundControl_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_audio_SoundControl_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(61);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_lastRandomPlayed;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_audio_SoundControl_playOnce_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music])(ctx, sp[0].o, (checkCast(ctx, &class_arc_audio_Music, sp[1].o)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_audio_SoundControl *) NULL_CHECK((frame[0].o)))->F_musicWaveChance))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(64);
	((func_mindustry_audio_SoundControl_playRandom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_playRandom])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_audio_SoundControl_lambda$new$3_mindustry_game_SpawnGroup_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, sp[0].o, (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave) - (jint(2))));
	if (temp0 <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_effect;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((func_mindustry_audio_SoundControl_reload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl_reload])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_audio_SoundControl;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field current
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field ambientThread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getCurrent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method findMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_audio_SoundControl[] {
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
	(void *) M_mindustry_audio_SoundControl_setupFilters,
	(void *) M_mindustry_audio_SoundControl_reload,
	(void *) M_mindustry_audio_SoundControl_stop,
	(void *) M_mindustry_audio_SoundControl_update,
	(void *) M_mindustry_audio_SoundControl_keepSilent,
	(void *) M_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean,
	(void *) M_mindustry_audio_SoundControl_isPlaying_R_boolean,
	(void *) M_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music,
	(void *) M_mindustry_audio_SoundControl_playRandom,
	(void *) M_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean,
	(void *) M_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq,
	(void *) M_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq,
	(void *) M_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq,
	(void *) M_mindustry_audio_SoundControl_isDark_R_boolean,
	(void *) M_mindustry_audio_SoundControl_volumeMultiplier_R_float,
	(void *) M_mindustry_audio_SoundControl_play_arc_audio_Music,
	(void *) M_mindustry_audio_SoundControl_playOnce_arc_audio_Music,
	(void *) M_mindustry_audio_SoundControl_shouldPlay_R_boolean,
	(void *) M_mindustry_audio_SoundControl_silence,
	(void *) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_float,
	(void *) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float,
	(void *) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float,
	(void *) M_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource,
	(void *) M_mindustry_audio_SoundControl_updateLoops,
	(void *) M_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread,
	(void *) M_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent,
	(void *) M_mindustry_audio_SoundControl_lambda$new$2,
	(void *) M_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent,
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
	{ "setupFilters", "()V" },
	{ "reload", "()V" },
	{ "stop", "()V" },
	{ "update", "()V" },
	{ "keepSilent", "()V" },
	{ "playMusic", "(Larc/audio/Music;Z)V" },
	{ "isPlaying", "()Z" },
	{ "getCurrent", "()Larc/audio/Music;" },
	{ "playRandom", "()V" },
	{ "alwaysPlayMusic", "()Z" },
	{ "getBossMusic", "()Larc/struct/Seq;" },
	{ "getAmbientMusic", "()Larc/struct/Seq;" },
	{ "getDarkMusic", "()Larc/struct/Seq;" },
	{ "isDark", "()Z" },
	{ "volumeMultiplier", "()F" },
	{ "play", "(Larc/audio/Music;)V" },
	{ "playOnce", "(Larc/audio/Music;)V" },
	{ "shouldPlay", "()Z" },
	{ "silence", "()V" },
	{ "loop", "(Larc/audio/Sound;F)V" },
	{ "loop", "(Larc/audio/Sound;Larc/math/geom/Position;F)V" },
	{ "loop", "(Larc/audio/Sound;Larc/math/geom/Position;FF)V" },
	{ "addAmbientSource", "(Lmindustry/audio/AmbientSource;)V" },
	{ "updateLoops", "()V" },
	{ "lambda$addAmbientSource$0", "(Lmindustry/audio/SoundControl$AudioThread;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$WaveEvent;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_audio_SoundControl$SoundData,
	&class_mindustry_audio_SoundControl$AudioThread,
};

static FieldMetadata fields[] {
	{ "finTime", &class_float, offsetof(mindustry_audio_SoundControl, F_finTime), "F", 1 },
	{ "foutTime", &class_float, offsetof(mindustry_audio_SoundControl, F_foutTime), "F", 1 },
	{ "musicInterval", &class_float, offsetof(mindustry_audio_SoundControl, F_musicInterval), "F", 1 },
	{ "musicChance", &class_float, offsetof(mindustry_audio_SoundControl, F_musicChance), "F", 1 },
	{ "musicWaveChance", &class_float, offsetof(mindustry_audio_SoundControl, F_musicWaveChance), "F", 1 },
	{ "ambientMusic", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl, F_ambientMusic), "Larc/struct/Seq;", 1 },
	{ "darkMusic", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl, F_darkMusic), "Larc/struct/Seq;", 1 },
	{ "bossMusic", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl, F_bossMusic), "Larc/struct/Seq;", 1 },
	{ "uiBus", &class_arc_audio_AudioBus, offsetof(mindustry_audio_SoundControl, F_uiBus), "Larc/audio/AudioBus;", 1 },
	{ "lastRandomPlayed", &class_arc_audio_Music, offsetof(mindustry_audio_SoundControl, F_lastRandomPlayed), "Larc/audio/Music;", 4 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_audio_SoundControl, F_timer), "Larc/util/Interval;", 4 },
	{ "lastPlayed", &class_long, offsetof(mindustry_audio_SoundControl, F_lastPlayed), "J", 4 },
	{ "current", &class_arc_audio_Music, offsetof(mindustry_audio_SoundControl, F_current), "Larc/audio/Music;", 4 },
	{ "fade", &class_float, offsetof(mindustry_audio_SoundControl, F_fade), "F", 4 },
	{ "silenced", &class_boolean, offsetof(mindustry_audio_SoundControl, F_silenced), "Z", 4 },
	{ "keepSilent", &class_boolean, offsetof(mindustry_audio_SoundControl, F_keepSilent), "Z", 4 },
	{ "ambientThread", &class_mindustry_audio_SoundControl$AudioThread, offsetof(mindustry_audio_SoundControl, F_ambientThread), "Lmindustry/audio/SoundControl$AudioThread;", 4 },
	{ "launchingAmbientThread", &class_boolean, offsetof(mindustry_audio_SoundControl, F_launchingAmbientThread), "Z", 4 },
	{ "localData", &class_arc_struct_Seq, offsetof(mindustry_audio_SoundControl, F_localData), "Larc/struct/Seq;", 4 },
	{ "wasPlaying", &class_boolean, offsetof(mindustry_audio_SoundControl, F_wasPlaying), "Z", 4 },
	{ "filter", &class_arc_audio_AudioFilter, offsetof(mindustry_audio_SoundControl, F_filter), "Larc/audio/AudioFilter;", 4 },
	{ "sounds", &class_arc_struct_ObjectMap, offsetof(mindustry_audio_SoundControl, F_sounds), "Larc/struct/ObjectMap;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundControl, 0, "()V", 1 },
	{ "setupFilters", (intptr_t) M_mindustry_audio_SoundControl_setupFilters, VTABLE_mindustry_audio_SoundControl_setupFilters, "()V", 4 },
	{ "reload", (intptr_t) M_mindustry_audio_SoundControl_reload, VTABLE_mindustry_audio_SoundControl_reload, "()V", 4 },
	{ "stop", (intptr_t) M_mindustry_audio_SoundControl_stop, VTABLE_mindustry_audio_SoundControl_stop, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_audio_SoundControl_update, VTABLE_mindustry_audio_SoundControl_update, "()V", 1 },
	{ "keepSilent", (intptr_t) M_mindustry_audio_SoundControl_keepSilent, VTABLE_mindustry_audio_SoundControl_keepSilent, "()V", 1 },
	{ "playMusic", (intptr_t) M_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean, VTABLE_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean, "(Larc/audio/Music;Z)V", 1 },
	{ "isPlaying", (intptr_t) M_mindustry_audio_SoundControl_isPlaying_R_boolean, VTABLE_mindustry_audio_SoundControl_isPlaying_R_boolean, "()Z", 1 },
	{ "getCurrent", (intptr_t) M_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music, VTABLE_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music, "()Larc/audio/Music;", 1 },
	{ "playRandom", (intptr_t) M_mindustry_audio_SoundControl_playRandom, VTABLE_mindustry_audio_SoundControl_playRandom, "()V", 1 },
	{ "alwaysPlayMusic", (intptr_t) M_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean, VTABLE_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean, "()Z", 4 },
	{ "getBossMusic", (intptr_t) M_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq, VTABLE_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq, "()Larc/struct/Seq;", 4 },
	{ "getAmbientMusic", (intptr_t) M_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq, VTABLE_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq, "()Larc/struct/Seq;", 4 },
	{ "getDarkMusic", (intptr_t) M_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq, VTABLE_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq, "()Larc/struct/Seq;", 4 },
	{ "isDark", (intptr_t) M_mindustry_audio_SoundControl_isDark_R_boolean, VTABLE_mindustry_audio_SoundControl_isDark_R_boolean, "()Z", 4 },
	{ "volumeMultiplier", (intptr_t) M_mindustry_audio_SoundControl_volumeMultiplier_R_float, VTABLE_mindustry_audio_SoundControl_volumeMultiplier_R_float, "()F", 4 },
	{ "play", (intptr_t) M_mindustry_audio_SoundControl_play_arc_audio_Music, VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music, "(Larc/audio/Music;)V", 4 },
	{ "playOnce", (intptr_t) M_mindustry_audio_SoundControl_playOnce_arc_audio_Music, VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music, "(Larc/audio/Music;)V", 4 },
	{ "shouldPlay", (intptr_t) M_mindustry_audio_SoundControl_shouldPlay_R_boolean, VTABLE_mindustry_audio_SoundControl_shouldPlay_R_boolean, "()Z", 4 },
	{ "silence", (intptr_t) M_mindustry_audio_SoundControl_silence, VTABLE_mindustry_audio_SoundControl_silence, "()V", 4 },
	{ "findMusic", (intptr_t) SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music, 0, "(Ljava/lang/String;)Larc/audio/Music;", 9 },
	{ "loop", (intptr_t) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_float, VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_float, "(Larc/audio/Sound;F)V", 1 },
	{ "loop", (intptr_t) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float, VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float, "(Larc/audio/Sound;Larc/math/geom/Position;F)V", 1 },
	{ "loop", (intptr_t) M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float, VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float, "(Larc/audio/Sound;Larc/math/geom/Position;FF)V", 1 },
	{ "loop", (intptr_t) SM_mindustry_audio_SoundControl_loop_mindustry_audio_SoundControl$SoundData_arc_audio_Sound_arc_math_geom_Position_float_float, 0, "(Lmindustry/audio/SoundControl$SoundData;Larc/audio/Sound;Larc/math/geom/Position;FF)V", 8 },
	{ "addAmbientSource", (intptr_t) M_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource, VTABLE_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource, "(Lmindustry/audio/AmbientSource;)V", 1 },
	{ "updateLoops", (intptr_t) M_mindustry_audio_SoundControl_updateLoops, VTABLE_mindustry_audio_SoundControl_updateLoops, "()V", 4 },
	{ "lambda$updateLoops$0", (intptr_t) SM_mindustry_audio_SoundControl_lambda$updateLoops$0_float_arc_audio_Sound_mindustry_audio_SoundControl$SoundData, 0, "(FLarc/audio/Sound;Lmindustry/audio/SoundControl$SoundData;)V", 4106 },
	{ "lambda$addAmbientSource$0", (intptr_t) M_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread, VTABLE_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread, "(Lmindustry/audio/SoundControl$AudioThread;)V", 4098 },
	{ "lambda$getDarkMusic$0", (intptr_t) SM_mindustry_audio_SoundControl_lambda$getDarkMusic$0_arc_audio_Music_R_boolean, 0, "(Larc/audio/Music;)Z", 4106 },
	{ "lambda$getAmbientMusic$0", (intptr_t) SM_mindustry_audio_SoundControl_lambda$getAmbientMusic$0_arc_audio_Music_R_boolean, 0, "(Larc/audio/Music;)Z", 4106 },
	{ "lambda$getBossMusic$0", (intptr_t) SM_mindustry_audio_SoundControl_lambda$getBossMusic$0_arc_audio_Music_R_boolean, 0, "(Larc/audio/Music;)Z", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent, VTABLE_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent, "(Lmindustry/game/EventType$WaveEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_audio_SoundControl_lambda$new$2, VTABLE_mindustry_audio_SoundControl_lambda$new$2, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_audio_SoundControl_lambda$new$3_mindustry_game_SpawnGroup_R_boolean, 0, "(Lmindustry/game/SpawnGroup;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
};

Class class_mindustry_audio_SoundControl{
		.nativeName = (intptr_t) "mindustry/audio/SoundControl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_audio_SoundControl),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundControl,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundControl,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundControl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundControl = registerClass(&class_mindustry_audio_SoundControl);

}
