#include "mindustry/game/Team.h"
#include "java/lang/Integer.h"
#include "mindustry/game/Team_1.h"
#include "arc/math/Rand.h"
#include "java/lang/Comparable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Rules_TeamRules.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/util/Nullable.h"
#include "java/lang/Enum.h"
#include "mindustry/world/modules/ItemModule.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/game/Teams.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_game_Team_all;
jobject SF_mindustry_game_Team_baseTeams;
jobject SF_mindustry_game_Team_derelict;
jobject SF_mindustry_game_Team_sharded;
jobject SF_mindustry_game_Team_crux;
jobject SF_mindustry_game_Team_malis;
jobject SF_mindustry_game_Team_green;
jobject SF_mindustry_game_Team_blue;
jobject SF_mindustry_game_Team_neoplastic;

void mark_mindustry_game_Team(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Team_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_all)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_all, mark, depth + 1);
		if (SF_mindustry_game_Team_baseTeams)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_baseTeams)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_baseTeams, mark, depth + 1);
		if (SF_mindustry_game_Team_derelict)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_derelict)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_derelict, mark, depth + 1);
		if (SF_mindustry_game_Team_sharded)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_sharded)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_sharded, mark, depth + 1);
		if (SF_mindustry_game_Team_crux)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_crux)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_crux, mark, depth + 1);
		if (SF_mindustry_game_Team_malis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_malis)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_malis, mark, depth + 1);
		if (SF_mindustry_game_Team_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_green)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_green, mark, depth + 1);
		if (SF_mindustry_game_Team_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_blue)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_blue, mark, depth + 1);
		if (SF_mindustry_game_Team_neoplastic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Team_neoplastic)->clazz)->markFunction)((jobject) SF_mindustry_game_Team_neoplastic, mark, depth + 1);
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
	auto self = (mindustry_game_Team *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_palette)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_palette)->clazz)->markFunction)((jobject) self->F_palette, mark, depth + 1);
	if (self->F_palettei)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_palettei)->clazz)->markFunction)((jobject) self->F_palettei, mark, depth + 1);
	if (self->F_emoji)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emoji)->clazz)->markFunction)((jobject) self->F_emoji, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

jobject SM_mindustry_game_Team_get_int_R_mindustry_game_Team(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Team(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(59);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jbyte((frame[0].i))) & (255))));
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Team(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_palette = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_palettei = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_ignoreUnitCap = (jint(0));
	LINE_NUMBER(23);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_emoji = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(63);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(65);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(67);
	if ((frame[1].i) >= (6)) goto label_10;
	}
	{
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[0].o);
	}
label_10:;
	{
	LINE_NUMBER(68);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[0].o);
	LINE_NUMBER(70);
	((func_mindustry_game_Team_setPalette_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Team(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(75);
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(77);
	((func_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color])(ctx, (frame[0].o), (frame[4].o), (frame[5].o), (frame[6].o));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:items", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_world_modules_ItemModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_ItemModule_empty;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:rules", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:data", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Team_active_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:active", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jint temp0 = (jint)((func_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Team_isAlive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:isAlive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_isAlive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_isAlive_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Team_isAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:isAI", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_Team_isOnlyAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:isOnlyAI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_players;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
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

jbool M_mindustry_game_Team_needsFlowField_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:needsFlowField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[0].o));
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) != 0) goto label_1;
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

jbool M_mindustry_game_Team_activateUnitFactories_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:activateUnitFactories", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp0 = (jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float])(ctx, sp[0].o, (frame[0].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) < 0) goto label_1;
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

jobject M_mindustry_game_Team_cores_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:cores", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:localized", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"team.\u0001.name"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_coloredName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:coloredName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_emoji;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((func_mindustry_game_Team_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_localized_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[#\u0001]\u0001[]"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Team_setPalette_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:setPalette", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.75f)));
	sp[3].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[3].o, (jfloat(0.5f)));
	((func_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(145);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_hasPalette = (jint(0));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:setPalette", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_palette;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (frame[1].o));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_palette;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), (frame[2].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_palette;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))), (frame[3].o));
	LINE_NUMBER(153);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (jint(3))) goto label_6;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_palettei;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp1 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(153);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(156);
	((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_hasPalette = (jint(1));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Team_compareTo_mindustry_game_Team_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_id), ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	clinit_mindustry_game_Team$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(172);
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	jdouble temp0 = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(174);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_4:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_name;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(181);
	clinit_mindustry_logic_Senseable(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Team_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	jint temp0 = (jint)((func_mindustry_game_Team_compareTo_mindustry_game_Team_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_compareTo_mindustry_game_Team_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_game_Team, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_Team(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Team:<clinit>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Team(ctx);
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Team, (256));
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_all = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Team, (6));
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_baseTeams = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp0 = jint(0);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"derelict"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"4d4e58"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_derelict = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp1 = jint(1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sharded"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[2].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	sp[4].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eab678"_j))));
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d4816b"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, temp1, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_sharded = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp2 = jint(2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crux"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fc8e6c"_j))));
	sp[4].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a04553"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, temp2, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_crux = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp3 = jint(3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"malis"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a27ce5"_j))));
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"c7a4f5"_j))));
	sp[4].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"896fd6"_j))));
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"504cba"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, temp3, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_malis = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp4 = jint(4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"green"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"54d67d"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, sp[0].o, temp4, sp[1].o, sp[2].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_green = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp5 = jint(5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blue"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6c87fd"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, sp[0].o, temp5, sp[1].o, sp[2].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_blue = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp6 = 6;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"neoplastic"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e05438"_j))));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, sp[0].o, temp6, sp[1].o, sp[2].o);
	clinit_mindustry_game_Team(ctx);
	SF_mindustry_game_Team_neoplastic = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(8ll)));
	LINE_NUMBER(46);
	frame[0].i = (jint(0));
	}
