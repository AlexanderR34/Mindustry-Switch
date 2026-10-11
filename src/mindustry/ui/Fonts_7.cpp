#include "mindustry/ui/Fonts_7.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "mindustry/core/UI.h"
#include "arc/assets/AssetManager.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/freetype/FreetypeFontLoader_FreeTypeFontLoaderParameter.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/Fonts_7.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/freetype/FreetypeFontLoader.h"
#include "arc/struct/ObjectSet.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_ui_Fonts$7(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreetypeFontLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Fonts$7 *) object;
	if (self->F_scaled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaled)->clazz)->markFunction)((jobject) self->F_scaled, mark, depth + 1);
}

void clinit_mindustry_ui_Fonts$7(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreetypeFontLoader(ctx);
}

void init_mindustry_ui_Fonts$7_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$7:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$7(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	init_arc_freetype_FreetypeFontLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ui_Fonts$7 *) NULL_CHECK(sp[0].o))->F_scaled = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$7:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"outline"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_borderWidth = temp0;
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	jfloat temp1 = jfloat(((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_spaceX));
	sp[1].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_spaceX = (jint((temp1 - ((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[1].o))->F_borderWidth))));
	}
label_1:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_ui_Fonts$7 *) NULL_CHECK((frame[0].o)))->F_scaled;
	sp[1].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unscaled;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	sp[1].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[1].o))->F_size))));
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_size = (jint(temp0));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_ui_Fonts$7 *) NULL_CHECK((frame[0].o)))->F_scaled;
	sp[1].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[4].o)))->F_fontParameters;
	clinit_mindustry_core_UI(ctx);
	sp[1].o = (jobject)SF_mindustry_core_UI_packer;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_packer = (jref) sp[1].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)M_arc_freetype_FreetypeFontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$7:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Fonts$7[] {
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
	(void *) M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_freetype_FreetypeFontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
	(void *) M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font,
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

static FieldMetadata fields[] {
	{ "scaled", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_Fonts$7, F_scaled), "Larc/struct/ObjectSet;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts$7_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 0 },
	{ "loadSync", (intptr_t) M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font, VTABLE_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter;)Larc/graphics/g2d/Font;", 1 },
	{ "loadSync", (intptr_t) M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
};

Class class_mindustry_ui_Fonts$7{
		.nativeName = (intptr_t) "mindustry/ui/Fonts$7",
		.parentClass = (intptr_t) &class_arc_freetype_FreetypeFontLoader,
		.size = sizeof(mindustry_ui_Fonts$7),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts$7,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts$7,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts$7,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Fonts$7 = registerClass(&class_mindustry_ui_Fonts$7);

}

