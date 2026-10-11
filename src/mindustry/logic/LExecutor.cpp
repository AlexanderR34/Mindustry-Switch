#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_PackColorI.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SpawnWaveI.h"
#include "mindustry/logic/LExecutor_SpawnBulletI.h"
#include "mindustry/logic/LExecutor_invoke_arc_func_Cons_1.h"
#include "mindustry/content/Fx.h"
#include "mindustry/logic/LExecutor_RadarI.h"
#include "mindustry/logic/LExecutor_SpawnUnitI.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LExecutor_LookupI.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "mindustry/logic/LExecutor_SetBlockI.h"
#include "mindustry/logic/LExecutor_WriteI.h"
#include "mindustry/logic/LExecutor_ControlI.h"
#include "arc/util/Time.h"
#include "mindustry/logic/LExecutor_ClientDataI.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/LExecutor_CutsceneI.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_QueryI.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/logic/LExecutor_SetRateI.h"
#include "mindustry/logic/LExecutor_EffectI.h"
#include "mindustry/logic/LExecutor_MakeMarkerI.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/struct/OrderedMap.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/LExecutor_GetFlagI.h"
#include "mindustry/logic/LExecutor_SelectI.h"
#include "mindustry/logic/LExecutor_ReadI.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LExecutor_SetI.h"
#include "mindustry/logic/LExecutor_LocalePrintI.h"
#include "mindustry/logic/LExecutor_SyncI.h"
#include "mindustry/logic/LExecutor_OpI.h"
#include "mindustry/logic/LExecutor_ApplyEffectI.h"
#include "mindustry/logic/LExecutor_SetFlagI.h"
#include "java/lang/Number.h"
#include "arc/struct/IntFloatMap.h"
#include "mindustry/logic/LExecutor_invoke_arc_func_Boolf_1.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LExecutor_FetchI.h"
#include "mindustry/logic/LExecutor_FormatI.h"
#include "mindustry/logic/LExecutor_PrintCharI.h"
#include "mindustry/logic/LExecutor_SetMarkerI.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/logic/LExecutor_PrintFlushI.h"
#include "mindustry/logic/LExecutor_WaitI.h"
#include "arc/Events.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/logic/LExecutor_UnpackColorI.h"
#include "mindustry/logic/LExecutor_SenseI.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/logic/LExecutor_ExplosionI.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_EndI.h"
#include "mindustry/logic/LExecutor_SetRuleI.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_PlaySoundI.h"
#include "mindustry/logic/LExecutor_JumpI.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/logic/LExecutor_NoopI.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/logic/LExecutor_StopI.h"
#include "mindustry/logic/LExecutor_GetBlockI.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_SenseWeatherI.h"
#include "mindustry/logic/LExecutor_FlushMessageI.h"
#include "mindustry/logic/LExecutor_UnitBindI.h"
#include "mindustry/logic/LExecutor_SetWeatherI.h"
#include "java/lang/Math.h"
#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "mindustry/logic/LExecutor_GetLinkI.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/logic/LExecutor_DrawFlushI.h"
#include "mindustry/logic/LExecutor_UnitLocateI.h"
#include "mindustry/logic/LExecutor_PlayMusicI.h"
#include "mindustry/logic/LExecutor_SetPropI.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/core/GameState.h"
#include "mindustry/logic/LExecutor_DrawI.h"

extern "C" {

jint SF_mindustry_logic_LExecutor_maxInstructions;
jint SF_mindustry_logic_LExecutor_maxGraphicsBuffer;
jint SF_mindustry_logic_LExecutor_maxDisplayBuffer;
jint SF_mindustry_logic_LExecutor_maxTextBuffer;
jobject SF_mindustry_logic_LExecutor_unitTimeouts;

void mark_mindustry_logic_LExecutor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LExecutor_unitTimeouts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor_unitTimeouts)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor_unitTimeouts, mark, depth + 1);
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
	auto self = (mindustry_logic_LExecutor *) object;
	if (self->F_instructions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instructions)->clazz)->markFunction)((jobject) self->F_instructions, mark, depth + 1);
	if (self->F_vars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vars)->clazz)->markFunction)((jobject) self->F_vars, mark, depth + 1);
	if (self->F_counter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counter)->clazz)->markFunction)((jobject) self->F_counter, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_thisv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thisv)->clazz)->markFunction)((jobject) self->F_thisv, mark, depth + 1);
	if (self->F_ipt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ipt)->clazz)->markFunction)((jobject) self->F_ipt, mark, depth + 1);
	if (self->F_queryResult)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queryResult)->clazz)->markFunction)((jobject) self->F_queryResult, mark, depth + 1);
	if (self->F_binds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_binds)->clazz)->markFunction)((jobject) self->F_binds, mark, depth + 1);
	if (self->F_graphicsBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graphicsBuffer)->clazz)->markFunction)((jobject) self->F_graphicsBuffer, mark, depth + 1);
	if (self->F_textBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textBuffer)->clazz)->markFunction)((jobject) self->F_textBuffer, mark, depth + 1);
	if (self->F_links)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_links)->clazz)->markFunction)((jobject) self->F_links, mark, depth + 1);
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
	if (self->F_linkIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_linkIds)->clazz)->markFunction)((jobject) self->F_linkIds, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_nameMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameMap)->clazz)->markFunction)((jobject) self->F_nameMap, mark, depth + 1);
}