label_11:;
	{
	if ((frame[0].i) >= (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(47);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	LINE_NUMBER(46);
	INST_IINC(0, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(50);
	frame[0].i = (7);
	}
label_15:;
	{
	jint temp0 = frame[0].i;
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	LINE_NUMBER(51);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Team);
	jint temp0 = frame[0].i;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"team#\u0001"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	jfloat temp1 = jfloat(360.0f);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	jfloat temp3 = temp1 * temp2;
	jfloat temp4 = jfloat(100.0f);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.4f)), (jfloat(1)));
	jfloat temp6 = temp4 * temp5;
	jfloat temp7 = jfloat(100.0f);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.6f)), (jfloat(1)));
	sp[2].o = (jobject)SM_arc_graphics_Color_HSVtoRGB_float_float_float_float_R_arc_graphics_Color(ctx, temp3, temp6, (temp7 * temp8), (jfloat(1)));
	init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(50);
	INST_IINC(0, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(53);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[1].o);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, sp[1].o);
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(55);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_neoplastic;
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_ignoreUnitCap = (jint(1));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Team;
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

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_Team[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Team_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_Team_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule,
	(void *) M_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData,
	(void *) M_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Team_active_R_boolean,
	(void *) M_mindustry_game_Team_isAlive_R_boolean,
	(void *) M_mindustry_game_Team_isAI_R_boolean,
	(void *) M_mindustry_game_Team_isOnlyAI_R_boolean,
	(void *) M_mindustry_game_Team_needsFlowField_R_boolean,
	(void *) M_mindustry_game_Team_activateUnitFactories_R_boolean,
	(void *) M_mindustry_game_Team_cores_R_arc_struct_Seq,
	(void *) M_mindustry_game_Team_localized_R_java_lang_String,
	(void *) M_mindustry_game_Team_coloredName_R_java_lang_String,
	(void *) M_mindustry_game_Team_setPalette_arc_graphics_Color,
	(void *) M_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color,
	(void *) M_mindustry_game_Team_compareTo_mindustry_game_Team_R_int,
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
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "items", "()Lmindustry/world/modules/ItemModule;" },
	{ "rules", "()Lmindustry/game/Rules$TeamRule;" },
	{ "data", "()Lmindustry/game/Teams$TeamData;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "active", "()Z" },
	{ "isAlive", "()Z" },
	{ "isAI", "()Z" },
	{ "isOnlyAI", "()Z" },
	{ "needsFlowField", "()Z" },
	{ "activateUnitFactories", "()Z" },
	{ "cores", "()Larc/struct/Seq;" },
	{ "localized", "()Ljava/lang/String;" },
	{ "coloredName", "()Ljava/lang/String;" },
	{ "setPalette", "(Larc/graphics/Color;)V" },
	{ "setPalette", "(Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/Color;)V" },
	{ "compareTo", "(Lmindustry/game/Team;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, &class_mindustry_logic_Senseable, };

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(mindustry_game_Team, F_id), "I", 17 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_game_Team, F_color), "Larc/graphics/Color;", 17 },
	{ "palette", getArrayClass(&class_arc_graphics_Color, 1), offsetof(mindustry_game_Team, F_palette), "[Larc/graphics/Color;", 17 },
	{ "palettei", getArrayClass(&class_int, 1), offsetof(mindustry_game_Team, F_palettei), "[I", 17 },
	{ "ignoreUnitCap", &class_boolean, offsetof(mindustry_game_Team, F_ignoreUnitCap), "Z", 1 },
	{ "emoji", &class_java_lang_String, offsetof(mindustry_game_Team, F_emoji), "Ljava/lang/String;", 1 },
	{ "hasPalette", &class_boolean, offsetof(mindustry_game_Team, F_hasPalette), "Z", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_game_Team, F_name), "Ljava/lang/String;", 1 },
	{ "all", getArrayClass(&class_mindustry_game_Team, 1), (intptr_t) &SF_mindustry_game_Team_all, "[Lmindustry/game/Team;", 25 },
	{ "baseTeams", getArrayClass(&class_mindustry_game_Team, 1), (intptr_t) &SF_mindustry_game_Team_baseTeams, "[Lmindustry/game/Team;", 25 },
	{ "derelict", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_derelict, "Lmindustry/game/Team;", 25 },
	{ "sharded", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_sharded, "Lmindustry/game/Team;", 25 },
	{ "crux", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_crux, "Lmindustry/game/Team;", 25 },
	{ "malis", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_malis, "Lmindustry/game/Team;", 25 },
	{ "green", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_green, "Lmindustry/game/Team;", 25 },
	{ "blue", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_blue, "Lmindustry/game/Team;", 25 },
	{ "neoplastic", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_game_Team_neoplastic, "Lmindustry/game/Team;", 25 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) SM_mindustry_game_Team_get_int_R_mindustry_game_Team, 0, "(I)Lmindustry/game/Team;", 9 },
	{ "<init>", (intptr_t) init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color, 0, "(ILjava/lang/String;Larc/graphics/Color;)V", 4 },
	{ "<init>", (intptr_t) init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color, 0, "(ILjava/lang/String;Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/Color;)V", 4 },
	{ "items", (intptr_t) M_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule, VTABLE_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule, "()Lmindustry/world/modules/ItemModule;", 1 },
	{ "rules", (intptr_t) M_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule, VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule, "()Lmindustry/game/Rules$TeamRule;", 1 },
	{ "data", (intptr_t) M_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData, VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData, "()Lmindustry/game/Teams$TeamData;", 1 },
	{ "core", (intptr_t) M_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "active", (intptr_t) M_mindustry_game_Team_active_R_boolean, VTABLE_mindustry_game_Team_active_R_boolean, "()Z", 1 },
	{ "isAlive", (intptr_t) M_mindustry_game_Team_isAlive_R_boolean, VTABLE_mindustry_game_Team_isAlive_R_boolean, "()Z", 1 },
	{ "isAI", (intptr_t) M_mindustry_game_Team_isAI_R_boolean, VTABLE_mindustry_game_Team_isAI_R_boolean, "()Z", 1 },
	{ "isOnlyAI", (intptr_t) M_mindustry_game_Team_isOnlyAI_R_boolean, VTABLE_mindustry_game_Team_isOnlyAI_R_boolean, "()Z", 1 },
	{ "needsFlowField", (intptr_t) M_mindustry_game_Team_needsFlowField_R_boolean, VTABLE_mindustry_game_Team_needsFlowField_R_boolean, "()Z", 1 },
	{ "activateUnitFactories", (intptr_t) M_mindustry_game_Team_activateUnitFactories_R_boolean, VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean, "()Z", 1 },
	{ "cores", (intptr_t) M_mindustry_game_Team_cores_R_arc_struct_Seq, VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "localized", (intptr_t) M_mindustry_game_Team_localized_R_java_lang_String, VTABLE_mindustry_game_Team_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "coloredName", (intptr_t) M_mindustry_game_Team_coloredName_R_java_lang_String, VTABLE_mindustry_game_Team_coloredName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setPalette", (intptr_t) M_mindustry_game_Team_setPalette_arc_graphics_Color, VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "setPalette", (intptr_t) M_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color, VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color, "(Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/Color;)V", 1 },
	{ "compareTo", (intptr_t) M_mindustry_game_Team_compareTo_mindustry_game_Team_R_int, VTABLE_mindustry_game_Team_compareTo_mindustry_game_Team_R_int, "(Lmindustry/game/Team;)I", 1 },
	{ "toString", (intptr_t) M_mindustry_game_Team_toString_R_java_lang_String, VTABLE_mindustry_game_Team_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "sense", (intptr_t) M_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_game_Team_compareTo_java_lang_Object_R_int, VTABLE_mindustry_game_Team_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Team, 0, "()V", 8 },
};

Class class_mindustry_game_Team{
		.nativeName = (intptr_t) "mindustry/game/Team",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Team),
		.classVtable = (intptr_t) vtable_mindustry_game_Team,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Team,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Team,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Team = registerClass(&class_mindustry_game_Team);

}
