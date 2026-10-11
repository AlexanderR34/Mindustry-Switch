#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Pixmaps.h"
#include "mindustry/net/Net.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Boolean.h"
#include "arc/Events.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/Settings.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/mod/NoPatch.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/GlobalVars.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/content/Planets.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_mindustry_ctype_UnlockableContent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_MappableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ctype_UnlockableContent *) object;
	if (self->F_stats)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stats)->clazz)->markFunction)((jobject) self->F_stats, mark, depth + 1);
	if (self->F_localizedName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localizedName)->clazz)->markFunction)((jobject) self->F_localizedName, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_details)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_details)->clazz)->markFunction)((jobject) self->F_details, mark, depth + 1);
	if (self->F_credit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_credit)->clazz)->markFunction)((jobject) self->F_credit, mark, depth + 1);
	if (self->F_uiIcon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uiIcon)->clazz)->markFunction)((jobject) self->F_uiIcon, mark, depth + 1);
	if (self->F_fullIcon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullIcon)->clazz)->markFunction)((jobject) self->F_fullIcon, mark, depth + 1);
	if (self->F_fullOverride)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullOverride)->clazz)->markFunction)((jobject) self->F_fullOverride, mark, depth + 1);
	if (self->F_shownPlanets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shownPlanets)->clazz)->markFunction)((jobject) self->F_shownPlanets, mark, depth + 1);
	if (self->F_databaseTabs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_databaseTabs)->clazz)->markFunction)((jobject) self->F_databaseTabs, mark, depth + 1);
	if (self->F_databaseCategory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_databaseCategory)->clazz)->markFunction)((jobject) self->F_databaseCategory, mark, depth + 1);
	if (self->F_databaseTag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_databaseTag)->clazz)->markFunction)((jobject) self->F_databaseTag, mark, depth + 1);
	if (self->F_techNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_techNode)->clazz)->markFunction)((jobject) self->F_techNode, mark, depth + 1);
	if (self->F_techNodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_techNodes)->clazz)->markFunction)((jobject) self->F_techNodes, mark, depth + 1);
}

void clinit_mindustry_ctype_UnlockableContent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_MappableContent(ctx);
}

void init_mindustry_ctype_UnlockableContent_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_UnlockableContent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	init_mindustry_ctype_MappableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Stats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_meta_Stats);
	init_mindustry_world_meta_Stats(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked = (jint(0));
	LINE_NUMBER(36);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_inlineDescription = (jint(1));
	LINE_NUMBER(38);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_hideDetails = (jint(1));
	LINE_NUMBER(40);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_hideDatabase = (jint(0));
	LINE_NUMBER(42);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_generateIcons = (jint(1));
	LINE_NUMBER(44);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_selectionSize = (jfloat(24.0f));
	LINE_NUMBER(50);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullOverride = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(52);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_allDatabaseTabs = (jint(0));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_shownPlanets = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_databaseTabs = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_techNodes = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001.name"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001.description"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001.details"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_details = (jref) sp[1].o;
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001.credit"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_credit = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp += 1;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-unlocked"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 2;
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_unlocked = sp[1].i;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_postInit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:postInit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	M_mindustry_ctype_Content_postInit(ctx, (frame[0].o));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseCategory;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseCategory;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_databaseCategory = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag = (jref) (((jobject) createStringLiteral(ctx, u8"default"_j)));
	}
