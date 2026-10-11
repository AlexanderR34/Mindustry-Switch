#include "mindustry/mod/DataAudioLoader.h"
#include "java/lang/Integer.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/mod/data/MusicAsset.h"
#include "mindustry/mod/data/SoundAsset.h"
#include "arc/audio/Audio.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/logic/LVar.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/GlobalVars.h"
#include "arc/audio/AudioSource.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/mod/DataAudioLoader.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "arc/audio/Music.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {

jint SF_mindustry_mod_DataAudioLoader_soundIdOffset;
jobject SF_mindustry_mod_DataAudioLoader_prefix;

void mark_mindustry_mod_DataAudioLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_DataAudioLoader_prefix)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataAudioLoader_prefix)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataAudioLoader_prefix, mark, depth + 1);
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
	auto self = (mindustry_mod_DataAudioLoader *) object;
	if (self->F_loadedSounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadedSounds)->clazz)->markFunction)((jobject) self->F_loadedSounds, mark, depth + 1);
	if (self->F_loadedMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadedMusic)->clazz)->markFunction)((jobject) self->F_loadedMusic, mark, depth + 1);
	if (self->F_registered)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_registered)->clazz)->markFunction)((jobject) self->F_registered, mark, depth + 1);
	if (self->F_fileToName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileToName)->clazz)->markFunction)((jobject) self->F_fileToName, mark, depth + 1);
}

void clinit_mindustry_mod_DataAudioLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_mod_DataAudioLoader_soundIdOffset = jint(100000);
	SF_mindustry_mod_DataAudioLoader_prefix = ((jobject) createStringLiteral(ctx, u8"dp-"_j));
}

void init_mindustry_mod_DataAudioLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAudioLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataAudioLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataAudioLoader *) NULL_CHECK(sp[0].o))->F_loadedSounds = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataAudioLoader *) NULL_CHECK(sp[0].o))->F_loadedMusic = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_DataAudioLoader *) NULL_CHECK(sp[0].o))->F_registered = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_DataAudioLoader *) NULL_CHECK(sp[0].o))->F_fileToName = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAudioLoader:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(23);
	frame[3].i = (jint(100001));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_mod_data_SoundAsset, sp[0].o));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (32), (95));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Duplicate audio file: \u0001"_j.string, 1, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_mod_data_SoundAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_SoundAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(34);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_10;
	}
	INST_ALOAD(7);
	if ((--sp)->o != nullptr) goto label_11;
label_10:;
	{
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[7].o));
	if ((longCompare(temp0, (jlong(100000ll)))) <= 0) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_arc_audio_Sound_createStream_arc_files_Fi_R_arc_audio_Sound(ctx, (frame[7].o));
	sp += 1;
	goto label_12;
	}
label_13:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_arc_audio_Sound_createLazy_arc_files_Fi_R_arc_audio_Sound(ctx, sp[0].o);
	sp++;
label_12:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedSounds;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(37);
	sp[0].o = frame[8].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	SM_mindustry_gen_Sounds_registerSound_arc_audio_Sound_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(39);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Audio_initialized_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_initialized_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[8].o)))->F_file;
	if (sp[0].o != nullptr) goto label_17;
	}
	goto label_2;
label_17:;
	{
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@sfx-\u0001"_j.string, 1, (frame[6].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((frame[3].i) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(43);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	((func_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (((jobject) &class_arc_audio_Sound)), (frame[8].o));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_fileToName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[7].o), (frame[6].o));
	LINE_NUMBER(46);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_mod_data_MusicAsset, sp[0].o));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (32), (95));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Duplicate audio file: \u0001"_j.string, 1, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	goto label_22;
	}
label_26:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_mindustry_mod_data_MusicAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_MusicAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(55);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_30;
	}
	INST_ALOAD(7);
	if ((--sp)->o != nullptr) goto label_31;
label_30:;
	{
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_arc_audio_Music_create_arc_files_Fi_R_arc_audio_Music(ctx, sp[0].o);
	sp++;
label_32:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedMusic;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(58);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_22;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Audio_initialized_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_initialized_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[8].o)))->F_file;
	if (sp[0].o != nullptr) goto label_35;
	}
	goto label_22;
label_35:;
	{
	LINE_NUMBER(60);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	((func_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (((jobject) &class_arc_audio_Music)), (frame[8].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_fileToName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[7].o), (frame[6].o));
	LINE_NUMBER(63);
	goto label_22;
	}
label_23:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAudioLoader:getName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_fileToName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataAudioLoader_unload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAudioLoader:unload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedSounds;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	LINE_NUMBER(73);
	((func_arc_audio_Sound_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_audio_Sound_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(74);
	SM_mindustry_gen_Sounds_unregisterSound_arc_audio_Sound(ctx, (frame[2].o));
	LINE_NUMBER(75);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedMusic;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	LINE_NUMBER(78);
	((func_arc_audio_Music_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_audio_Music_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(79);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(81);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_14;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@sfx-\u0001"_j.string, 1, (frame[2].o));
	((func_mindustry_logic_GlobalVars_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(85);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(87);
	goto label_18;
label_2:;
	LINE_NUMBER(86);
	INST_ASTORE(3);
label_18:;
	LINE_NUMBER(88);
	goto label_16;
label_14:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedSounds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_loadedMusic;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_registered;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_mod_DataAudioLoader *) NULL_CHECK((frame[0].o)))->F_fileToName;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataAudioLoader;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_DataAudioLoader[] {
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
	(void *) M_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq,
	(void *) M_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String,
	(void *) M_mindustry_mod_DataAudioLoader_unload,
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
	{ "load", "(Larc/struct/Seq;Larc/struct/Seq;)V" },
	{ "getName", "(Larc/files/Fi;)Ljava/lang/String;" },
	{ "unload", "()V" },
};

static FieldMetadata fields[] {
	{ "soundIdOffset", &class_int, (intptr_t) &SF_mindustry_mod_DataAudioLoader_soundIdOffset, "I", 26 },
	{ "prefix", &class_java_lang_String, (intptr_t) &SF_mindustry_mod_DataAudioLoader_prefix, "Ljava/lang/String;", 25 },
	{ "loadedSounds", &class_arc_struct_Seq, offsetof(mindustry_mod_DataAudioLoader, F_loadedSounds), "Larc/struct/Seq;", 2 },
	{ "loadedMusic", &class_arc_struct_Seq, offsetof(mindustry_mod_DataAudioLoader, F_loadedMusic), "Larc/struct/Seq;", 2 },
	{ "registered", &class_arc_struct_ObjectSet, offsetof(mindustry_mod_DataAudioLoader, F_registered), "Larc/struct/ObjectSet;", 2 },
	{ "fileToName", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataAudioLoader, F_fileToName), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataAudioLoader, 0, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq, VTABLE_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq, "(Larc/struct/Seq;Larc/struct/Seq;)V", 1 },
	{ "getName", (intptr_t) M_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String, VTABLE_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String, "(Larc/files/Fi;)Ljava/lang/String;", 1 },
	{ "unload", (intptr_t) M_mindustry_mod_DataAudioLoader_unload, VTABLE_mindustry_mod_DataAudioLoader_unload, "()V", 1 },
};

Class class_mindustry_mod_DataAudioLoader{
		.nativeName = (intptr_t) "mindustry/mod/DataAudioLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataAudioLoader),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataAudioLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataAudioLoader,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataAudioLoader,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataAudioLoader = registerClass(&class_mindustry_mod_DataAudioLoader);

}
