#include "mindustry/game/Universe.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/game/Universe_invoke_arc_func_Boolf_3.h"
#include "arc/Events.h"
#include "mindustry/game/SectorInfo_ExportStat.h"
#include "arc/graphics/Color.h"
#include "mindustry/game/Universe_invoke_arc_func_Boolf_2.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/Universe_invoke_arc_func_Prov_2.h"
#include "mindustry/game/Universe_invoke_arc_func_Prov_3.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "mindustry/game/Universe_invoke_arc_func_Cons_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/game/Universe.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Universe_invoke_arc_func_Cons2_3.h"
#include "mindustry/game/Universe_invoke_arc_func_Cons2_5.h"
#include "mindustry/game/Universe_invoke_arc_func_Cons2_4.h"
#include "arc/files/Fi.h"
#include "arc/math/geom/Vec3.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "java/lang/Math.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/game/EventType_SectorInvasionEvent.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/content/Loadouts.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/game/Schematic_Stile.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/EventType_TurnEvent.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_game_Universe(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_game_Universe *) object;
	if (self->F_lastLoadout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastLoadout)->clazz)->markFunction)((jobject) self->F_lastLoadout, mark, depth + 1);
	if (self->F_lastLaunchResources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastLaunchResources)->clazz)->markFunction)((jobject) self->F_lastLaunchResources, mark, depth + 1);
}

