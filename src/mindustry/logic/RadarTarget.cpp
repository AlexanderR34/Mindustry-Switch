#include "mindustry/logic/RadarTarget.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_9.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_8.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_10.h"
#include "java/lang/Enum.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/logic/RadarTarget_RadarTargetFunc.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_15.h"
#include "mindustry/logic/RadarTarget.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_11.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_12.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_13.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_14.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"

extern "C" {

jobject SF_mindustry_logic_RadarTarget_any;
jobject SF_mindustry_logic_RadarTarget_enemy;
jobject SF_mindustry_logic_RadarTarget_ally;
jobject SF_mindustry_logic_RadarTarget_player;
jobject SF_mindustry_logic_RadarTarget_attacker;
jobject SF_mindustry_logic_RadarTarget_flying;
jobject SF_mindustry_logic_RadarTarget_boss;
jobject SF_mindustry_logic_RadarTarget_ground;
jobject SF_mindustry_logic_RadarTarget_all;
jobject SF_mindustry_logic_RadarTarget_$VALUES;

void mark_mindustry_logic_RadarTarget(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_RadarTarget_any)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_any)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_any, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_enemy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_enemy)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_enemy, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_ally)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_ally)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_ally, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_player)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_player)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_player, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_attacker)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_attacker)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_attacker, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_flying)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_flying)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_flying, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_boss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_boss)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_boss, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_ground)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_ground)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_ground, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_all, mark, depth + 1);
		if (SF_mindustry_logic_RadarTarget_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarTarget_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarTarget_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_RadarTarget *) object;
	if (self->F_func)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_func)->clazz)->markFunction)((jobject) self->F_func, mark, depth + 1);
}

jobject SM_mindustry_logic_RadarTarget_values_R_Array1_mindustry_logic_RadarTarget(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_RadarTarget_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_RadarTarget, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_RadarTarget)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_RadarTarget, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(20);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(21);
	((mindustry_logic_RadarTarget *) NULL_CHECK((frame[0].o)))->F_func = (jref) (frame[3].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_RadarTarget_$values_R_Array1_mindustry_logic_RadarTarget(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_RadarTarget, (8));
	jint temp0 = jint(0);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_ally;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_player;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_attacker;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_flying;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_boss;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_ground;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$7_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(14);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$6_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(13);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBoss_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isBoss_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$5_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$4_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(11);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canShoot_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canShoot_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$3_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_RadarTarget_lambda$static$2_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
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

jbool SM_mindustry_logic_RadarTarget_lambda$static$1_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
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

jbool SM_mindustry_logic_RadarTarget_lambda$static$0_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(7);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_RadarTarget(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarTarget:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarTarget(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"any"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_any = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enemy"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_9(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_9 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_9);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_enemy = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ally"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_10(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_10 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_10);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_ally = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"player"_j));
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_11(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_11 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_11);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_player = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"attacker"_j));
	jint temp4 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_12(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_12 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_12);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_attacker = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flying"_j));
	jint temp5 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_13(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_13 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_13);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_flying = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boss"_j));
	jint temp6 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_14(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_14 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_14);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp6, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_boss = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarTarget);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ground"_j));
	jint temp7 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_15(ctx);
		auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_15 *) gcAlloc(ctx, &class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_15);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(ctx, sp[0].o, sp[1].o, temp7, sp[2].o);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_ground = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_mindustry_logic_RadarTarget_$values_R_Array1_mindustry_logic_RadarTarget(ctx);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_$VALUES = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)SM_mindustry_logic_RadarTarget_values_R_Array1_mindustry_logic_RadarTarget(ctx);
	clinit_mindustry_logic_RadarTarget(ctx);
	SF_mindustry_logic_RadarTarget_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_RadarTarget[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
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
};

static jclass innerClasses[] {
	&class_mindustry_logic_RadarTarget$RadarTargetFunc,
};

static FieldMetadata fields[] {
	{ "any", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_any, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "enemy", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_enemy, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "ally", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_ally, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "player", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_player, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "attacker", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_attacker, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "flying", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_flying, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "boss", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_boss, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "ground", &class_mindustry_logic_RadarTarget, (intptr_t) &SF_mindustry_logic_RadarTarget_ground, "Lmindustry/logic/RadarTarget;", 16409 },
	{ "func", &class_mindustry_logic_RadarTarget$RadarTargetFunc, offsetof(mindustry_logic_RadarTarget, F_func), "Lmindustry/logic/RadarTarget$RadarTargetFunc;", 17 },
	{ "all", getArrayClass(&class_mindustry_logic_RadarTarget, 1), (intptr_t) &SF_mindustry_logic_RadarTarget_all, "[Lmindustry/logic/RadarTarget;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_RadarTarget, 1), (intptr_t) &SF_mindustry_logic_RadarTarget_$VALUES, "[Lmindustry/logic/RadarTarget;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_RadarTarget_values_R_Array1_mindustry_logic_RadarTarget, 0, "()[Lmindustry/logic/RadarTarget;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget, 0, "(Ljava/lang/String;)Lmindustry/logic/RadarTarget;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc, 0, "(Ljava/lang/String;ILmindustry/logic/RadarTarget$RadarTargetFunc;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_RadarTarget_$values_R_Array1_mindustry_logic_RadarTarget, 0, "()[Lmindustry/logic/RadarTarget;", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$7_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$6_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$5_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$4_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$3_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$2_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$1_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_RadarTarget_lambda$static$0_mindustry_game_Team_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_RadarTarget, 0, "()V", 8 },
};

Class class_mindustry_logic_RadarTarget{
		.nativeName = (intptr_t) "mindustry/logic/RadarTarget",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_RadarTarget),
		.classVtable = (intptr_t) vtable_mindustry_logic_RadarTarget,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_RadarTarget,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_RadarTarget,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_RadarTarget = registerClass(&class_mindustry_logic_RadarTarget);

}
