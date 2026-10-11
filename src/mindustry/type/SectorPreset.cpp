#include "mindustry/type/SectorPreset.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/graphics/MultiPacker.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/type/Planet_PlanetData.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/SectorPreset_invoke_arc_func_Cons_1.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {


void mark_mindustry_type_SectorPreset(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_SectorPreset *) object;
	if (self->F_generator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generator)->clazz)->markFunction)((jobject) self->F_generator, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sector)->clazz)->markFunction)((jobject) self->F_sector, mark, depth + 1);
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
	if (self->F_shieldSectors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shieldSectors)->clazz)->markFunction)((jobject) self->F_shieldSectors, mark, depth + 1);
	if (self->F_outlineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineColor)->clazz)->markFunction)((jobject) self->F_outlineColor, mark, depth + 1);
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
}

void clinit_mindustry_type_SectorPreset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
}

void init_mindustry_type_SectorPreset_java_lang_String_mindustry_type_Planet_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_SectorPreset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(55);
	init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_type_Planet_int(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_type_Planet_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_SectorPreset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(59);
	init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_mod_Mods$LoadedMod(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(60);
	((func_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int])(ctx, (frame[0].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_SectorPreset_java_lang_String_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_SectorPreset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_mod_Mods$LoadedMod(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_SectorPreset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(70);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_captureWave = (jint(0));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_SectorPreset_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_type_SectorPreset_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_type_SectorPreset_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_startWaveTimeMultiplier = (jfloat(2));
	LINE_NUMBER(26);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_addStartingItems = (jint(0));
	LINE_NUMBER(27);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_noLighting = (jint(0));
	LINE_NUMBER(31);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_requireUnlock = (jint(1));
	LINE_NUMBER(33);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_showHidden = (jint(0));
	LINE_NUMBER(34);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_showSectorLandInfo = (jint(1));
	LINE_NUMBER(36);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_overrideLaunchDefaults = (jint(0));
	LINE_NUMBER(38);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_allowLaunchSchematics = (jint(0));
	LINE_NUMBER(40);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_allowLaunchLoadout = (jint(0));
	LINE_NUMBER(42);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_attackAfterWaves = (jint(0));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_shieldSectors = (jref) sp[1].o;
	LINE_NUMBER(48);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(49);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outlineRadius = (jint(5));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(71);
	if ((frame[3].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) (frame[3].o);
	}
label_18:;
	{
	LINE_NUMBER(74);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_fileName = (jref) (frame[2].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:initialize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(78);
	((func_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:initialize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(82);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_generator;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_generators_FileMapGenerator);
	sp[2].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_fileName;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp += 3;
	if (temp0 != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_SectorPreset *) NULL_CHECK(sp[-1].o))->F_fileName;
label_6:;
	{
	sp -= 4;
	init_mindustry_maps_generators_FileMapGenerator_java_lang_String_mindustry_type_SectorPreset(ctx, sp[1].o, sp[3].o, (frame[0].o));
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_generator = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(86);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_originalPosition = (frame[2].i);
	LINE_NUMBER(87);
	if ((frame[3].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(90);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_type_Planet$PlanetData *) NULL_CHECK((frame[4].o)))->F_presets;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	frame[2].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(94);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	frame[2].i = (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp += 2;
	if ((frame[2].i) != (jint(-1))) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	INST_ILOAD(2);
label_14:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, sp[2].i);
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector = (jref) (checkCast(ctx, &class_mindustry_type_Sector, sp[1].o));
	LINE_NUMBER(97);
	if ((frame[2].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(98);
	((func_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset])(ctx, (frame[1].o), (frame[2].i), (frame[0].o));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(100);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Preset '@' doesn't have a sector assigned."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_removeContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:removeContent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	M_mindustry_ctype_Content_removeContent(ctx, (frame[0].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_sector;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_sector;
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_shieldSectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(118);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_sector;
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_shieldTarget = (jref) sp[1].o;
	LINE_NUMBER(119);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:createIcons", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(126);
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"sector-\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_ui;
	sp[2].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_atlas;
	sp[4].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"sector-\u0001"_j.string, 1, sp[4].o);
	sp[3].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[3].o, sp[4].o);
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_mindustry_type_SectorPreset_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o, ((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outlineRadius), ((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	}
label_2:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_loadIcon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:loadIcon", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_terrain;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"sector-\u0001"_j.string, 1, sp[3].o);
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_terrain;
	sp[4].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[4].o);
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_fullIcon = (jref) sp[2].o;
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon = (jref) sp[2].o;
	}
label_1:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_SectorPreset_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_description;
	if (sp[0].o != nullptr) goto label_1;
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

jobject M_mindustry_type_SectorPreset_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_SectorPreset_lambda$new$0_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorPreset:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_winWave = ((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[0].o)))->F_captureWave);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_SectorPreset;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field fileName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_SectorPreset[] {
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
	(void *) M_mindustry_type_SectorPreset_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_type_SectorPreset_removeContent,
	(void *) M_mindustry_type_SectorPreset_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_type_SectorPreset_loadIcon,
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
	(void *) M_mindustry_type_SectorPreset_createIcons_mindustry_graphics_MultiPacker,
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
	(void *) M_mindustry_type_SectorPreset_isHidden_R_boolean,
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
	(void *) M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int,
	(void *) M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean,
	(void *) M_mindustry_type_SectorPreset_lambda$new$0_mindustry_game_Rules,
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
	{ "initialize", "(Lmindustry/type/Planet;I)V" },
	{ "initialize", "(Lmindustry/type/Planet;IZ)V" },
	{ "lambda$new$0", "(Lmindustry/game/Rules;)V" },
};

static FieldMetadata fields[] {
	{ "generator", &class_mindustry_maps_generators_FileMapGenerator, offsetof(mindustry_type_SectorPreset, F_generator), "Lmindustry/maps/generators/FileMapGenerator;", 1 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_type_SectorPreset, F_planet), "Lmindustry/type/Planet;", 1 },
	{ "sector", &class_mindustry_type_Sector, offsetof(mindustry_type_SectorPreset, F_sector), "Lmindustry/type/Sector;", 1 },
	{ "captureWave", &class_int, offsetof(mindustry_type_SectorPreset, F_captureWave), "I", 1 },
	{ "rules", &class_arc_func_Cons, offsetof(mindustry_type_SectorPreset, F_rules), "Larc/func/Cons;", 1 },
	{ "difficulty", &class_float, offsetof(mindustry_type_SectorPreset, F_difficulty), "F", 1 },
	{ "startWaveTimeMultiplier", &class_float, offsetof(mindustry_type_SectorPreset, F_startWaveTimeMultiplier), "F", 1 },
	{ "addStartingItems", &class_boolean, offsetof(mindustry_type_SectorPreset, F_addStartingItems), "Z", 1 },
	{ "noLighting", &class_boolean, offsetof(mindustry_type_SectorPreset, F_noLighting), "Z", 1 },
	{ "isLastSector", &class_boolean, offsetof(mindustry_type_SectorPreset, F_isLastSector), "Z", 1 },
	{ "requireUnlock", &class_boolean, offsetof(mindustry_type_SectorPreset, F_requireUnlock), "Z", 1 },
	{ "showHidden", &class_boolean, offsetof(mindustry_type_SectorPreset, F_showHidden), "Z", 1 },
	{ "showSectorLandInfo", &class_boolean, offsetof(mindustry_type_SectorPreset, F_showSectorLandInfo), "Z", 1 },
	{ "overrideLaunchDefaults", &class_boolean, offsetof(mindustry_type_SectorPreset, F_overrideLaunchDefaults), "Z", 1 },
	{ "allowLaunchSchematics", &class_boolean, offsetof(mindustry_type_SectorPreset, F_allowLaunchSchematics), "Z", 1 },
	{ "allowLaunchLoadout", &class_boolean, offsetof(mindustry_type_SectorPreset, F_allowLaunchLoadout), "Z", 1 },
	{ "attackAfterWaves", &class_boolean, offsetof(mindustry_type_SectorPreset, F_attackAfterWaves), "Z", 1 },
	{ "originalPosition", &class_int, offsetof(mindustry_type_SectorPreset, F_originalPosition), "I", 1 },
	{ "shieldSectors", &class_arc_struct_Seq, offsetof(mindustry_type_SectorPreset, F_shieldSectors), "Larc/struct/Seq;", 1 },
	{ "outline", &class_boolean, offsetof(mindustry_type_SectorPreset, F_outline), "Z", 1 },
	{ "outlineRadius", &class_int, offsetof(mindustry_type_SectorPreset, F_outlineRadius), "I", 1 },
	{ "outlineColor", &class_arc_graphics_Color, offsetof(mindustry_type_SectorPreset, F_outlineColor), "Larc/graphics/Color;", 1 },
	{ "fileName", &class_java_lang_String, offsetof(mindustry_type_SectorPreset, F_fileName), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_SectorPreset_java_lang_String_mindustry_type_Planet_int, 0, "(Ljava/lang/String;Lmindustry/type/Planet;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_type_Planet_int, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/type/Planet;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_SectorPreset_java_lang_String_mindustry_mod_Mods$LoadedMod, 0, "(Ljava/lang/String;Lmindustry/mod/Mods$LoadedMod;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_mod_Mods$LoadedMod, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/Mods$LoadedMod;)V", 1 },
	{ "initialize", (intptr_t) M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int, VTABLE_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int, "(Lmindustry/type/Planet;I)V", 1 },
	{ "initialize", (intptr_t) M_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean, VTABLE_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean, "(Lmindustry/type/Planet;IZ)V", 1 },
	{ "removeContent", (intptr_t) M_mindustry_type_SectorPreset_removeContent, VTABLE_mindustry_type_SectorPreset_removeContent, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_type_SectorPreset_init, VTABLE_mindustry_type_SectorPreset_init, "()V", 1 },
	{ "createIcons", (intptr_t) M_mindustry_type_SectorPreset_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_type_SectorPreset_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "loadIcon", (intptr_t) M_mindustry_type_SectorPreset_loadIcon, VTABLE_mindustry_type_SectorPreset_loadIcon, "()V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_SectorPreset_isHidden_R_boolean, VTABLE_mindustry_type_SectorPreset_isHidden_R_boolean, "()Z", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_SectorPreset_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_SectorPreset_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_type_SectorPreset_lambda$new$0_mindustry_game_Rules, VTABLE_mindustry_type_SectorPreset_lambda$new$0_mindustry_game_Rules, "(Lmindustry/game/Rules;)V", 4098 },
};

Class class_mindustry_type_SectorPreset{
		.nativeName = (intptr_t) "mindustry/type/SectorPreset",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_SectorPreset),
		.classVtable = (intptr_t) vtable_mindustry_type_SectorPreset,
		.staticInitializer = (intptr_t) clinit_mindustry_type_SectorPreset,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_SectorPreset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_SectorPreset = registerClass(&class_mindustry_type_SectorPreset);

}
