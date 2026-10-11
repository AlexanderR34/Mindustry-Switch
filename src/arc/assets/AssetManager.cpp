#include "arc/assets/AssetManager.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/assets/AssetLoaderParameters_LoadedCallback.h"
#include "arc/assets/AssetManager_RefCountedContainer.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/Pixmap.h"
#include "arc/assets/AssetLoadingTask.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/assets/loaders/TextureAtlasLoader.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "arc/assets/loaders/SoundLoader.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "arc/Files.h"
#include "arc/util/Time.h"
#include "arc/assets/AssetManager_invoke_arc_assets_loaders_FileHandleResolver_0.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/AssetManager_invoke_arc_assets_loaders_FileHandleResolver_1.h"
#include "arc/assets/loaders/FontLoader.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/assets/loaders/MusicLoader.h"
#include "arc/assets/loaders/CubemapLoader.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/func/Cons.h"
#include "arc/assets/loaders/I18NBundleLoader.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/ShaderProgramLoader.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/assets/loaders/PixmapLoader.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/assets/Loadable.h"
#include "arc/assets/AssetManager_2.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "arc/assets/AssetManager_1.h"
#include "arc/util/Threads.h"
#include "arc/audio/Sound.h"
#include "arc/assets/AssetErrorListener.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "arc/assets/AssetManager_invoke_java_lang_Runnable_0.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_assets_AssetManager(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_AssetManager *) object;
	if (self->F_assets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assets)->clazz)->markFunction)((jobject) self->F_assets, mark, depth + 1);
	if (self->F_assetTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetTypes)->clazz)->markFunction)((jobject) self->F_assetTypes, mark, depth + 1);
	if (self->F_assetDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetDependencies)->clazz)->markFunction)((jobject) self->F_assetDependencies, mark, depth + 1);
	if (self->F_injected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_injected)->clazz)->markFunction)((jobject) self->F_injected, mark, depth + 1);
	if (self->F_loaders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loaders)->clazz)->markFunction)((jobject) self->F_loaders, mark, depth + 1);
	if (self->F_loadQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadQueue)->clazz)->markFunction)((jobject) self->F_loadQueue, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_tasks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tasks)->clazz)->markFunction)((jobject) self->F_tasks, mark, depth + 1);
	if (self->F_resolver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resolver)->clazz)->markFunction)((jobject) self->F_resolver, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void clinit_arc_assets_AssetManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_AssetManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_0(ctx);
		auto proxy = (arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_0 *) gcAlloc(ctx, &class_arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_0);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assets = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assetTypes = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_assetDependencies = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_injected = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaders = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loadQueue = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_tasks = (jref) sp[1].o;
	LINE_NUMBER(33);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(34);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(35);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad = (jint(0));
	LINE_NUMBER(36);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	LINE_NUMBER(54);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_resolver = (jref) (frame[1].o);
	LINE_NUMBER(55);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_assets_loaders_FontLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_FontLoader);
	init_arc_assets_loaders_FontLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_audio_Music);
	clinit_arc_assets_loaders_MusicLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_MusicLoader);
	init_arc_assets_loaders_MusicLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_Pixmap);
	clinit_arc_assets_loaders_PixmapLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_PixmapLoader);
	init_arc_assets_loaders_PixmapLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_assets_loaders_SoundLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_SoundLoader);
	init_arc_assets_loaders_SoundLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_g2d_TextureAtlas);
	clinit_arc_assets_loaders_TextureAtlasLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_TextureAtlasLoader);
	init_arc_assets_loaders_TextureAtlasLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_Texture);
	clinit_arc_assets_loaders_TextureLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_TextureLoader);
	init_arc_assets_loaders_TextureLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_util_I18NBundle);
	clinit_arc_assets_loaders_I18NBundleLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_I18NBundleLoader);
	init_arc_assets_loaders_I18NBundleLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_gl_Shader);
	clinit_arc_assets_loaders_ShaderProgramLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_ShaderProgramLoader);
	init_arc_assets_loaders_ShaderProgramLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_Cubemap);
	clinit_arc_assets_loaders_CubemapLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_loaders_CubemapLoader);
	init_arc_assets_loaders_CubemapLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_14:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Assets"_j))), (jint(1)));
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getFileHandleResolver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_resolver;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(83);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(85);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(87);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	frame[5].o = sp[0].o;
	LINE_NUMBER(89);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx, self);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(100);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(102);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	frame[5].o = sp[0].o;
	LINE_NUMBER(104);
	if ((frame[5].o) != nullptr) goto label_6;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx, self);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getOrNull", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(115);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(117);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(127);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	sp[1].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[1].o))))->F_object;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getAllEntries", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(141);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(143);
	clinit_arc_struct_ObjectMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Entry);
	init_arc_struct_ObjectMap$Entry(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(145);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	sp[1].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[1].o))))->F_object;
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(147);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_get_arc_assets_AssetDescriptor_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_contains_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(164);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(164);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	frame[3].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(177);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_type;
	if (sp[0].o != (frame[2].o)) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[4].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(177);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_unload_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:unload", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(194);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_cancel = (jint(1));
	LINE_NUMBER(195);
	popStackFrame(ctx, self);
	return;
	}
