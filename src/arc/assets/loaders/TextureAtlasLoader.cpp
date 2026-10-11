#include "arc/assets/loaders/TextureAtlasLoader.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/util/Iterator.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/loaders/SynchronousAssetLoader.h"
#include "arc/assets/AssetManager.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/Class.h"
#include "arc/assets/loaders/TextureAtlasLoader.h"
#include "arc/assets/loaders/TextureAtlasLoader_TextureAtlasParameter.h"

extern "C" {


void mark_arc_assets_loaders_TextureAtlasLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_TextureAtlasLoader *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_assets_loaders_TextureAtlasLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_SynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_TextureAtlasLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureAtlasLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_arc_assets_loaders_SynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, sp[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[6].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[6].o)))->F_textureFile;
	sp[2].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK(sp[0].o))->F_texture = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	LINE_NUMBER(29);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(31);
	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas);
	sp[1].o = (jobject)((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	init_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(32);
	((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader:getDependencies", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean(ctx, sp[1].o, (frame[2].o), (frame[4].o), ((jint)((arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[3].o)))->F_flip));
	((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean(ctx, sp[1].o, (frame[2].o), (frame[4].o), (jint(0)));
	((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(46);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, sp[0].o));
	LINE_NUMBER(48);
	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter);
	init_arc_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(49);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[8].o)))->F_genMipMaps = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[7].o)))->F_useMipMaps);
	LINE_NUMBER(50);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[7].o)))->F_minFilter;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[7].o)))->F_magFilter;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[5].o;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[7].o)))->F_textureFile;
	init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)), (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_TextureAtlasLoader[] {
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
	(void *) M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas,
	(void *) M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq,
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
	{ "load", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Larc/graphics/g2d/TextureAtlas;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter,
};

static FieldMetadata fields[] {
	{ "data", &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData, offsetof(arc_assets_loaders_TextureAtlasLoader, F_data), "Larc/graphics/g2d/TextureAtlas$TextureAtlasData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureAtlasLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "load", (intptr_t) M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas, VTABLE_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_graphics_g2d_TextureAtlas, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Larc/graphics/g2d/TextureAtlas;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Larc/struct/Seq;", 1 },
	{ "load", (intptr_t) M_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_TextureAtlasLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_TextureAtlasLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/TextureAtlasLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_SynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_TextureAtlasLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_TextureAtlasLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_TextureAtlasLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_TextureAtlasLoader,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_TextureAtlasLoader = registerClass(&class_arc_assets_loaders_TextureAtlasLoader);

}