label_5:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTabs;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_loadIcon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:loadIcon", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	LINE_NUMBER(110);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullOverride;
	sp += 2;
	if (sp[0].o != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_fullOverride;
label_3:;
	{
	sp -= 3;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_atlas;
	sp[4].o = frame[0].o;
	LINE_NUMBER(111);
	sp[4].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[4].o);
	sp[4].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[4].o);
	sp[5].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001-full"_j.string, 2, sp[4].o, sp[5].o);
	clinit_arc_Core(ctx);
	sp[5].o = (jobject)SF_arc_Core_atlas;
	sp[6].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[6].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-full"_j.string, 1, sp[6].o);
	clinit_arc_Core(ctx);
	sp[7].o = (jobject)SF_arc_Core_atlas;
	sp[8].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_arc_Core(ctx);
	sp[9].o = (jobject)SF_arc_Core_atlas;
	sp[10].o = frame[0].o;
	LINE_NUMBER(114);
	sp[10].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[10].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[10].o);
	sp[10].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[10].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[10].o);
	sp[11].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[10].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[10].o, sp[11].o);
	clinit_arc_Core(ctx);
	sp[11].o = (jobject)SF_arc_Core_atlas;
	sp[12].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[12].o = (jobject)concatStringsRecipe(ctx, u8"\u00011"_j.string, 1, sp[12].o);
	LINE_NUMBER(115);
	sp[11].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[11].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[11].o, sp[12].o);
	LINE_NUMBER(114);
	sp[9].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[9].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[9].o, sp[10].o, sp[11].o);
	LINE_NUMBER(113);
	sp[7].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[7].o, sp[8].o, sp[9].o);
	LINE_NUMBER(112);
	sp[5].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[5].o, sp[6].o, sp[7].o);
	LINE_NUMBER(111);
	sp[3].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(110);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001-ui"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon = (jref) sp[1].o;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_afterPatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:afterPatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	M_mindustry_ctype_Content_afterPatch(ctx, (frame[0].o));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Stats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_meta_Stats);
	init_mindustry_world_meta_Stats(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_isBanned_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:isBanned", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:isOnPlanet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_2;
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

jint M_mindustry_ctype_UnlockableContent_getLogicId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:getLogicId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	jint temp0 = (jint)((func_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:displayDescription", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isPatchContent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isPatchContent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_description;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_description;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mod.display"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[4].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[4].o))->F_mod;
	sp[4].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[4].o))->F_meta;
	sp[4].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[4].o))->F_displayName;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_checkStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:checkStats", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:setStats", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:computeStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Stats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_meta_Stats);
	init_mindustry_world_meta_Stats(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(156);
	((func_mindustry_ctype_UnlockableContent_setStats) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_setStats])(ctx, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:displayExtra", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:createIcons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:makeOutline", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(175);
	((func_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i), (frame[5].o), (frame[6].i), (jint(0)));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:makeOutline", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(179);
	if ((isInstance(ctx, (frame[3].o), &class_arc_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_1;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o)));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[8].o)))->F_name;
	frame[9].o = sp[0].o;
	LINE_NUMBER(181);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, (frame[9].o));
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[9].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-outline"_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean])(ctx, (frame[2].o), (frame[10].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[2].o), (frame[3].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_int_R_arc_graphics_Pixmap(ctx, (frame[11].o), (frame[5].o), (frame[6].i), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(186);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[12].o));
	LINE_NUMBER(187);
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, (frame[2].o), (frame[1].o), (frame[10].o), (frame[12].o));
	LINE_NUMBER(188);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[12].o));
	}
label_1:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:makeOutline", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(ctx, (frame[6].o), (frame[4].o), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(198);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[7].o));
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[7].o));
	LINE_NUMBER(200);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	}
label_1:;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:makeOutline", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(205);
	((func_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (jint(4)));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:researchRequirements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	clinit_mindustry_type_ItemStack(ctx);
	sp[0].o = (jobject)SF_mindustry_type_ItemStack_empty;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:emoji", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ctype_UnlockableContent_emojiChar_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:emojiChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:hasEmoji", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_hasUnicodeStr_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:getDependencies", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_onUnlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:onUnlock", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:showUnlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:logicVisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ctype_UnlockableContent_unlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:unlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked) != 0) goto label_1;
	}
	{
	LINE_NUMBER(253);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked = (jint(1));
	LINE_NUMBER(254);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-unlocked"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(256);
	((func_mindustry_ctype_UnlockableContent_onUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_onUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(257);
	clinit_mindustry_game_EventType$UnlockEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnlockEvent);
	init_mindustry_game_EventType$UnlockEvent_mindustry_ctype_UnlockableContent(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_quietUnlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:quietUnlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(264);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked = (jint(1));
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-unlocked"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:unlockedNowHost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
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

jbool M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:unlockedHost", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(276);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked) != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
	goto label_5;
label_1:;
	{
	LINE_NUMBER(277);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked) != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_5;
label_7:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:unlockedNow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool M_mindustry_ctype_UnlockableContent_unlocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:unlocked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked) != 0) goto label_3;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked) != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
	goto label_5;
