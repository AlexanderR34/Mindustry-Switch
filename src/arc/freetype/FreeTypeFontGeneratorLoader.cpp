#include "arc/freetype/FreeTypeFontGeneratorLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/freetype/FreeTypeFontGeneratorLoader.h"
#include "arc/struct/Seq.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/freetype/FreeTypeFontGeneratorLoader_FreeTypeFontGeneratorParameters.h"
#include "arc/assets/loaders/SynchronousAssetLoader.h"
#include "arc/assets/AssetManager.h"

extern "C" {


void mark_arc_freetype_FreeTypeFontGeneratorLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_SynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_freetype_FreeTypeFontGeneratorLoader *) object;
}

void clinit_arc_freetype_FreeTypeFontGeneratorLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_SynchronousAssetLoader(ctx);
}

void init_arc_freetype_FreeTypeFontGeneratorLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGeneratorLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGeneratorLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_arc_assets_loaders_SynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGeneratorLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(29);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gen"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(31);
	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator);
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(33);
	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator);
	init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi(ctx, sp[0].o, (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGeneratorLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGeneratorLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGeneratorLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeTypeFontGeneratorLoader[] {
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
	(void *) M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator,
	(void *) M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq,
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
	{ "load", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "load", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters;)Larc/freetype/FreeTypeFontGenerator;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGeneratorLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "load", (intptr_t) M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator, VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_freetype_FreeTypeFontGenerator, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters;)Larc/freetype/FreeTypeFontGenerator;", 1 },
	{ "getDependencies", (intptr_t) M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq, VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreeTypeFontGeneratorLoader$FreeTypeFontGeneratorParameters;)Larc/struct/Seq;", 1 },
	{ "load", (intptr_t) M_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "getDependencies", (intptr_t) M_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_freetype_FreeTypeFontGeneratorLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_freetype_FreeTypeFontGeneratorLoader{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGeneratorLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_SynchronousAssetLoader,
		.size = sizeof(arc_freetype_FreeTypeFontGeneratorLoader),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGeneratorLoader,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGeneratorLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGeneratorLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGeneratorLoader = registerClass(&class_arc_freetype_FreeTypeFontGeneratorLoader);

}
