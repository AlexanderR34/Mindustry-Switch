#include "arc/assets/loaders/SoundLoader.h"
#include "arc/assets/loaders/SoundLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/Core.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/SoundLoader_SoundParameter.h"
#include "arc/audio/Audio.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/audio/Sound.h"
#include "arc/struct/Seq.h"

extern "C" {


void mark_arc_assets_loaders_SoundLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_AsynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_loaders_SoundLoader *) object;
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void clinit_arc_assets_loaders_SoundLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_SoundLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_SoundLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_SoundLoader_getLoadedSound_R_arc_audio_Sound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:getLoadedSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_assets_loaders_SoundLoader *) NULL_CHECK((frame[0].o)))->F_sound;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:loadAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(33);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_SoundLoader$SoundParameter *) NULL_CHECK((frame[4].o)))->F_sound;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_loaders_SoundLoader$SoundParameter *) NULL_CHECK((frame[4].o)))->F_sound;
	((arc_assets_loaders_SoundLoader *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	((func_arc_audio_Sound_load_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_Sound_load_arc_files_Fi])(ctx, sp[1].o, (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	sp[1].o = (jobject)((func_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound])(ctx, sp[1].o, (frame[3].o));
	((arc_assets_loaders_SoundLoader *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:loadSync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_assets_loaders_SoundLoader *) NULL_CHECK((frame[0].o)))->F_sound;
	frame[5].o = sp[0].o;
	LINE_NUMBER(43);
	((arc_assets_loaders_SoundLoader *) NULL_CHECK((frame[0].o)))->F_sound = (jref) (jobject(nullptr));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((func_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_SoundLoader$SoundParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(14);
	((func_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_SoundLoader$SoundParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/SoundLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((func_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_SoundLoader$SoundParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_SoundLoader[] {
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
	(void *) M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_SoundLoader_getLoadedSound_R_arc_audio_Sound,
	(void *) M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter,
	(void *) M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound,
	(void *) M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq,
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
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "getLoadedSound", "()Larc/audio/Sound;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)Larc/audio/Sound;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_SoundLoader$SoundParameter,
};

static FieldMetadata fields[] {
	{ "sound", &class_arc_audio_Sound, offsetof(arc_assets_loaders_SoundLoader, F_sound), "Larc/audio/Sound;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_SoundLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "getLoadedSound", (intptr_t) M_arc_assets_loaders_SoundLoader_getLoadedSound_R_arc_audio_Sound, VTABLE_arc_assets_loaders_SoundLoader_getLoadedSound_R_arc_audio_Sound, "()Larc/audio/Sound;", 4 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter, VTABLE_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound, VTABLE_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_audio_Sound, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)Larc/audio/Sound;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_SoundLoader$SoundParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/SoundLoader$SoundParameter;)Larc/struct/Seq;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_SoundLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_SoundLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_SoundLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_SoundLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/SoundLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_SoundLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_SoundLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_SoundLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_SoundLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_SoundLoader = registerClass(&class_arc_assets_loaders_SoundLoader);

}