void clinit_mindustry_game_Universe(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Universe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[1].o);
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_lastLaunchResources = (jref) sp[1].o;
	LINE_NUMBER(29);
	((func_mindustry_game_Universe_load) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_load])(ctx, (frame[0].o));
	LINE_NUMBER(32);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorCaptureEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updateGlobal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updateGlobal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	((func_mindustry_game_Universe_updatePlanet_mindustry_type_Planet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_updatePlanet_mindustry_type_Planet])(ctx, (frame[0].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(44);
	goto label_1;
label_2:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_game_Universe_turn_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:turn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_turn);
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updatePlanet_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updatePlanet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_position;
	sp[0].o = (jobject)((func_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_position;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(58);
	((func_mindustry_game_Universe_updatePlanet_mindustry_type_Planet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_updatePlanet_mindustry_type_Planet])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(59);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_secondCounter = (((jfloat)((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_secondCounter) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(60.0f))));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_turnCounter = (((jfloat)((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_turnCounter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(71);
	if ((floatCompare(((jfloat)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_turnCounter), (jfloat(7200.0f)), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(72);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_turnCounter = (jfloat(0));
	LINE_NUMBER(73);
	((func_mindustry_game_Universe_runTurn) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_runTurn])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(76);
	if ((floatCompare(((jfloat)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_secondCounter), (jfloat(1)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_seconds = (((jint)((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_seconds) + (jint(((jfloat)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_secondCounter))));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_secondCounter = (fmodf(((jfloat)((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_secondCounter), (jfloat(1))));
	LINE_NUMBER(81);
	if ((((jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_seconds) % (10)) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(82);
	((func_mindustry_game_Universe_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_save])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(87);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSector_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_updateLighting) == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_noLighting) != 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(88);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_type_Sector_getLight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_getLight_R_float])(ctx, sp[0].o);
	frame[2].f = temp0;
	LINE_NUMBER(91);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, (frame[2].f), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_lightSrcFrom), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_lightSrcTo), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_lightDstFrom), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_lightDstTo));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp1);
	frame[3].f = temp2;
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientLight;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat(1)) - (frame[3].f));
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp3 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[3].f), (jfloat(1)));
	sp += 1;
	if (temp3 != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	sp -= 2;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting = sp[1].i;
label_12:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_clearLoadoutInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:clearLoadoutInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLoadout = (jref) (jobject(nullptr));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[1].o);
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_lastLaunchResources = (jref) sp[1].o;
	LINE_NUMBER(102);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launch-resources-seq"_j))));
	LINE_NUMBER(103);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastloadout-core-shard"_j))));
	LINE_NUMBER(104);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastloadout-core-nucleus"_j))));
	LINE_NUMBER(105);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastloadout-core-foundation"_j))));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:getLaunchResources", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"launch-resources-seq"_j));
	sp[3].o = ((jobject) &class_mindustry_type_ItemSeq);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Prov_2);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_lastLaunchResources = (jref) (checkCast(ctx, &class_mindustry_type_ItemSeq, sp[1].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLaunchResources;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updateLaunchResources", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLaunchResources = (jref) (frame[1].o);
	LINE_NUMBER(115);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launch-resources-seq"_j));
	sp[2].o = (jobject)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLaunchResources;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updateLoadout", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_game_Schematic(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	sp[3].o = (jobject)createArray(ctx, &class_mindustry_game_Schematic$Stile, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Schematic$Stile(ctx);
	sp[4].o = gcAlloc(ctx, &class_mindustry_game_Schematic$Stile);
	init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(ctx, sp[4].o, (frame[1].o), (jint(0)), (jint(0)), (jobject(nullptr)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	clinit_arc_struct_StringMap(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[4].o);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[2].o, sp[3].o, sp[4].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size), ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size));
	((func_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updateLoadout", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(125);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"lastloadout-\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_file;
	sp += 2;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(126);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLoadout = (jref) (frame[2].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:getLastLoadout", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLoadout;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp += 1;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	clinit_mindustry_content_Loadouts(ctx);
	(sp++)->o = SF_mindustry_content_Loadouts_basicShard;
	goto label_4;
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_defaultLoadout;
	sp += 1;
	}
label_4:;
	sp -= 2;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_lastLoadout = (jref) sp[1].o;
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_lastLoadout;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:getLoadout", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_content_Loadouts(ctx);
	(sp++)->o = SF_mindustry_content_Loadouts_basicShard;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(141);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"lastloadout-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(147);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[3].o));
	sp[0].o = checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
	goto label_7;
label_5:;
	INST_ALOAD(4);
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_runTurn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:runTurn", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_turn = (((jint)((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_turn) + (jint(1)));
	LINE_NUMBER(154);
	frame[1].i = (120);
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(161);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	if ((frame[2].o) == (frame[4].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_updateGroup;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_updateGroup;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	LINE_NUMBER(162);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_9;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastImported;
	((func_mindustry_type_ItemSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_clear])(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(171);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	frame[7].o = sp[0].o;
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[7].o)))->F_planet;
	if (sp[0].o != (frame[4].o)) goto label_18;
	}
	{
	LINE_NUMBER(181);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Cons2_3);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	((func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[7].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastImported;
	((func_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq])(ctx, sp[0].o, (frame[8].o));
	}
label_18:;
	LINE_NUMBER(189);
	goto label_16;
label_9:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importRateCache;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet])(ctx, sp[0].o, (frame[4].o));
	}
label_31:;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_minutesCaptured = (jfloat(0));
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_minutesCaptured = (((jfloat)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_minutesCaptured) + (jfloat(2)));
	}
label_35:;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_29;
	}
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_37;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_production;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Cons2_4);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_40;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Cons2_5);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	}
label_40:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_type_ItemSeq_checkNegative) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_checkNegative])(ctx, sp[0].o);
	LINE_NUMBER(228);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[6].o));
	}
label_37:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_sectorInvasion) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	if ((floatCompare(((jfloat)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_minutesCaptured), (jfloat(20.0f)), -1)) <= 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasSpawns) == 0) goto label_29;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[6].o));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(236);
	if ((frame[7].i) <= 0) goto label_29;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(1,000000e-02f)) * ((jfloat(0.8f)) + ((jfloat(((frame[7].i) - (jint(1))))) * (jfloat(0.3f))))))));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	jint temp0 = (jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_winWave;
	jint temp1 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[6].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_46;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	sp[0].i = temp0;
	sp += 1;
	goto label_47;
	}
label_46:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	jint temp0 = (jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_wave;
	sp[0].i = temp0;
	sp += 1;
	}