void init_mindustry_logic_LExecutor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_logic_LExecutor$LInstruction, (jint(0)));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_logic_LVar, (jint(0)));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_graphicsBuffer = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_textBuffer = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Building, (jint(0)));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_linkIds = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(62);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_privileged = (jint(0));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:runLogicScript", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(74);
	SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String_int_boolean(ctx, (frame[0].o), (jint(100000)), (jint(0)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:runLogicScript", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(78);
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(80);
	clinit_mindustry_logic_LExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor);
	init_mindustry_logic_LExecutor(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(81);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[3].o)))->F_privileged = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(ctx, (frame[0].o), (jint(1)));
	((func_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(88);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(86);
	frame[4].o = sp[0].o;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(91);
	frame[4].i = (jint(1));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_11;
	}
	{
	LINE_NUMBER(92);
	if ((frame[2].i) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[3].o)))->F_counter;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[3].o)))->F_instructions;
	if ((doubleCompare(temp0, (jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))), -1)) >= 0) goto label_11;
	}
label_13:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[3].o)))->F_counter;
	if ((doubleCompare(((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval), (jdouble(0)), 1)) < 0) goto label_11;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[3].o)))->F_yield) == 0) goto label_14;
	}
	goto label_11;
label_14:;
	{
	LINE_NUMBER(93);
	((func_mindustry_logic_LExecutor_runOnce) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_logic_LExecutor_runOnce])(ctx, (frame[3].o));
	LINE_NUMBER(91);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:timeoutDone", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(98);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	clinit_mindustry_logic_LExecutor(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor_unitTimeouts;
	jfloat temp1 = (jfloat)((func_arc_struct_IntFloatMap_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id));
	if ((floatCompare(temp0, (temp1 + (frame[2].f)), -1)) < 0) goto label_1;
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

void M_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:updateTimeout", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	clinit_mindustry_logic_LExecutor(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor_unitTimeouts;
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LExecutor_initialized_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:initialized", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_instructions;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
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

void M_mindustry_logic_LExecutor_runOnce(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:runOnce", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_instructions;
	if ((doubleCompare(temp0, (jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))), -1)) >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	if ((doubleCompare(((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval), (jdouble(0)), 1)) >= 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(0));
	}
label_2:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_instructions;
	if ((doubleCompare(temp0, (jdouble((((jarray) nullCheck(ctx, sp[0].o))->length))), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj = (jint(0));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_instructions;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_counter;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval;
	((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval = (temp0 + (jdouble(1)));
	((func_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor) resolveInterfaceMethod(ctx, &class_mindustry_logic_LExecutor$LInstruction, INDEX_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(temp0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(temp0)))), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_stop = (jint(0));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_graphicsBuffer;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(127);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_nameMap = (jref) (jobject(nullptr));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[1].o)))->F_vars;
	sp[1].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_logic_LExecutor_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_logic_LVar)));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_vars = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_logic_LVar, 1), sp[1].o));
	LINE_NUMBER(130);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	((mindustry_logic_LVar *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_id = (frame[2].i);
	LINE_NUMBER(130);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[1].o)))->F_instructions;
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_instructions = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@counter"_j))));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_counter = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@this"_j))));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_thisv = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@ipt"_j));
	sp[3].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_build;
	sp += 3;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK(sp[0].o))->F_ipt;
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 4;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[3].i);
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_ipt = (jref) sp[1].o;
	LINE_NUMBER(139);
	if (((jint)((mindustry_logic_LAssembler *) NULL_CHECK((frame[1].o)))->F_privileged) == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@queries"_j))), (jobject(nullptr)));
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_queryResult = (jref) sp[1].o;
	}
