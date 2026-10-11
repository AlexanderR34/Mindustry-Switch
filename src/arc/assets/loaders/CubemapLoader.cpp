#include "arc/assets/loaders/CubemapLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/GLTexture.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/loaders/CubemapLoader_CubemapLoaderInfo.h"
#include "arc/assets/loaders/CubemapLoader_CubemapParameter.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/CubemapData.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/Seq.h"
#include "arc/assets/loaders/CubemapLoader.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_assets_loaders_CubemapLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_CubemapLoader *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_arc_assets_loaders_CubemapLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_CubemapLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_CubemapLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo);
	init_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(ctx, sp[1].o);
	((arc_assets_loaders_CubemapLoader *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:loadAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_filename = (jref) (frame[2].o);
	LINE_NUMBER(27);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemapData;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) (jobject(nullptr));
	LINE_NUMBER(30);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemap;
	((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemapData;
	((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemap;
	((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	jint temp0 = (jint)((func_arc_graphics_CubemapData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_isPrepared_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	((func_arc_graphics_CubemapData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_prepare, sp[0].o))(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap;
	frame[5].o = sp[0].o;
	LINE_NUMBER(44);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	((func_arc_graphics_Cubemap_load_arc_graphics_CubemapData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_load_arc_graphics_CubemapData])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(47);
	clinit_arc_graphics_Cubemap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap);
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	init_arc_graphics_Cubemap_arc_graphics_CubemapData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(49);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(51);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_wrapU;
	sp[2].o = (jobject)((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_wrapV;
	((func_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_CubemapLoader$CubemapParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(17);
	((func_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_CubemapLoader$CubemapParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_CubemapLoader$CubemapParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_CubemapLoader[] {
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
	(void *) M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter,
	(void *) M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap,
	(void *) M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq,
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
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)Larc/graphics/Cubemap;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo,
	&class_arc_assets_loaders_CubemapLoader$CubemapParameter,
};

static FieldMetadata fields[] {
	{ "info", &class_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo, offsetof(arc_assets_loaders_CubemapLoader, F_info), "Larc/assets/loaders/CubemapLoader$CubemapLoaderInfo;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_CubemapLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter, VTABLE_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap, VTABLE_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_graphics_Cubemap, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)Larc/graphics/Cubemap;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_CubemapLoader$CubemapParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/CubemapLoader$CubemapParameter;)Larc/struct/Seq;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_CubemapLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_CubemapLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_CubemapLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_CubemapLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/CubemapLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_CubemapLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_CubemapLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_CubemapLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_CubemapLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_CubemapLoader = registerClass(&class_arc_assets_loaders_CubemapLoader);

}
