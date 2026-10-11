#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "mindustry/logic/LExecutor_1.h"
#include "mindustry/logic/LUnitControl.h"
#include "java/lang/Object.h"
#include "mindustry/logic/TileLayer.h"
#include "mindustry/logic/CutsceneAction.h"
#include "mindustry/logic/LogicRule.h"
#include "mindustry/logic/LLocate.h"
#include "mindustry/logic/QueryType.h"
#include "mindustry/logic/FetchType.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/MessageType.h"

extern "C" {

jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
jobject SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;

void mark_mindustry_logic_LExecutor$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType, mark, depth + 1);
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
	auto self = (mindustry_logic_LExecutor$1 *) object;
}

void clinit_mindustry_logic_LExecutor$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$1(ctx);
	{
	LINE_NUMBER(1963);
	sp[0].o = (jobject)SM_mindustry_logic_MessageType_values_R_Array1_mindustry_logic_MessageType(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_notify;
	jint temp0 = (jint)((func_mindustry_logic_MessageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_announce;
	jint temp0 = (jint)((func_mindustry_logic_MessageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_6:;
	INST_ASTORE(0);
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_toast;
	jint temp0 = (jint)((func_mindustry_logic_MessageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_10:;
	INST_ASTORE(0);
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_mission;
	jint temp0 = (jint)((func_mindustry_logic_MessageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_329;
label_14:;
	INST_ASTORE(0);
label_329:;
	{
	LINE_NUMBER(1843);
	sp[0].o = (jobject)SM_mindustry_logic_LogicRule_values_R_Array1_mindustry_logic_LogicRule(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule = sp[0].o;
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_buildSpeed;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_18:;
	INST_ASTORE(0);
label_20:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitHealth;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_24;
label_22:;
	INST_ASTORE(0);
label_24:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_26; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitBuildSpeed;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_26:;
	INST_ASTORE(0);
label_28:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitMineSpeed;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_32;
label_30:;
	INST_ASTORE(0);
label_32:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitCost;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_36;
label_34:;
	INST_ASTORE(0);
label_36:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_38; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitDamage;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_40;
label_38:;
	INST_ASTORE(0);
label_40:;
label_43: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_42; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_blockHealth;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (7);
	}
	popExceptionFrame(frameRef);
	goto label_44;
label_42:;
	INST_ASTORE(0);
label_44:;
label_47: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_46; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_blockDamage;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (8);
	}
	popExceptionFrame(frameRef);
	goto label_48;
label_46:;
	INST_ASTORE(0);
label_48:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_50; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_rtsMinWeight;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (9);
	}
	popExceptionFrame(frameRef);
	goto label_52;
label_50:;
	INST_ASTORE(0);
label_52:;
label_55: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_54; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_rtsMinSquad;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (10);
	}
	popExceptionFrame(frameRef);
	goto label_56;
label_54:;
	INST_ASTORE(0);
label_56:;
label_59: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_58; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveTimer;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (11);
	}
	popExceptionFrame(frameRef);
	goto label_60;
label_58:;
	INST_ASTORE(0);
label_60:;
label_63: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_62; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_wave;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (12);
	}
	popExceptionFrame(frameRef);
	goto label_64;
label_62:;
	INST_ASTORE(0);
label_64:;
label_67: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_66; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_currentWaveTime;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (13);
	}
	popExceptionFrame(frameRef);
	goto label_68;
label_66:;
	INST_ASTORE(0);
label_68:;
label_71: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_70; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waves;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (14);
	}
	popExceptionFrame(frameRef);
	goto label_72;
label_70:;
	INST_ASTORE(0);
label_72:;
label_75: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_74; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSending;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (15);
	}
	popExceptionFrame(frameRef);
	goto label_76;
label_74:;
	INST_ASTORE(0);
label_76:;
label_79: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_78; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_attackMode;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (16);
	}
	popExceptionFrame(frameRef);
	goto label_80;
label_78:;
	INST_ASTORE(0);
label_80:;
label_83: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_82; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSpacing;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (17);
	}
	popExceptionFrame(frameRef);
	goto label_84;
label_82:;
	INST_ASTORE(0);
label_84:;
label_87: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_86; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_enemyCoreBuildRadius;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (18);
	}
	popExceptionFrame(frameRef);
	goto label_88;
label_86:;
	INST_ASTORE(0);
label_88:;
label_91: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_90; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_dropZoneRadius;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (19);
	}
	popExceptionFrame(frameRef);
	goto label_92;
label_90:;
	INST_ASTORE(0);
label_92:;
label_95: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_94; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitCap;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (20);
	}
	popExceptionFrame(frameRef);
	goto label_96;
label_94:;
	INST_ASTORE(0);
label_96:;
label_99: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_98; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_lighting;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (21);
	}
	popExceptionFrame(frameRef);
	goto label_100;
label_98:;
	INST_ASTORE(0);
label_100:;
label_103: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_102; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_canGameOver;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (22);
	}
	popExceptionFrame(frameRef);
	goto label_104;
label_102:;
	INST_ASTORE(0);
