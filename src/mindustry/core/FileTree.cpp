#include "mindustry/core/FileTree.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/func/Prov.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/core/FileTree_invoke_arc_func_Prov_2.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "mindustry/core/FileTree_invoke_arc_func_Prov_3.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/core/FileTree_invoke_arc_func_Cons_2.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/core/FileTree_invoke_arc_func_Cons_3.h"
#include "arc/assets/loaders/MusicLoader_MusicParameter.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/SoundLoader_SoundParameter.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "arc/audio/Music.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_core_FileTree(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_FileTree *) object;
	if (self->F_files)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_files)->clazz)->markFunction)((jobject) self->F_files, mark, depth + 1);
	if (self->F_loadedSounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadedSounds)->clazz)->markFunction)((jobject) self->F_loadedSounds, mark, depth + 1);
	if (self->F_loadedMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadedMusic)->clazz)->markFunction)((jobject) self->F_loadedMusic, mark, depth + 1);
}

void clinit_mindustry_core_FileTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_FileTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_FileTree(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_FileTree *) NULL_CHECK(sp[0].o))->F_files = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_FileTree *) NULL_CHECK(sp[0].o))->F_loadedSounds = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_FileTree *) NULL_CHECK(sp[0].o))->F_loadedMusic = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:addFile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[1].o), (92), (47));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"/\u0001"_j.string, 1, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"/\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(35);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_5;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_arc_files_Fi_get_java_lang_String_R_arc_files_Fi(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(38);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_FileTree_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_files;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:resolve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:loadSound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_none;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_loadedSounds;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_FileTree_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_core_FileTree_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_core_FileTree_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:loadMusic", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	{
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_core_FileTree *) NULL_CHECK((frame[0].o)))->F_loadedMusic;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_FileTree_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_core_FileTree_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_core_FileTree_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_audio_Music, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:getAudioPath", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_FileTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.ogg"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mp3"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.ogg"_j.string, 1, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mp3"_j.string, 1, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(99);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Audio file not found: @ (.mp3 or .ogg)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[0].o);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_FileTree_lambda$loadMusic$0_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:lambda$loadMusic$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_FileTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"music/\u0001"_j.string, 1, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(87);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) &class_arc_audio_Music);
	clinit_arc_assets_loaders_MusicLoader$MusicParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_assets_loaders_MusicLoader$MusicParameter);
	init_arc_assets_loaders_MusicLoader$MusicParameter_arc_audio_Music(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_FileTree_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_core_FileTree_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_core_FileTree_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_errored = (jref) sp[1].o;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_FileTree_lambda$loadSound$0_java_lang_String_R_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/FileTree:lambda$loadSound$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_FileTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"sounds/\u0001"_j.string, 1, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(65);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(66);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_assets_loaders_SoundLoader$SoundParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_assets_loaders_SoundLoader$SoundParameter);
	init_arc_assets_loaders_SoundLoader$SoundParameter_arc_audio_Sound(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_FileTree_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_core_FileTree_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_core_FileTree_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_errored = (jref) sp[1].o;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_FileTree;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getAudioPath
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_FileTree[] {
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
	(void *) M_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi,
	(void *) M_mindustry_core_FileTree_clear,
	(void *) M_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound,
	(void *) M_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music,
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
	{ "resolve", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "addFile", "(Ljava/lang/String;Larc/files/Fi;)V" },
	{ "get", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "get", "(Ljava/lang/String;Z)Larc/files/Fi;" },
	{ "clear", "()V" },
	{ "loadSound", "(Ljava/lang/String;)Larc/audio/Sound;" },
	{ "loadMusic", "(Ljava/lang/String;)Larc/audio/Music;" },
};

static jclass interfaces[] { &class_arc_assets_loaders_FileHandleResolver, };

static FieldMetadata fields[] {
	{ "files", &class_arc_struct_ObjectMap, offsetof(mindustry_core_FileTree, F_files), "Larc/struct/ObjectMap;", 2 },
	{ "loadedSounds", &class_arc_struct_ObjectMap, offsetof(mindustry_core_FileTree, F_loadedSounds), "Larc/struct/ObjectMap;", 2 },
	{ "loadedMusic", &class_arc_struct_ObjectMap, offsetof(mindustry_core_FileTree, F_loadedMusic), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_FileTree, 0, "()V", 1 },
	{ "addFile", (intptr_t) M_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi, VTABLE_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 1 },
	{ "get", (intptr_t) M_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "get", (intptr_t) M_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi, VTABLE_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi, "(Ljava/lang/String;Z)Larc/files/Fi;", 1 },
	{ "clear", (intptr_t) M_mindustry_core_FileTree_clear, VTABLE_mindustry_core_FileTree_clear, "()V", 1 },
	{ "resolve", (intptr_t) M_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "loadSound", (intptr_t) M_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound, VTABLE_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound, "(Ljava/lang/String;)Larc/audio/Sound;", 1 },
	{ "loadMusic", (intptr_t) M_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music, VTABLE_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music, "(Ljava/lang/String;)Larc/audio/Music;", 1 },
	{ "getAudioPath", (intptr_t) SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "lambda$loadMusic$0", (intptr_t) SM_mindustry_core_FileTree_lambda$loadMusic$0_java_lang_String_R_arc_audio_Music, 0, "(Ljava/lang/String;)Larc/audio/Music;", 4106 },
	{ "lambda$loadSound$0", (intptr_t) SM_mindustry_core_FileTree_lambda$loadSound$0_java_lang_String_R_arc_audio_Sound, 0, "(Ljava/lang/String;)Larc/audio/Sound;", 4106 },
};

Class class_mindustry_core_FileTree{
		.nativeName = (intptr_t) "mindustry/core/FileTree",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_FileTree),
		.classVtable = (intptr_t) vtable_mindustry_core_FileTree,
		.staticInitializer = (intptr_t) clinit_mindustry_core_FileTree,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_FileTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_FileTree = registerClass(&class_mindustry_core_FileTree);

}