label_1:;
	{
	LINE_NUMBER(200);
	frame[2].i = (jint(-1));
	LINE_NUMBER(201);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(203);
	frame[2].i = (frame[3].i);
	LINE_NUMBER(204);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(201);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(207);
	if ((frame[2].i) == (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad = (((jint)((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad) - (jint(1)));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(210);
	popStackFrame(ctx, self);
	return;
	}
label_13:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(215);
	if ((frame[3].o) != nullptr) goto label_18;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(219);
	if ((frame[4].o) != nullptr) goto label_20;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[4].o;
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	LINE_NUMBER(223);
	if (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_count) > 0) goto label_22;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	if ((isInstance(ctx, sp[0].o, &class_arc_util_Disposable)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, (checkCast(ctx, &class_arc_util_Disposable, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_util_Disposable, sp[0].o)));
	}
label_24:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o));
	}
label_22:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(236);
	if ((frame[5].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 == 0) goto label_32;
	}
	{
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, (frame[0].o), (frame[7].o));
	}
label_32:;
	LINE_NUMBER(239);
	goto label_30;
label_28:;
	{
	LINE_NUMBER(242);
	if (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_count) > 0) goto label_33;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_33:;
	LINE_NUMBER(245);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_containsAsset_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:containsAsset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(253);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].o));
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_object;
	frame[5].o = sp[0].o;
	LINE_NUMBER(256);
	if ((frame[5].o) == (frame[1].o)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_8:;
	LINE_NUMBER(257);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(258);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getAssetFileName", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_object;
	frame[7].o = sp[0].o;
	LINE_NUMBER(270);
	if ((frame[7].o) == (frame[1].o)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	INST_ALOAD(6);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_10:;
	LINE_NUMBER(271);
	goto label_5;
label_6:;
	LINE_NUMBER(272);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_isLoaded_arc_assets_AssetDescriptor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:isLoaded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:isLoaded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:isLoaded", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(299);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(301);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[4].o)))->F_object;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getLoader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(323);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[3].o)))->F_size) >= (jint(1))) goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(324);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_assets_loaders_AssetLoader, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(325);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(326);
	frame[5].i = (jint(-1));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 <= (frame[5].i)) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	frame[4].o = (checkCast(ctx, &class_arc_assets_loaders_AssetLoader, sp[0].o));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	frame[5].i = temp0;
	}
