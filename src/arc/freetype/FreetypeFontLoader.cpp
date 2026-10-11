#include "arc/freetype/FreetypeFontLoader.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/freetype/FreetypeFontLoader_FreeTypeFontLoaderParameter.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/freetype/FreetypeFontLoader.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_freetype_FreetypeFontLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreetypeFontLoader *) object;
}

void clinit_arc_freetype_FreetypeFontLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_freetype_FreetypeFontLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreetypeFontLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:loadAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(25);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(26);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FreetypeFontParameter must be set in AssetManager#load to point at a TTF file!"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(31);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(32);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FreetypeFontParameter must be set in AssetManager#load to point at a TTF file!"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontFileName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".gen"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_freetype_FreeTypeFontGenerator)));
	frame[5].o = (checkCast(ctx, &class_arc_freetype_FreeTypeFontGenerator, sp[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:getDependencies", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = frame[4].o;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[3].o)))->F_fontFileName;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".gen"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_freetype_FreeTypeFontGenerator)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	((func_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreetypeFontLoader[] {
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
	(void *) M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
	(void *) M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font,
	(void *) M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq,
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
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)Larc/graphics/g2d/Font;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreetypeFontLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, VTABLE_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font, VTABLE_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)Larc/graphics/g2d/Font;", 1 },
	{ "getDependencies", (intptr_t) M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq, VTABLE_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)Larc/struct/Seq;", 1 },
	{ "loadSync", (intptr_t) M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_freetype_FreetypeFontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_freetype_FreetypeFontLoader{
		.nativeName = (intptr_t) "arc/freetype/FreetypeFontLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_freetype_FreetypeFontLoader),
		.classVtable = (intptr_t) vtable_arc_freetype_FreetypeFontLoader,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreetypeFontLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreetypeFontLoader,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreetypeFontLoader = registerClass(&class_arc_freetype_FreetypeFontLoader);

}