label_47:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, sp[0].i, sp[1].i);
	jint temp1 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(2)), (jint(4)));
	frame[8].i = (temp0 + (temp1 * (jint(5))));
	LINE_NUMBER(240);
	jint temp2 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[6].o));
	if (temp2 == 0) goto label_49;
	}
	{
	LINE_NUMBER(241);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave = (frame[8].i);
	LINE_NUMBER(242);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(1));
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = (jint(0));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[4].o)))->F_campaignRules;
	sp[1].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	((func_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(247);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_mindustry_gen_Call_setRules_mindustry_game_Rules(ctx, sp[0].o);
	goto label_55;
	}
label_49:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_winWave = (frame[8].i);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves = (jint(1));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attack = (jint(0));
	LINE_NUMBER(253);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[6].o));
	}
label_55:;
	{
	LINE_NUMBER(256);
	clinit_mindustry_game_EventType$SectorInvasionEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SectorInvasionEvent);
	init_mindustry_game_EventType$SectorInvasionEvent_mindustry_type_Sector(ctx, sp[0].o, (frame[6].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_29:;
	LINE_NUMBER(261);
	goto label_26;
label_27:;
	LINE_NUMBER(262);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(264);
	clinit_mindustry_game_EventType$TurnEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TurnEvent);
	init_mindustry_game_EventType$TurnEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(266);
	((func_mindustry_game_Universe_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_save])(ctx, (frame[0].o));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_updateNetSeconds_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:updateNetSeconds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(270);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_netSeconds = (frame[1].i);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Universe_secondsMod_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:secondsMod", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(274);
	jint temp0 = (jint)((func_mindustry_game_Universe_seconds_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_seconds_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (fmodf(((jfloat(temp0)) / (frame[2].f)), (frame[1].f)));
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Universe_seconds_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:seconds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_netSeconds;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_game_Universe *) NULL_CHECK(sp[-1].o))->F_seconds;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_setSeconds_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:setSeconds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(283);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_seconds = (jint((frame[1].f)));
	LINE_NUMBER(284);
	((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_secondCounter = ((frame[1].f) - (jfloat(((jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_seconds))));
	LINE_NUMBER(286);
	((func_mindustry_game_Universe_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_save])(ctx, (frame[0].o));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Universe_secondsf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:secondsf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((func_mindustry_game_Universe_seconds_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Universe_seconds_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jfloat(temp0)) + ((jfloat)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_secondCounter));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:save", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"utimei"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_seconds));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(295);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"turn"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_Universe *) NULL_CHECK((frame[0].o)))->F_turn));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Universe_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"utimei"_j))));
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_seconds = temp0;
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"turn"_j))));
	((mindustry_game_Universe *) NULL_CHECK(sp[0].o))->F_turn = temp1;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Universe_lambda$runTurn$3_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$runTurn$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_1;
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

void SM_mindustry_game_Universe_lambda$runTurn$2_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$runTurn$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	if (temp0 > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_production;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Universe_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_game_Universe_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_game_Universe_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if ((floatCompare(((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o))))->F_mean), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[3].o)))->F_mean), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_lastImported;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[1].o, (frame[2].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat(temp0)) / (jfloat((frame[1].i)))), ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[3].o)))->F_mean));
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp1;
	}
label_1:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_Universe_lambda$runTurn$1_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$runTurn$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = frame[2].o;
	jint temp0 = jint((((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[3].o)))->F_mean) * (jfloat((frame[1].i)))));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp1 = (jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_storageCapacity;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_items;
	jint temp2 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[2].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - temp2));
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp3);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Universe_lambda$runTurn$0_mindustry_type_ItemSeq_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$runTurn$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(183);
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[2].o), (jint((((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[3].o)))->F_mean) * (jfloat((frame[1].i)))))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Universe_lambda$getLoadout$0_java_lang_String_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$getLoadout$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
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

