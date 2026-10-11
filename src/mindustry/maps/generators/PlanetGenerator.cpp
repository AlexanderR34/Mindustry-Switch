#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/Map.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Boolf_9.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Floatf_5.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Floatf_3.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Floatf_4.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Boolf_7.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Boolf_8.h"
#include "mindustry/world/TileGen.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Boolf_5.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/maps/generators/PlanetGenerator_invoke_arc_func_Boolf_6.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "mindustry/content/Weathers.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/noise/Simplex.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Weather.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "mindustry/type/Sector.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {

jobject SF_mindustry_maps_generators_PlanetGenerator_tmpItems;

void mark_mindustry_maps_generators_PlanetGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_generators_PlanetGenerator_tmpItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_generators_PlanetGenerator_tmpItems)->clazz)->markFunction)((jobject) SF_mindustry_maps_generators_PlanetGenerator_tmpItems, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_generators_BasicGenerator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_generators_PlanetGenerator *) object;
	if (self->F_sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sector)->clazz)->markFunction)((jobject) self->F_sector, mark, depth + 1);
}

void clinit_mindustry_maps_generators_PlanetGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
}

void init_mindustry_maps_generators_PlanetGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_maps_generators_BasicGenerator(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed = (jint(0));
	LINE_NUMBER(26);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:generateSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:onSectorCaptured", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:onSectorLost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:beforeSaveWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:getLockedText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[gray]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(59533)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"locked"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:getLockedIcon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchToNumbered) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"lock"_j));
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:allowLanding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchToNumbered) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:findLaunchCandidate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_mindustry_type_Sector_allowLaunchLoadout_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_allowLaunchLoadout_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_PlanetGenerator_tmpItems;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	SF_mindustry_maps_generators_PlanetGenerator_tmpItems = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(62);
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_PlanetGenerator_tmpItems;
	((func_mindustry_type_ItemSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_generator;
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK(sp[0].o))->F_map;
	sp[0].o = (jobject)((func_mindustry_maps_Map_rules_R_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_rules_R_mindustry_game_Rules])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[3].o)))->F_loadout;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	jint temp0 = (jint)((func_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(67);
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_PlanetGenerator_tmpItems;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	}
label_9:;
	LINE_NUMBER(69);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(72);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq])(ctx, (frame[2].o));
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_generators_PlanetGenerator_tmpItems;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_11:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(79);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_13;
	}
	INST_ALOAD(2);
	goto label_14;
label_13:;
	INST_ACONST_NULL();
label_14:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_16;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
	{
	LINE_NUMBER(83);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(84);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o != nullptr) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(87);
	if ((frame[4].o) != nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(88);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_4(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_4 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}
label_19:;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:allowAcceleratorLanding", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchToNumbered);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:addWeather", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	if (!((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather) {
		clinit_arc_struct_Seq(ctx);
		sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_int(ctx, sp[0].o, (jint(1)));
		((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather = (jref) sp[0].o;
	}
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(106);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(3.0f)), -1)) < 0) goto label_7;
	}
	LINE_NUMBER(111);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(117);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[7].o));
	}
label_12:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	LINE_NUMBER(125);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_5(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_5 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Floatf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_maps_generators_PlanetGenerator_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size));
	frame[6].o = sp[0].o;
	LINE_NUMBER(134);
	frame[7].i = (jint(0));
	}
label_21:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size)) goto label_22;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[7].i));
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((checkCast(ctx, &class_arc_struct_ObjectIntMap$Entry, sp[1].o))))->F_key;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_mindustry_world_Block, sp[1].o));
	LINE_NUMBER(134);
	INST_IINC(7, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(139);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ice"_j))));
	if (temp0 != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snow"_j))));
	if (temp0 == 0) goto label_25;
	}
label_26:;
	INST_ICONST(1);
	goto label_27;
label_25:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(140);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= 0) goto label_29;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_29;
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sand"_j))));
	if (temp0 != 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(141);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= 0) goto label_32;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_32;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_32;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sand;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(142);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore"_j))));
	if (temp0 != 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"moss"_j))));
	if (temp0 != 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tainted"_j))));
	if (temp0 == 0) goto label_35;
	}
label_36:;
	INST_ICONST(1);
	goto label_37;