label_17:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:optionalVar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_nameMap;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_logic_LExecutor *) NULL_CHECK(sp[0].o))->F_nameMap = (jref) sp[1].o;
	LINE_NUMBER(148);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_nameMap;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_name;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(148);
	INST_IINC(2, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_nameMap;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[1].o, (frame[1].o), (jint(-1)));
	sp[0].o = (jobject)((func_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:optionalVar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor_checkMapArea_int_int_int_int_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:checkMapArea", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1863);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[0].i), (jint(0)));
	frame[0].i = temp0;
	LINE_NUMBER(1864);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (jint(0)));
	frame[1].i = temp1;
	LINE_NUMBER(1865);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (frame[2].i));
	frame[2].i = temp3;
	LINE_NUMBER(1866);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, (frame[3].i));
	frame[3].i = temp5;
	LINE_NUMBER(1867);
	if ((frame[0].i) != 0) goto label_5;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_5;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1869);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1870);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX) != (frame[0].i)) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY) != (frame[1].i)) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) != (frame[2].i)) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) != (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(1871);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(1872);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1874);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1875);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[6].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[7].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[8].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[9].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight);
	LINE_NUMBER(1876);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (jint(0));
	LINE_NUMBER(1877);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1878);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_updateAllDarkness) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_updateAllDarkness])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(1880);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_checkMapArea_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_checkMapArea_int_int_int_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(1881);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1884);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1885);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(1888);
	if ((frame[4].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(1889);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[6].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[7].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[8].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[9].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight);
	LINE_NUMBER(1890);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) != 0) goto label_30;
	}
	{
	LINE_NUMBER(1892);
	frame[8].i = (jint(0));
	LINE_NUMBER(1893);
	frame[9].i = (jint(0));
	LINE_NUMBER(1894);
	frame[6].i = (jint(-1));
	LINE_NUMBER(1895);
	frame[7].i = (jint(-1));
	}
label_30:;
	{
	LINE_NUMBER(1897);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (jint(1));
	LINE_NUMBER(1898);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX = (frame[0].i);
	LINE_NUMBER(1899);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY = (frame[1].i);
	LINE_NUMBER(1900);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth = (frame[2].i);
	LINE_NUMBER(1901);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight = (frame[3].i);
	LINE_NUMBER(1902);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_checkMapArea_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_checkMapArea_int_int_int_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(1904);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_24;
	}
	{
	LINE_NUMBER(1905);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_updateAllDarkness) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_updateAllDarkness])(ctx, sp[0].o);
	}
label_24:;
	{
	LINE_NUMBER(1909);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_setMapArea_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:setMapArea", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1914);
	jint temp0 = (jint)SM_mindustry_logic_LExecutor_checkMapArea_int_int_int_int_boolean_R_boolean(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (jint(1)));
	LINE_NUMBER(1915);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:logicExplosion", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(2034);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2036);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[7].i), (frame[5].i), (frame[6].i), (jint(1)), (jobject(nullptr)));
	LINE_NUMBER(2037);
	if ((frame[8].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2038);
	if ((frame[7].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2039);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawnShockwave;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, (frame[3].f));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(2041);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, (frame[3].f));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (temp2 / (jfloat(8.0f))));
	}
label_3:;
	LINE_NUMBER(2044);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_syncVariable_mindustry_gen_Building_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:syncVariable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2048);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild, (frame[0].o)));
	LINE_NUMBER(2049);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicBuild *) NULL_CHECK((frame[3].o)))->F_executor;
	sp[0].o = (jobject)((func_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar])(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2050);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_constant) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2051);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_5;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_Number, (frame[2].o)));
	LINE_NUMBER(2052);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_isobj = (jint(0));
	LINE_NUMBER(2053);
	sp[0].o = frame[4].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[5].o));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = temp0;
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2055);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_isobj = (jint(1));
	LINE_NUMBER(2056);
	((mindustry_logic_LVar *) NULL_CHECK((frame[4].o)))->F_objval = (jref) (frame[2].o);
	}
