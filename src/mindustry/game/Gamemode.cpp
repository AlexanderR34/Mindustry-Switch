#include "mindustry/game/Gamemode.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Cons_7.h"
#include "mindustry/maps/Map.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Cons_6.h"
#include "arc/Core.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Cons_9.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Cons_8.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Boolf_6.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Boolf_5.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Boolf_4.h"
#include "java/lang/Enum.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Boolf_7.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/game/Gamemode_invoke_arc_func_Cons_5.h"

extern "C" {

jobject SF_mindustry_game_Gamemode_survival;
jobject SF_mindustry_game_Gamemode_sandbox;
jobject SF_mindustry_game_Gamemode_attack;
jobject SF_mindustry_game_Gamemode_pvp;
jobject SF_mindustry_game_Gamemode_editor;
jobject SF_mindustry_game_Gamemode_all;
jobject SF_mindustry_game_Gamemode_$VALUES;

void mark_mindustry_game_Gamemode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Gamemode_survival)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_survival)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_survival, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_sandbox)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_sandbox)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_sandbox, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_attack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_attack)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_attack, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_pvp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_pvp)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_pvp, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_editor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_editor)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_editor, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_all)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_all, mark, depth + 1);
		if (SF_mindustry_game_Gamemode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Gamemode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_game_Gamemode_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Gamemode *) object;
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
}

jobject SM_mindustry_game_Gamemode_values_R_Array1_mindustry_game_Gamemode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	{
	LINE_NUMBER(9);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_game_Gamemode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Gamemode_valueOf_java_lang_String_R_mindustry_game_Gamemode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_game_Gamemode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_Gamemode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(50);
	init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)), (frame[3].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[2].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Boolf_4);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(58);
	init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons_arc_func_Boolf(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)), (frame[3].o), (frame[4].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(61);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(62);
	((mindustry_game_Gamemode *) NULL_CHECK((frame[0].o)))->F_rules = (jref) (frame[4].o);
	LINE_NUMBER(63);
	((mindustry_game_Gamemode *) NULL_CHECK((frame[0].o)))->F_hidden = (frame[3].i);
	LINE_NUMBER(64);
	((mindustry_game_Gamemode *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[5].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:apply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_game_Gamemode *) NULL_CHECK((frame[0].o)))->F_rules;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:valid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_game_Gamemode *) NULL_CHECK((frame[0].o)))->F_validator;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Gamemode_description_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:description", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mode.\u0001.description"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Gamemode_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mode.\u0001.name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Gamemode_$values_R_Array1_mindustry_game_Gamemode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Gamemode, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_survival;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_sandbox;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_attack;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_pvp;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_editor;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Gamemode_lambda$new$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Gamemode_lambda$static$7_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(36);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_infiniteResources = (jint(1));
	LINE_NUMBER(37);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_instantBuild = (jint(1));
	LINE_NUMBER(38);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_editor = (jint(1));
	LINE_NUMBER(39);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waves = (jint(0));
	LINE_NUMBER(40);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTimer = (jint(0));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Gamemode_lambda$static$6_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_teams;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_1;
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

void SM_mindustry_game_Gamemode_lambda$static$5_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_pvp = (jint(1));
	LINE_NUMBER(29);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_enemyCoreBuildRadius = (jfloat(600.0f));
	LINE_NUMBER(30);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_buildCostMultiplier = (jfloat(1));
	LINE_NUMBER(31);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(32);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier = (jfloat(2));
	LINE_NUMBER(33);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_attackMode = (jint(1));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Gamemode_lambda$static$4_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_teams;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_1;
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

void SM_mindustry_game_Gamemode_lambda$static$3_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(21);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_attackMode = (jint(1));
	LINE_NUMBER(22);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTimer = (jint(1));
	LINE_NUMBER(24);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveSpacing = (jfloat(7200.0f));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources = (jint(1));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Gamemode_lambda$static$2_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(15);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_infiniteResources = (jint(1));
	LINE_NUMBER(16);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowEditRules = (jint(1));
	LINE_NUMBER(17);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waves = (jint(1));
	LINE_NUMBER(18);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTimer = (jint(0));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Gamemode_lambda$static$1_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_spawns) <= 0) goto label_1;
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