void SM_mindustry_game_Universe_lambda$new$0_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Universe:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Universe(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(34);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	((func_mindustry_type_Planet_updateBaseCoverage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_updateBaseCoverage])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Universe;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastLoadout
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method getLoadout
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_Universe[] {
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
	(void *) M_mindustry_game_Universe_updateGlobal,
	(void *) M_mindustry_game_Universe_turn_R_int,
	(void *) M_mindustry_game_Universe_updatePlanet_mindustry_type_Planet,
	(void *) M_mindustry_game_Universe_update,
	(void *) M_mindustry_game_Universe_clearLoadoutInfo,
	(void *) M_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq,
	(void *) M_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq,
	(void *) M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock,
	(void *) M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic,
	(void *) M_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic,
	(void *) M_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic,
	(void *) M_mindustry_game_Universe_runTurn,
	(void *) M_mindustry_game_Universe_updateNetSeconds_int,
	(void *) M_mindustry_game_Universe_secondsMod_float_float_R_float,
	(void *) M_mindustry_game_Universe_seconds_R_int,
	(void *) M_mindustry_game_Universe_setSeconds_float,
	(void *) M_mindustry_game_Universe_secondsf_R_float,
	(void *) M_mindustry_game_Universe_save,
	(void *) M_mindustry_game_Universe_load,
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
	{ "updateGlobal", "()V" },
	{ "turn", "()I" },
	{ "updatePlanet", "(Lmindustry/type/Planet;)V" },
	{ "update", "()V" },
	{ "clearLoadoutInfo", "()V" },
	{ "getLaunchResources", "()Lmindustry/type/ItemSeq;" },
	{ "updateLaunchResources", "(Lmindustry/type/ItemSeq;)V" },
	{ "updateLoadout", "(Lmindustry/world/blocks/storage/CoreBlock;)V" },
	{ "updateLoadout", "(Lmindustry/world/blocks/storage/CoreBlock;Lmindustry/game/Schematic;)V" },
	{ "getLastLoadout", "()Lmindustry/game/Schematic;" },
	{ "getLoadout", "(Lmindustry/world/blocks/storage/CoreBlock;)Lmindustry/game/Schematic;" },
	{ "runTurn", "()V" },
	{ "updateNetSeconds", "(I)V" },
	{ "secondsMod", "(FF)F" },
	{ "seconds", "()I" },
	{ "setSeconds", "(F)V" },
	{ "secondsf", "()F" },
	{ "save", "()V" },
	{ "load", "()V" },
};

static FieldMetadata fields[] {
	{ "seconds", &class_int, offsetof(mindustry_game_Universe, F_seconds), "I", 2 },
	{ "netSeconds", &class_int, offsetof(mindustry_game_Universe, F_netSeconds), "I", 2 },
	{ "secondCounter", &class_float, offsetof(mindustry_game_Universe, F_secondCounter), "F", 2 },
	{ "turn", &class_int, offsetof(mindustry_game_Universe, F_turn), "I", 2 },
	{ "turnCounter", &class_float, offsetof(mindustry_game_Universe, F_turnCounter), "F", 2 },
	{ "lastLoadout", &class_mindustry_game_Schematic, offsetof(mindustry_game_Universe, F_lastLoadout), "Lmindustry/game/Schematic;", 2 },
	{ "lastLaunchResources", &class_mindustry_type_ItemSeq, offsetof(mindustry_game_Universe, F_lastLaunchResources), "Lmindustry/type/ItemSeq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Universe, 0, "()V", 1 },
	{ "updateGlobal", (intptr_t) M_mindustry_game_Universe_updateGlobal, VTABLE_mindustry_game_Universe_updateGlobal, "()V", 1 },
	{ "turn", (intptr_t) M_mindustry_game_Universe_turn_R_int, VTABLE_mindustry_game_Universe_turn_R_int, "()I", 1 },
	{ "updatePlanet", (intptr_t) M_mindustry_game_Universe_updatePlanet_mindustry_type_Planet, VTABLE_mindustry_game_Universe_updatePlanet_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 2 },
	{ "update", (intptr_t) M_mindustry_game_Universe_update, VTABLE_mindustry_game_Universe_update, "()V", 1 },
	{ "clearLoadoutInfo", (intptr_t) M_mindustry_game_Universe_clearLoadoutInfo, VTABLE_mindustry_game_Universe_clearLoadoutInfo, "()V", 1 },
	{ "getLaunchResources", (intptr_t) M_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq, VTABLE_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq, "()Lmindustry/type/ItemSeq;", 1 },
	{ "updateLaunchResources", (intptr_t) M_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq, VTABLE_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "updateLoadout", (intptr_t) M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock, VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock, "(Lmindustry/world/blocks/storage/CoreBlock;)V", 1 },
	{ "updateLoadout", (intptr_t) M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic, VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic, "(Lmindustry/world/blocks/storage/CoreBlock;Lmindustry/game/Schematic;)V", 1 },
	{ "getLastLoadout", (intptr_t) M_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic, VTABLE_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic, "()Lmindustry/game/Schematic;", 1 },
	{ "getLoadout", (intptr_t) M_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic, VTABLE_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic, "(Lmindustry/world/blocks/storage/CoreBlock;)Lmindustry/game/Schematic;", 1 },
	{ "runTurn", (intptr_t) M_mindustry_game_Universe_runTurn, VTABLE_mindustry_game_Universe_runTurn, "()V", 1 },
	{ "updateNetSeconds", (intptr_t) M_mindustry_game_Universe_updateNetSeconds_int, VTABLE_mindustry_game_Universe_updateNetSeconds_int, "(I)V", 1 },
	{ "secondsMod", (intptr_t) M_mindustry_game_Universe_secondsMod_float_float_R_float, VTABLE_mindustry_game_Universe_secondsMod_float_float_R_float, "(FF)F", 1 },
	{ "seconds", (intptr_t) M_mindustry_game_Universe_seconds_R_int, VTABLE_mindustry_game_Universe_seconds_R_int, "()I", 1 },
	{ "setSeconds", (intptr_t) M_mindustry_game_Universe_setSeconds_float, VTABLE_mindustry_game_Universe_setSeconds_float, "(F)V", 1 },
	{ "secondsf", (intptr_t) M_mindustry_game_Universe_secondsf_R_float, VTABLE_mindustry_game_Universe_secondsf_R_float, "()F", 1 },
	{ "save", (intptr_t) M_mindustry_game_Universe_save, VTABLE_mindustry_game_Universe_save, "()V", 2 },
	{ "load", (intptr_t) M_mindustry_game_Universe_load, VTABLE_mindustry_game_Universe_load, "()V", 2 },
	{ "lambda$runTurn$3", (intptr_t) SM_mindustry_game_Universe_lambda$runTurn$3_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$runTurn$2", (intptr_t) SM_mindustry_game_Universe_lambda$runTurn$2_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Lmindustry/type/Sector;ILmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$runTurn$1", (intptr_t) SM_mindustry_game_Universe_lambda$runTurn$1_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Lmindustry/type/Sector;ILmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$runTurn$0", (intptr_t) SM_mindustry_game_Universe_lambda$runTurn$0_mindustry_type_ItemSeq_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Lmindustry/type/ItemSeq;ILmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$getLoadout$0", (intptr_t) SM_mindustry_game_Universe_lambda$getLoadout$0_java_lang_String_mindustry_game_Schematic_R_boolean, 0, "(Ljava/lang/String;Lmindustry/game/Schematic;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_game_Universe_lambda$new$0_mindustry_game_EventType$SectorCaptureEvent, 0, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4106 },
};

Class class_mindustry_game_Universe{
		.nativeName = (intptr_t) "mindustry/game/Universe",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Universe),
		.classVtable = (intptr_t) vtable_mindustry_game_Universe,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Universe,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Universe,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Universe = registerClass(&class_mindustry_game_Universe);

}