label_104:;
label_107: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_106; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_pauseDisabled;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (23);
	}
	popExceptionFrame(frameRef);
	goto label_108;
label_106:;
	INST_ASTORE(0);
label_108:;
label_111: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_110; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_musicVolume;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (24);
	}
	popExceptionFrame(frameRef);
	goto label_112;
label_110:;
	INST_ASTORE(0);
label_112:;
label_115: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_114; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_mapArea;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (25);
	}
	popExceptionFrame(frameRef);
	goto label_116;
label_114:;
	INST_ASTORE(0);
label_116:;
label_119: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_118; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_ambientLight;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (26);
	}
	popExceptionFrame(frameRef);
	goto label_120;
label_118:;
	INST_ASTORE(0);
label_120:;
label_123: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_122; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitLight;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (27);
	}
	popExceptionFrame(frameRef);
	goto label_124;
label_122:;
	INST_ASTORE(0);
label_124:;
label_127: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_126; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_solarMultiplier;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (28);
	}
	popExceptionFrame(frameRef);
	goto label_128;
label_126:;
	INST_ASTORE(0);
label_128:;
label_131: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_130; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_dragMultiplier;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (29);
	}
	popExceptionFrame(frameRef);
	goto label_132;
label_130:;
	INST_ASTORE(0);
label_132:;
label_135: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_134; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_ban;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (30);
	}
	popExceptionFrame(frameRef);
	goto label_136;
label_134:;
	INST_ASTORE(0);
label_136:;
label_139: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_138; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unban;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (31);
	}
	popExceptionFrame(frameRef);
	goto label_330;
label_138:;
	INST_ASTORE(0);
label_330:;
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)SM_mindustry_logic_TileLayer_values_R_Array1_mindustry_logic_TileLayer(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer = sp[0].o;
	}
label_143: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_142; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_floor;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_144;
label_142:;
	INST_ASTORE(0);
label_144:;
label_147: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_146; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_ore;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_148;
label_146:;
	INST_ASTORE(0);
label_148:;
label_151: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_150; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_block;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_152;
label_150:;
	INST_ASTORE(0);
label_152:;
label_155: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_154; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer;
	clinit_mindustry_logic_TileLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_TileLayer_building;
	jint temp0 = (jint)((func_mindustry_logic_TileLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_331;
label_154:;
	INST_ASTORE(0);
label_331:;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)SM_mindustry_logic_QueryType_values_R_Array1_mindustry_logic_QueryType(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType = sp[0].o;
	}
label_159: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_158; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_unit;
	jint temp0 = (jint)((func_mindustry_logic_QueryType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_160;
label_158:;
	INST_ASTORE(0);
label_160:;
label_163: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_162; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_bullet;
	jint temp0 = (jint)((func_mindustry_logic_QueryType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_164;
label_162:;
	INST_ASTORE(0);
label_164:;
label_167: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_166; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_building;
	jint temp0 = (jint)((func_mindustry_logic_QueryType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_332;
label_166:;
	INST_ASTORE(0);
label_332:;
	{
	LINE_NUMBER(1394);
	sp[0].o = (jobject)SM_mindustry_logic_FetchType_values_R_Array1_mindustry_logic_FetchType(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType = sp[0].o;
	}
label_171: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_170; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_172;
label_170:;
	INST_ASTORE(0);
label_172:;
label_175: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_174; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_player;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_176;
label_174:;
	INST_ASTORE(0);
label_176:;
label_179: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_178; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_core;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_180;
label_178:;
	INST_ASTORE(0);
label_180:;
label_183: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_182; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_build;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_184;
label_182:;
	INST_ASTORE(0);
label_184:;
label_187: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_186; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unitCount;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_188;
label_186:;
	INST_ASTORE(0);
label_188:;
label_191: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_190; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_coreCount;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_192;
label_190:;
	INST_ASTORE(0);
label_192:;
label_195: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_194; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_playerCount;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (7);
	}
	popExceptionFrame(frameRef);
	goto label_196;
label_194:;
	INST_ASTORE(0);
label_196:;
label_199: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_198; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_buildCount;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (8);
	}
	popExceptionFrame(frameRef);
	goto label_333;
label_198:;
	INST_ASTORE(0);
label_333:;
	{
	LINE_NUMBER(1353);
	sp[0].o = (jobject)SM_mindustry_logic_CutsceneAction_values_R_Array1_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction = sp[0].o;
	}
label_203: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_202; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_active;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_204;
label_202:;
	INST_ASTORE(0);
label_204:;
label_207: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_206; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_pan;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_208;
label_206:;
	INST_ASTORE(0);
label_208:;
label_211: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_210; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_zoom;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_212;
label_210:;
	INST_ASTORE(0);
label_212:;
label_215: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_214; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_stop;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_216;
label_214:;
	INST_ASTORE(0);
label_216:;
label_219: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_218; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_shake;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_220;
label_218:;
	INST_ASTORE(0);
label_220:;
label_223: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_222; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_getHud;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_224;
label_222:;
	INST_ASTORE(0);
label_224:;
label_227: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_226; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_setHud;
	jint temp0 = (jint)((func_mindustry_logic_CutsceneAction_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (7);
	}
	popExceptionFrame(frameRef);
	goto label_334;
label_226:;
	INST_ASTORE(0);
label_334:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)SM_mindustry_logic_LUnitControl_values_R_Array1_mindustry_logic_LUnitControl(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl = sp[0].o;
	}
label_231: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_230; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_idle;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_232;
label_230:;
	INST_ASTORE(0);
label_232:;
label_235: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_234; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_autoPathfind;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_236;
label_234:;
	INST_ASTORE(0);
label_236:;
label_239: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_238; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_move;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_240;
label_238:;
	INST_ASTORE(0);
label_240:;
label_243: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_242; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_stop;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_244;
label_242:;
	INST_ASTORE(0);
label_244:;
label_247: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_246; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_approach;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_248;
label_246:;
	INST_ASTORE(0);
label_248:;
label_251: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_250; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_pathfind;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_252;
label_250:;
	INST_ASTORE(0);
label_252:;
label_255: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_254; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_unbind;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (7);
	}
	popExceptionFrame(frameRef);
	goto label_256;
label_254:;
	INST_ASTORE(0);
label_256:;
label_259: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_258; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_within;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (8);
	}
	popExceptionFrame(frameRef);
	goto label_260;
label_258:;
	INST_ASTORE(0);
label_260:;
label_263: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_262; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_target;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (9);
	}
	popExceptionFrame(frameRef);
	goto label_264;
label_262:;
	INST_ASTORE(0);
label_264:;
label_267: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_266; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_targetp;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (10);
	}
	popExceptionFrame(frameRef);
	goto label_268;
label_266:;
	INST_ASTORE(0);
label_268:;
label_271: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_270; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_boost;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (11);
	}
	popExceptionFrame(frameRef);
	goto label_272;
label_270:;
	INST_ASTORE(0);
label_272:;
label_275: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_274; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_flag;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (12);
	}
	popExceptionFrame(frameRef);
	goto label_276;