void SM_mindustry_game_Gamemode_lambda$static$0_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(11);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTimer = (jint(1));
	LINE_NUMBER(12);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waves = (jint(1));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_Gamemode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Gamemode:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Gamemode(ctx);
	{
	LINE_NUMBER(10);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Gamemode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"survival"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Cons_5);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Boolf_5);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_survival = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Gamemode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sandbox"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Cons_6);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_sandbox = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Gamemode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"attack"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Cons_7);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Boolf_6);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_attack = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Gamemode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pvp"_j));
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Cons_8);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Boolf_7);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, sp[3].o);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_pvp = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Gamemode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor"_j));
	jint temp4 = jint(4);
	jint temp5 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Gamemode_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_game_Gamemode_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_game_Gamemode_invoke_arc_func_Cons_9);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons(ctx, sp[0].o, sp[1].o, temp4, temp5, sp[2].o);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_editor = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_mindustry_game_Gamemode_$values_R_Array1_mindustry_game_Gamemode(ctx);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_$VALUES = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_mindustry_game_Gamemode_values_R_Array1_mindustry_game_Gamemode(ctx);
	clinit_mindustry_game_Gamemode(ctx);
	SF_mindustry_game_Gamemode_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Gamemode[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Gamemode_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules,
	(void *) M_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean,
	(void *) M_mindustry_game_Gamemode_description_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "apply", "(Lmindustry/game/Rules;)Lmindustry/game/Rules;" },
	{ "valid", "(Lmindustry/maps/Map;)Z" },
	{ "description", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "survival", &class_mindustry_game_Gamemode, (intptr_t) &SF_mindustry_game_Gamemode_survival, "Lmindustry/game/Gamemode;", 16409 },
	{ "sandbox", &class_mindustry_game_Gamemode, (intptr_t) &SF_mindustry_game_Gamemode_sandbox, "Lmindustry/game/Gamemode;", 16409 },
	{ "attack", &class_mindustry_game_Gamemode, (intptr_t) &SF_mindustry_game_Gamemode_attack, "Lmindustry/game/Gamemode;", 16409 },
	{ "pvp", &class_mindustry_game_Gamemode, (intptr_t) &SF_mindustry_game_Gamemode_pvp, "Lmindustry/game/Gamemode;", 16409 },
	{ "editor", &class_mindustry_game_Gamemode, (intptr_t) &SF_mindustry_game_Gamemode_editor, "Lmindustry/game/Gamemode;", 16409 },
	{ "rules", &class_arc_func_Cons, offsetof(mindustry_game_Gamemode, F_rules), "Larc/func/Cons;", 18 },
	{ "validator", &class_arc_func_Boolf, offsetof(mindustry_game_Gamemode, F_validator), "Larc/func/Boolf;", 18 },
	{ "hidden", &class_boolean, offsetof(mindustry_game_Gamemode, F_hidden), "Z", 17 },
	{ "all", getArrayClass(&class_mindustry_game_Gamemode, 1), (intptr_t) &SF_mindustry_game_Gamemode_all, "[Lmindustry/game/Gamemode;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_game_Gamemode, 1), (intptr_t) &SF_mindustry_game_Gamemode_$VALUES, "[Lmindustry/game/Gamemode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_game_Gamemode_values_R_Array1_mindustry_game_Gamemode, 0, "()[Lmindustry/game/Gamemode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_game_Gamemode_valueOf_java_lang_String_R_mindustry_game_Gamemode, 0, "(Ljava/lang/String;)Lmindustry/game/Gamemode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons, 0, "(Ljava/lang/String;ILarc/func/Cons;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons, 0, "(Ljava/lang/String;IZLarc/func/Cons;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf, 0, "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Boolf;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons_arc_func_Boolf, 0, "(Ljava/lang/String;IZLarc/func/Cons;Larc/func/Boolf;)V", 2 },
	{ "apply", (intptr_t) M_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules, VTABLE_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules, "(Lmindustry/game/Rules;)Lmindustry/game/Rules;", 1 },
	{ "valid", (intptr_t) M_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean, VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean, "(Lmindustry/maps/Map;)Z", 1 },
	{ "description", (intptr_t) M_mindustry_game_Gamemode_description_R_java_lang_String, VTABLE_mindustry_game_Gamemode_description_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_game_Gamemode_toString_R_java_lang_String, VTABLE_mindustry_game_Gamemode_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_mindustry_game_Gamemode_$values_R_Array1_mindustry_game_Gamemode, 0, "()[Lmindustry/game/Gamemode;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_game_Gamemode_lambda$new$0_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$7_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$6_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$5_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$4_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$3_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$2_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$1_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_game_Gamemode_lambda$static$0_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Gamemode, 0, "()V", 8 },
};

Class class_mindustry_game_Gamemode{
		.nativeName = (intptr_t) "mindustry/game/Gamemode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_game_Gamemode),
		.classVtable = (intptr_t) vtable_mindustry_game_Gamemode,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Gamemode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Gamemode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Gamemode = registerClass(&class_mindustry_game_Gamemode);

}
