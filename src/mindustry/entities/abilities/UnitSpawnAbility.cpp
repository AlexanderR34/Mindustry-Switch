#include "mindustry/entities/abilities/UnitSpawnAbility.h"
#include "mindustry/net/Net.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/entities/abilities/UnitSpawnAbility_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/entities/abilities/UnitSpawnAbility.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_entities_abilities_UnitSpawnAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_Ability(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_abilities_UnitSpawnAbility *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_spawnEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnEffect)->clazz)->markFunction)((jobject) self->F_spawnEffect, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_UnitSpawnAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_UnitSpawnAbility_mindustry_type_UnitType_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_UnitSpawnAbility(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(26);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime = (jfloat(60.0f));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_spawn;
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK(sp[0].o))->F_spawnEffect = (jref) sp[1].o;
	LINE_NUMBER(27);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(28);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime = (frame[2].f);
	LINE_NUMBER(29);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnX = (frame[3].f);
	LINE_NUMBER(30);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnY = (frame[4].f);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_UnitSpawnAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_UnitSpawnAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime = (jfloat(60.0f));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_spawn;
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK(sp[0].o))->F_spawnEffect = (jref) sp[1].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_UnitSpawnAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"buildtime"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime) / (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_UnitSpawnAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_UnitSpawnAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_type_UnitType_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp1 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[stat]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_UnitSpawnAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK(sp[0].o))->F_timer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK(sp[0].o))->F_timer = (temp0 + (temp1 * temp2));
	LINE_NUMBER(48);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_timer), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(49);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnY), (-((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnX)));
	frame[2].f = (temp0 + temp1);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnY), (-((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnX)));
	frame[3].f = (temp2 + temp3);
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnEffect;
	jfloat temp4 = frame[2].f;
	jfloat temp5 = frame[3].f;
	jfloat temp6 = jfloat(0);
	sp[1].f = temp4;
	sp[2].f = temp5;
	sp[3].f = temp6;
	sp += 4;
	if (((jint)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_6;
	}
	INST_ALOAD(1);
	goto label_7;
label_6:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 5;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(52);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, (frame[4].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(53);
	((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_rotation = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(54);
	clinit_mindustry_game_EventType$UnitCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitCreateEvent);
	init_mindustry_game_EventType$UnitCreateEvent_mindustry_gen_Unit_mindustry_gen_Building_mindustry_gen_Unit(ctx, sp[0].o, (frame[4].o), (jobject(nullptr)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(56);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[4].o));
	LINE_NUMBER(57);
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, (frame[4].o));
	}
label_13:;
	{
	LINE_NUMBER(60);
	((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_timer = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_UnitSpawnAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_UnitSpawnAbility_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_abilities_UnitSpawnAbility_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_UnitSpawnAbility_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_1:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_abilities_UnitSpawnAbility_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:localized", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ability.unitspawn"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_UnitSpawnAbility_lambda$draw$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/UnitSpawnAbility:lambda$draw$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnY), (-((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnX)));
	frame[2].f = (temp0 + temp1);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnY), (-((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnX)));
	frame[3].f = (temp2 + temp3);
	LINE_NUMBER(69);
	jfloat temp4 = frame[2].f;
	jfloat temp5 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, temp4, temp5, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), (((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_timer) / ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_spawnTime)), (jfloat(1)), ((jfloat)((mindustry_entities_abilities_UnitSpawnAbility *) NULL_CHECK((frame[0].o)))->F_timer));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_UnitSpawnAbility[] {
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
	(void *) M_mindustry_entities_abilities_UnitSpawnAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_UnitSpawnAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_UnitSpawnAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_UnitSpawnAbility_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_UnitSpawnAbility_lambda$draw$0_mindustry_gen_Unit,
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
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "death", "(Lmindustry/gen/Unit;)V" },
	{ "created", "(Lmindustry/gen/Unit;)V" },
	{ "init", "(Lmindustry/type/UnitType;)V" },
	{ "displayBars", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "addStats", "(Larc/scene/ui/layout/Table;)V" },
	{ "abilityStat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "copy", "()Lmindustry/entities/abilities/Ability;" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getBundle", "()Ljava/lang/String;" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$draw$0", "(Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "unit", &class_mindustry_type_UnitType, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_unit), "Lmindustry/type/UnitType;", 1 },
	{ "spawnTime", &class_float, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_spawnTime), "F", 1 },
	{ "spawnX", &class_float, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_spawnX), "F", 1 },
	{ "spawnY", &class_float, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_spawnY), "F", 1 },
	{ "spawnEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_spawnEffect), "Lmindustry/entities/Effect;", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_parentizeEffects), "Z", 1 },
	{ "timer", &class_float, offsetof(mindustry_entities_abilities_UnitSpawnAbility, F_timer), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_UnitSpawnAbility_mindustry_type_UnitType_float_float_float, 0, "(Lmindustry/type/UnitType;FFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_UnitSpawnAbility, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_UnitSpawnAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_UnitSpawnAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_UnitSpawnAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_UnitSpawnAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_UnitSpawnAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_UnitSpawnAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_entities_abilities_UnitSpawnAbility_localized_R_java_lang_String, VTABLE_mindustry_entities_abilities_UnitSpawnAbility_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_entities_abilities_UnitSpawnAbility_lambda$draw$0_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_UnitSpawnAbility_lambda$draw$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_entities_abilities_UnitSpawnAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/UnitSpawnAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_UnitSpawnAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_UnitSpawnAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_UnitSpawnAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_UnitSpawnAbility,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_UnitSpawnAbility = registerClass(&class_mindustry_entities_abilities_UnitSpawnAbility);

}
