#include "arc/Core.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Input.h"
#include "arc/Files.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/GL20.h"
#include "arc/Application.h"
#include "arc/assets/AssetManager.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "arc/audio/Audio.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Threads.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "arc/graphics/Camera.h"

extern "C" {

jobject SF_arc_Core_app;
jobject SF_arc_Core_graphics;
jobject SF_arc_Core_audio;
jobject SF_arc_Core_input;
jobject SF_arc_Core_files;
jobject SF_arc_Core_settings;
jobject SF_arc_Core_bundle;
jobject SF_arc_Core_camera;
jobject SF_arc_Core_batch;
jobject SF_arc_Core_scene;
jobject SF_arc_Core_assets;
jobject SF_arc_Core_atlas;
jobject SF_arc_Core_executor;
jobject SF_arc_Core_gl;
jobject SF_arc_Core_gl20;
jobject SF_arc_Core_gl30;

void mark_arc_Core(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Core_app)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_app)->clazz)->markFunction)((jobject) SF_arc_Core_app, mark, depth + 1);
		if (SF_arc_Core_graphics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_graphics)->clazz)->markFunction)((jobject) SF_arc_Core_graphics, mark, depth + 1);
		if (SF_arc_Core_audio)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_audio)->clazz)->markFunction)((jobject) SF_arc_Core_audio, mark, depth + 1);
		if (SF_arc_Core_input)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_input)->clazz)->markFunction)((jobject) SF_arc_Core_input, mark, depth + 1);
		if (SF_arc_Core_files)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_files)->clazz)->markFunction)((jobject) SF_arc_Core_files, mark, depth + 1);
		if (SF_arc_Core_settings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_settings)->clazz)->markFunction)((jobject) SF_arc_Core_settings, mark, depth + 1);
		if (SF_arc_Core_bundle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_bundle)->clazz)->markFunction)((jobject) SF_arc_Core_bundle, mark, depth + 1);
		if (SF_arc_Core_camera)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_camera)->clazz)->markFunction)((jobject) SF_arc_Core_camera, mark, depth + 1);
		if (SF_arc_Core_batch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_batch)->clazz)->markFunction)((jobject) SF_arc_Core_batch, mark, depth + 1);
		if (SF_arc_Core_scene)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_scene)->clazz)->markFunction)((jobject) SF_arc_Core_scene, mark, depth + 1);
		if (SF_arc_Core_assets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_assets)->clazz)->markFunction)((jobject) SF_arc_Core_assets, mark, depth + 1);
		if (SF_arc_Core_atlas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_atlas)->clazz)->markFunction)((jobject) SF_arc_Core_atlas, mark, depth + 1);
		if (SF_arc_Core_executor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_executor)->clazz)->markFunction)((jobject) SF_arc_Core_executor, mark, depth + 1);
		if (SF_arc_Core_gl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_gl)->clazz)->markFunction)((jobject) SF_arc_Core_gl, mark, depth + 1);
		if (SF_arc_Core_gl20)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_gl20)->clazz)->markFunction)((jobject) SF_arc_Core_gl20, mark, depth + 1);
		if (SF_arc_Core_gl30)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Core_gl30)->clazz)->markFunction)((jobject) SF_arc_Core_gl30, mark, depth + 1);
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
	auto self = (arc_Core *) object;
}

void init_arc_Core(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Core:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Core(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_Core(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Core:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Core(ctx);
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createEmptyBundle_R_arc_util_I18NBundle(ctx);
	clinit_arc_Core(ctx);
	SF_arc_Core_bundle = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Main Executor"_j))), (clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_cores));
	clinit_arc_Core(ctx);
	SF_arc_Core_executor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Core[] {
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
};

static FieldMetadata fields[] {
	{ "app", &class_arc_Application, (intptr_t) &SF_arc_Core_app, "Larc/Application;", 9 },
	{ "graphics", &class_arc_Graphics, (intptr_t) &SF_arc_Core_graphics, "Larc/Graphics;", 9 },
	{ "audio", &class_arc_audio_Audio, (intptr_t) &SF_arc_Core_audio, "Larc/audio/Audio;", 9 },
	{ "input", &class_arc_Input, (intptr_t) &SF_arc_Core_input, "Larc/Input;", 9 },
	{ "files", &class_arc_Files, (intptr_t) &SF_arc_Core_files, "Larc/Files;", 9 },
	{ "settings", &class_arc_Settings, (intptr_t) &SF_arc_Core_settings, "Larc/Settings;", 9 },
	{ "bundle", &class_arc_util_I18NBundle, (intptr_t) &SF_arc_Core_bundle, "Larc/util/I18NBundle;", 9 },
	{ "camera", &class_arc_graphics_Camera, (intptr_t) &SF_arc_Core_camera, "Larc/graphics/Camera;", 9 },
	{ "batch", &class_arc_graphics_g2d_Batch, (intptr_t) &SF_arc_Core_batch, "Larc/graphics/g2d/Batch;", 9 },
	{ "scene", &class_arc_scene_Scene, (intptr_t) &SF_arc_Core_scene, "Larc/scene/Scene;", 9 },
	{ "assets", &class_arc_assets_AssetManager, (intptr_t) &SF_arc_Core_assets, "Larc/assets/AssetManager;", 9 },
	{ "atlas", &class_arc_graphics_g2d_TextureAtlas, (intptr_t) &SF_arc_Core_atlas, "Larc/graphics/g2d/TextureAtlas;", 9 },
	{ "executor", &class_java_util_concurrent_ExecutorService, (intptr_t) &SF_arc_Core_executor, "Ljava/util/concurrent/ExecutorService;", 9 },
	{ "gl", &class_arc_graphics_GL20, (intptr_t) &SF_arc_Core_gl, "Larc/graphics/GL20;", 9 },
	{ "gl20", &class_arc_graphics_GL20, (intptr_t) &SF_arc_Core_gl20, "Larc/graphics/GL20;", 9 },
	{ "gl30", &class_arc_graphics_GL30, (intptr_t) &SF_arc_Core_gl30, "Larc/graphics/GL30;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Core, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_Core, 0, "()V", 8 },
};

Class class_arc_Core{
		.nativeName = (intptr_t) "arc/Core",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Core),
		.classVtable = (intptr_t) vtable_arc_Core,
		.staticInitializer = (intptr_t) clinit_arc_Core,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Core,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Core = registerClass(&class_arc_Core);

}
