#include "mindustry/type/Sector.h"
#include "arc/func/Prov.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/type/Sector_invoke_arc_func_Prov_1.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Iconc.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule_ItemConsumer_4.h"
#include "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule_ItemConsumer_3.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "arc/math/geom/Plane.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule_ItemConsumer_5.h"
#include "java/lang/Object.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Sector_invoke_arc_func_Boolf_3.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/type/Sector_invoke_arc_func_Boolf_4.h"
#include "mindustry/type/Sector_invoke_arc_func_Boolf_5.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/math/geom/Vec3.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/type/Planet.h"
#include "java/lang/Class.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {

jobject SF_mindustry_type_Sector_threats;
jobject SF_mindustry_type_Sector_tmpSeq1;

void mark_mindustry_type_Sector(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_Sector_threats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Sector_threats)->clazz)->markFunction)((jobject) SF_mindustry_type_Sector_threats, mark, depth + 1);
		if (SF_mindustry_type_Sector_tmpSeq1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Sector_tmpSeq1)->clazz)->markFunction)((jobject) SF_mindustry_type_Sector_tmpSeq1, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_Sector *) object;
	if (self->F_rect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rect)->clazz)->markFunction)((jobject) self->F_rect, mark, depth + 1);
	if (self->F_plane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plane)->clazz)->markFunction)((jobject) self->F_plane, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_save)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_save)->clazz)->markFunction)((jobject) self->F_save, mark, depth + 1);
	if (self->F_preset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preset)->clazz)->markFunction)((jobject) self->F_preset, mark, depth + 1);
	if (self->F_shieldTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shieldTarget)->clazz)->markFunction)((jobject) self->F_shieldTarget, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_SectorInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_SectorInfo);
	init_mindustry_game_SectorInfo(ctx, sp[1].o);
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(43);
	((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(44);
	((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[2].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Plane(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Plane);
	init_arc_math_geom_Plane(ctx, sp[1].o);
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_plane = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[2].o)))->F_corners;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_6;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Sector$SectorRect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Sector$SectorRect);
	jfloat temp0 = jfloat(1);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Vec3_Zero;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, sp[2].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, sp[3].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Vec3_X;
	sp[4].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, sp[4].o);
	init_mindustry_type_Sector$SectorRect_float_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_float(ctx, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)));
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect])(ctx, (frame[0].o));
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(52);
	((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id = ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[2].o)))->F_id);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_near_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:near", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	clinit_mindustry_type_Sector(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Sector_tmpSeq1;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(58);
	clinit_mindustry_type_Sector(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Sector_tmpSeq1;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector])(ctx, sp[1].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(61);
	clinit_mindustry_type_Sector(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Sector_tmpSeq1;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_near_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:near", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector])(ctx, sp[1].o, (frame[5].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isNear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((func_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector])(ctx, sp[0].o, (frame[5].o));
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(71);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_displayThreat_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:displayThreat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	frame[1].f = (jfloat(0.25f));
	LINE_NUMBER(82);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_round_float_float_R_float(ctx, ((jfloat)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_threat), (frame[1].f));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp += 2;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_difficulty), (jfloat(13.0f)));
	if (temp0 == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"unreasonable"_j));
	goto label_4;
label_3:;
	{
	clinit_mindustry_type_Sector(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Sector_threats;
	jint temp0 = jint((((jfloat)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_threat) / (frame[1].f)));
	clinit_mindustry_type_Sector(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Sector_threats;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1);
	sp += 1;
	}
label_4:;
	{
	sp -= 3;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"threat.\u0001"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_unlocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:unlocked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_alwaysUnlocked) == 0) goto label_2;
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