label_10:;
	LINE_NUMBER(332);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:loadRun", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_arc_assets_AssetManager_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_assets_AssetManager_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_assets_AssetManager_invoke_java_lang_Runnable_0);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:loadRun", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[2].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_arc_assets_AssetManager$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_AssetManager$1);
	init_arc_assets_AssetManager$1_arc_assets_AssetManager_java_lang_Runnable_java_lang_Runnable(ctx, sp[2].o, (frame[0].o), (frame[3].o), (frame[4].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(370);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class already registered or loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	clinit_arc_assets_AssetManager$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_AssetManager$2);
	sp[3].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_files;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_1(ctx);
		auto proxy = (arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_1 *) gcAlloc(ctx, &class_arc_assets_AssetManager_invoke_arc_assets_loaders_FileHandleResolver_1);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	init_arc_assets_AssetManager$2_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_arc_assets_Loadable(ctx, sp[2].o, sp[3].o, sp[4].o, (frame[1].o));
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_assets_Loadable_getName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_assets_Loadable, INDEX_arc_assets_Loadable_getName_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(410);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No loader for type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	{
	LINE_NUMBER(414);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(415);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad = (jint(0));
	LINE_NUMBER(416);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(422);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in preload queue, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(426);
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(422);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(430);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	frame[6].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_17;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already in task list, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(434);
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[6].o)))->F_type;
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(430);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(439);
	if ((frame[5].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[2].o));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(440);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' already loaded, but has different type (expected: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(441);
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", found: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad = (((jint)((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_toLoad) + (jint(1)));
	LINE_NUMBER(444);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(446);
	popStackFrame(ctx, self);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_7:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_8;
	}
	{
	LINE_NUMBER(466);
	M_arc_assets_AssetManager_nextTask(ctx, (frame[0].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)M_arc_assets_AssetManager_updateTask_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_5;
label_10:;
	INST_ICONST(0);
label_5:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(472);
	frame[1].o = sp[0].o;
	LINE_NUMBER(473);
	M_arc_assets_AssetManager_handleTaskError_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(474);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getCurrentLoading", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o))))->F_assetDesc;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(484);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_update_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(494);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[2].l = (temp0 + (jlong((frame[1].i))));
	}
label_1:;
	{
	LINE_NUMBER(496);
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(497);
	if ((frame[4].i) != 0) goto label_3;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	if ((longCompare(temp0, (frame[2].l))) <= 0) goto label_4;
	}
label_3:;
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(498);
	SM_java_lang_Thread_yield(ctx);
	LINE_NUMBER(499);
	goto label_1;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_isFinished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:isFinished", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_finishLoading(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:finishLoading", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(509);
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(510);
	SM_java_lang_Thread_yield(ctx);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(511);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:finishLoadingAsset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	((func_arc_assets_AssetManager_finishLoadingAsset_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_finishLoadingAsset_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_finishLoadingAsset_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:finishLoadingAsset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(526);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(528);
	SM_java_lang_Thread_yield(ctx);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(530);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:injectDependencies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_injected;
	frame[3].o = sp[0].o;
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(535);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(537);
	M_arc_assets_AssetManager_injectDependency_java_lang_String_arc_assets_AssetDescriptor(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(538);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(539);
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, (frame[3].o));
	LINE_NUMBER(540);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_injectDependency_java_lang_String_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:injectDependency", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(545);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(546);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(547);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(549);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(555);
	sp[0].o = frame[5].o;
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(557);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(560);
	M_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor(ctx, (frame[0].o), (frame[2].o));
	}
label_12:;
	LINE_NUMBER(562);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_nextTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:nextTask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[1].o = (checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(576);
	sp[0].o = frame[3].o;
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(578);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	sp[0].o = (jobject)((arc_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_params;
	sp[0].o = (jobject)((arc_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	((func_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class) resolveInterfaceMethod(ctx, &class_arc_assets_AssetLoaderParameters$LoadedCallback, INDEX_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_8:;
	{
	LINE_NUMBER(581);
	sp[0].o = frame[0].o;
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded = (((jint)((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded) + (jint(1)));
	LINE_NUMBER(582);
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(584);
	M_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor(ctx, (frame[0].o), (frame[1].o));
	}
label_11:;
	LINE_NUMBER(586);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:addTask", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_fileName;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(593);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(594);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No loader for type: "_j))));
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	clinit_arc_assets_AssetLoadingTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetLoadingTask);
	sp[2].o = frame[0].o;
	sp[3].o = frame[1].o;
	sp[4].o = frame[2].o;
	sp[5].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_executor;
	init_arc_assets_AssetLoadingTask_arc_assets_AssetManager_arc_assets_AssetDescriptor_arc_assets_loaders_AssetLoader_java_util_concurrent_ExecutorService(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_peakTasks = (((jint)((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_peakTasks) + (jint(1)));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:addAsset", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(605);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(606);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(607);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(608);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[4].o));
	}
label_3:;
	{
	LINE_NUMBER(610);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	clinit_arc_assets_AssetManager$RefCountedContainer(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_assets_AssetManager$RefCountedContainer);
	init_arc_assets_AssetManager$RefCountedContainer_java_lang_Object(ctx, sp[2].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetManager_updateTask_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:updateTask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(620);
	frame[2].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(622);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel) != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_assets_AssetLoadingTask_update_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_assets_AssetLoadingTask_update_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	INST_ISTORE(2);
	popExceptionFrame(frameRef);
	LINE_NUMBER(626);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(623);
	frame[3].o = sp[0].o;
	LINE_NUMBER(624);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel = (jint(1));
	LINE_NUMBER(625);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	((func_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(629);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(632);
	sp[0].o = frame[0].o;
	((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded = (((jint)((arc_assets_AssetManager *) NULL_CHECK(sp[0].o))->F_loaded) + (jint(1)));
	LINE_NUMBER(633);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(637);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_cancel) == 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(639);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_type;
	sp[3].o = (jobject)((func_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object])(ctx, (frame[1].o));
	((func_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	sp[0].o = (jobject)((arc_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_params;
	sp[0].o = (jobject)((arc_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_type;
	((func_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class) resolveInterfaceMethod(ctx, &class_arc_assets_AssetLoaderParameters$LoadedCallback, INDEX_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_20:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[1].o)))->F_assetDesc;
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded;
	sp[1].o = (jobject)((func_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object])(ctx, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:taskFailed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(658);
	throwException(ctx, (frame[2].o));	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:incrementRefCountedDependencies", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(663);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(668);
	sp[0].o = frame[6].o;
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(669);
	M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(670);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(671);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_handleTaskError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:handleTaskError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_assets_AssetLoadingTask, sp[0].o));
	LINE_NUMBER(681);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_assetDesc;
	frame[3].o = sp[0].o;
	LINE_NUMBER(684);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependenciesLoaded) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependencies;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[2].o)))->F_dependencies;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o));
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[5].o)))->F_fileName;
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(687);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(694);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_assets_AssetErrorListener_error_arc_assets_AssetDescriptor_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_arc_assets_AssetErrorListener, INDEX_arc_assets_AssetErrorListener_error_arc_assets_AssetDescriptor_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_errored;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[3].o)))->F_errored;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(701);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(703);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:setLoader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(711);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(712);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:setLoader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(722);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(723);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"loader cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o));
	LINE_NUMBER(725);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaders;
	sp[1].o = frame[1].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[2].o);
	frame[4].o = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(726);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(727);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_assets_AssetManager_getLoadedAssets_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getLoadedAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	popStackFrame(ctx, self);
	return ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jint M_arc_assets_AssetManager_getQueuedAssets_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getQueuedAssets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	popStackFrame(ctx, self);
	return (temp0 + ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	}

	popStackFrame(ctx);
}

jfloat M_arc_assets_AssetManager_getProgress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getProgress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(741);
	if (((jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad) != 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx, self);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(742);
	frame[1].f = (jfloat(((jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded)));
	LINE_NUMBER(743);
	if (((jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(744);
	jfloat temp0 = frame[1].f;
	jint temp1 = (jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks;
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[1].f = (temp0 + ((jfloat((temp1 - ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(((jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks)))));
	}
label_3:;
	{
	LINE_NUMBER(746);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), ((frame[1].f) / (jfloat(((jint)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad)))));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_setErrorListener_arc_assets_AssetErrorListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:setErrorListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(754);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(755);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(760);
	((func_arc_assets_AssetManager_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_clear])(ctx, (frame[0].o));
	LINE_NUMBER(761);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_executor;
	SM_arc_util_Threads_await_java_util_concurrent_ExecutorService(ctx, sp[0].o);
	LINE_NUMBER(762);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:clear", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_update_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	goto label_1;
label_2:;
	{
	LINE_NUMBER(769);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(772);
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, (frame[1].o));
	LINE_NUMBER(773);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(774);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(775);
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, (frame[1].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(776);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(779);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(780);
	if ((frame[5].o) != nullptr) goto label_16;
	}
	goto label_12;
label_16:;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(782);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, (frame[1].o), (frame[7].o), (jint(0)));
	frame[8].i = temp0;
	LINE_NUMBER(783);
	INST_IINC(8, 1);
	LINE_NUMBER(784);
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, (frame[1].o), (frame[7].o), (frame[8].i));
	LINE_NUMBER(785);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(786);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(790);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, (frame[1].o), (frame[4].o), (jint(0)));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(791);
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, (frame[0].o), (frame[4].o));
	}
label_26:;
	LINE_NUMBER(793);
	goto label_23;
label_24:;
	LINE_NUMBER(794);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(796);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(797);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(798);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(799);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(800);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_toLoad = (jint(0));
	LINE_NUMBER(801);
	((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_peakTasks = (jint(0));
	LINE_NUMBER(802);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_loadQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(803);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(804);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_assets_AssetManager_getReferenceCount_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getReferenceCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(811);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(812);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o));
	popStackFrame(ctx, self);
	return ((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_count);
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager_setReferenceCount_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:setReferenceCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(820);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Asset not loaded: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o));
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o))))->F_count = (frame[2].i);
	LINE_NUMBER(822);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getDiagnostics_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getDiagnostics", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(826);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(827);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(829);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(831);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(832);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[3].o));
	frame[5].o = (checkCast(ctx, &class_arc_assets_AssetManager$RefCountedContainer, sp[0].o));
	LINE_NUMBER(833);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(835);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(837);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", refs: "_j))));
	LINE_NUMBER(838);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[5].o)))->F_count));
	LINE_NUMBER(840);
	if ((frame[6].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(841);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", deps: ["_j))));
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(843);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[8].o));
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(845);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	}
label_13:;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(849);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getAssetNames", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getDependencies_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getDependencies", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetDependencies;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager:getAssetType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(865);
	sp[0].o = (jobject)((arc_assets_AssetManager *) NULL_CHECK((frame[0].o)))->F_assetTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_arc_assets_AssetManager_lambda$loadRun$0(jcontext ctx) {
	FrameInfo frameInfo { "arc/assets/AssetManager:lambda$loadRun$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_arc_assets_AssetManager(ctx);
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_assets_AssetManager[] {
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
	(void *) M_arc_assets_AssetManager_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver,
	(void *) M_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object,
	(void *) M_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager_get_arc_assets_AssetDescriptor_R_java_lang_Object,
	(void *) M_arc_assets_AssetManager_contains_java_lang_String_R_boolean,
	(void *) M_arc_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean,
	(void *) M_arc_assets_AssetManager_unload_java_lang_String,
	(void *) M_arc_assets_AssetManager_containsAsset_java_lang_Object_R_boolean,
	(void *) M_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String,
	(void *) M_arc_assets_AssetManager_isLoaded_arc_assets_AssetDescriptor_R_boolean,
	(void *) M_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean,
	(void *) M_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean,
	(void *) M_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader,
	(void *) M_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader,
	(void *) M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_update_R_boolean,
	(void *) M_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_update_int_R_boolean,
	(void *) M_arc_assets_AssetManager_isFinished_R_boolean,
	(void *) M_arc_assets_AssetManager_finishLoading,
	(void *) M_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_finishLoadingAsset_java_lang_String,
	(void *) M_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager_injectDependency_java_lang_String_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_nextTask,
	(void *) M_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor,
	(void *) M_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object,
	(void *) M_arc_assets_AssetManager_updateTask_R_boolean,
	(void *) M_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException,
	(void *) M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String,
	(void *) M_arc_assets_AssetManager_handleTaskError_java_lang_Throwable,
	(void *) M_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader,
	(void *) M_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader,
	(void *) M_arc_assets_AssetManager_getLoadedAssets_R_int,
	(void *) M_arc_assets_AssetManager_getQueuedAssets_R_int,
	(void *) M_arc_assets_AssetManager_getProgress_R_float,
	(void *) M_arc_assets_AssetManager_setErrorListener_arc_assets_AssetErrorListener,
	(void *) M_arc_assets_AssetManager_clear,
	(void *) M_arc_assets_AssetManager_getReferenceCount_java_lang_String_R_int,
	(void *) M_arc_assets_AssetManager_setReferenceCount_java_lang_String_int,
	(void *) M_arc_assets_AssetManager_getDiagnostics_R_java_lang_String,
	(void *) M_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager_getDependencies_java_lang_String_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class,
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
	{ "getFileHandleResolver", "()Larc/assets/loaders/FileHandleResolver;" },
	{ "get", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "getOrNull", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "getAll", "(Ljava/lang/Class;Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getAllEntries", "(Ljava/lang/Class;Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "get", "(Larc/assets/AssetDescriptor;)Ljava/lang/Object;" },
	{ "contains", "(Ljava/lang/String;)Z" },
	{ "contains", "(Ljava/lang/String;Ljava/lang/Class;)Z" },
	{ "unload", "(Ljava/lang/String;)V" },
	{ "containsAsset", "(Ljava/lang/Object;)Z" },
	{ "getAssetFileName", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "isLoaded", "(Larc/assets/AssetDescriptor;)Z" },
	{ "isLoaded", "(Ljava/lang/String;)Z" },
	{ "isLoaded", "(Ljava/lang/String;Ljava/lang/Class;)Z" },
	{ "getLoader", "(Ljava/lang/Class;)Larc/assets/loaders/AssetLoader;" },
	{ "getLoader", "(Ljava/lang/Class;Ljava/lang/String;)Larc/assets/loaders/AssetLoader;" },
	{ "load", "(Ljava/lang/String;Ljava/lang/Class;)Larc/assets/AssetDescriptor;" },
	{ "loadRun", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Runnable;)Larc/assets/AssetDescriptor;" },
	{ "loadRun", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Runnable;Ljava/lang/Runnable;)Larc/assets/AssetDescriptor;" },
	{ "load", "(Larc/assets/Loadable;)Larc/assets/AssetDescriptor;" },
	{ "load", "(Ljava/lang/String;Ljava/lang/Class;Larc/assets/AssetLoaderParameters;)Larc/assets/AssetDescriptor;" },
	{ "load", "(Larc/assets/AssetDescriptor;)Larc/assets/AssetDescriptor;" },
	{ "update", "()Z" },
	{ "getCurrentLoading", "()Larc/assets/AssetDescriptor;" },
	{ "update", "(I)Z" },
	{ "isFinished", "()Z" },
	{ "finishLoading", "()V" },
	{ "finishLoadingAsset", "(Larc/assets/AssetDescriptor;)V" },
	{ "finishLoadingAsset", "(Ljava/lang/String;)V" },
	{ "injectDependencies", "(Ljava/lang/String;Larc/struct/Seq;)V" },
	{ "injectDependency", "(Ljava/lang/String;Larc/assets/AssetDescriptor;)V" },
	{ "nextTask", "()V" },
	{ "addTask", "(Larc/assets/AssetDescriptor;)V" },
	{ "addAsset", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V" },
	{ "updateTask", "()Z" },
	{ "taskFailed", "(Larc/assets/AssetDescriptor;Ljava/lang/RuntimeException;)V" },
	{ "incrementRefCountedDependencies", "(Ljava/lang/String;)V" },
	{ "handleTaskError", "(Ljava/lang/Throwable;)V" },
	{ "setLoader", "(Ljava/lang/Class;Larc/assets/loaders/AssetLoader;)V" },
	{ "setLoader", "(Ljava/lang/Class;Ljava/lang/String;Larc/assets/loaders/AssetLoader;)V" },
	{ "getLoadedAssets", "()I" },
	{ "getQueuedAssets", "()I" },
	{ "getProgress", "()F" },
	{ "setErrorListener", "(Larc/assets/AssetErrorListener;)V" },
	{ "clear", "()V" },
	{ "getReferenceCount", "(Ljava/lang/String;)I" },
	{ "setReferenceCount", "(Ljava/lang/String;I)V" },
	{ "getDiagnostics", "()Ljava/lang/String;" },
	{ "getAssetNames", "()Larc/struct/Seq;" },
	{ "getDependencies", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "getAssetType", "(Ljava/lang/String;)Ljava/lang/Class;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_assets_AssetManager$RefCountedContainer,
};

static FieldMetadata fields[] {
	{ "assets", &class_arc_struct_ObjectMap, offsetof(arc_assets_AssetManager, F_assets), "Larc/struct/ObjectMap;", 16 },
	{ "assetTypes", &class_arc_struct_ObjectMap, offsetof(arc_assets_AssetManager, F_assetTypes), "Larc/struct/ObjectMap;", 16 },
	{ "assetDependencies", &class_arc_struct_ObjectMap, offsetof(arc_assets_AssetManager, F_assetDependencies), "Larc/struct/ObjectMap;", 16 },
	{ "injected", &class_arc_struct_ObjectSet, offsetof(arc_assets_AssetManager, F_injected), "Larc/struct/ObjectSet;", 16 },
	{ "loaders", &class_arc_struct_ObjectMap, offsetof(arc_assets_AssetManager, F_loaders), "Larc/struct/ObjectMap;", 16 },
	{ "loadQueue", &class_arc_struct_Seq, offsetof(arc_assets_AssetManager, F_loadQueue), "Larc/struct/Seq;", 16 },
	{ "executor", &class_java_util_concurrent_ExecutorService, offsetof(arc_assets_AssetManager, F_executor), "Ljava/util/concurrent/ExecutorService;", 16 },
	{ "tasks", &class_arc_struct_Seq, offsetof(arc_assets_AssetManager, F_tasks), "Larc/struct/Seq;", 16 },
	{ "resolver", &class_arc_assets_loaders_FileHandleResolver, offsetof(arc_assets_AssetManager, F_resolver), "Larc/assets/loaders/FileHandleResolver;", 16 },
	{ "listener", &class_arc_assets_AssetErrorListener, offsetof(arc_assets_AssetManager, F_listener), "Larc/assets/AssetErrorListener;", 0 },
	{ "loaded", &class_int, offsetof(arc_assets_AssetManager, F_loaded), "I", 0 },
	{ "toLoad", &class_int, offsetof(arc_assets_AssetManager, F_toLoad), "I", 0 },
	{ "peakTasks", &class_int, offsetof(arc_assets_AssetManager, F_peakTasks), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetManager, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_boolean, 0, "(Larc/assets/loaders/FileHandleResolver;Z)V", 1 },
	{ "getFileHandleResolver", (intptr_t) M_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver, VTABLE_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver, "()Larc/assets/loaders/FileHandleResolver;", 1 },
	{ "get", (intptr_t) M_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object, VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 33 },
	{ "getOrNull", (intptr_t) M_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 33 },
	{ "getAll", (intptr_t) M_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq, "(Ljava/lang/Class;Larc/struct/Seq;)Larc/struct/Seq;", 33 },
	{ "getAllEntries", (intptr_t) M_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_assets_AssetManager_getAllEntries_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq, "(Ljava/lang/Class;Larc/struct/Seq;)Larc/struct/Seq;", 33 },
	{ "get", (intptr_t) M_arc_assets_AssetManager_get_arc_assets_AssetDescriptor_R_java_lang_Object, VTABLE_arc_assets_AssetManager_get_arc_assets_AssetDescriptor_R_java_lang_Object, "(Larc/assets/AssetDescriptor;)Ljava/lang/Object;", 33 },
	{ "contains", (intptr_t) M_arc_assets_AssetManager_contains_java_lang_String_R_boolean, VTABLE_arc_assets_AssetManager_contains_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "contains", (intptr_t) M_arc_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean, VTABLE_arc_assets_AssetManager_contains_java_lang_String_java_lang_Class_R_boolean, "(Ljava/lang/String;Ljava/lang/Class;)Z", 33 },
	{ "unload", (intptr_t) M_arc_assets_AssetManager_unload_java_lang_String, VTABLE_arc_assets_AssetManager_unload_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "containsAsset", (intptr_t) M_arc_assets_AssetManager_containsAsset_java_lang_Object_R_boolean, VTABLE_arc_assets_AssetManager_containsAsset_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "getAssetFileName", (intptr_t) M_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String, VTABLE_arc_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 33 },
	{ "isLoaded", (intptr_t) M_arc_assets_AssetManager_isLoaded_arc_assets_AssetDescriptor_R_boolean, VTABLE_arc_assets_AssetManager_isLoaded_arc_assets_AssetDescriptor_R_boolean, "(Larc/assets/AssetDescriptor;)Z", 33 },
	{ "isLoaded", (intptr_t) M_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean, VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "isLoaded", (intptr_t) M_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean, VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean, "(Ljava/lang/String;Ljava/lang/Class;)Z", 33 },
	{ "getLoader", (intptr_t) M_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader, VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader, "(Ljava/lang/Class;)Larc/assets/loaders/AssetLoader;", 1 },
	{ "getLoader", (intptr_t) M_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader, VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_java_lang_String_R_arc_assets_loaders_AssetLoader, "(Ljava/lang/Class;Ljava/lang/String;)Larc/assets/loaders/AssetLoader;", 1 },
	{ "load", (intptr_t) M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor, "(Ljava/lang/String;Ljava/lang/Class;)Larc/assets/AssetDescriptor;", 33 },
	{ "loadRun", (intptr_t) M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Runnable;)Larc/assets/AssetDescriptor;", 33 },
	{ "loadRun", (intptr_t) M_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Runnable;Ljava/lang/Runnable;)Larc/assets/AssetDescriptor;", 33 },
	{ "load", (intptr_t) M_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor, "(Larc/assets/Loadable;)Larc/assets/AssetDescriptor;", 33 },
	{ "load", (intptr_t) M_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor, "(Ljava/lang/String;Ljava/lang/Class;Larc/assets/AssetLoaderParameters;)Larc/assets/AssetDescriptor;", 33 },
	{ "load", (intptr_t) M_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor, "(Larc/assets/AssetDescriptor;)Larc/assets/AssetDescriptor;", 33 },
	{ "update", (intptr_t) M_arc_assets_AssetManager_update_R_boolean, VTABLE_arc_assets_AssetManager_update_R_boolean, "()Z", 33 },
	{ "getCurrentLoading", (intptr_t) M_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor, "()Larc/assets/AssetDescriptor;", 33 },
	{ "update", (intptr_t) M_arc_assets_AssetManager_update_int_R_boolean, VTABLE_arc_assets_AssetManager_update_int_R_boolean, "(I)Z", 1 },
	{ "isFinished", (intptr_t) M_arc_assets_AssetManager_isFinished_R_boolean, VTABLE_arc_assets_AssetManager_isFinished_R_boolean, "()Z", 33 },
	{ "finishLoading", (intptr_t) M_arc_assets_AssetManager_finishLoading, VTABLE_arc_assets_AssetManager_finishLoading, "()V", 1 },
	{ "finishLoadingAsset", (intptr_t) M_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor, "(Larc/assets/AssetDescriptor;)V", 1 },
	{ "finishLoadingAsset", (intptr_t) M_arc_assets_AssetManager_finishLoadingAsset_java_lang_String, VTABLE_arc_assets_AssetManager_finishLoadingAsset_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "injectDependencies", (intptr_t) M_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq, VTABLE_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq, "(Ljava/lang/String;Larc/struct/Seq;)V", 32 },
	{ "injectDependency", (intptr_t) M_arc_assets_AssetManager_injectDependency_java_lang_String_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_injectDependency_java_lang_String_arc_assets_AssetDescriptor, "(Ljava/lang/String;Larc/assets/AssetDescriptor;)V", 34 },
	{ "nextTask", (intptr_t) M_arc_assets_AssetManager_nextTask, VTABLE_arc_assets_AssetManager_nextTask, "()V", 2 },
	{ "addTask", (intptr_t) M_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor, VTABLE_arc_assets_AssetManager_addTask_arc_assets_AssetDescriptor, "(Larc/assets/AssetDescriptor;)V", 2 },
	{ "addAsset", (intptr_t) M_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object, VTABLE_arc_assets_AssetManager_addAsset_java_lang_String_java_lang_Class_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)V", 1 },
	{ "updateTask", (intptr_t) M_arc_assets_AssetManager_updateTask_R_boolean, VTABLE_arc_assets_AssetManager_updateTask_R_boolean, "()Z", 2 },
	{ "taskFailed", (intptr_t) M_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException, VTABLE_arc_assets_AssetManager_taskFailed_arc_assets_AssetDescriptor_java_lang_RuntimeException, "(Larc/assets/AssetDescriptor;Ljava/lang/RuntimeException;)V", 4 },
	{ "incrementRefCountedDependencies", (intptr_t) M_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String, VTABLE_arc_assets_AssetManager_incrementRefCountedDependencies_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "handleTaskError", (intptr_t) M_arc_assets_AssetManager_handleTaskError_java_lang_Throwable, VTABLE_arc_assets_AssetManager_handleTaskError_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 2 },
	{ "setLoader", (intptr_t) M_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader, VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader, "(Ljava/lang/Class;Larc/assets/loaders/AssetLoader;)V", 33 },
	{ "setLoader", (intptr_t) M_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader, VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader, "(Ljava/lang/Class;Ljava/lang/String;Larc/assets/loaders/AssetLoader;)V", 33 },
	{ "getLoadedAssets", (intptr_t) M_arc_assets_AssetManager_getLoadedAssets_R_int, VTABLE_arc_assets_AssetManager_getLoadedAssets_R_int, "()I", 33 },
	{ "getQueuedAssets", (intptr_t) M_arc_assets_AssetManager_getQueuedAssets_R_int, VTABLE_arc_assets_AssetManager_getQueuedAssets_R_int, "()I", 33 },
	{ "getProgress", (intptr_t) M_arc_assets_AssetManager_getProgress_R_float, VTABLE_arc_assets_AssetManager_getProgress_R_float, "()F", 33 },
	{ "setErrorListener", (intptr_t) M_arc_assets_AssetManager_setErrorListener_arc_assets_AssetErrorListener, VTABLE_arc_assets_AssetManager_setErrorListener_arc_assets_AssetErrorListener, "(Larc/assets/AssetErrorListener;)V", 33 },
	{ "dispose", (intptr_t) M_arc_assets_AssetManager_dispose, VTABLE_arc_assets_AssetManager_dispose, "()V", 33 },
	{ "clear", (intptr_t) M_arc_assets_AssetManager_clear, VTABLE_arc_assets_AssetManager_clear, "()V", 33 },
	{ "getReferenceCount", (intptr_t) M_arc_assets_AssetManager_getReferenceCount_java_lang_String_R_int, VTABLE_arc_assets_AssetManager_getReferenceCount_java_lang_String_R_int, "(Ljava/lang/String;)I", 33 },
	{ "setReferenceCount", (intptr_t) M_arc_assets_AssetManager_setReferenceCount_java_lang_String_int, VTABLE_arc_assets_AssetManager_setReferenceCount_java_lang_String_int, "(Ljava/lang/String;I)V", 33 },
	{ "getDiagnostics", (intptr_t) M_arc_assets_AssetManager_getDiagnostics_R_java_lang_String, VTABLE_arc_assets_AssetManager_getDiagnostics_R_java_lang_String, "()Ljava/lang/String;", 33 },
	{ "getAssetNames", (intptr_t) M_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq, VTABLE_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq, "()Larc/struct/Seq;", 33 },
	{ "getDependencies", (intptr_t) M_arc_assets_AssetManager_getDependencies_java_lang_String_R_arc_struct_Seq, VTABLE_arc_assets_AssetManager_getDependencies_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 33 },
	{ "getAssetType", (intptr_t) M_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class, VTABLE_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 33 },
	{ "lambda$loadRun$0", (intptr_t) SM_arc_assets_AssetManager_lambda$loadRun$0, 0, "()V", 4106 },
};

Class class_arc_assets_AssetManager{
		.nativeName = (intptr_t) "arc/assets/AssetManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_AssetManager),
		.classVtable = (intptr_t) vtable_arc_assets_AssetManager,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetManager,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 57,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_AssetManager = registerClass(&class_arc_assets_AssetManager);

}
