#include "mindustry/mod/Mods_2.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/mod/Mods_2.h"
#include "java/lang/RuntimeException.h"

extern "C" {


void mark_mindustry_mod_Mods$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_TextureAtlas(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_Mods$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_TextureAtlas(ctx);
}

void init_mindustry_mod_Mods$2_mindustry_mod_Mods(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	((mindustry_mod_Mods$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_graphics_g2d_TextureAtlas(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$2_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$2:getPixmap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_pixmap;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(340);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Calling getPixmap outside of createIcons is not supported!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$2[] {
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
	(void *) M_arc_graphics_g2d_TextureAtlas_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_setDrawableScale_float,
	(void *) M_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_mod_Mods$2_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable,
	(void *) M_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable,
	(void *) M_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch,
	(void *) M_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet,
	(void *) M_arc_graphics_g2d_TextureAtlas_texture_R_arc_graphics_Texture,
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
	{ "setDrawableScale", "(F)V" },
	{ "load", "(Larc/graphics/g2d/TextureAtlas$TextureAtlasData;)V" },
	{ "getPixmap", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmap", "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmap", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmaps", "()Larc/struct/ObjectMap;" },
	{ "disposePixmap", "(Larc/graphics/Texture;)V" },
	{ "addRegion", "(Ljava/lang/String;Larc/graphics/Texture;IIII)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "addRegion", "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "getRegions", "()Larc/struct/Seq;" },
	{ "getRegionMap", "()Larc/struct/ObjectMap;" },
	{ "white", "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "setErrorRegion", "(Ljava/lang/String;)Z" },
	{ "isFound", "(Larc/graphics/g2d/TextureRegion;)Z" },
	{ "find", "(Ljava/lang/String;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "find", "(Ljava/lang/String;Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;" },
	{ "find", "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "getDrawable", "(Ljava/lang/String;)Larc/scene/style/Drawable;" },
	{ "drawable", "(Ljava/lang/String;)Larc/scene/style/Drawable;" },
	{ "getDrawables", "()Larc/struct/ObjectMap;" },
	{ "createPatch", "(Ljava/lang/String;)Larc/graphics/g2d/NinePatch;" },
	{ "getTextures", "()Larc/struct/ObjectSet;" },
	{ "texture", "()Larc/graphics/Texture;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_mod_Mods, offsetof(mindustry_mod_Mods$2, F_this$0), "Lmindustry/mod/Mods;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$2_mindustry_mod_Mods, 0, "(Lmindustry/mod/Mods;)V", 0 },
	{ "getPixmap", (intptr_t) M_mindustry_mod_Mods$2_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_mod_Mods$2_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
};

Class class_mindustry_mod_Mods$2{
		.nativeName = (intptr_t) "mindustry/mod/Mods$2",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas,
		.size = sizeof(mindustry_mod_Mods$2),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$2,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$2,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$2 = registerClass(&class_mindustry_mod_Mods$2);

}