jbool M_mindustry_type_Sector_allowLaunchSchematics_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:allowLaunchSchematics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_overrideLaunchDefaults) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	jint temp0 = (jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_allowLaunchSchematics;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	jint temp0 = (jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchSchematics;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_allowLaunchLoadout_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:allowLaunchLoadout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_overrideLaunchDefaults) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	jint temp0 = (jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_allowLaunchLoadout;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	jint temp0 = (jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchLoadout;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_saveInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:saveInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-s-\u0001-info"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_loadInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:loadInfo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-s-\u0001-info"_j.string, 2, sp[2].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)));
	sp[3].o = ((jobject) &class_mindustry_game_SectorInfo);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_type_Sector_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_arc_func_Prov_1);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info = (jref) (checkCast(ctx, &class_mindustry_game_SectorInfo, sp[1].o));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_type_Sector_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_resources;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_type_Sector_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_arc_func_Boolf_4);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_clearInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:clearInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_SectorInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_SectorInfo);
	init_mindustry_game_SectorInfo(ctx, sp[1].o);
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-s-\u0001-info"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)));
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_isShielded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isShielded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_shieldSectors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_shieldSectors;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_type_Sector_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_type_Sector_isAttacked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isAttacked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attack) == 0) goto label_5;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_7;
label_5:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_hasBase_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:hasBase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_1;
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

jbool M_mindustry_type_Sector_isFrozen_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isFrozen", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_type_Sector_hasEnemyBase_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:hasEnemyBase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	if (((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_generateEnemyBase) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_captureWave) != 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attack) != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_3:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_isBeingPlayed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isBeingPlayed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
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

jobject M_mindustry_type_Sector_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:name", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showHidden) == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(166);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[0].o));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_icon;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	jint temp0 = (jint)((func_mindustry_type_SectorPreset_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_SectorPreset_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	sp += 1;
	goto label_2;
	}
label_4:;
	INST_ACONST_NULL();
	goto label_2;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_iconChar_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:iconChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_contentIcon;
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_icon;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_icon;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar(temp0))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_isCaptured_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:isCaptured", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attack) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Sector_hasSave_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:hasSave", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_save;
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_mindustry_type_Sector_locked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:locked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_mindustry_type_Sector_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_unlocked_R_boolean])(ctx, (frame[0].o));
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

