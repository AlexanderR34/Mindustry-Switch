#include "arc/assets/loaders/FontLoader.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/assets/loaders/FontLoader_FontParameter.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/FontLoader.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_assets_loaders_FontLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_FontLoader *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_assets_loaders_FontLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_FontLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_FontLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:getDependencies", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(33);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(34);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_fontData;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_fontData;
	((arc_assets_loaders_FontLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Font$FontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$FontData);
	sp[2].o = frame[2].o;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_flip) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 5;
	init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(ctx, sp[1].o, sp[3].o, sp[4].i);
	((arc_assets_loaders_FontLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(40);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_atlasName;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[4].o;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	sp[2].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_atlasName;
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_g2d_TextureAtlas)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(43);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String])(ctx, sp[0].o);
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_arc_assets_loaders_FontLoader_resolve_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_FontLoader_resolve_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter);
	init_arc_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(49);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(50);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[8].o)))->F_genMipMaps = ((jint)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_genMipMaps);
	LINE_NUMBER(51);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_minFilter;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[3].o)))->F_magFilter;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(55);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, sp[0].o, (frame[7].o), (((jobject) &class_arc_graphics_Texture)), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[9].o));
	LINE_NUMBER(43);
	INST_IINC(5, 1);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:loadSync", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(69);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_graphics_g2d_TextureAtlas)));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas, sp[0].o));
	LINE_NUMBER(71);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_imagePaths;
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[5].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[7].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(75);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not find font region "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in atlas "_j))));
	sp[2].o = (jobject)((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(76);
	clinit_arc_graphics_g2d_Font(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font);
	init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[3].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(79);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(80);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[6].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[3].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String])(ctx, sp[3].o, (frame[7].i));
	sp[2].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (((jobject) &class_arc_graphics_Texture)));
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, (checkCast(ctx, &class_arc_graphics_Texture, sp[2].o)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(83);
	clinit_arc_graphics_g2d_Font(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font);
	sp[1].o = (jobject)((arc_assets_loaders_FontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean(ctx, sp[0].o, sp[1].o, (frame[6].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_FontLoader$FontParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(24);
	((func_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_FontLoader$FontParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_FontLoader$FontParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_FontLoader[] {
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
	(void *) M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter,
	(void *) M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font,
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
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)Larc/struct/Seq;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)Larc/graphics/g2d/Font;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_FontLoader$FontParameter,
};

static FieldMetadata fields[] {
	{ "data", &class_arc_graphics_g2d_Font$FontData, offsetof(arc_assets_loaders_FontLoader, F_data), "Larc/graphics/g2d/Font$FontData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_FontLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)Larc/struct/Seq;", 1 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter, VTABLE_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font, VTABLE_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_FontLoader$FontParameter_R_arc_graphics_g2d_Font, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/FontLoader$FontParameter;)Larc/graphics/g2d/Font;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_FontLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_FontLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_FontLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_FontLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/FontLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_FontLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_FontLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_FontLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_FontLoader,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_FontLoader = registerClass(&class_arc_assets_loaders_FontLoader);

}
