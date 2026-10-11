#include "mindustry/core/GameState.h"
#include "mindustry/maps/Map.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "mindustry/type/MapLocales.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/Events.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Rules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/core/GameState_State.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/Attributes.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/type/Planet.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/game/MapMarkers.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_core_GameState(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_GameState *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
	if (self->F_stats)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stats)->clazz)->markFunction)((jobject) self->F_stats, mark, depth + 1);
	if (self->F_markers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_markers)->clazz)->markFunction)((jobject) self->F_markers, mark, depth + 1);
	if (self->F_mapLocales)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapLocales)->clazz)->markFunction)((jobject) self->F_mapLocales, mark, depth + 1);
	if (self->F_envAttrs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_envAttrs)->clazz)->markFunction)((jobject) self->F_envAttrs, mark, depth + 1);
	if (self->F_teams)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_teams)->clazz)->markFunction)((jobject) self->F_teams, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_playtestingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playtestingMap)->clazz)->markFunction)((jobject) self->F_playtestingMap, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
}

void clinit_mindustry_core_GameState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_GameState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_GameState(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_wave = (jint(1));
	LINE_NUMBER(25);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_gameOver = (jint(0));
	LINE_NUMBER(27);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_afterGameOver = (jint(0));
	LINE_NUMBER(29);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_won = (jint(0));
	LINE_NUMBER(31);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_serverTps = (jint(-1));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyMap;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Rules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_GameStats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_GameStats);
	init_mindustry_game_GameStats(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapMarkers(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapMarkers);
	init_mindustry_game_MapMarkers(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_MapLocales(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_MapLocales);
	init_mindustry_type_MapLocales(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Teams(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams);
	init_mindustry_game_Teams(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataManager(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataManager);
	init_mindustry_mod_DataManager(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_GameState_boss_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:boss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_bosses;
	sp[0].o = (jobject)((func_arc_struct_Seq_firstOpt_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_firstOpt_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_GameState_set_mindustry_core_GameState$State(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(64);
	clinit_mindustry_game_EventType$StateChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$StateChangeEvent);
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	init_mindustry_game_EventType$StateChangeEvent_mindustry_core_GameState$State_mindustry_core_GameState$State(ctx, sp[0].o, sp[1].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(65);
	((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state = (jref) (frame[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_GameState_hasSpawns_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:hasSpawns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) != 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_GameState_isCampaign_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isCampaign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
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

jbool M_mindustry_core_GameState_hasSector_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:hasSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
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

jobject M_mindustry_core_GameState_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:getPlanet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_GameState_isEditor_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isEditor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_GameState_isPaused_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isPaused", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_core_GameState_isPlaying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isPlaying", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_core_GameState_isGame_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isGame", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
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

jbool M_mindustry_core_GameState_isMenu_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:isMenu", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:is", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	if (sp[0].o != (frame[1].o)) goto label_1;
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

jobject M_mindustry_core_GameState_getState_R_mindustry_core_GameState$State(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/GameState:getState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK((frame[0].o)))->F_state;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_GameState;
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

	{ // Field playtestingMap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method boss
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPlanet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_GameState[] {
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
	(void *) M_mindustry_core_GameState_boss_R_mindustry_gen_Unit,
	(void *) M_mindustry_core_GameState_set_mindustry_core_GameState$State,
	(void *) M_mindustry_core_GameState_hasSpawns_R_boolean,
	(void *) M_mindustry_core_GameState_isCampaign_R_boolean,
	(void *) M_mindustry_core_GameState_hasSector_R_boolean,
	(void *) M_mindustry_core_GameState_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet,
	(void *) M_mindustry_core_GameState_isEditor_R_boolean,
	(void *) M_mindustry_core_GameState_isPaused_R_boolean,
	(void *) M_mindustry_core_GameState_isPlaying_R_boolean,
	(void *) M_mindustry_core_GameState_isGame_R_boolean,
	(void *) M_mindustry_core_GameState_isMenu_R_boolean,
	(void *) M_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean,
	(void *) M_mindustry_core_GameState_getState_R_mindustry_core_GameState$State,
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
	{ "boss", "()Lmindustry/gen/Unit;" },
	{ "set", "(Lmindustry/core/GameState$State;)V" },
	{ "hasSpawns", "()Z" },
	{ "isCampaign", "()Z" },
	{ "hasSector", "()Z" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "getPlanet", "()Lmindustry/type/Planet;" },
	{ "isEditor", "()Z" },
	{ "isPaused", "()Z" },
	{ "isPlaying", "()Z" },
	{ "isGame", "()Z" },
	{ "isMenu", "()Z" },
	{ "is", "(Lmindustry/core/GameState$State;)Z" },
	{ "getState", "()Lmindustry/core/GameState$State;" },
};

static jclass innerClasses[] {
	&class_mindustry_core_GameState$State,
};

static FieldMetadata fields[] {
	{ "wave", &class_int, offsetof(mindustry_core_GameState, F_wave), "I", 1 },
	{ "wavetime", &class_float, offsetof(mindustry_core_GameState, F_wavetime), "F", 1 },
	{ "tick", &class_double, offsetof(mindustry_core_GameState, F_tick), "D", 1 },
	{ "updateId", &class_long, offsetof(mindustry_core_GameState, F_updateId), "J", 1 },
	{ "gameOver", &class_boolean, offsetof(mindustry_core_GameState, F_gameOver), "Z", 1 },
	{ "afterGameOver", &class_boolean, offsetof(mindustry_core_GameState, F_afterGameOver), "Z", 1 },
	{ "won", &class_boolean, offsetof(mindustry_core_GameState, F_won), "Z", 1 },
	{ "serverTps", &class_int, offsetof(mindustry_core_GameState, F_serverTps), "I", 1 },
	{ "map", &class_mindustry_maps_Map, offsetof(mindustry_core_GameState, F_map), "Lmindustry/maps/Map;", 1 },
	{ "rules", &class_mindustry_game_Rules, offsetof(mindustry_core_GameState, F_rules), "Lmindustry/game/Rules;", 1 },
	{ "stats", &class_mindustry_game_GameStats, offsetof(mindustry_core_GameState, F_stats), "Lmindustry/game/GameStats;", 1 },
	{ "markers", &class_mindustry_game_MapMarkers, offsetof(mindustry_core_GameState, F_markers), "Lmindustry/game/MapMarkers;", 1 },
	{ "mapLocales", &class_mindustry_type_MapLocales, offsetof(mindustry_core_GameState, F_mapLocales), "Lmindustry/type/MapLocales;", 1 },
	{ "envAttrs", &class_mindustry_world_blocks_Attributes, offsetof(mindustry_core_GameState, F_envAttrs), "Lmindustry/world/blocks/Attributes;", 1 },
	{ "teams", &class_mindustry_game_Teams, offsetof(mindustry_core_GameState, F_teams), "Lmindustry/game/Teams;", 1 },
	{ "data", &class_mindustry_mod_DataManager, offsetof(mindustry_core_GameState, F_data), "Lmindustry/mod/DataManager;", 1 },
	{ "enemies", &class_int, offsetof(mindustry_core_GameState, F_enemies), "I", 1 },
	{ "playtestingMap", &class_mindustry_maps_Map, offsetof(mindustry_core_GameState, F_playtestingMap), "Lmindustry/maps/Map;", 1 },
	{ "state", &class_mindustry_core_GameState$State, offsetof(mindustry_core_GameState, F_state), "Lmindustry/core/GameState$State;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_GameState, 0, "()V", 1 },
	{ "boss", (intptr_t) M_mindustry_core_GameState_boss_R_mindustry_gen_Unit, VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "set", (intptr_t) M_mindustry_core_GameState_set_mindustry_core_GameState$State, VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State, "(Lmindustry/core/GameState$State;)V", 1 },
	{ "hasSpawns", (intptr_t) M_mindustry_core_GameState_hasSpawns_R_boolean, VTABLE_mindustry_core_GameState_hasSpawns_R_boolean, "()Z", 1 },
	{ "isCampaign", (intptr_t) M_mindustry_core_GameState_isCampaign_R_boolean, VTABLE_mindustry_core_GameState_isCampaign_R_boolean, "()Z", 1 },
	{ "hasSector", (intptr_t) M_mindustry_core_GameState_hasSector_R_boolean, VTABLE_mindustry_core_GameState_hasSector_R_boolean, "()Z", 1 },
	{ "getSector", (intptr_t) M_mindustry_core_GameState_getSector_R_mindustry_type_Sector, VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "getPlanet", (intptr_t) M_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet, VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet, "()Lmindustry/type/Planet;", 1 },
	{ "isEditor", (intptr_t) M_mindustry_core_GameState_isEditor_R_boolean, VTABLE_mindustry_core_GameState_isEditor_R_boolean, "()Z", 1 },
	{ "isPaused", (intptr_t) M_mindustry_core_GameState_isPaused_R_boolean, VTABLE_mindustry_core_GameState_isPaused_R_boolean, "()Z", 1 },
	{ "isPlaying", (intptr_t) M_mindustry_core_GameState_isPlaying_R_boolean, VTABLE_mindustry_core_GameState_isPlaying_R_boolean, "()Z", 1 },
	{ "isGame", (intptr_t) M_mindustry_core_GameState_isGame_R_boolean, VTABLE_mindustry_core_GameState_isGame_R_boolean, "()Z", 1 },
	{ "isMenu", (intptr_t) M_mindustry_core_GameState_isMenu_R_boolean, VTABLE_mindustry_core_GameState_isMenu_R_boolean, "()Z", 1 },
	{ "is", (intptr_t) M_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean, VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean, "(Lmindustry/core/GameState$State;)Z", 1 },
	{ "getState", (intptr_t) M_mindustry_core_GameState_getState_R_mindustry_core_GameState$State, VTABLE_mindustry_core_GameState_getState_R_mindustry_core_GameState$State, "()Lmindustry/core/GameState$State;", 1 },
};

Class class_mindustry_core_GameState{
		.nativeName = (intptr_t) "mindustry/core/GameState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_GameState),
		.classVtable = (intptr_t) vtable_mindustry_core_GameState,
		.staticInitializer = (intptr_t) clinit_mindustry_core_GameState,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_GameState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_GameState = registerClass(&class_mindustry_core_GameState);

}