jfloat M_mindustry_type_Sector_getLight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:getLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (-temp0));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(197);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(199);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return ((temp1 + (jfloat(1))) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_Sector_getSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:getSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int])(ctx, sp[0].o, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:removeItems", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3(ctx);
		auto proxy = (mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	((func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_removeItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:removeItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, (frame[3].o), (frame[1].o), (-(frame[2].i)));
	LINE_NUMBER(216);
	((func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_addItems_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:addItems", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(223);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(224);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[3].i = ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_storageCapacity);
	LINE_NUMBER(225);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_4(ctx);
		auto proxy = (mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_4 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_4);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_5(ctx);
		auto proxy = (mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_5 *) gcAlloc(ctx, &class_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_type_ItemSeq_checkNegative) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_checkNegative])(ctx, sp[0].o);
	LINE_NUMBER(230);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_items_R_mindustry_type_ItemSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:items", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	sp[1].o = (jobject)((func_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule])(ctx, sp[1].o);
	((func_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_items;
	((func_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	jint temp0 = (jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001#\u0001 (\u0001)"_j.string, 3, sp[0].o, boxInteger(ctx, temp0), sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:makeRect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(257);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_corners;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_v;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_radius));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(257);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(261);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(262);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(263);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(262);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(266);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (jfloat((((jarray) nullCheck(ctx, (frame[1].o)))->length)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(268);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[3].f = (temp0 * (jfloat(0.98f)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_plane;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_plane;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_plane;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, (frame[2].o));
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, (jfloat(-4.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))))->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(279);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float])(ctx, (frame[6].o), (frame[4].o));
	frame[7].f = temp1;
	LINE_NUMBER(281);
	clinit_mindustry_type_Sector$SectorRect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Sector$SectorRect);
	init_mindustry_type_Sector$SectorRect_float_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_float(ctx, sp[0].o, (frame[3].f), (frame[2].o), (frame[4].o), (frame[5].o), (frame[7].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$addItems$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = (jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_storageCapacity;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_items;
	jint temp1 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 - temp1), (frame[2].i));
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp2);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Sector_lambda$addItems$0_mindustry_world_modules_ItemModule_int_mindustry_type_Item_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$addItems$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 - temp1), (frame[3].i));
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp2);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Sector_lambda$removeItems$0_mindustry_type_ItemSeq_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$removeItems$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(209);
	((func_mindustry_type_ItemSeq_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_set_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (-(frame[2].i)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_Sector_lambda$isShielded$0_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$isShielded$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[0].o));
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

jbool SM_mindustry_type_Sector_lambda$loadInfo$1_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$loadInfo$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	if ((frame[0].o) == nullptr) goto label_1;
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

jbool SM_mindustry_type_Sector_lambda$loadInfo$0_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:lambda$loadInfo$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(114);
	if ((frame[0].o) != nullptr) goto label_1;
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

void clinit_mindustry_type_Sector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector(ctx);
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"low"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"medium"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"high"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"extreme"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"eradication"_j)));
	clinit_mindustry_type_Sector(ctx);
	SF_mindustry_type_Sector_threats = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_type_Sector(ctx);
	SF_mindustry_type_Sector_tmpSeq1 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Sector;
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

	{ // Field save
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field preset
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field shieldTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method iconChar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_Sector[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_Sector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_Sector_near_R_arc_struct_Seq,
	(void *) M_mindustry_type_Sector_near_arc_func_Cons,
	(void *) M_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_type_Sector_displayThreat_R_java_lang_String,
	(void *) M_mindustry_type_Sector_unlocked_R_boolean,
	(void *) M_mindustry_type_Sector_allowLaunchSchematics_R_boolean,
	(void *) M_mindustry_type_Sector_allowLaunchLoadout_R_boolean,
	(void *) M_mindustry_type_Sector_saveInfo,
	(void *) M_mindustry_type_Sector_loadInfo,
	(void *) M_mindustry_type_Sector_clearInfo,
	(void *) M_mindustry_type_Sector_isShielded_R_boolean,
	(void *) M_mindustry_type_Sector_isAttacked_R_boolean,
	(void *) M_mindustry_type_Sector_hasBase_R_boolean,
	(void *) M_mindustry_type_Sector_isFrozen_R_boolean,
	(void *) M_mindustry_type_Sector_hasEnemyBase_R_boolean,
	(void *) M_mindustry_type_Sector_isBeingPlayed_R_boolean,
	(void *) M_mindustry_type_Sector_name_R_java_lang_String,
	(void *) M_mindustry_type_Sector_setName_java_lang_String,
	(void *) M_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_type_Sector_iconChar_R_java_lang_String,
	(void *) M_mindustry_type_Sector_isCaptured_R_boolean,
	(void *) M_mindustry_type_Sector_hasSave_R_boolean,
	(void *) M_mindustry_type_Sector_locked_R_boolean,
	(void *) M_mindustry_type_Sector_getLight_R_float,
	(void *) M_mindustry_type_Sector_getSize_R_int,
	(void *) M_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_Sector_removeItem_mindustry_type_Item_int,
	(void *) M_mindustry_type_Sector_addItems_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_Sector_items_R_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect,
	(void *) M_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int,
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
	{ "near", "()Larc/struct/Seq;" },
	{ "near", "(Larc/func/Cons;)V" },
	{ "isNear", "(Lmindustry/type/Sector;)Z" },
	{ "displayThreat", "()Ljava/lang/String;" },
	{ "unlocked", "()Z" },
	{ "allowLaunchSchematics", "()Z" },
	{ "allowLaunchLoadout", "()Z" },
	{ "saveInfo", "()V" },
	{ "loadInfo", "()V" },
	{ "clearInfo", "()V" },
	{ "isShielded", "()Z" },
	{ "isAttacked", "()Z" },
	{ "hasBase", "()Z" },
	{ "isFrozen", "()Z" },
	{ "hasEnemyBase", "()Z" },
	{ "isBeingPlayed", "()Z" },
	{ "name", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "iconChar", "()Ljava/lang/String;" },
	{ "isCaptured", "()Z" },
	{ "hasSave", "()Z" },
	{ "locked", "()Z" },
	{ "getLight", "()F" },
	{ "getSize", "()I" },
	{ "removeItems", "(Lmindustry/type/ItemSeq;)V" },
	{ "removeItem", "(Lmindustry/type/Item;I)V" },
	{ "addItems", "(Lmindustry/type/ItemSeq;)V" },
	{ "items", "()Lmindustry/type/ItemSeq;" },
	{ "makeRect", "()Lmindustry/type/Sector$SectorRect;" },
	{ "lambda$addItems$1", "(Lmindustry/type/Item;I)V" },
};

static jclass innerClasses[] {
	&class_mindustry_type_Sector$SectorRect,
};

static FieldMetadata fields[] {
	{ "threats", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_type_Sector_threats, "[Ljava/lang/String;", 24 },
	{ "tmpSeq1", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_type_Sector_tmpSeq1, "Larc/struct/Seq;", 26 },
	{ "rect", &class_mindustry_type_Sector$SectorRect, offsetof(mindustry_type_Sector, F_rect), "Lmindustry/type/Sector$SectorRect;", 17 },
	{ "plane", &class_arc_math_geom_Plane, offsetof(mindustry_type_Sector, F_plane), "Larc/math/geom/Plane;", 17 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_type_Sector, F_planet), "Lmindustry/type/Planet;", 17 },
	{ "tile", &class_mindustry_graphics_g3d_PlanetGrid$Ptile, offsetof(mindustry_type_Sector, F_tile), "Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 17 },
	{ "id", &class_int, offsetof(mindustry_type_Sector, F_id), "I", 17 },
	{ "save", &class_mindustry_game_Saves$SaveSlot, offsetof(mindustry_type_Sector, F_save), "Lmindustry/game/Saves$SaveSlot;", 1 },
	{ "preset", &class_mindustry_type_SectorPreset, offsetof(mindustry_type_Sector, F_preset), "Lmindustry/type/SectorPreset;", 1 },
	{ "shieldTarget", &class_mindustry_type_Sector, offsetof(mindustry_type_Sector, F_shieldTarget), "Lmindustry/type/Sector;", 1 },
	{ "info", &class_mindustry_game_SectorInfo, offsetof(mindustry_type_Sector, F_info), "Lmindustry/game/SectorInfo;", 1 },
	{ "threat", &class_float, offsetof(mindustry_type_Sector, F_threat), "F", 1 },
	{ "generateEnemyBase", &class_boolean, offsetof(mindustry_type_Sector, F_generateEnemyBase), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile, 0, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetGrid$Ptile;)V", 1 },
	{ "near", (intptr_t) M_mindustry_type_Sector_near_R_arc_struct_Seq, VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "near", (intptr_t) M_mindustry_type_Sector_near_arc_func_Cons, VTABLE_mindustry_type_Sector_near_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "isNear", (intptr_t) M_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean, VTABLE_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "displayThreat", (intptr_t) M_mindustry_type_Sector_displayThreat_R_java_lang_String, VTABLE_mindustry_type_Sector_displayThreat_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "unlocked", (intptr_t) M_mindustry_type_Sector_unlocked_R_boolean, VTABLE_mindustry_type_Sector_unlocked_R_boolean, "()Z", 1 },
	{ "allowLaunchSchematics", (intptr_t) M_mindustry_type_Sector_allowLaunchSchematics_R_boolean, VTABLE_mindustry_type_Sector_allowLaunchSchematics_R_boolean, "()Z", 1 },
	{ "allowLaunchLoadout", (intptr_t) M_mindustry_type_Sector_allowLaunchLoadout_R_boolean, VTABLE_mindustry_type_Sector_allowLaunchLoadout_R_boolean, "()Z", 1 },
	{ "saveInfo", (intptr_t) M_mindustry_type_Sector_saveInfo, VTABLE_mindustry_type_Sector_saveInfo, "()V", 1 },
	{ "loadInfo", (intptr_t) M_mindustry_type_Sector_loadInfo, VTABLE_mindustry_type_Sector_loadInfo, "()V", 1 },
	{ "clearInfo", (intptr_t) M_mindustry_type_Sector_clearInfo, VTABLE_mindustry_type_Sector_clearInfo, "()V", 1 },
	{ "isShielded", (intptr_t) M_mindustry_type_Sector_isShielded_R_boolean, VTABLE_mindustry_type_Sector_isShielded_R_boolean, "()Z", 1 },
	{ "isAttacked", (intptr_t) M_mindustry_type_Sector_isAttacked_R_boolean, VTABLE_mindustry_type_Sector_isAttacked_R_boolean, "()Z", 1 },
	{ "hasBase", (intptr_t) M_mindustry_type_Sector_hasBase_R_boolean, VTABLE_mindustry_type_Sector_hasBase_R_boolean, "()Z", 1 },
	{ "isFrozen", (intptr_t) M_mindustry_type_Sector_isFrozen_R_boolean, VTABLE_mindustry_type_Sector_isFrozen_R_boolean, "()Z", 1 },
	{ "hasEnemyBase", (intptr_t) M_mindustry_type_Sector_hasEnemyBase_R_boolean, VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean, "()Z", 1 },
	{ "isBeingPlayed", (intptr_t) M_mindustry_type_Sector_isBeingPlayed_R_boolean, VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean, "()Z", 1 },
	{ "name", (intptr_t) M_mindustry_type_Sector_name_R_java_lang_String, VTABLE_mindustry_type_Sector_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_mindustry_type_Sector_setName_java_lang_String, VTABLE_mindustry_type_Sector_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "icon", (intptr_t) M_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "iconChar", (intptr_t) M_mindustry_type_Sector_iconChar_R_java_lang_String, VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isCaptured", (intptr_t) M_mindustry_type_Sector_isCaptured_R_boolean, VTABLE_mindustry_type_Sector_isCaptured_R_boolean, "()Z", 1 },
	{ "hasSave", (intptr_t) M_mindustry_type_Sector_hasSave_R_boolean, VTABLE_mindustry_type_Sector_hasSave_R_boolean, "()Z", 1 },
	{ "locked", (intptr_t) M_mindustry_type_Sector_locked_R_boolean, VTABLE_mindustry_type_Sector_locked_R_boolean, "()Z", 1 },
	{ "getLight", (intptr_t) M_mindustry_type_Sector_getLight_R_float, VTABLE_mindustry_type_Sector_getLight_R_float, "()F", 1 },
	{ "getSize", (intptr_t) M_mindustry_type_Sector_getSize_R_int, VTABLE_mindustry_type_Sector_getSize_R_int, "()I", 1 },
	{ "removeItems", (intptr_t) M_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq, VTABLE_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "removeItem", (intptr_t) M_mindustry_type_Sector_removeItem_mindustry_type_Item_int, VTABLE_mindustry_type_Sector_removeItem_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "addItems", (intptr_t) M_mindustry_type_Sector_addItems_mindustry_type_ItemSeq, VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "items", (intptr_t) M_mindustry_type_Sector_items_R_mindustry_type_ItemSeq, VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq, "()Lmindustry/type/ItemSeq;", 1 },
	{ "toString", (intptr_t) M_mindustry_type_Sector_toString_R_java_lang_String, VTABLE_mindustry_type_Sector_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "makeRect", (intptr_t) M_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect, VTABLE_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect, "()Lmindustry/type/Sector$SectorRect;", 4 },
	{ "lambda$addItems$1", (intptr_t) M_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int, VTABLE_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 4098 },
	{ "lambda$addItems$0", (intptr_t) SM_mindustry_type_Sector_lambda$addItems$0_mindustry_world_modules_ItemModule_int_mindustry_type_Item_int, 0, "(Lmindustry/world/modules/ItemModule;ILmindustry/type/Item;I)V", 4106 },
	{ "lambda$removeItems$0", (intptr_t) SM_mindustry_type_Sector_lambda$removeItems$0_mindustry_type_ItemSeq_mindustry_type_Item_int, 0, "(Lmindustry/type/ItemSeq;Lmindustry/type/Item;I)V", 4106 },
	{ "lambda$isShielded$0", (intptr_t) SM_mindustry_type_Sector_lambda$isShielded$0_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$loadInfo$1", (intptr_t) SM_mindustry_type_Sector_lambda$loadInfo$1_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$loadInfo$0", (intptr_t) SM_mindustry_type_Sector_lambda$loadInfo$0_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_Sector, 0, "()V", 8 },
};

Class class_mindustry_type_Sector{
		.nativeName = (intptr_t) "mindustry/type/Sector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Sector),
		.classVtable = (intptr_t) vtable_mindustry_type_Sector,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Sector,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Sector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Sector = registerClass(&class_mindustry_type_Sector);

}