label_1:;
	LINE_NUMBER(2060);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_setFlag_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:setFlag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2132);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	auto rules = (mindustry_game_Rules *) NULL_CHECK(sp[0].o);
	if (!rules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject)rules->F_objectiveFlags);
	}
	sp[0].o = (jobject)rules->F_objectiveFlags;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	auto rules = (mindustry_game_Rules *) NULL_CHECK(sp[0].o);
	if (!rules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject)rules->F_objectiveFlags);
	}
	sp[0].o = (jobject)rules->F_objectiveFlags;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(2137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:createMarker", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2357);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	((func_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(2358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_removeMarker_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:removeMarker", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	((func_mindustry_game_MapMarkers_remove_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_remove_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(2363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jint param0, jobject param1, jdouble param2, jdouble param3, jdouble param4) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:updateMarker", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].d = param2;
	frame[4].d = param3;
	frame[6].d = param4;
	{
	LINE_NUMBER(2367);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, (frame[0].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2368);
	if ((frame[8].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2369);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double])(ctx, (frame[8].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	}
label_2:;
	LINE_NUMBER(2371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jint param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:updateMarkerText", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2375);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, (frame[0].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2376);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2377);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_flushText;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2378);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean])(ctx, (frame[4].o), (frame[3].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(2381);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor_updateMarkerTexture_int_java_lang_Object(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:updateMarkerTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, (frame[0].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2386);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2387);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(2389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor_lambda$load$0_mindustry_logic_LVar_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:lambda$load$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(129);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	if (temp0 == (95)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	if (temp0 == (64)) goto label_2;
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

void SM_mindustry_logic_LExecutor_lambda$static$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	clinit_mindustry_logic_LExecutor(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor_unitTimeouts;
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LExecutor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_logic_LExecutor_maxGraphicsBuffer = jint(256);
	SF_mindustry_logic_LExecutor_maxDisplayBuffer = jint(1024);
	SF_mindustry_logic_LExecutor_maxTextBuffer = jint(400);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor(ctx);
	{
	LINE_NUMBER(40);
	clinit_mindustry_logic_LExecutor(ctx);
	SF_mindustry_logic_LExecutor_maxInstructions = (1000);
	LINE_NUMBER(67);
	clinit_arc_struct_IntFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[0].o);
	clinit_mindustry_logic_LExecutor(ctx);
	SF_mindustry_logic_LExecutor_unitTimeouts = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_logic_LExecutor_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LExecutor;
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

	{ // Field build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field nameMap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method optionalVar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method optionalVar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

void *vtable_mindustry_logic_LExecutor[] {
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
	(void *) M_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean,
	(void *) M_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit,
	(void *) M_mindustry_logic_LExecutor_initialized_R_boolean,
	(void *) M_mindustry_logic_LExecutor_runOnce,
	(void *) M_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler,
	(void *) M_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar,
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
	{ "timeoutDone", "(Lmindustry/gen/Unit;F)Z" },
	{ "updateTimeout", "(Lmindustry/gen/Unit;)V" },
	{ "initialized", "()Z" },
	{ "runOnce", "()V" },
	{ "load", "(Lmindustry/logic/LAssembler;)V" },
	{ "optionalVar", "(Ljava/lang/String;)Lmindustry/logic/LVar;" },
	{ "optionalVar", "(I)Lmindustry/logic/LVar;" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_LExecutor$LInstruction,
	&class_mindustry_logic_LExecutor$LocalePrintI,
	&class_mindustry_logic_LExecutor$MakeMarkerI,
	&class_mindustry_logic_LExecutor$SetMarkerI,
	&class_mindustry_logic_LExecutor$PlayMusicI,
	&class_mindustry_logic_LExecutor$PlaySoundI,
	&class_mindustry_logic_LExecutor$SetPropI,
	&class_mindustry_logic_LExecutor$SpawnWaveI,
	&class_mindustry_logic_LExecutor$SetFlagI,
	&class_mindustry_logic_LExecutor$GetFlagI,
	&class_mindustry_logic_LExecutor$ClientDataI,
	&class_mindustry_logic_LExecutor$SyncI,
	&class_mindustry_logic_LExecutor$ExplosionI,
	&class_mindustry_logic_LExecutor$EffectI,
	&class_mindustry_logic_LExecutor$FlushMessageI,
	&class_mindustry_logic_LExecutor$SetRuleI,
	&class_mindustry_logic_LExecutor$ApplyEffectI,
	&class_mindustry_logic_LExecutor$SetWeatherI,
	&class_mindustry_logic_LExecutor$SenseWeatherI,
	&class_mindustry_logic_LExecutor$SpawnBulletI,
	&class_mindustry_logic_LExecutor$SpawnUnitI,
	&class_mindustry_logic_LExecutor$SetBlockI,
	&class_mindustry_logic_LExecutor$GetBlockI,
	&class_mindustry_logic_LExecutor$QueryI,
	&class_mindustry_logic_LExecutor$FetchI,
	&class_mindustry_logic_LExecutor$CutsceneI,
	&class_mindustry_logic_LExecutor$UnpackColorI,
	&class_mindustry_logic_LExecutor$PackColorI,
	&class_mindustry_logic_LExecutor$LookupI,
	&class_mindustry_logic_LExecutor$StopI,
	&class_mindustry_logic_LExecutor$WaitI,
	&class_mindustry_logic_LExecutor$SetRateI,
	&class_mindustry_logic_LExecutor$JumpI,
	&class_mindustry_logic_LExecutor$PrintFlushI,
	&class_mindustry_logic_LExecutor$FormatI,
	&class_mindustry_logic_LExecutor$PrintCharI,
	&class_mindustry_logic_LExecutor$PrintI,
	&class_mindustry_logic_LExecutor$DrawFlushI,
	&class_mindustry_logic_LExecutor$DrawI,
	&class_mindustry_logic_LExecutor$NoopI,
	&class_mindustry_logic_LExecutor$EndI,
	&class_mindustry_logic_LExecutor$SelectI,
	&class_mindustry_logic_LExecutor$OpI,
	&class_mindustry_logic_LExecutor$SetI,
	&class_mindustry_logic_LExecutor$RadarI,
	&class_mindustry_logic_LExecutor$SenseI,
	&class_mindustry_logic_LExecutor$WriteI,
	&class_mindustry_logic_LExecutor$ReadI,
	&class_mindustry_logic_LExecutor$GetLinkI,
	&class_mindustry_logic_LExecutor$ControlI,
	&class_mindustry_logic_LExecutor$UnitControlI,
	&class_mindustry_logic_LExecutor$UnitLocateI,
	&class_mindustry_logic_LExecutor$UnitBindI,
};

static FieldMetadata fields[] {
	{ "maxInstructions", &class_int, (intptr_t) &SF_mindustry_logic_LExecutor_maxInstructions, "I", 9 },
	{ "maxGraphicsBuffer", &class_int, (intptr_t) &SF_mindustry_logic_LExecutor_maxGraphicsBuffer, "I", 25 },
	{ "maxDisplayBuffer", &class_int, (intptr_t) &SF_mindustry_logic_LExecutor_maxDisplayBuffer, "I", 25 },
	{ "maxTextBuffer", &class_int, (intptr_t) &SF_mindustry_logic_LExecutor_maxTextBuffer, "I", 25 },
	{ "instructions", getArrayClass(&class_mindustry_logic_LExecutor$LInstruction, 1), offsetof(mindustry_logic_LExecutor, F_instructions), "[Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "vars", getArrayClass(&class_mindustry_logic_LVar, 1), offsetof(mindustry_logic_LExecutor, F_vars), "[Lmindustry/logic/LVar;", 1 },
	{ "counter", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor, F_counter), "Lmindustry/logic/LVar;", 1 },
	{ "unit", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor, F_unit), "Lmindustry/logic/LVar;", 1 },
	{ "thisv", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor, F_thisv), "Lmindustry/logic/LVar;", 1 },
	{ "ipt", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor, F_ipt), "Lmindustry/logic/LVar;", 1 },
	{ "queryResult", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor, F_queryResult), "Lmindustry/logic/LVar;", 1 },
	{ "binds", getArrayClass(&class_int, 1), offsetof(mindustry_logic_LExecutor, F_binds), "[I", 1 },
	{ "yield", &class_boolean, offsetof(mindustry_logic_LExecutor, F_yield), "Z", 1 },
	{ "stop", &class_boolean, offsetof(mindustry_logic_LExecutor, F_stop), "Z", 1 },
	{ "graphicsBuffer", &class_arc_struct_LongSeq, offsetof(mindustry_logic_LExecutor, F_graphicsBuffer), "Larc/struct/LongSeq;", 1 },
	{ "textBuffer", &class_java_lang_StringBuilder, offsetof(mindustry_logic_LExecutor, F_textBuffer), "Ljava/lang/StringBuilder;", 1 },
	{ "links", getArrayClass(&class_mindustry_gen_Building, 1), offsetof(mindustry_logic_LExecutor, F_links), "[Lmindustry/gen/Building;", 1 },
	{ "build", &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild, offsetof(mindustry_logic_LExecutor, F_build), "Lmindustry/world/blocks/logic/LogicBlock$LogicBuild;", 1 },
	{ "linkIds", &class_arc_struct_IntSet, offsetof(mindustry_logic_LExecutor, F_linkIds), "Larc/struct/IntSet;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_logic_LExecutor, F_team), "Lmindustry/game/Team;", 1 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_LExecutor, F_privileged), "Z", 1 },
	{ "nameMap", &class_arc_struct_ObjectIntMap, offsetof(mindustry_logic_LExecutor, F_nameMap), "Larc/struct/ObjectIntMap;", 4 },
	{ "unitTimeouts", &class_arc_struct_IntFloatMap, (intptr_t) &SF_mindustry_logic_LExecutor_unitTimeouts, "Larc/struct/IntFloatMap;", 12 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor, 0, "()V", 1 },
	{ "runLogicScript", (intptr_t) SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "runLogicScript", (intptr_t) SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String_int_boolean, 0, "(Ljava/lang/String;IZ)V", 9 },
	{ "timeoutDone", (intptr_t) M_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean, VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean, "(Lmindustry/gen/Unit;F)Z", 0 },
	{ "updateTimeout", (intptr_t) M_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit, VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 0 },
	{ "initialized", (intptr_t) M_mindustry_logic_LExecutor_initialized_R_boolean, VTABLE_mindustry_logic_LExecutor_initialized_R_boolean, "()Z", 1 },
	{ "runOnce", (intptr_t) M_mindustry_logic_LExecutor_runOnce, VTABLE_mindustry_logic_LExecutor_runOnce, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler, VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler, "(Lmindustry/logic/LAssembler;)V", 1 },
	{ "optionalVar", (intptr_t) M_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar, "(Ljava/lang/String;)Lmindustry/logic/LVar;", 1 },
	{ "optionalVar", (intptr_t) M_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar, "(I)Lmindustry/logic/LVar;", 1 },
	{ "checkMapArea", (intptr_t) SM_mindustry_logic_LExecutor_checkMapArea_int_int_int_int_boolean_R_boolean, 0, "(IIIIZ)Z", 8 },
	{ "setMapArea", (intptr_t) SM_mindustry_logic_LExecutor_setMapArea_int_int_int_int, 0, "(IIII)V", 9 },
	{ "logicExplosion", (intptr_t) SM_mindustry_logic_LExecutor_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean, 0, "(Lmindustry/game/Team;FFFFZZZZ)V", 9 },
	{ "syncVariable", (intptr_t) SM_mindustry_logic_LExecutor_syncVariable_mindustry_gen_Building_int_java_lang_Object, 0, "(Lmindustry/gen/Building;ILjava/lang/Object;)V", 9 },
	{ "setFlag", (intptr_t) SM_mindustry_logic_LExecutor_setFlag_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 9 },
	{ "createMarker", (intptr_t) SM_mindustry_logic_LExecutor_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker, 0, "(ILmindustry/game/MapObjectives$ObjectiveMarker;)V", 9 },
	{ "removeMarker", (intptr_t) SM_mindustry_logic_LExecutor_removeMarker_int, 0, "(I)V", 9 },
	{ "updateMarker", (intptr_t) SM_mindustry_logic_LExecutor_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double, 0, "(ILmindustry/logic/LMarkerControl;DDD)V", 9 },
	{ "updateMarkerText", (intptr_t) SM_mindustry_logic_LExecutor_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String, 0, "(ILmindustry/logic/LMarkerControl;ZLjava/lang/String;)V", 9 },
	{ "updateMarkerTexture", (intptr_t) SM_mindustry_logic_LExecutor_updateMarkerTexture_int_java_lang_Object, 0, "(ILjava/lang/Object;)V", 9 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_logic_LExecutor_lambda$load$0_mindustry_logic_LVar_R_boolean, 0, "(Lmindustry/logic/LVar;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_LExecutor_lambda$static$0_mindustry_game_EventType$ResetEvent, 0, "(Lmindustry/game/EventType$ResetEvent;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LExecutor, 0, "()V", 8 },
};

Class class_mindustry_logic_LExecutor{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 53,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor = registerClass(&class_mindustry_logic_LExecutor);

}
