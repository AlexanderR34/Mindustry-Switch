#include "mindustry/io/SavePreviewLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/Files.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/io/SavePreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "mindustry/io/SavePreviewLoader.h"
#include "java/util/Objects.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_io_SavePreviewLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_TextureLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_SavePreviewLoader *) object;
}

void clinit_mindustry_io_SavePreviewLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_TextureLoader(ctx);
}

void init_mindustry_io_SavePreviewLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SavePreviewLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SavePreviewLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_SavePreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1(ctx);
		auto proxy = (mindustry_io_SavePreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1 *) gcAlloc(ctx, &class_mindustry_io_SavePreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	init_arc_assets_loaders_TextureLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SavePreviewLoader:loadAsync", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[3].o));
	sp[3].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[3].o, sp[4].o);
	M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(21);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(18);
	frame[5].o = sp[0].o;
	LINE_NUMBER(19);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	LINE_NUMBER(20);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SavePreviewLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(8);
	((func_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SavePreviewLoader[] {
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
	(void *) M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter,
	(void *) M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture,
	(void *) M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq,
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
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/graphics/Texture;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/struct/Seq;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_SavePreviewLoader, 0, "()V", 1 },
	{ "loadAsync", (intptr_t) M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, VTABLE_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)V", 1 },
	{ "loadAsync", (intptr_t) M_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_mindustry_io_SavePreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
};

Class class_mindustry_io_SavePreviewLoader{
		.nativeName = (intptr_t) "mindustry/io/SavePreviewLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_TextureLoader,
		.size = sizeof(mindustry_io_SavePreviewLoader),
		.classVtable = (intptr_t) vtable_mindustry_io_SavePreviewLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SavePreviewLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SavePreviewLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SavePreviewLoader = registerClass(&class_mindustry_io_SavePreviewLoader);

}