label_35:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(144);
	if ((frame[7].i) == 0) goto label_39;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	clinit_mindustry_content_Weathers(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Weathers_snow;
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_39:;
	{
	LINE_NUMBER(148);
	if ((frame[8].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	clinit_mindustry_content_Weathers(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Weathers_rain;
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	clinit_mindustry_content_Weathers(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Weathers_fog;
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	{
	LINE_NUMBER(153);
	if ((frame[9].i) == 0) goto label_44;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	clinit_mindustry_content_Weathers(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Weathers_sandstorm;
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_44:;
	{
	LINE_NUMBER(157);
	if ((frame[10].i) == 0) goto label_46;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	clinit_mindustry_content_Weathers(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Weathers_sporestorm;
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_46:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:genTile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_generators_PlanetGenerator_noise_float_float_double_double_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:noise", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	frame[9].d = param5;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect;
	sp[0].o = (jobject)((func_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[11].o = sp[0].o;
	LINE_NUMBER(169);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, (jint(0)), (frame[3].d), (frame[5].d), ((jdouble(1)) / (frame[7].d)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_z))));
	popStackFrame(ctx);
	return (temp0 * (jfloat((frame[9].d))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:getSizeScl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jfloat(3200.0f));
	}

	popStackFrame(ctx);
}

jint M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:getSectorSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_rect;
	jfloat temp0 = (jfloat)((mindustry_type_Sector$SectorRect *) NULL_CHECK(sp[0].o))->F_radius;
	jfloat temp1 = (jfloat)((func_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float])(ctx, (frame[0].o));
	frame[2].i = (jint((temp0 * temp1)));
	LINE_NUMBER(179);
	if (((frame[2].i) % (jint(2))) != 0) goto label_2;
	}
	INST_ILOAD(2);
	goto label_3;
label_2:;
	{
	jint temp0 = (frame[2].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:generate", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(183);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles = (jref) (frame[1].o);
	LINE_NUMBER(184);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed = (((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[3].o)))->F_seedOffset) + ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed));
	LINE_NUMBER(185);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector = (jref) (frame[2].o);
	LINE_NUMBER(186);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(187);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((((jint)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_id) + ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[3].o)))->F_seedOffset)) + ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed)))));
	LINE_NUMBER(190);
	clinit_mindustry_world_TileGen(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_TileGen);
	init_mindustry_world_TileGen(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height)) goto label_9;
	}
	{
	LINE_NUMBER(192);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width)) goto label_12;
	}
	{
	LINE_NUMBER(193);
	((func_mindustry_world_TileGen_reset) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_TileGen_reset])(ctx, (frame[4].o));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect;
	sp[0].o = (jobject)((func_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat((frame[6].i))) / (jfloat(((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width)))), ((jfloat((frame[5].i))) / (jfloat(((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height)))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(196);
	((func_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen])(ctx, (frame[0].o), (frame[7].o), (frame[4].o));
	LINE_NUMBER(197);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = frame[5].i;
	clinit_mindustry_world_Tile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tile);
	jint temp2 = frame[6].i;
	jint temp3 = frame[5].i;
	sp[2].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[4].o)))->F_floor;
	sp[3].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[4].o)))->F_overlay;
	sp[4].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[4].o)))->F_block;
	init_mindustry_world_Tile_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(ctx, sp[1].o, temp2, temp3, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(192);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(191);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(201);
	((func_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_PlanetGenerator_lambda$addWeather$1_arc_struct_ObjectIntMap$Entry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$addWeather$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	if (((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[0].o)))->F_value) >= (30)) goto label_1;
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

jfloat SM_mindustry_maps_generators_PlanetGenerator_lambda$addWeather$0_arc_struct_ObjectIntMap$Entry_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$addWeather$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jfloat((-((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[0].o)))->F_value))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$4_mindustry_type_Sector_mindustry_type_Sector_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$findLaunchCandidate$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$3_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$findLaunchCandidate$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
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

jbool SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$2_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$findLaunchCandidate$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
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

jfloat SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$1_mindustry_type_Sector_mindustry_type_Sector_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$findLaunchCandidate$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$0_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/PlanetGenerator:lambda$findLaunchCandidate$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq])(ctx, (frame[0].o));
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_generators_PlanetGenerator_tmpItems;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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
	auto &clazz = class_mindustry_maps_generators_PlanetGenerator;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field tmpItems
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field sector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getLockedIcon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findLaunchCandidate
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
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
}

