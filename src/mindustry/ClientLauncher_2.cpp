#include "mindustry/ClientLauncher_2.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/util/Log.h"
#include "mindustry/ClientLauncher_2.h"
#include "mindustry/ClientLauncher.h"
#include "java/util/concurrent/Future.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/audio/Music.h"
#include "arc/assets/loaders/MusicLoader.h"
#include "mindustry/Vars.h"
#include "mindustry/ClientLauncher_2_invoke_java_lang_Runnable_2.h"
#include "java/lang/Throwable.h"
#include "arc/assets/loaders/MusicLoader_MusicParameter.h"
#include "mindustry/ClientLauncher_2_invoke_java_lang_Runnable_3.h"

extern "C" {


void mark_mindustry_ClientLauncher$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_MusicLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ClientLauncher$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ClientLauncher$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_MusicLoader(ctx);
}

void init_mindustry_ClientLauncher$2_mindustry_ClientLauncher_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	((mindustry_ClientLauncher$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_assets_loaders_MusicLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(120);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_MusicLoader$MusicParameter *) NULL_CHECK((frame[4].o)))->F_music;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher$2_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ClientLauncher$2_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ClientLauncher$2_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_assets_loaders_MusicLoader$MusicParameter *) NULL_CHECK((frame[4].o)))->F_music;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(131);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher$2_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ClientLauncher$2_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ClientLauncher$2_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_MusicLoader$MusicParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(114);
	((func_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_MusicLoader$MusicParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher$2_lambda$loadSync$1_arc_audio_Music_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:lambda$loadSync$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher$2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(135);
	((func_arc_audio_Music_load_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Music_load_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(138);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(136);
	frame[2].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Error loading music: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher$2_lambda$loadSync$0_arc_assets_loaders_MusicLoader$MusicParameter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher$2:lambda$loadSync$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher$2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_assets_loaders_MusicLoader$MusicParameter *) NULL_CHECK((frame[0].o)))->F_music;
	((func_arc_audio_Music_load_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Music_load_arc_files_Fi])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(126);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(124);
	frame[2].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Error loading music: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ClientLauncher$2[] {
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
	(void *) M_arc_assets_loaders_MusicLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_MusicLoader_getLoadedMusic_R_arc_audio_Music,
	(void *) M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter,
	(void *) M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music,
	(void *) M_arc_assets_loaders_MusicLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_struct_Seq,
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
	{ "getLoadedMusic", "()Larc/audio/Music;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/MusicLoader$MusicParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/MusicLoader$MusicParameter;)Larc/audio/Music;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/MusicLoader$MusicParameter;)Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_ClientLauncher, offsetof(mindustry_ClientLauncher$2, F_this$0), "Lmindustry/ClientLauncher;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ClientLauncher$2_mindustry_ClientLauncher_arc_assets_loaders_FileHandleResolver, 0, "(Lmindustry/ClientLauncher;Larc/assets/loaders/FileHandleResolver;)V", 0 },
	{ "loadAsync", (intptr_t) M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter, VTABLE_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/MusicLoader$MusicParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music, VTABLE_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/MusicLoader$MusicParameter;)Larc/audio/Music;", 1 },
	{ "loadSync", (intptr_t) M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "lambda$loadSync$1", (intptr_t) SM_mindustry_ClientLauncher$2_lambda$loadSync$1_arc_audio_Music_arc_files_Fi, 0, "(Larc/audio/Music;Larc/files/Fi;)V", 4106 },
	{ "lambda$loadSync$0", (intptr_t) SM_mindustry_ClientLauncher$2_lambda$loadSync$0_arc_assets_loaders_MusicLoader$MusicParameter_arc_files_Fi, 0, "(Larc/assets/loaders/MusicLoader$MusicParameter;Larc/files/Fi;)V", 4106 },
};

Class class_mindustry_ClientLauncher$2{
		.nativeName = (intptr_t) "mindustry/ClientLauncher$2",
		.parentClass = (intptr_t) &class_arc_assets_loaders_MusicLoader,
		.size = sizeof(mindustry_ClientLauncher$2),
		.classVtable = (intptr_t) vtable_mindustry_ClientLauncher$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ClientLauncher$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ClientLauncher$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ClientLauncher$2 = registerClass(&class_mindustry_ClientLauncher$2);

}