label_274:;
	INST_ASTORE(0);
label_276:;
label_279: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_278; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_mine;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (13);
	}
	popExceptionFrame(frameRef);
	goto label_280;
label_278:;
	INST_ASTORE(0);
label_280:;
label_283: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_282; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payDrop;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (14);
	}
	popExceptionFrame(frameRef);
	goto label_284;
label_282:;
	INST_ASTORE(0);
label_284:;
label_287: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_286; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payTake;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (15);
	}
	popExceptionFrame(frameRef);
	goto label_288;
label_286:;
	INST_ASTORE(0);
label_288:;
label_291: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_290; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payEnter;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (16);
	}
	popExceptionFrame(frameRef);
	goto label_292;
label_290:;
	INST_ASTORE(0);
label_292:;
label_295: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_294; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_build;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (17);
	}
	popExceptionFrame(frameRef);
	goto label_296;
label_294:;
	INST_ASTORE(0);
label_296:;
label_299: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_298; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_deconstruct;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (18);
	}
	popExceptionFrame(frameRef);
	goto label_300;
label_298:;
	INST_ASTORE(0);
label_300:;
label_303: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_302; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_getBlock;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (19);
	}
	popExceptionFrame(frameRef);
	goto label_304;
label_302:;
	INST_ASTORE(0);
label_304:;
label_307: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_306; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_itemDrop;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (20);
	}
	popExceptionFrame(frameRef);
	goto label_308;
label_306:;
	INST_ASTORE(0);
label_308:;
label_311: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_310; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_itemTake;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (21);
	}
	popExceptionFrame(frameRef);
	goto label_335;
label_310:;
	INST_ASTORE(0);
label_335:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_mindustry_logic_LLocate_values_R_Array1_mindustry_logic_LLocate(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_logic_LExecutor$1(ctx);
	SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate = sp[0].o;
	}
label_315: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_314; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_ore;
	jint temp0 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_316;
label_314:;
	INST_ASTORE(0);
label_316:;
label_319: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_318; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_building;
	jint temp0 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_320;
label_318:;
	INST_ASTORE(0);
label_320:;
label_323: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_322; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_spawn;
	jint temp0 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_324;
label_322:;
	INST_ASTORE(0);
label_324:;
label_327: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_326; }
	}
	{
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_damaged;
	jint temp0 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_336;
label_326:;
	INST_ASTORE(0);
label_336:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$1[] {
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
};

static FieldMetadata fields[] {
	{ "$SwitchMap$mindustry$logic$LLocate", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$LUnitControl", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$CutsceneAction", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$CutsceneAction, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$FetchType", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$QueryType", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$TileLayer", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$TileLayer, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$LogicRule", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule, "[I", 4120 },
	{ "$SwitchMap$mindustry$logic$MessageType", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LExecutor$1, 0, "()V", 8 },
};

Class class_mindustry_logic_LExecutor$1{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$1),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$1,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_mindustry_logic_LExecutor$1 = registerClass(&class_mindustry_logic_LExecutor$1);

}

