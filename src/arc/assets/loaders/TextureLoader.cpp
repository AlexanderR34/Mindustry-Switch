#include "arc/assets/loaders/TextureLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/GLTexture.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/graphics/Texture.h"
#include "arc/files/Fi.h"
#include "arc/assets/loaders/TextureLoader_TextureLoaderInfo.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureWrap.h"

extern "C" {


void mark_arc_assets_loaders_TextureLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_TextureLoader *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_arc_assets_loaders_TextureLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_TextureLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_assets_loaders_TextureLoader$TextureLoaderInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_loaders_TextureLoader$TextureLoaderInfo);
	init_arc_assets_loaders_TextureLoader$TextureLoaderInfo(ctx, sp[1].o);
	((arc_assets_loaders_TextureLoader *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:loadAsync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_filename = (jref) (frame[2].o);
	LINE_NUMBER(26);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_textureData;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(27);
	frame[5].i = (jint(0));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(30);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(31);
	frame[5].i = ((jint)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_genMipMaps);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_texture;
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[3].o), (frame[5].i));
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(36);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_textureData;
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_texture;
	((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	jint temp0 = (jint)((func_arc_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture;
	frame[5].o = sp[0].o;
	LINE_NUMBER(47);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	((func_arc_graphics_Texture_load_arc_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_load_arc_graphics_TextureData])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(50);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(52);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_wrapU;
	sp[2].o = (jobject)((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_wrapV;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(16);
	((func_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_TextureLoader[] {
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
	(void *) M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter,
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

static jclass innerClasses[] {
	&class_arc_assets_loaders_TextureLoader$TextureLoaderInfo,
	&class_arc_assets_loaders_TextureLoader$TextureParameter,
};

static FieldMetadata fields[] {
	{ "info", &class_arc_assets_loaders_TextureLoader$TextureLoaderInfo, offsetof(arc_assets_loaders_TextureLoader, F_info), "Larc/assets/loaders/TextureLoader$TextureLoaderInfo;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, VTABLE_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture, VTABLE_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/graphics/Texture;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/struct/Seq;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_TextureLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_TextureLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/TextureLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_TextureLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_TextureLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_TextureLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_TextureLoader,
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
static bool registered_arc_assets_loaders_TextureLoader = registerClass(&class_arc_assets_loaders_TextureLoader);

}