void *vtable_mindustry_maps_generators_PlanetGenerator[] {
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
	(void *) M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles,
	(void *) M_mindustry_maps_generators_BasicGenerator_generate,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_cliffs,
	(void *) M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_distort_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_noise_float_float_double_double_double_double_R_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf,
	(void *) M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_decoration_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_erase_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_trimDark,
	(void *) M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int,
	(void *) M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean,
	(void *) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules,
	(void *) M_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
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
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V" },
	{ "postGenerate", "(Lmindustry/world/Tiles;)V" },
	{ "generate", "()V" },
	{ "median", "(I)V" },
	{ "median", "(ID)V" },
	{ "median", "(IDLmindustry/world/Block;)V" },
	{ "ores", "(Larc/struct/Seq;)V" },
	{ "ore", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "oreAround", "(Lmindustry/world/Block;Lmindustry/world/Block;IFF)V" },
	{ "wallOre", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "cliffs", "()V" },
	{ "terrain", "(Lmindustry/world/Block;FFF)V" },
	{ "noise", "(Lmindustry/world/Block;Lmindustry/world/Block;IFFF)V" },
	{ "overlay", "(Lmindustry/world/Block;Lmindustry/world/Block;FIFFF)V" },
	{ "tech", "()V" },
	{ "tech", "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "distort", "(FF)V" },
	{ "scatter", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "each", "(Larc/func/Intc2;)V" },
	{ "cells", "(I)V" },
	{ "cells", "(IIII)V" },
	{ "noise", "(FFDD)F" },
	{ "noise", "(FFDDDD)F" },
	{ "noise", "(FFDDD)F" },
	{ "pass", "(Larc/func/Intc2;)V" },
	{ "nearWall", "(II)Z" },
	{ "nearAir", "(II)Z" },
	{ "removeWall", "(IIILarc/func/Boolf;)V" },
	{ "near", "(IIILmindustry/world/Block;)Z" },
	{ "decoration", "(F)V" },
	{ "blend", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "brush", "(Larc/struct/Seq;I)V" },
	{ "erase", "(III)V" },
	{ "pathfind", "(IIIILmindustry/ai/Astar$TileHeuristic;Lmindustry/ai/Astar$DistanceHeuristic;)Larc/struct/Seq;" },
	{ "trimDark", "()V" },
	{ "inverseFloodFill", "(Lmindustry/world/Tile;)V" },
	{ "lambda$brush$0", "(ILmindustry/world/Tile;)V" },
	{ "lambda$decoration$0", "(FII)V" },
	{ "lambda$cells$1", "(ILarc/struct/GridBits;Larc/struct/GridBits;IIII)V" },
	{ "lambda$cells$0", "(Larc/struct/GridBits;II)V" },
	{ "lambda$scatter$0", "(FLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$distort$0", "(FF[S[SII)V" },
	{ "lambda$tech$0", "(ILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$overlay$0", "(IFFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$noise$0", "(IFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$terrain$0", "(FFFLmindustry/world/Block;II)V" },
	{ "lambda$wallOre$0", "(FFLmindustry/world/Block;ZLmindustry/world/Block;II)V" },
	{ "lambda$ore$0", "(Lmindustry/world/Block;FFLmindustry/world/Block;II)V" },
	{ "lambda$ores$0", "(Larc/struct/Seq;II)V" },
	{ "lambda$median$2", "(Lmindustry/world/Block;[S[SII)V" },
	{ "lambda$median$0", "(Lmindustry/world/Block;I[SD[SII)V" },
	{ "lambda$median$1", "(II)V" },
	{ "getHeight", "(Larc/math/geom/Vec3;)F" },
	{ "getColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "getEmissiveColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "isEmissive", "()Z" },
	{ "skip", "(Larc/math/geom/Vec3;)Z" },
	{ "generateSector", "(Lmindustry/type/Sector;)V" },
	{ "onSectorCaptured", "(Lmindustry/type/Sector;)V" },
	{ "onSectorLost", "(Lmindustry/type/Sector;)V" },
	{ "beforeSaveWrite", "(Lmindustry/type/Sector;)V" },
	{ "getLockedText", "(Lmindustry/type/Sector;Ljava/lang/StringBuilder;)V" },
	{ "getLockedIcon", "(Lmindustry/type/Sector;)Larc/graphics/g2d/TextureRegion;" },
	{ "allowLanding", "(Lmindustry/type/Sector;)Z" },
	{ "findLaunchCandidate", "(Lmindustry/type/Sector;Lmindustry/type/Sector;)Lmindustry/type/Sector;" },
	{ "allowAcceleratorLanding", "(Lmindustry/type/Sector;)Z" },
	{ "addWeather", "(Lmindustry/type/Sector;Lmindustry/game/Rules;)V" },
	{ "genTile", "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V" },
	{ "getSizeScl", "()F" },
	{ "getSectorSize", "(Lmindustry/type/Sector;)I" },
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V" },
};

static jclass interfaces[] { &class_mindustry_graphics_g3d_HexMesher, };

static FieldMetadata fields[] {
	{ "tmpItems", &class_mindustry_type_ItemSeq, (intptr_t) &SF_mindustry_maps_generators_PlanetGenerator_tmpItems, "Lmindustry/type/ItemSeq;", 12 },
	{ "baseSeed", &class_int, offsetof(mindustry_maps_generators_PlanetGenerator, F_baseSeed), "I", 1 },
	{ "seed", &class_int, offsetof(mindustry_maps_generators_PlanetGenerator, F_seed), "I", 1 },
	{ "sector", &class_mindustry_type_Sector, offsetof(mindustry_maps_generators_PlanetGenerator, F_sector), "Lmindustry/type/Sector;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_PlanetGenerator, 0, "()V", 1 },
	{ "generateSector", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector, VTABLE_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "onSectorCaptured", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector, VTABLE_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "onSectorLost", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector, VTABLE_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "beforeSaveWrite", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector, VTABLE_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "getLockedText", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder, VTABLE_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder, "(Lmindustry/type/Sector;Ljava/lang/StringBuilder;)V", 1 },
	{ "getLockedIcon", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion, "(Lmindustry/type/Sector;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "allowLanding", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean, VTABLE_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "findLaunchCandidate", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector, VTABLE_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)Lmindustry/type/Sector;", 1 },
	{ "allowAcceleratorLanding", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean, VTABLE_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "addWeather", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, VTABLE_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, "(Lmindustry/type/Sector;Lmindustry/game/Rules;)V", 1 },
	{ "genTile", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, VTABLE_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V", 4 },
	{ "noise", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_noise_float_float_double_double_double_double_R_float, VTABLE_mindustry_maps_generators_PlanetGenerator_noise_float_float_double_double_double_double_R_float, "(FFDDDD)F", 4 },
	{ "getSizeScl", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float, VTABLE_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float, "()F", 1 },
	{ "getSectorSize", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int, VTABLE_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int, "(Lmindustry/type/Sector;)I", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams, VTABLE_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams, "(Lmindustry/world/Tiles;Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V", 1 },
	{ "lambda$addWeather$1", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$addWeather$1_arc_struct_ObjectIntMap$Entry_R_boolean, 0, "(Larc/struct/ObjectIntMap$Entry;)Z", 4106 },
	{ "lambda$addWeather$0", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$addWeather$0_arc_struct_ObjectIntMap$Entry_R_float, 0, "(Larc/struct/ObjectIntMap$Entry;)F", 4106 },
	{ "lambda$findLaunchCandidate$4", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$4_mindustry_type_Sector_mindustry_type_Sector_R_float, 0, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)F", 4106 },
	{ "lambda$findLaunchCandidate$3", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$3_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$findLaunchCandidate$2", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$2_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$findLaunchCandidate$1", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$1_mindustry_type_Sector_mindustry_type_Sector_R_float, 0, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)F", 4106 },
	{ "lambda$findLaunchCandidate$0", (intptr_t) SM_mindustry_maps_generators_PlanetGenerator_lambda$findLaunchCandidate$0_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
};

Class class_mindustry_maps_generators_PlanetGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/PlanetGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_BasicGenerator,
		.size = sizeof(mindustry_maps_generators_PlanetGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_PlanetGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_PlanetGenerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_PlanetGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_PlanetGenerator = registerClass(&class_mindustry_maps_generators_PlanetGenerator);

}