label_1:;
	{
	LINE_NUMBER(288);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked) != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_5;
label_7:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ctype_UnlockableContent_clearUnlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:clearUnlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked) == 0) goto label_1;
	}
	{
	LINE_NUMBER(294);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_unlocked = (jint(0));
	LINE_NUMBER(295);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-unlocked"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ctype_UnlockableContent_locked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/UnlockableContent:locked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ctype_UnlockableContent;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field stats
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field description
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field details
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field credit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field databaseCategory
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field databaseTag
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field techNode
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
		annotations[1] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field techNodes
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[20]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field unlocked
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method checkStats
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ctype_UnlockableContent[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) nullptr,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_ctype_UnlockableContent_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
};

static FieldMetadata fields[] {
	{ "stats", &class_mindustry_world_meta_Stats, offsetof(mindustry_ctype_UnlockableContent, F_stats), "Lmindustry/world/meta/Stats;", 1 },
	{ "localizedName", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_localizedName), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_description), "Ljava/lang/String;", 1 },
	{ "details", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_details), "Ljava/lang/String;", 1 },
	{ "credit", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_credit), "Ljava/lang/String;", 1 },
	{ "alwaysUnlocked", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_alwaysUnlocked), "Z", 1 },
	{ "inlineDescription", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_inlineDescription), "Z", 1 },
	{ "hideDetails", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_hideDetails), "Z", 1 },
	{ "hideDatabase", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_hideDatabase), "Z", 1 },
	{ "generateIcons", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_generateIcons), "Z", 1 },
	{ "selectionSize", &class_float, offsetof(mindustry_ctype_UnlockableContent, F_selectionSize), "F", 1 },
	{ "uiIcon", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_ctype_UnlockableContent, F_uiIcon), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "fullIcon", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_ctype_UnlockableContent, F_fullIcon), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "fullOverride", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_fullOverride), "Ljava/lang/String;", 1 },
	{ "allDatabaseTabs", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_allDatabaseTabs), "Z", 1 },
	{ "shownPlanets", &class_arc_struct_ObjectSet, offsetof(mindustry_ctype_UnlockableContent, F_shownPlanets), "Larc/struct/ObjectSet;", 1 },
	{ "databaseTabs", &class_arc_struct_ObjectSet, offsetof(mindustry_ctype_UnlockableContent, F_databaseTabs), "Larc/struct/ObjectSet;", 1 },
	{ "databaseCategory", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_databaseCategory), "Ljava/lang/String;", 1 },
	{ "databaseTag", &class_java_lang_String, offsetof(mindustry_ctype_UnlockableContent, F_databaseTag), "Ljava/lang/String;", 1 },
	{ "techNode", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_ctype_UnlockableContent, F_techNode), "Lmindustry/content/TechTree$TechNode;", 1 },
	{ "techNodes", &class_arc_struct_Seq, offsetof(mindustry_ctype_UnlockableContent, F_techNodes), "Larc/struct/Seq;", 1 },
	{ "unlocked", &class_boolean, offsetof(mindustry_ctype_UnlockableContent, F_unlocked), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ctype_UnlockableContent_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "postInit", (intptr_t) M_mindustry_ctype_UnlockableContent_postInit, VTABLE_mindustry_ctype_UnlockableContent_postInit, "()V", 1 },
	{ "loadIcon", (intptr_t) M_mindustry_ctype_UnlockableContent_loadIcon, VTABLE_mindustry_ctype_UnlockableContent_loadIcon, "()V", 1 },
	{ "afterPatch", (intptr_t) M_mindustry_ctype_UnlockableContent_afterPatch, VTABLE_mindustry_ctype_UnlockableContent_afterPatch, "()V", 1 },
	{ "isBanned", (intptr_t) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_isBanned_R_boolean, "()Z", 1 },
	{ "isOnPlanet", (intptr_t) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean, "(Lmindustry/type/Planet;)Z", 1 },
	{ "getLogicId", (intptr_t) M_mindustry_ctype_UnlockableContent_getLogicId_R_int, VTABLE_mindustry_ctype_UnlockableContent_getLogicId_R_int, "()I", 1 },
	{ "displayDescription", (intptr_t) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String, VTABLE_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "checkStats", (intptr_t) M_mindustry_ctype_UnlockableContent_checkStats, VTABLE_mindustry_ctype_UnlockableContent_checkStats, "()V", 131073 },
	{ "setStats", (intptr_t) M_mindustry_ctype_UnlockableContent_setStats, VTABLE_mindustry_ctype_UnlockableContent_setStats, "()V", 1 },
	{ "computeStats", (intptr_t) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats, VTABLE_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats, "()Lmindustry/world/meta/Stats;", 1 },
	{ "displayExtra", (intptr_t) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table, VTABLE_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "createIcons", (intptr_t) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "makeOutline", (intptr_t) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int, VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int, "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V", 4 },
	{ "makeOutline", (intptr_t) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int, VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int, "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V", 4 },
	{ "makeOutline", (intptr_t) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int, VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int, "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V", 4 },
	{ "makeOutline", (intptr_t) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color, VTABLE_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color, "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V", 4 },
	{ "researchRequirements", (intptr_t) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "emoji", (intptr_t) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String, VTABLE_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "emojiChar", (intptr_t) M_mindustry_ctype_UnlockableContent_emojiChar_R_int, VTABLE_mindustry_ctype_UnlockableContent_emojiChar_R_int, "()I", 1 },
	{ "hasEmoji", (intptr_t) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean, "()Z", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons, VTABLE_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "onUnlock", (intptr_t) M_mindustry_ctype_UnlockableContent_onUnlock, VTABLE_mindustry_ctype_UnlockableContent_onUnlock, "()V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_ctype_UnlockableContent_isHidden_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean, "()Z", 1 },
	{ "showUnlock", (intptr_t) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_showUnlock_R_boolean, "()Z", 1 },
	{ "logicVisible", (intptr_t) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_logicVisible_R_boolean, "()Z", 1 },
	{ "unlock", (intptr_t) M_mindustry_ctype_UnlockableContent_unlock, VTABLE_mindustry_ctype_UnlockableContent_unlock, "()V", 1 },
	{ "quietUnlock", (intptr_t) M_mindustry_ctype_UnlockableContent_quietUnlock, VTABLE_mindustry_ctype_UnlockableContent_quietUnlock, "()V", 1 },
	{ "unlockedNowHost", (intptr_t) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean, "()Z", 1 },
	{ "unlockedHost", (intptr_t) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean, "()Z", 1 },
	{ "unlockedNow", (intptr_t) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean, "()Z", 1 },
	{ "unlocked", (intptr_t) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean, "()Z", 1 },
	{ "clearUnlock", (intptr_t) M_mindustry_ctype_UnlockableContent_clearUnlock, VTABLE_mindustry_ctype_UnlockableContent_clearUnlock, "()V", 1 },
	{ "locked", (intptr_t) M_mindustry_ctype_UnlockableContent_locked_R_boolean, VTABLE_mindustry_ctype_UnlockableContent_locked_R_boolean, "()Z", 1 },
};

Class class_mindustry_ctype_UnlockableContent{
		.nativeName = (intptr_t) "mindustry/ctype/UnlockableContent",
		.parentClass = (intptr_t) &class_mindustry_ctype_MappableContent,
		.size = sizeof(mindustry_ctype_UnlockableContent),
		.classVtable = (intptr_t) vtable_mindustry_ctype_UnlockableContent,
		.staticInitializer = (intptr_t) clinit_mindustry_ctype_UnlockableContent,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ctype_UnlockableContent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ctype_UnlockableContent = registerClass(&class_mindustry_ctype_UnlockableContent);

}
