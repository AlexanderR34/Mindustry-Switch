#include "mindustry/mod/Mods_1.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/mod/Mods_1.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_mindustry_mod_Mods$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$1 *) object;
	if (self->F_val$shadow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$shadow)->clazz)->markFunction)((jobject) self->F_val$shadow, mark, depth + 1);
	if (self->F_val$whiteRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$whiteRegion)->clazz)->markFunction)((jobject) self->F_val$whiteRegion, mark, depth + 1);
	if (self->F_val$packer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$packer)->clazz)->markFunction)((jobject) self->F_val$packer, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_TextureAtlas(ctx);
}

void init_mindustry_mod_Mods$1_mindustry_mod_Mods_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$AtlasRegion_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(264);
	((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow = (jref) (frame[2].o);
	((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$whiteRegion = (jref) (frame[3].o);
	((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$packer = (jref) (frame[4].o);
	((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_graphics_g2d_TextureAtlas(ctx, (frame[0].o));
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_error = (jref) sp[1].o;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:white", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$whiteRegion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:find", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$packer;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(280);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(281);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height));
	frame[3].o = sp[0].o;
	LINE_NUMBER(282);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(283);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_pixmapRegion = (jref) (frame[2].o);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:isFound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:find", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)((func_mindustry_mod_Mods$1_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$1_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(2);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$1_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$shadow;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$packer;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1:getPixmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$packer;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(310);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$1 *) NULL_CHECK((frame[0].o)))->F_val$packer;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$1[] {
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
	(void *) M_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap,
	(void *) M_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean,
	(void *) M_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_mod_Mods$1_has_java_lang_String_R_boolean,
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
	{ "val$shadow", &class_arc_graphics_g2d_TextureAtlas, offsetof(mindustry_mod_Mods$1, F_val$shadow), "Larc/graphics/g2d/TextureAtlas;", 4112 },
	{ "val$whiteRegion", &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, offsetof(mindustry_mod_Mods$1, F_val$whiteRegion), "Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 4112 },
	{ "val$packer", &class_mindustry_graphics_MultiPacker, offsetof(mindustry_mod_Mods$1, F_val$packer), "Lmindustry/graphics/MultiPacker;", 4112 },
	{ "this$0", &class_mindustry_mod_Mods, offsetof(mindustry_mod_Mods$1, F_this$0), "Lmindustry/mod/Mods;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$1_mindustry_mod_Mods_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$AtlasRegion_mindustry_graphics_MultiPacker, 0, "(Lmindustry/mod/Mods;Larc/graphics/g2d/TextureAtlas;Larc/graphics/g2d/TextureAtlas$AtlasRegion;Lmindustry/graphics/MultiPacker;)V", 0 },
	{ "white", (intptr_t) M_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "find", (intptr_t) M_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "isFound", (intptr_t) M_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean, VTABLE_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean, "(Larc/graphics/g2d/TextureRegion;)Z", 1 },
	{ "find", (intptr_t) M_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "has", (intptr_t) M_mindustry_mod_Mods$1_has_java_lang_String_R_boolean, VTABLE_mindustry_mod_Mods$1_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getPixmap", (intptr_t) M_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
};

Class class_mindustry_mod_Mods$1{
		.nativeName = (intptr_t) "mindustry/mod/Mods$1",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas,
		.size = sizeof(mindustry_mod_Mods$1),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$1,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$1 = registerClass(&class_mindustry_mod_Mods$1);

}

