#include "mindustry/gen/LogicIO.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LStatements_WaitStatement.h"
#include "mindustry/logic/LStatements_PlayMusicStatement.h"
#include "mindustry/logic/LStatements_RadarStatement.h"
#include "mindustry/logic/ConditionOp.h"
#include "mindustry/logic/LogicRule.h"
#include "mindustry/logic/LStatements_CutsceneStatement.h"
#include "mindustry/logic/LStatements_SetRuleStatement.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "mindustry/logic/LStatements_FetchStatement.h"
#include "mindustry/logic/LStatements_GetLinkStatement.h"
#include "mindustry/logic/LStatements_UnpackColorStatement.h"
#include "mindustry/logic/LStatements_ApplyStatusStatement.h"
#include "mindustry/logic/LStatements_UnitControlStatement.h"
#include "mindustry/logic/LStatements_SetPropStatement.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_OperationStatement.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement.h"
#include "mindustry/logic/FetchType.h"
#include "mindustry/logic/LStatements_JumpStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_53.h"
#include "mindustry/logic/CutsceneAction.h"
#include "java/lang/Boolean.h"
#include "mindustry/logic/LUnitControl.h"
#include "mindustry/logic/RadarTarget.h"
#include "mindustry/logic/QueryType.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_59.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_58.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_55.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_54.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_57.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_56.h"
#include "mindustry/logic/LStatements_FlushMessageStatement.h"
#include "mindustry/logic/QueryShape.h"
#include "mindustry/logic/LStatements_SyncStatement.h"
#include "mindustry/logic/LStatements_SetRateStatement.h"
#include "mindustry/logic/LStatements_ClientDataStatement.h"
#include "mindustry/logic/LStatements_SetBlockStatement.h"
#include "mindustry/logic/LStatements_SpawnWaveStatement.h"
#include "mindustry/logic/LStatements_SetFlagStatement.h"
#include "mindustry/logic/LLocate.h"
#include "mindustry/logic/LStatements_InvalidStatement.h"
#include "mindustry/logic/LStatements_DrawStatement.h"
#include "mindustry/logic/LStatements_GetBlockStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_73.h"
#include "mindustry/logic/LStatements_WriteStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_72.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_75.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_74.h"
#include "mindustry/logic/LStatements_UnitLocateStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_71.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_70.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LStatements_LookupStatement.h"
#include "mindustry/logic/MessageType.h"
#include "mindustry/logic/TileLayer.h"
#include "mindustry/logic/LStatements_WeatherSetStatement.h"
#include "mindustry/gen/LogicIO.h"
#include "mindustry/logic/RadarSort.h"
#include "mindustry/logic/LStatements_PrintFlushStatement.h"
#include "mindustry/logic/LStatements_SetStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_77.h"
#include "mindustry/logic/LStatements_ReadStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_76.h"
#include "mindustry/logic/LStatements_DrawFlushStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_79.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_78.h"
#include "mindustry/world/blocks/logic/LogicDisplay_GraphicsType.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_62.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_61.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_64.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_63.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_60.h"
#include "mindustry/logic/LStatements_UnitBindStatement.h"
#include "mindustry/logic/LStatements_LocalePrintStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_69.h"
#include "mindustry/logic/LStatements_EndStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_66.h"
#include "mindustry/logic/LStatements_SelectStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_65.h"
#include "mindustry/logic/LStatements_WeatherSenseStatement.h"
#include "mindustry/logic/LStatements_GetFlagStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_68.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_67.h"
#include "mindustry/logic/LogicOp.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_95.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_103.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_94.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_102.h"
#include "mindustry/logic/LStatements_PackColorStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_97.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_101.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_96.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_100.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_91.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_90.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_93.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_105.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_92.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_104.h"
#include "mindustry/logic/LStatements_StopStatement.h"
#include "mindustry/logic/LStatements_QueryStatement.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_SensorStatement.h"
#include "mindustry/logic/LStatements_SetMarkerStatement.h"
#include "mindustry/logic/LStatements_EffectStatement.h"
#include "mindustry/logic/LStatements_UnitRadarStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_99.h"
#include "mindustry/logic/LStatements_ControlStatement.h"
#include "mindustry/logic/LStatements_ExplosionStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_98.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_84.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_83.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_86.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_85.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_80.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_82.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_81.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LStatements_PrintCharStatement.h"
#include "mindustry/logic/LStatements_MakeMarkerStatement.h"
#include "mindustry/logic/LStatements_PrintStatement.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_88.h"
#include "mindustry/logic/LStatements_FormatStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_87.h"
#include "mindustry/logic/LStatements_SpawnUnitStatement.h"
#include "mindustry/gen/LogicIO_invoke_arc_func_Prov_89.h"

extern "C" {

jobject SF_mindustry_gen_LogicIO_allStatements;

void mark_mindustry_gen_LogicIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_LogicIO_allStatements)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_LogicIO_allStatements)->clazz)->markFunction)((jobject) SF_mindustry_gen_LogicIO_allStatements, mark, depth + 1);
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
	auto self = (mindustry_gen_LogicIO *) object;
}

void init_mindustry_gen_LogicIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LogicIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_LogicIO_read_Array1_java_lang_String_int_R_mindustry_logic_LStatement(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicIO:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LogicIO(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"noop"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(13);
	clinit_mindustry_logic_LStatements$InvalidStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$InvalidStatement);
	init_mindustry_logic_LStatements$InvalidStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(14);
	((func_mindustry_logic_LStatements$InvalidStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$InvalidStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"read"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(17);
	clinit_mindustry_logic_LStatements$ReadStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$ReadStatement);
	init_mindustry_logic_LStatements$ReadStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(18);
	if ((frame[1].i) <= (jint(1))) goto label_8;
	}
	{
	((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((frame[2].o)))->F_output = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_8:;
	{
	LINE_NUMBER(19);
	if ((frame[1].i) <= (jint(2))) goto label_9;
	}
	{
	((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((frame[2].o)))->F_target = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_9:;
	{
	LINE_NUMBER(20);
	if ((frame[1].i) <= (jint(3))) goto label_10;
	}
	{
	((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((frame[2].o)))->F_address = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_10:;
	{
	LINE_NUMBER(21);
	((func_mindustry_logic_LStatements$ReadStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$ReadStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"write"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(24);
	clinit_mindustry_logic_LStatements$WriteStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$WriteStatement);
	init_mindustry_logic_LStatements$WriteStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(25);
	if ((frame[1].i) <= (jint(1))) goto label_15;
	}
	{
	((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((frame[2].o)))->F_input = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_15:;
	{
	LINE_NUMBER(26);
	if ((frame[1].i) <= (jint(2))) goto label_16;
	}
	{
	((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((frame[2].o)))->F_target = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_16:;
	{
	LINE_NUMBER(27);
	if ((frame[1].i) <= (jint(3))) goto label_17;
	}
	{
	((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((frame[2].o)))->F_address = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_17:;
	{
	LINE_NUMBER(28);
	((func_mindustry_logic_LStatements$WriteStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$WriteStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_12:;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"draw"_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(31);
	clinit_mindustry_logic_LStatements$DrawStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawStatement);
	init_mindustry_logic_LStatements$DrawStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	if ((frame[1].i) <= (jint(1))) goto label_22;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_valueOf_java_lang_String_R_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(33);
	if ((frame[1].i) <= (jint(2))) goto label_23;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_23:;
	{
	LINE_NUMBER(34);
	if ((frame[1].i) <= (jint(3))) goto label_24;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_24:;
	{
	LINE_NUMBER(35);
	if ((frame[1].i) <= (jint(4))) goto label_25;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_25:;
	{
	LINE_NUMBER(36);
	if ((frame[1].i) <= (jint(5))) goto label_26;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_26:;
	{
	LINE_NUMBER(37);
	if ((frame[1].i) <= (6)) goto label_27;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_27:;
	{
	LINE_NUMBER(38);
	if ((frame[1].i) <= (7)) goto label_28;
	}
	{
	((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((frame[2].o)))->F_p4 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_28:;
	{
	LINE_NUMBER(39);
	((func_mindustry_logic_LStatements$DrawStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_19:;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"print"_j))));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(42);
	clinit_mindustry_logic_LStatements$PrintStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintStatement);
	init_mindustry_logic_LStatements$PrintStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[1].i) <= (jint(1))) goto label_33;
	}
	{
	((mindustry_logic_LStatements$PrintStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_33:;
	{
	LINE_NUMBER(44);
	((func_mindustry_logic_LStatements$PrintStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PrintStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_30:;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"printchar"_j))));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(47);
	clinit_mindustry_logic_LStatements$PrintCharStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintCharStatement);
	init_mindustry_logic_LStatements$PrintCharStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(48);
	if ((frame[1].i) <= (jint(1))) goto label_38;
	}
	{
	((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_38:;
	{
	LINE_NUMBER(49);
	((func_mindustry_logic_LStatements$PrintCharStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PrintCharStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_35:;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"format"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(52);
	clinit_mindustry_logic_LStatements$FormatStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$FormatStatement);
	init_mindustry_logic_LStatements$FormatStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(53);
	if ((frame[1].i) <= (jint(1))) goto label_43;
	}
	{
	((mindustry_logic_LStatements$FormatStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_43:;
	{
	LINE_NUMBER(54);
	((func_mindustry_logic_LStatements$FormatStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$FormatStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_40:;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"drawflush"_j))));
	if (temp0 == 0) goto label_45;
	}
	{
	LINE_NUMBER(57);
	clinit_mindustry_logic_LStatements$DrawFlushStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$DrawFlushStatement);
	init_mindustry_logic_LStatements$DrawFlushStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	if ((frame[1].i) <= (jint(1))) goto label_48;
	}
	{
	((mindustry_logic_LStatements$DrawFlushStatement *) NULL_CHECK((frame[2].o)))->F_target = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_48:;
	{
	LINE_NUMBER(59);
	((func_mindustry_logic_LStatements$DrawFlushStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$DrawFlushStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_45:;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"printflush"_j))));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(62);
	clinit_mindustry_logic_LStatements$PrintFlushStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PrintFlushStatement);
	init_mindustry_logic_LStatements$PrintFlushStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[1].i) <= (jint(1))) goto label_53;
	}
	{
	((mindustry_logic_LStatements$PrintFlushStatement *) NULL_CHECK((frame[2].o)))->F_target = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_53:;
	{
	LINE_NUMBER(64);
	((func_mindustry_logic_LStatements$PrintFlushStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PrintFlushStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_50:;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"getlink"_j))));
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(67);
	clinit_mindustry_logic_LStatements$GetLinkStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$GetLinkStatement);
	init_mindustry_logic_LStatements$GetLinkStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[1].i) <= (jint(1))) goto label_58;
	}
	{
	((mindustry_logic_LStatements$GetLinkStatement *) NULL_CHECK((frame[2].o)))->F_output = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_58:;
	{
	LINE_NUMBER(69);
	if ((frame[1].i) <= (jint(2))) goto label_59;
	}
	{
	((mindustry_logic_LStatements$GetLinkStatement *) NULL_CHECK((frame[2].o)))->F_address = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_59:;
	{
	LINE_NUMBER(70);
	((func_mindustry_logic_LStatements$GetLinkStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$GetLinkStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_55:;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"control"_j))));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(73);
	clinit_mindustry_logic_LStatements$ControlStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$ControlStatement);
	init_mindustry_logic_LStatements$ControlStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[1].i) <= (jint(1))) goto label_64;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LAccess_valueOf_java_lang_String_R_mindustry_logic_LAccess(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_64:;
	{
	LINE_NUMBER(75);
	if ((frame[1].i) <= (jint(2))) goto label_65;
	}
	{
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((frame[2].o)))->F_target = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_65:;
	{
	LINE_NUMBER(76);
	if ((frame[1].i) <= (jint(3))) goto label_66;
	}
	{
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_66:;
	{
	LINE_NUMBER(77);
	if ((frame[1].i) <= (jint(4))) goto label_67;
	}
	{
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_67:;
	{
	LINE_NUMBER(78);
	if ((frame[1].i) <= (jint(5))) goto label_68;
	}
	{
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_68:;
	{
	LINE_NUMBER(79);
	if ((frame[1].i) <= (6)) goto label_69;
	}
	{
	((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((frame[2].o)))->F_p4 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_69:;
	{
	LINE_NUMBER(80);
	((func_mindustry_logic_LStatements$ControlStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$ControlStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_61:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"radar"_j))));
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(83);
	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$RadarStatement);
	init_mindustry_logic_LStatements$RadarStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	if ((frame[1].i) <= (jint(1))) goto label_74;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target1 = (jref) sp[1].o;
	}
label_74:;
	{
	LINE_NUMBER(85);
	if ((frame[1].i) <= (jint(2))) goto label_75;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target2 = (jref) sp[1].o;
	}
label_75:;
	{
	LINE_NUMBER(86);
	if ((frame[1].i) <= (jint(3))) goto label_76;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target3 = (jref) sp[1].o;
	}
label_76:;
	{
	LINE_NUMBER(87);
	if ((frame[1].i) <= (jint(4))) goto label_77;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarSort_valueOf_java_lang_String_R_mindustry_logic_RadarSort(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	}
label_77:;
	{
	LINE_NUMBER(88);
	if ((frame[1].i) <= (jint(5))) goto label_78;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_radar = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_78:;
	{
	LINE_NUMBER(89);
	if ((frame[1].i) <= (6)) goto label_79;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_sortOrder = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_79:;
	{
	LINE_NUMBER(90);
	if ((frame[1].i) <= (7)) goto label_80;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_output = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_80:;
	{
	LINE_NUMBER(91);
	((func_mindustry_logic_LStatements$RadarStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$RadarStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_71:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"sensor"_j))));
	if (temp0 == 0) goto label_82;
	}
	{
	LINE_NUMBER(94);
	clinit_mindustry_logic_LStatements$SensorStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SensorStatement);
	init_mindustry_logic_LStatements$SensorStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
	if ((frame[1].i) <= (jint(1))) goto label_85;
	}
	{
	((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((frame[2].o)))->F_to = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_85:;
	{
	LINE_NUMBER(96);
	if ((frame[1].i) <= (jint(2))) goto label_86;
	}
	{
	((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((frame[2].o)))->F_from = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_86:;
	{
	LINE_NUMBER(97);
	if ((frame[1].i) <= (jint(3))) goto label_87;
	}
	{
	((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_87:;
	{
	LINE_NUMBER(98);
	((func_mindustry_logic_LStatements$SensorStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SensorStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_82:;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	if (temp0 == 0) goto label_89;
	}
	{
	LINE_NUMBER(101);
	clinit_mindustry_logic_LStatements$SetStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetStatement);
	init_mindustry_logic_LStatements$SetStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(102);
	if ((frame[1].i) <= (jint(1))) goto label_92;
	}
	{
	((mindustry_logic_LStatements$SetStatement *) NULL_CHECK((frame[2].o)))->F_to = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_92:;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) <= (jint(2))) goto label_93;
	}
	{
	((mindustry_logic_LStatements$SetStatement *) NULL_CHECK((frame[2].o)))->F_from = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_93:;
	{
	LINE_NUMBER(104);
	((func_mindustry_logic_LStatements$SetStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_89:;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	if (temp0 == 0) goto label_95;
	}
	{
	LINE_NUMBER(107);
	clinit_mindustry_logic_LStatements$OperationStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$OperationStatement);
	init_mindustry_logic_LStatements$OperationStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[1].i) <= (jint(1))) goto label_98;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LogicOp_valueOf_java_lang_String_R_mindustry_logic_LogicOp(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	}
label_98:;
	{
	LINE_NUMBER(109);
	if ((frame[1].i) <= (jint(2))) goto label_99;
	}
	{
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[2].o)))->F_dest = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_99:;
	{
	LINE_NUMBER(110);
	if ((frame[1].i) <= (jint(3))) goto label_100;
	}
	{
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[2].o)))->F_a = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_100:;
	{
	LINE_NUMBER(111);
	if ((frame[1].i) <= (jint(4))) goto label_101;
	}
	{
	((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((frame[2].o)))->F_b = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_101:;
	{
	LINE_NUMBER(112);
	((func_mindustry_logic_LStatements$OperationStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$OperationStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_95:;
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"select"_j))));
	if (temp0 == 0) goto label_103;
	}
	{
	LINE_NUMBER(115);
	clinit_mindustry_logic_LStatements$SelectStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SelectStatement);
	init_mindustry_logic_LStatements$SelectStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(116);
	if ((frame[1].i) <= (jint(1))) goto label_106;
	}
	{
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_106:;
	{
	LINE_NUMBER(117);
	if ((frame[1].i) <= (jint(2))) goto label_107;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_ConditionOp_valueOf_java_lang_String_R_mindustry_logic_ConditionOp(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	}
label_107:;
	{
	LINE_NUMBER(118);
	if ((frame[1].i) <= (jint(3))) goto label_108;
	}
	{
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((frame[2].o)))->F_comp0 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_108:;
	{
	LINE_NUMBER(119);
	if ((frame[1].i) <= (jint(4))) goto label_109;
	}
	{
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((frame[2].o)))->F_comp1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_109:;
	{
	LINE_NUMBER(120);
	if ((frame[1].i) <= (jint(5))) goto label_110;
	}
	{
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((frame[2].o)))->F_a = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_110:;
	{
	LINE_NUMBER(121);
	if ((frame[1].i) <= (6)) goto label_111;
	}
	{
	((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((frame[2].o)))->F_b = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_111:;
	{
	LINE_NUMBER(122);
	((func_mindustry_logic_LStatements$SelectStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SelectStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_103:;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"wait"_j))));
	if (temp0 == 0) goto label_113;
	}
	{
	LINE_NUMBER(125);
	clinit_mindustry_logic_LStatements$WaitStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$WaitStatement);
	init_mindustry_logic_LStatements$WaitStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(126);
	if ((frame[1].i) <= (jint(1))) goto label_116;
	}
	{
	((mindustry_logic_LStatements$WaitStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_116:;
	{
	LINE_NUMBER(127);
	((func_mindustry_logic_LStatements$WaitStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$WaitStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_113:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"stop"_j))));
	if (temp0 == 0) goto label_118;
	}
	{
	LINE_NUMBER(130);
	clinit_mindustry_logic_LStatements$StopStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$StopStatement);
	init_mindustry_logic_LStatements$StopStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	((func_mindustry_logic_LStatements$StopStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$StopStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_118:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"lookup"_j))));
	if (temp0 == 0) goto label_122;
	}
	{
	LINE_NUMBER(134);
	clinit_mindustry_logic_LStatements$LookupStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$LookupStatement);
	init_mindustry_logic_LStatements$LookupStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(135);
	if ((frame[1].i) <= (jint(1))) goto label_125;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_ctype_ContentType_valueOf_java_lang_String_R_mindustry_ctype_ContentType(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_125:;
	{
	LINE_NUMBER(136);
	if ((frame[1].i) <= (jint(2))) goto label_126;
	}
	{
	((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_126:;
	{
	LINE_NUMBER(137);
	if ((frame[1].i) <= (jint(3))) goto label_127;
	}
	{
	((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK((frame[2].o)))->F_id = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_127:;
	{
	LINE_NUMBER(138);
	((func_mindustry_logic_LStatements$LookupStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$LookupStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_122:;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"packcolor"_j))));
	if (temp0 == 0) goto label_129;
	}
	{
	LINE_NUMBER(141);
	clinit_mindustry_logic_LStatements$PackColorStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PackColorStatement);
	init_mindustry_logic_LStatements$PackColorStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(142);
	if ((frame[1].i) <= (jint(1))) goto label_132;
	}
	{
	((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_132:;
	{
	LINE_NUMBER(143);
	if ((frame[1].i) <= (jint(2))) goto label_133;
	}
	{
	((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((frame[2].o)))->F_r = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_133:;
	{
	LINE_NUMBER(144);
	if ((frame[1].i) <= (jint(3))) goto label_134;
	}
	{
	((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((frame[2].o)))->F_g = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_134:;
	{
	LINE_NUMBER(145);
	if ((frame[1].i) <= (jint(4))) goto label_135;
	}
	{
	((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((frame[2].o)))->F_b = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_135:;
	{
	LINE_NUMBER(146);
	if ((frame[1].i) <= (jint(5))) goto label_136;
	}
	{
	((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((frame[2].o)))->F_a = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_136:;
	{
	LINE_NUMBER(147);
	((func_mindustry_logic_LStatements$PackColorStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PackColorStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_129:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"unpackcolor"_j))));
	if (temp0 == 0) goto label_138;
	}
	{
	LINE_NUMBER(150);
	clinit_mindustry_logic_LStatements$UnpackColorStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement);
	init_mindustry_logic_LStatements$UnpackColorStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(151);
	if ((frame[1].i) <= (jint(1))) goto label_141;
	}
	{
	((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((frame[2].o)))->F_r = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_141:;
	{
	LINE_NUMBER(152);
	if ((frame[1].i) <= (jint(2))) goto label_142;
	}
	{
	((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((frame[2].o)))->F_g = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_142:;
	{
	LINE_NUMBER(153);
	if ((frame[1].i) <= (jint(3))) goto label_143;
	}
	{
	((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((frame[2].o)))->F_b = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_143:;
	{
	LINE_NUMBER(154);
	if ((frame[1].i) <= (jint(4))) goto label_144;
	}
	{
	((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((frame[2].o)))->F_a = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_144:;
	{
	LINE_NUMBER(155);
	if ((frame[1].i) <= (jint(5))) goto label_145;
	}
	{
	((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_145:;
	{
	LINE_NUMBER(156);
	((func_mindustry_logic_LStatements$UnpackColorStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnpackColorStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_138:;
	{
	LINE_NUMBER(158);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"end"_j))));
	if (temp0 == 0) goto label_147;
	}
	{
	LINE_NUMBER(159);
	clinit_mindustry_logic_LStatements$EndStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$EndStatement);
	init_mindustry_logic_LStatements$EndStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(160);
	((func_mindustry_logic_LStatements$EndStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$EndStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_147:;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"jump"_j))));
	if (temp0 == 0) goto label_151;
	}
	{
	LINE_NUMBER(163);
	clinit_mindustry_logic_LStatements$JumpStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$JumpStatement);
	init_mindustry_logic_LStatements$JumpStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[1].i) <= (jint(1))) goto label_154;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_destIndex = temp0;
	}
label_154:;
	{
	LINE_NUMBER(165);
	if ((frame[1].i) <= (jint(2))) goto label_155;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_ConditionOp_valueOf_java_lang_String_R_mindustry_logic_ConditionOp(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_op = (jref) sp[1].o;
	}
label_155:;
	{
	LINE_NUMBER(166);
	if ((frame[1].i) <= (jint(3))) goto label_156;
	}
	{
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_156:;
	{
	LINE_NUMBER(167);
	if ((frame[1].i) <= (jint(4))) goto label_157;
	}
	{
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((frame[2].o)))->F_compare = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_157:;
	{
	LINE_NUMBER(168);
	((func_mindustry_logic_LStatements$JumpStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$JumpStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_151:;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"ubind"_j))));
	if (temp0 == 0) goto label_159;
	}
	{
	LINE_NUMBER(171);
	clinit_mindustry_logic_LStatements$UnitBindStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitBindStatement);
	init_mindustry_logic_LStatements$UnitBindStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[1].i) <= (jint(1))) goto label_162;
	}
	{
	((mindustry_logic_LStatements$UnitBindStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_162:;
	{
	LINE_NUMBER(173);
	((func_mindustry_logic_LStatements$UnitBindStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitBindStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_159:;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"ucontrol"_j))));
	if (temp0 == 0) goto label_164;
	}
	{
	LINE_NUMBER(176);
	clinit_mindustry_logic_LStatements$UnitControlStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitControlStatement);
	init_mindustry_logic_LStatements$UnitControlStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(177);
	if ((frame[1].i) <= (jint(1))) goto label_167;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LUnitControl_valueOf_java_lang_String_R_mindustry_logic_LUnitControl(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_167:;
	{
	LINE_NUMBER(178);
	if ((frame[1].i) <= (jint(2))) goto label_168;
	}
	{
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_168:;
	{
	LINE_NUMBER(179);
	if ((frame[1].i) <= (jint(3))) goto label_169;
	}
	{
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_169:;
	{
	LINE_NUMBER(180);
	if ((frame[1].i) <= (jint(4))) goto label_170;
	}
	{
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_170:;
	{
	LINE_NUMBER(181);
	if ((frame[1].i) <= (jint(5))) goto label_171;
	}
	{
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[2].o)))->F_p4 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_171:;
	{
	LINE_NUMBER(182);
	if ((frame[1].i) <= (6)) goto label_172;
	}
	{
	((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((frame[2].o)))->F_p5 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_172:;
	{
	LINE_NUMBER(183);
	((func_mindustry_logic_LStatements$UnitControlStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitControlStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_164:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"uradar"_j))));
	if (temp0 == 0) goto label_174;
	}
	{
	LINE_NUMBER(186);
	clinit_mindustry_logic_LStatements$UnitRadarStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement);
	init_mindustry_logic_LStatements$UnitRadarStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(187);
	if ((frame[1].i) <= (jint(1))) goto label_177;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target1 = (jref) sp[1].o;
	}
label_177:;
	{
	LINE_NUMBER(188);
	if ((frame[1].i) <= (jint(2))) goto label_178;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target2 = (jref) sp[1].o;
	}
label_178:;
	{
	LINE_NUMBER(189);
	if ((frame[1].i) <= (jint(3))) goto label_179;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_target3 = (jref) sp[1].o;
	}
label_179:;
	{
	LINE_NUMBER(190);
	if ((frame[1].i) <= (jint(4))) goto label_180;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_RadarSort_valueOf_java_lang_String_R_mindustry_logic_RadarSort(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4)))));
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	}
label_180:;
	{
	LINE_NUMBER(191);
	if ((frame[1].i) <= (jint(5))) goto label_181;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_radar = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_181:;
	{
	LINE_NUMBER(192);
	if ((frame[1].i) <= (6)) goto label_182;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_sortOrder = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_182:;
	{
	LINE_NUMBER(193);
	if ((frame[1].i) <= (7)) goto label_183;
	}
	{
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[2].o)))->F_output = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_183:;
	{
	LINE_NUMBER(194);
	((func_mindustry_logic_LStatements$UnitRadarStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitRadarStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_174:;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"ulocate"_j))));
	if (temp0 == 0) goto label_185;
	}
	{
	LINE_NUMBER(197);
	clinit_mindustry_logic_LStatements$UnitLocateStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement);
	init_mindustry_logic_LStatements$UnitLocateStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[1].i) <= (jint(1))) goto label_188;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LLocate_valueOf_java_lang_String_R_mindustry_logic_LLocate(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK(sp[0].o))->F_locate = (jref) sp[1].o;
	}
label_188:;
	{
	LINE_NUMBER(199);
	if ((frame[1].i) <= (jint(2))) goto label_189;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_BlockFlag_valueOf_java_lang_String_R_mindustry_world_meta_BlockFlag(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK(sp[0].o))->F_flag = (jref) sp[1].o;
	}
label_189:;
	{
	LINE_NUMBER(200);
	if ((frame[1].i) <= (jint(3))) goto label_190;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_enemy = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_190:;
	{
	LINE_NUMBER(201);
	if ((frame[1].i) <= (jint(4))) goto label_191;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_ore = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_191:;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) <= (jint(5))) goto label_192;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_outX = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_192:;
	{
	LINE_NUMBER(203);
	if ((frame[1].i) <= (6)) goto label_193;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_outY = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_193:;
	{
	LINE_NUMBER(204);
	if ((frame[1].i) <= (7)) goto label_194;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_outFound = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_194:;
	{
	LINE_NUMBER(205);
	if ((frame[1].i) <= (8)) goto label_195;
	}
	{
	((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((frame[2].o)))->F_outBuild = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (8)));
	}
label_195:;
	{
	LINE_NUMBER(206);
	((func_mindustry_logic_LStatements$UnitLocateStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$UnitLocateStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_185:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"query"_j))));
	if (temp0 == 0) goto label_197;
	}
	{
	LINE_NUMBER(209);
	clinit_mindustry_logic_LStatements$QueryStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$QueryStatement);
	init_mindustry_logic_LStatements$QueryStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(210);
	if ((frame[1].i) <= (jint(1))) goto label_200;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_QueryShape_valueOf_java_lang_String_R_mindustry_logic_QueryShape(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	}
label_200:;
	{
	LINE_NUMBER(211);
	if ((frame[1].i) <= (jint(2))) goto label_201;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_QueryType_valueOf_java_lang_String_R_mindustry_logic_QueryType(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2)))));
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_201:;
	{
	LINE_NUMBER(212);
	if ((frame[1].i) <= (jint(3))) goto label_202;
	}
	{
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_202:;
	{
	LINE_NUMBER(213);
	if ((frame[1].i) <= (jint(4))) goto label_203;
	}
	{
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_203:;
	{
	LINE_NUMBER(214);
	if ((frame[1].i) <= (jint(5))) goto label_204;
	}
	{
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_204:;
	{
	LINE_NUMBER(215);
	if ((frame[1].i) <= (6)) goto label_205;
	}
	{
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[2].o)))->F_w = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_205:;
	{
	LINE_NUMBER(216);
	if ((frame[1].i) <= (7)) goto label_206;
	}
	{
	((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((frame[2].o)))->F_h = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_206:;
	{
	LINE_NUMBER(217);
	((func_mindustry_logic_LStatements$QueryStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$QueryStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_197:;
	{
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"getblock"_j))));
	if (temp0 == 0) goto label_208;
	}
	{
	LINE_NUMBER(220);
	clinit_mindustry_logic_LStatements$GetBlockStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$GetBlockStatement);
	init_mindustry_logic_LStatements$GetBlockStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(221);
	if ((frame[1].i) <= (jint(1))) goto label_211;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_TileLayer_valueOf_java_lang_String_R_mindustry_logic_TileLayer(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	}
label_211:;
	{
	LINE_NUMBER(222);
	if ((frame[1].i) <= (jint(2))) goto label_212;
	}
	{
	((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_212:;
	{
	LINE_NUMBER(223);
	if ((frame[1].i) <= (jint(3))) goto label_213;
	}
	{
	((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_213:;
	{
	LINE_NUMBER(224);
	if ((frame[1].i) <= (jint(4))) goto label_214;
	}
	{
	((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_214:;
	{
	LINE_NUMBER(225);
	((func_mindustry_logic_LStatements$GetBlockStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$GetBlockStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_208:;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setblock"_j))));
	if (temp0 == 0) goto label_216;
	}
	{
	LINE_NUMBER(228);
	clinit_mindustry_logic_LStatements$SetBlockStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetBlockStatement);
	init_mindustry_logic_LStatements$SetBlockStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	if ((frame[1].i) <= (jint(1))) goto label_219;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_TileLayer_valueOf_java_lang_String_R_mindustry_logic_TileLayer(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK(sp[0].o))->F_layer = (jref) sp[1].o;
	}
label_219:;
	{
	LINE_NUMBER(230);
	if ((frame[1].i) <= (jint(2))) goto label_220;
	}
	{
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((frame[2].o)))->F_block = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_220:;
	{
	LINE_NUMBER(231);
	if ((frame[1].i) <= (jint(3))) goto label_221;
	}
	{
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_221:;
	{
	LINE_NUMBER(232);
	if ((frame[1].i) <= (jint(4))) goto label_222;
	}
	{
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_222:;
	{
	LINE_NUMBER(233);
	if ((frame[1].i) <= (jint(5))) goto label_223;
	}
	{
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_223:;
	{
	LINE_NUMBER(234);
	if ((frame[1].i) <= (6)) goto label_224;
	}
	{
	((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((frame[2].o)))->F_rotation = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_224:;
	{
	LINE_NUMBER(235);
	((func_mindustry_logic_LStatements$SetBlockStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetBlockStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_216:;
	{
	LINE_NUMBER(237);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"spawn"_j))));
	if (temp0 == 0) goto label_226;
	}
	{
	LINE_NUMBER(238);
	clinit_mindustry_logic_LStatements$SpawnUnitStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement);
	init_mindustry_logic_LStatements$SpawnUnitStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(239);
	if ((frame[1].i) <= (jint(1))) goto label_229;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_229:;
	{
	LINE_NUMBER(240);
	if ((frame[1].i) <= (jint(2))) goto label_230;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_230:;
	{
	LINE_NUMBER(241);
	if ((frame[1].i) <= (jint(3))) goto label_231;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_231:;
	{
	LINE_NUMBER(242);
	if ((frame[1].i) <= (jint(4))) goto label_232;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_rotation = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_232:;
	{
	LINE_NUMBER(243);
	if ((frame[1].i) <= (jint(5))) goto label_233;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_233:;
	{
	LINE_NUMBER(244);
	if ((frame[1].i) <= (6)) goto label_234;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_234:;
	{
	LINE_NUMBER(245);
	if ((frame[1].i) <= (7)) goto label_235;
	}
	{
	((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((frame[2].o)))->F_effect = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_235:;
	{
	LINE_NUMBER(246);
	((func_mindustry_logic_LStatements$SpawnUnitStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SpawnUnitStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_226:;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"bullet"_j))));
	if (temp0 == 0) goto label_237;
	}
	{
	LINE_NUMBER(249);
	clinit_mindustry_logic_LStatements$SpawnBulletStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement);
	init_mindustry_logic_LStatements$SpawnBulletStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[1].i) <= (jint(1))) goto label_240;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_240:;
	{
	LINE_NUMBER(251);
	if ((frame[1].i) <= (jint(2))) goto label_241;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_from = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_241:;
	{
	LINE_NUMBER(252);
	if ((frame[1].i) <= (jint(3))) goto label_242;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_index = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_242:;
	{
	LINE_NUMBER(253);
	if ((frame[1].i) <= (jint(4))) goto label_243;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_243:;
	{
	LINE_NUMBER(254);
	if ((frame[1].i) <= (jint(5))) goto label_244;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_244:;
	{
	LINE_NUMBER(255);
	if ((frame[1].i) <= (6)) goto label_245;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_rotation = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_245:;
	{
	LINE_NUMBER(256);
	if ((frame[1].i) <= (7)) goto label_246;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_246:;
	{
	LINE_NUMBER(257);
	if ((frame[1].i) <= (8)) goto label_247;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_owner = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (8)));
	}
label_247:;
	{
	LINE_NUMBER(258);
	if ((frame[1].i) <= (9)) goto label_248;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_damage = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (9)));
	}
label_248:;
	{
	LINE_NUMBER(259);
	if ((frame[1].i) <= (10)) goto label_249;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_velocityScl = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (10)));
	}
label_249:;
	{
	LINE_NUMBER(260);
	if ((frame[1].i) <= (11)) goto label_250;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_lifeScl = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (11)));
	}
label_250:;
	{
	LINE_NUMBER(261);
	if ((frame[1].i) <= (12)) goto label_251;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_aimX = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (12)));
	}
label_251:;
	{
	LINE_NUMBER(262);
	if ((frame[1].i) <= (13)) goto label_252;
	}
	{
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[2].o)))->F_aimY = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (13)));
	}
label_252:;
	{
	LINE_NUMBER(263);
	((func_mindustry_logic_LStatements$SpawnBulletStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_237:;
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"status"_j))));
	if (temp0 == 0) goto label_254;
	}
	{
	LINE_NUMBER(266);
	clinit_mindustry_logic_LStatements$ApplyStatusStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$ApplyStatusStatement);
	init_mindustry_logic_LStatements$ApplyStatusStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[1].i) <= (jint(1))) goto label_257;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, sp[1].o);
	((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK(sp[0].o))->F_clear = temp0;
	}
label_257:;
	{
	LINE_NUMBER(268);
	if ((frame[1].i) <= (jint(2))) goto label_258;
	}
	{
	((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((frame[2].o)))->F_effect = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_258:;
	{
	LINE_NUMBER(269);
	if ((frame[1].i) <= (jint(3))) goto label_259;
	}
	{
	((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((frame[2].o)))->F_unit = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_259:;
	{
	LINE_NUMBER(270);
	if ((frame[1].i) <= (jint(4))) goto label_260;
	}
	{
	((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((frame[2].o)))->F_duration = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_260:;
	{
	LINE_NUMBER(271);
	((func_mindustry_logic_LStatements$ApplyStatusStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$ApplyStatusStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_254:;
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"weathersense"_j))));
	if (temp0 == 0) goto label_262;
	}
	{
	LINE_NUMBER(274);
	clinit_mindustry_logic_LStatements$WeatherSenseStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSenseStatement);
	init_mindustry_logic_LStatements$WeatherSenseStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(275);
	if ((frame[1].i) <= (jint(1))) goto label_265;
	}
	{
	((mindustry_logic_LStatements$WeatherSenseStatement *) NULL_CHECK((frame[2].o)))->F_to = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_265:;
	{
	LINE_NUMBER(276);
	if ((frame[1].i) <= (jint(2))) goto label_266;
	}
	{
	((mindustry_logic_LStatements$WeatherSenseStatement *) NULL_CHECK((frame[2].o)))->F_weather = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_266:;
	{
	LINE_NUMBER(277);
	((func_mindustry_logic_LStatements$WeatherSenseStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$WeatherSenseStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_262:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"weatherset"_j))));
	if (temp0 == 0) goto label_268;
	}
	{
	LINE_NUMBER(280);
	clinit_mindustry_logic_LStatements$WeatherSetStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement);
	init_mindustry_logic_LStatements$WeatherSetStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(281);
	if ((frame[1].i) <= (jint(1))) goto label_271;
	}
	{
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[2].o)))->F_weather = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_271:;
	{
	LINE_NUMBER(282);
	if ((frame[1].i) <= (jint(2))) goto label_272;
	}
	{
	((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((frame[2].o)))->F_state = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_272:;
	{
	LINE_NUMBER(283);
	((func_mindustry_logic_LStatements$WeatherSetStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$WeatherSetStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_268:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"spawnwave"_j))));
	if (temp0 == 0) goto label_274;
	}
	{
	LINE_NUMBER(286);
	clinit_mindustry_logic_LStatements$SpawnWaveStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnWaveStatement);
	init_mindustry_logic_LStatements$SpawnWaveStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(287);
	if ((frame[1].i) <= (jint(1))) goto label_277;
	}
	{
	((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_277:;
	{
	LINE_NUMBER(288);
	if ((frame[1].i) <= (jint(2))) goto label_278;
	}
	{
	((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_278:;
	{
	LINE_NUMBER(289);
	if ((frame[1].i) <= (jint(3))) goto label_279;
	}
	{
	((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((frame[2].o)))->F_natural = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_279:;
	{
	LINE_NUMBER(290);
	((func_mindustry_logic_LStatements$SpawnWaveStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SpawnWaveStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_274:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setrule"_j))));
	if (temp0 == 0) goto label_281;
	}
	{
	LINE_NUMBER(293);
	clinit_mindustry_logic_LStatements$SetRuleStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetRuleStatement);
	init_mindustry_logic_LStatements$SetRuleStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(294);
	if ((frame[1].i) <= (jint(1))) goto label_284;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LogicRule_valueOf_java_lang_String_R_mindustry_logic_LogicRule(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK(sp[0].o))->F_rule = (jref) sp[1].o;
	}
label_284:;
	{
	LINE_NUMBER(295);
	if ((frame[1].i) <= (jint(2))) goto label_285;
	}
	{
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_285:;
	{
	LINE_NUMBER(296);
	if ((frame[1].i) <= (jint(3))) goto label_286;
	}
	{
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_286:;
	{
	LINE_NUMBER(297);
	if ((frame[1].i) <= (jint(4))) goto label_287;
	}
	{
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_287:;
	{
	LINE_NUMBER(298);
	if ((frame[1].i) <= (jint(5))) goto label_288;
	}
	{
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_288:;
	{
	LINE_NUMBER(299);
	if ((frame[1].i) <= (6)) goto label_289;
	}
	{
	((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((frame[2].o)))->F_p4 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_289:;
	{
	LINE_NUMBER(300);
	((func_mindustry_logic_LStatements$SetRuleStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetRuleStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_281:;
	{
	LINE_NUMBER(302);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"message"_j))));
	if (temp0 == 0) goto label_291;
	}
	{
	LINE_NUMBER(303);
	clinit_mindustry_logic_LStatements$FlushMessageStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$FlushMessageStatement);
	init_mindustry_logic_LStatements$FlushMessageStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(304);
	if ((frame[1].i) <= (jint(1))) goto label_294;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_MessageType_valueOf_java_lang_String_R_mindustry_logic_MessageType(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_294:;
	{
	LINE_NUMBER(305);
	if ((frame[1].i) <= (jint(2))) goto label_295;
	}
	{
	((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK((frame[2].o)))->F_duration = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_295:;
	{
	LINE_NUMBER(306);
	if ((frame[1].i) <= (jint(3))) goto label_296;
	}
	{
	((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK((frame[2].o)))->F_outSuccess = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_296:;
	{
	LINE_NUMBER(307);
	((func_mindustry_logic_LStatements$FlushMessageStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$FlushMessageStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_291:;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"cutscene"_j))));
	if (temp0 == 0) goto label_298;
	}
	{
	LINE_NUMBER(310);
	clinit_mindustry_logic_LStatements$CutsceneStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$CutsceneStatement);
	init_mindustry_logic_LStatements$CutsceneStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(311);
	if ((frame[1].i) <= (jint(1))) goto label_301;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_CutsceneAction_valueOf_java_lang_String_R_mindustry_logic_CutsceneAction(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK(sp[0].o))->F_action = (jref) sp[1].o;
	}
label_301:;
	{
	LINE_NUMBER(312);
	if ((frame[1].i) <= (jint(2))) goto label_302;
	}
	{
	((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_302:;
	{
	LINE_NUMBER(313);
	if ((frame[1].i) <= (jint(3))) goto label_303;
	}
	{
	((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_303:;
	{
	LINE_NUMBER(314);
	if ((frame[1].i) <= (jint(4))) goto label_304;
	}
	{
	((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_304:;
	{
	LINE_NUMBER(315);
	if ((frame[1].i) <= (jint(5))) goto label_305;
	}
	{
	((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((frame[2].o)))->F_p4 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_305:;
	{
	LINE_NUMBER(316);
	((func_mindustry_logic_LStatements$CutsceneStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$CutsceneStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_298:;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	if (temp0 == 0) goto label_307;
	}
	{
	LINE_NUMBER(319);
	clinit_mindustry_logic_LStatements$EffectStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$EffectStatement);
	init_mindustry_logic_LStatements$EffectStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(320);
	if ((frame[1].i) <= (jint(1))) goto label_310;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_310:;
	{
	LINE_NUMBER(321);
	if ((frame[1].i) <= (jint(2))) goto label_311;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_311:;
	{
	LINE_NUMBER(322);
	if ((frame[1].i) <= (jint(3))) goto label_312;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_312:;
	{
	LINE_NUMBER(323);
	if ((frame[1].i) <= (jint(4))) goto label_313;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_sizerot = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_313:;
	{
	LINE_NUMBER(324);
	if ((frame[1].i) <= (jint(5))) goto label_314;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_color = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_314:;
	{
	LINE_NUMBER(325);
	if ((frame[1].i) <= (6)) goto label_315;
	}
	{
	((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((frame[2].o)))->F_data = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_315:;
	{
	LINE_NUMBER(326);
	((func_mindustry_logic_LStatements$EffectStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$EffectStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_307:;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"explosion"_j))));
	if (temp0 == 0) goto label_317;
	}
	{
	LINE_NUMBER(329);
	clinit_mindustry_logic_LStatements$ExplosionStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$ExplosionStatement);
	init_mindustry_logic_LStatements$ExplosionStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(330);
	if ((frame[1].i) <= (jint(1))) goto label_320;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_320:;
	{
	LINE_NUMBER(331);
	if ((frame[1].i) <= (jint(2))) goto label_321;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_321:;
	{
	LINE_NUMBER(332);
	if ((frame[1].i) <= (jint(3))) goto label_322;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_322:;
	{
	LINE_NUMBER(333);
	if ((frame[1].i) <= (jint(4))) goto label_323;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_radius = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_323:;
	{
	LINE_NUMBER(334);
	if ((frame[1].i) <= (jint(5))) goto label_324;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_damage = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_324:;
	{
	LINE_NUMBER(335);
	if ((frame[1].i) <= (6)) goto label_325;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_air = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_325:;
	{
	LINE_NUMBER(336);
	if ((frame[1].i) <= (7)) goto label_326;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_ground = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_326:;
	{
	LINE_NUMBER(337);
	if ((frame[1].i) <= (8)) goto label_327;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_pierce = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (8)));
	}
label_327:;
	{
	LINE_NUMBER(338);
	if ((frame[1].i) <= (9)) goto label_328;
	}
	{
	((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((frame[2].o)))->F_effect = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (9)));
	}
label_328:;
	{
	LINE_NUMBER(339);
	((func_mindustry_logic_LStatements$ExplosionStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$ExplosionStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_317:;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setrate"_j))));
	if (temp0 == 0) goto label_330;
	}
	{
	LINE_NUMBER(342);
	clinit_mindustry_logic_LStatements$SetRateStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetRateStatement);
	init_mindustry_logic_LStatements$SetRateStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[1].i) <= (jint(1))) goto label_333;
	}
	{
	((mindustry_logic_LStatements$SetRateStatement *) NULL_CHECK((frame[2].o)))->F_amount = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_333:;
	{
	LINE_NUMBER(344);
	((func_mindustry_logic_LStatements$SetRateStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetRateStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_330:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"fetch"_j))));
	if (temp0 == 0) goto label_335;
	}
	{
	LINE_NUMBER(347);
	clinit_mindustry_logic_LStatements$FetchStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$FetchStatement);
	init_mindustry_logic_LStatements$FetchStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(348);
	if ((frame[1].i) <= (jint(1))) goto label_338;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_FetchType_valueOf_java_lang_String_R_mindustry_logic_FetchType(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_338:;
	{
	LINE_NUMBER(349);
	if ((frame[1].i) <= (jint(2))) goto label_339;
	}
	{
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_339:;
	{
	LINE_NUMBER(350);
	if ((frame[1].i) <= (jint(3))) goto label_340;
	}
	{
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[2].o)))->F_team = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_340:;
	{
	LINE_NUMBER(351);
	if ((frame[1].i) <= (jint(4))) goto label_341;
	}
	{
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[2].o)))->F_index = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_341:;
	{
	LINE_NUMBER(352);
	if ((frame[1].i) <= (jint(5))) goto label_342;
	}
	{
	((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((frame[2].o)))->F_extra = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_342:;
	{
	LINE_NUMBER(353);
	((func_mindustry_logic_LStatements$FetchStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$FetchStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_335:;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"sync"_j))));
	if (temp0 == 0) goto label_344;
	}
	{
	LINE_NUMBER(356);
	clinit_mindustry_logic_LStatements$SyncStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SyncStatement);
	init_mindustry_logic_LStatements$SyncStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(357);
	if ((frame[1].i) <= (jint(1))) goto label_347;
	}
	{
	((mindustry_logic_LStatements$SyncStatement *) NULL_CHECK((frame[2].o)))->F_variable = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_347:;
	{
	LINE_NUMBER(358);
	((func_mindustry_logic_LStatements$SyncStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SyncStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_344:;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"clientdata"_j))));
	if (temp0 == 0) goto label_349;
	}
	{
	LINE_NUMBER(361);
	clinit_mindustry_logic_LStatements$ClientDataStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$ClientDataStatement);
	init_mindustry_logic_LStatements$ClientDataStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(362);
	if ((frame[1].i) <= (jint(1))) goto label_352;
	}
	{
	((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((frame[2].o)))->F_channel = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_352:;
	{
	LINE_NUMBER(363);
	if ((frame[1].i) <= (jint(2))) goto label_353;
	}
	{
	((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_353:;
	{
	LINE_NUMBER(364);
	if ((frame[1].i) <= (jint(3))) goto label_354;
	}
	{
	((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((frame[2].o)))->F_reliable = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_354:;
	{
	LINE_NUMBER(365);
	((func_mindustry_logic_LStatements$ClientDataStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$ClientDataStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_349:;
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"getflag"_j))));
	if (temp0 == 0) goto label_356;
	}
	{
	LINE_NUMBER(368);
	clinit_mindustry_logic_LStatements$GetFlagStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$GetFlagStatement);
	init_mindustry_logic_LStatements$GetFlagStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	if ((frame[1].i) <= (jint(1))) goto label_359;
	}
	{
	((mindustry_logic_LStatements$GetFlagStatement *) NULL_CHECK((frame[2].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_359:;
	{
	LINE_NUMBER(370);
	if ((frame[1].i) <= (jint(2))) goto label_360;
	}
	{
	((mindustry_logic_LStatements$GetFlagStatement *) NULL_CHECK((frame[2].o)))->F_flag = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_360:;
	{
	LINE_NUMBER(371);
	((func_mindustry_logic_LStatements$GetFlagStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$GetFlagStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_356:;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setflag"_j))));
	if (temp0 == 0) goto label_362;
	}
	{
	LINE_NUMBER(374);
	clinit_mindustry_logic_LStatements$SetFlagStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetFlagStatement);
	init_mindustry_logic_LStatements$SetFlagStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(375);
	if ((frame[1].i) <= (jint(1))) goto label_365;
	}
	{
	((mindustry_logic_LStatements$SetFlagStatement *) NULL_CHECK((frame[2].o)))->F_flag = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_365:;
	{
	LINE_NUMBER(376);
	if ((frame[1].i) <= (jint(2))) goto label_366;
	}
	{
	((mindustry_logic_LStatements$SetFlagStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_366:;
	{
	LINE_NUMBER(377);
	((func_mindustry_logic_LStatements$SetFlagStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetFlagStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_362:;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setprop"_j))));
	if (temp0 == 0) goto label_368;
	}
	{
	LINE_NUMBER(380);
	clinit_mindustry_logic_LStatements$SetPropStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetPropStatement);
	init_mindustry_logic_LStatements$SetPropStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(381);
	if ((frame[1].i) <= (jint(1))) goto label_371;
	}
	{
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_371:;
	{
	LINE_NUMBER(382);
	if ((frame[1].i) <= (jint(2))) goto label_372;
	}
	{
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[2].o)))->F_of = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_372:;
	{
	LINE_NUMBER(383);
	if ((frame[1].i) <= (jint(3))) goto label_373;
	}
	{
	((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_373:;
	{
	LINE_NUMBER(384);
	((func_mindustry_logic_LStatements$SetPropStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_368:;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"playsound"_j))));
	if (temp0 == 0) goto label_375;
	}
	{
	LINE_NUMBER(387);
	clinit_mindustry_logic_LStatements$PlaySoundStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement);
	init_mindustry_logic_LStatements$PlaySoundStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(388);
	if ((frame[1].i) <= (jint(1))) goto label_378;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, sp[1].o);
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK(sp[0].o))->F_positional = temp0;
	}
label_378:;
	{
	LINE_NUMBER(389);
	if ((frame[1].i) <= (jint(2))) goto label_379;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_id = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_379:;
	{
	LINE_NUMBER(390);
	if ((frame[1].i) <= (jint(3))) goto label_380;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_volume = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_380:;
	{
	LINE_NUMBER(391);
	if ((frame[1].i) <= (jint(4))) goto label_381;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_pitch = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_381:;
	{
	LINE_NUMBER(392);
	if ((frame[1].i) <= (jint(5))) goto label_382;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_pan = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_382:;
	{
	LINE_NUMBER(393);
	if ((frame[1].i) <= (6)) goto label_383;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (6)));
	}
label_383:;
	{
	LINE_NUMBER(394);
	if ((frame[1].i) <= (7)) goto label_384;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (7)));
	}
label_384:;
	{
	LINE_NUMBER(395);
	if ((frame[1].i) <= (8)) goto label_385;
	}
	{
	((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((frame[2].o)))->F_limit = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (8)));
	}
label_385:;
	{
	LINE_NUMBER(396);
	((func_mindustry_logic_LStatements$PlaySoundStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_375:;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"playmusic"_j))));
	if (temp0 == 0) goto label_387;
	}
	{
	LINE_NUMBER(399);
	clinit_mindustry_logic_LStatements$PlayMusicStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$PlayMusicStatement);
	init_mindustry_logic_LStatements$PlayMusicStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(400);
	if ((frame[1].i) <= (jint(1))) goto label_390;
	}
	{
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[2].o)))->F_name = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_390:;
	{
	LINE_NUMBER(401);
	if ((frame[1].i) <= (jint(2))) goto label_391;
	}
	{
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[2].o)))->F_interrupt = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_391:;
	{
	LINE_NUMBER(402);
	((func_mindustry_logic_LStatements$PlayMusicStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$PlayMusicStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_387:;
	{
	LINE_NUMBER(404);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"setmarker"_j))));
	if (temp0 == 0) goto label_393;
	}
	{
	LINE_NUMBER(405);
	clinit_mindustry_logic_LStatements$SetMarkerStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement);
	init_mindustry_logic_LStatements$SetMarkerStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(406);
	if ((frame[1].i) <= (jint(1))) goto label_396;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_logic_LMarkerControl_valueOf_java_lang_String_R_mindustry_logic_LMarkerControl(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))));
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_396:;
	{
	LINE_NUMBER(407);
	if ((frame[1].i) <= (jint(2))) goto label_397;
	}
	{
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[2].o)))->F_id = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_397:;
	{
	LINE_NUMBER(408);
	if ((frame[1].i) <= (jint(3))) goto label_398;
	}
	{
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[2].o)))->F_p1 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_398:;
	{
	LINE_NUMBER(409);
	if ((frame[1].i) <= (jint(4))) goto label_399;
	}
	{
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[2].o)))->F_p2 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_399:;
	{
	LINE_NUMBER(410);
	if ((frame[1].i) <= (jint(5))) goto label_400;
	}
	{
	((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((frame[2].o)))->F_p3 = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_400:;
	{
	LINE_NUMBER(411);
	((func_mindustry_logic_LStatements$SetMarkerStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_393:;
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"makemarker"_j))));
	if (temp0 == 0) goto label_402;
	}
	{
	LINE_NUMBER(414);
	clinit_mindustry_logic_LStatements$MakeMarkerStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement);
	init_mindustry_logic_LStatements$MakeMarkerStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(415);
	if ((frame[1].i) <= (jint(1))) goto label_405;
	}
	{
	((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((frame[2].o)))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_405:;
	{
	LINE_NUMBER(416);
	if ((frame[1].i) <= (jint(2))) goto label_406;
	}
	{
	((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((frame[2].o)))->F_id = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(2))));
	}
label_406:;
	{
	LINE_NUMBER(417);
	if ((frame[1].i) <= (jint(3))) goto label_407;
	}
	{
	((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((frame[2].o)))->F_x = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(3))));
	}
label_407:;
	{
	LINE_NUMBER(418);
	if ((frame[1].i) <= (jint(4))) goto label_408;
	}
	{
	((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((frame[2].o)))->F_y = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(4))));
	}
label_408:;
	{
	LINE_NUMBER(419);
	if ((frame[1].i) <= (jint(5))) goto label_409;
	}
	{
	((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((frame[2].o)))->F_replace = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(5))));
	}
label_409:;
	{
	LINE_NUMBER(420);
	((func_mindustry_logic_LStatements$MakeMarkerStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$MakeMarkerStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_402:;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"localeprint"_j))));
	if (temp0 == 0) goto label_411;
	}
	{
	LINE_NUMBER(423);
	clinit_mindustry_logic_LStatements$LocalePrintStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$LocalePrintStatement);
	init_mindustry_logic_LStatements$LocalePrintStatement(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(424);
	if ((frame[1].i) <= (jint(1))) goto label_414;
	}
	{
	((mindustry_logic_LStatements$LocalePrintStatement *) NULL_CHECK((frame[2].o)))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))));
	}
label_414:;
	{
	LINE_NUMBER(425);
	((func_mindustry_logic_LStatements$LocalePrintStatement_afterRead) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LStatements$LocalePrintStatement_afterRead])(ctx, (frame[2].o));
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_411:;
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_LogicIO_write_java_lang_Object_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicIO:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LogicIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$InvalidStatement))) goto label_1;
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"noop"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$ReadStatement))) goto label_4;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"read"_j))));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(437);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ReadStatement, (frame[0].o)))))->F_output;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(439);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ReadStatement, (frame[0].o)))))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(441);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ReadStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ReadStatement, (frame[0].o)))))->F_address;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$WriteStatement))) goto label_12;
	}
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"write"_j))));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(445);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WriteStatement, (frame[0].o)))))->F_input;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WriteStatement, (frame[0].o)))))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(449);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WriteStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WriteStatement, (frame[0].o)))))->F_address;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_12:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$DrawStatement))) goto label_20;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"draw"_j))));
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(453);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(455);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(457);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(459);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(461);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(463);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(465);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawStatement, (frame[0].o)))))->F_p4;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_20:;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PrintStatement))) goto label_36;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"print"_j))));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(469);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PrintStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PrintStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_36:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PrintCharStatement))) goto label_40;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"printchar"_j))));
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(473);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PrintCharStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PrintCharStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_40:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$FormatStatement))) goto label_44;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"format"_j))));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(477);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FormatStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FormatStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_44:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$DrawFlushStatement))) goto label_48;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"drawflush"_j))));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(481);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$DrawFlushStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$DrawFlushStatement, (frame[0].o)))))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_48:;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PrintFlushStatement))) goto label_52;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"printflush"_j))));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(485);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PrintFlushStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PrintFlushStatement, (frame[0].o)))))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_52:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$GetLinkStatement))) goto label_56;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"getlink"_j))));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(489);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetLinkStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetLinkStatement, (frame[0].o)))))->F_output;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetLinkStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetLinkStatement, (frame[0].o)))))->F_address;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_56:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$ControlStatement))) goto label_62;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"control"_j))));
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(495);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_LAccess_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAccess_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(497);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(499);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(501);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(503);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(505);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ControlStatement, (frame[0].o)))))->F_p4;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_62:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$RadarStatement))) goto label_76;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"radar"_j))));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(509);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_target1;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(511);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_target2;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(513);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_target3;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(515);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_sort;
	sp[1].o = (jobject)((func_mindustry_logic_RadarSort_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarSort_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(517);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_radar;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(519);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_sortOrder;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(521);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$RadarStatement, (frame[0].o)))))->F_output;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_76:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SensorStatement))) goto label_92;
	}
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"sensor"_j))));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(525);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SensorStatement, (frame[0].o)))))->F_to;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(527);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SensorStatement, (frame[0].o)))))->F_from;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(529);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SensorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SensorStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_92:;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetStatement))) goto label_100;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(533);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetStatement, (frame[0].o)))))->F_to;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(535);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetStatement, (frame[0].o)))))->F_from;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_100:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$OperationStatement))) goto label_106;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(539);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$OperationStatement, (frame[0].o)))))->F_op;
	sp[1].o = (jobject)((func_mindustry_logic_LogicOp_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicOp_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(540);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(541);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$OperationStatement, (frame[0].o)))))->F_dest;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(543);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$OperationStatement, (frame[0].o)))))->F_a;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(545);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$OperationStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$OperationStatement, (frame[0].o)))))->F_b;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_106:;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SelectStatement))) goto label_116;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"select"_j))));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(549);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(551);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_op;
	sp[1].o = (jobject)((func_mindustry_logic_ConditionOp_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_ConditionOp_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(553);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_comp0;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(555);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_comp1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(557);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_a;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(559);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SelectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SelectStatement, (frame[0].o)))))->F_b;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_116:;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$WaitStatement))) goto label_130;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"wait"_j))));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(563);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WaitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WaitStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_130:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$StopStatement))) goto label_134;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"stop"_j))));
	goto label_3;
	}
label_134:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$LookupStatement))) goto label_136;
	}
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"lookup"_j))));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(569);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$LookupStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(571);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$LookupStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(573);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$LookupStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$LookupStatement, (frame[0].o)))))->F_id;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_136:;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PackColorStatement))) goto label_144;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"packcolor"_j))));
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(577);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PackColorStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(579);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PackColorStatement, (frame[0].o)))))->F_r;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(581);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PackColorStatement, (frame[0].o)))))->F_g;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(582);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(583);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PackColorStatement, (frame[0].o)))))->F_b;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(585);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PackColorStatement, (frame[0].o)))))->F_a;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_144:;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$UnpackColorStatement))) goto label_156;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"unpackcolor"_j))));
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(589);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement, (frame[0].o)))))->F_r;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(591);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement, (frame[0].o)))))->F_g;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(593);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement, (frame[0].o)))))->F_b;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(595);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement, (frame[0].o)))))->F_a;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnpackColorStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnpackColorStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_156:;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$EndStatement))) goto label_168;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"end"_j))));
	goto label_3;
	}
label_168:;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$JumpStatement))) goto label_170;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"jump"_j))));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$JumpStatement, (frame[0].o)))))->F_destIndex));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(605);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$JumpStatement, (frame[0].o)))))->F_op;
	sp[1].o = (jobject)((func_mindustry_logic_ConditionOp_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_ConditionOp_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(607);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$JumpStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(609);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$JumpStatement, (frame[0].o)))))->F_compare;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_170:;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$UnitBindStatement))) goto label_180;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ubind"_j))));
	LINE_NUMBER(612);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(613);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitBindStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitBindStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_180:;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$UnitControlStatement))) goto label_184;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ucontrol"_j))));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(617);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_LUnitControl_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(619);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(621);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(623);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(625);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_p4;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(626);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(627);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitControlStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitControlStatement, (frame[0].o)))))->F_p5;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_184:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$UnitRadarStatement))) goto label_198;
	}
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"uradar"_j))));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(631);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_target1;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(632);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(633);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_target2;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(634);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(635);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_target3;
	sp[1].o = (jobject)((func_mindustry_logic_RadarTarget_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(636);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(637);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_sort;
	sp[1].o = (jobject)((func_mindustry_logic_RadarSort_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_RadarSort_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(639);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_radar;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(641);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_sortOrder;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(643);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitRadarStatement, (frame[0].o)))))->F_output;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_198:;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$UnitLocateStatement))) goto label_214;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ulocate"_j))));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(647);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_locate;
	sp[1].o = (jobject)((func_mindustry_logic_LLocate_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(649);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_flag;
	sp[1].o = (jobject)((func_mindustry_world_meta_BlockFlag_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_BlockFlag_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(650);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(651);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_enemy;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(653);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_ore;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(654);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(655);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_outX;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(657);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_outY;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(659);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_outFound;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(661);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$UnitLocateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$UnitLocateStatement, (frame[0].o)))))->F_outBuild;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_214:;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$QueryStatement))) goto label_232;
	}
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"query"_j))));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(665);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_shape;
	sp[1].o = (jobject)((func_mindustry_logic_QueryShape_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryShape_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(667);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_QueryType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(669);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(671);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(673);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(675);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_w;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(677);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$QueryStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$QueryStatement, (frame[0].o)))))->F_h;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_232:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$GetBlockStatement))) goto label_248;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"getblock"_j))));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(681);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetBlockStatement, (frame[0].o)))))->F_layer;
	sp[1].o = (jobject)((func_mindustry_logic_TileLayer_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(683);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetBlockStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(685);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetBlockStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(686);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(687);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetBlockStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_248:;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetBlockStatement))) goto label_258;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setblock"_j))));
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(691);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_layer;
	sp[1].o = (jobject)((func_mindustry_logic_TileLayer_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_TileLayer_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(693);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_block;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(694);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(695);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(697);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(699);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(701);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetBlockStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetBlockStatement, (frame[0].o)))))->F_rotation;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_258:;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SpawnUnitStatement))) goto label_272;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"spawn"_j))));
	LINE_NUMBER(704);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(705);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(707);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(708);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(709);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(711);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_rotation;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(713);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(715);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(716);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(717);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnUnitStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnUnitStatement, (frame[0].o)))))->F_effect;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_272:;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SpawnBulletStatement))) goto label_288;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"bullet"_j))));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(721);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(723);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_from;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(725);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_index;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(727);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(729);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(731);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_rotation;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(733);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(735);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_owner;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(736);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(737);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_damage;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(739);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_velocityScl;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(741);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_lifeScl;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(742);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(743);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_aimX;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(744);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(745);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement, (frame[0].o)))))->F_aimY;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_288:;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$ApplyStatusStatement))) goto label_316;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"status"_j))));
	LINE_NUMBER(748);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(749);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ApplyStatusStatement, (frame[0].o)))))->F_clear));
	LINE_NUMBER(750);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(751);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ApplyStatusStatement, (frame[0].o)))))->F_effect;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(753);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ApplyStatusStatement, (frame[0].o)))))->F_unit;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(754);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(755);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ApplyStatusStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ApplyStatusStatement, (frame[0].o)))))->F_duration;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_316:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$WeatherSenseStatement))) goto label_326;
	}
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"weathersense"_j))));
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(759);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WeatherSenseStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WeatherSenseStatement, (frame[0].o)))))->F_to;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(761);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WeatherSenseStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WeatherSenseStatement, (frame[0].o)))))->F_weather;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_326:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$WeatherSetStatement))) goto label_332;
	}
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"weatherset"_j))));
	LINE_NUMBER(764);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(765);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement, (frame[0].o)))))->F_weather;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(766);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(767);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$WeatherSetStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$WeatherSetStatement, (frame[0].o)))))->F_state;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_332:;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SpawnWaveStatement))) goto label_338;
	}
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"spawnwave"_j))));
	LINE_NUMBER(770);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(771);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnWaveStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(773);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnWaveStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(774);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(775);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SpawnWaveStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SpawnWaveStatement, (frame[0].o)))))->F_natural;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_338:;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetRuleStatement))) goto label_346;
	}
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setrule"_j))));
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(779);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_rule;
	sp[1].o = (jobject)((func_mindustry_logic_LogicRule_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(781);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(782);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(783);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(784);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(785);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(786);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(787);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(788);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(789);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRuleStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRuleStatement, (frame[0].o)))))->F_p4;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_346:;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$FlushMessageStatement))) goto label_360;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"message"_j))));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(793);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FlushMessageStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_MessageType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(794);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(795);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FlushMessageStatement, (frame[0].o)))))->F_duration;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(796);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(797);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FlushMessageStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FlushMessageStatement, (frame[0].o)))))->F_outSuccess;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_360:;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$CutsceneStatement))) goto label_368;
	}
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"cutscene"_j))));
	LINE_NUMBER(800);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(801);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$CutsceneStatement, (frame[0].o)))))->F_action;
	sp[1].o = (jobject)((func_mindustry_logic_CutsceneAction_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_CutsceneAction_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(802);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(803);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$CutsceneStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(804);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(805);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$CutsceneStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(806);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(807);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$CutsceneStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(808);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(809);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$CutsceneStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$CutsceneStatement, (frame[0].o)))))->F_p4;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_368:;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$EffectStatement))) goto label_380;
	}
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"effect"_j))));
	LINE_NUMBER(812);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(813);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(814);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(815);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(817);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(818);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(819);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_sizerot;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(820);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(821);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_color;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(822);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(823);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$EffectStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$EffectStatement, (frame[0].o)))))->F_data;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_380:;
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$ExplosionStatement))) goto label_394;
	}
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"explosion"_j))));
	LINE_NUMBER(826);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(827);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(829);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(830);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(831);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(832);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(833);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_radius;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(834);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(835);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_damage;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(836);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(837);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_air;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(838);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(839);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_ground;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(840);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(841);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_pierce;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(843);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ExplosionStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ExplosionStatement, (frame[0].o)))))->F_effect;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_394:;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetRateStatement))) goto label_414;
	}
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setrate"_j))));
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(847);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetRateStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetRateStatement, (frame[0].o)))))->F_amount;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_414:;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$FetchStatement))) goto label_418;
	}
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"fetch"_j))));
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(851);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FetchStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_FetchType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(852);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(853);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FetchStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(854);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(855);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FetchStatement, (frame[0].o)))))->F_team;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(856);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(857);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FetchStatement, (frame[0].o)))))->F_index;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(859);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$FetchStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$FetchStatement, (frame[0].o)))))->F_extra;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_418:;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SyncStatement))) goto label_430;
	}
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"sync"_j))));
	LINE_NUMBER(862);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(863);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SyncStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SyncStatement, (frame[0].o)))))->F_variable;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_430:;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$ClientDataStatement))) goto label_434;
	}
	{
	LINE_NUMBER(865);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"clientdata"_j))));
	LINE_NUMBER(866);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(867);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ClientDataStatement, (frame[0].o)))))->F_channel;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(868);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(869);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ClientDataStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(871);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$ClientDataStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$ClientDataStatement, (frame[0].o)))))->F_reliable;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_434:;
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$GetFlagStatement))) goto label_442;
	}
	{
	LINE_NUMBER(873);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"getflag"_j))));
	LINE_NUMBER(874);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(875);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetFlagStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetFlagStatement, (frame[0].o)))))->F_result;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(876);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(877);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$GetFlagStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$GetFlagStatement, (frame[0].o)))))->F_flag;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_442:;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetFlagStatement))) goto label_448;
	}
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setflag"_j))));
	LINE_NUMBER(880);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(881);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetFlagStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetFlagStatement, (frame[0].o)))))->F_flag;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(882);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(883);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetFlagStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetFlagStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_448:;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetPropStatement))) goto label_454;
	}
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setprop"_j))));
	LINE_NUMBER(886);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(887);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetPropStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(889);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetPropStatement, (frame[0].o)))))->F_of;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(891);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetPropStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetPropStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_454:;
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PlaySoundStatement))) goto label_462;
	}
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"playsound"_j))));
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(895);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_positional));
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(897);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_id;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(898);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(899);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_volume;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(901);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_pitch;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(902);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(903);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_pan;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(904);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(905);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(906);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(907);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(908);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(909);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlaySoundStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlaySoundStatement, (frame[0].o)))))->F_limit;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_462:;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$PlayMusicStatement))) goto label_480;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"playmusic"_j))));
	LINE_NUMBER(912);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(913);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlayMusicStatement, (frame[0].o)))))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(914);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(915);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$PlayMusicStatement, (frame[0].o)))))->F_interrupt;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_480:;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$SetMarkerStatement))) goto label_486;
	}
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"setmarker"_j))));
	LINE_NUMBER(918);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(919);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement, (frame[0].o)))))->F_type;
	sp[1].o = (jobject)((func_mindustry_logic_LMarkerControl_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LMarkerControl_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(920);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(921);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement, (frame[0].o)))))->F_id;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(922);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(923);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement, (frame[0].o)))))->F_p1;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(924);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(925);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement, (frame[0].o)))))->F_p2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(927);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$SetMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$SetMarkerStatement, (frame[0].o)))))->F_p3;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_486:;
	{
	LINE_NUMBER(928);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$MakeMarkerStatement))) goto label_498;
	}
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"makemarker"_j))));
	LINE_NUMBER(930);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(931);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement, (frame[0].o)))))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(932);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(933);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement, (frame[0].o)))))->F_id;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(934);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(935);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement, (frame[0].o)))))->F_x;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(936);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(937);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement, (frame[0].o)))))->F_y;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(939);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$MakeMarkerStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$MakeMarkerStatement, (frame[0].o)))))->F_replace;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_498:;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_mindustry_logic_LStatements$LocalePrintStatement))) goto label_3;
	}
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"localeprint"_j))));
	LINE_NUMBER(942);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(943);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_logic_LStatements$LocalePrintStatement *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LStatements$LocalePrintStatement, (frame[0].o)))))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(945);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_gen_LogicIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LogicIO:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LogicIO(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (53));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_53(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_53 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_53);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_54(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_54 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_54);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_55(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_55 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_55);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_56(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_56 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_56);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_57(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_57 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_57);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_58(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_58 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_58);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_59(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_59 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_59);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_60(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_60 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_60);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_61(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_61 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_61);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_62(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_62 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_62);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_63(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_63 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_63);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_64(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_64 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_64);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_65(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_65 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_65);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_66(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_66 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_66);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_67(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_67 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_67);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_68(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_68 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_68);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_69(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_69 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_69);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_70(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_70 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_70);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_71(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_71 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_71);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_72(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_72 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_72);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_73(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_73 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_73);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_74(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_74 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_74);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_75(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_75 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_75);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_76(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_76 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_76);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_77(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_77 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_77);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_78(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_78 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_78);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_79(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_79 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_79);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_80(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_80 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_80);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_81(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_81 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_81);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_82(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_82 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_82);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_83(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_83 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_83);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_84(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_84 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_84);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_85(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_85 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_85);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_86(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_86 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_86);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_87(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_87 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_87);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_88(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_88 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_88);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_89(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_89 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_89);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_90(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_90 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_90);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_91(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_91 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_91);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_92(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_92 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_92);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_93(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_93 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_93);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_94(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_94 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_94);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_95(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_95 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_95);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_96(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_96 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_96);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_97(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_97 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_97);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_98(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_98 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_98);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_99(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_99 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_99);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_100(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_100 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_100);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_101(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_101 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_101);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_102(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_102 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_102);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_103(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_103 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_103);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_104(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_104 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_104);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LogicIO_invoke_arc_func_Prov_105(ctx);
		auto proxy = (mindustry_gen_LogicIO_invoke_arc_func_Prov_105 *) gcAlloc(ctx, &class_mindustry_gen_LogicIO_invoke_arc_func_Prov_105);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_gen_LogicIO(ctx);
	SF_mindustry_gen_LogicIO_allStatements = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_LogicIO[] {
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
	{ "allStatements", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_gen_LogicIO_allStatements, "Larc/struct/Seq;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_LogicIO, 0, "()V", 1 },
	{ "read", (intptr_t) SM_mindustry_gen_LogicIO_read_Array1_java_lang_String_int_R_mindustry_logic_LStatement, 0, "([Ljava/lang/String;I)Lmindustry/logic/LStatement;", 9 },
	{ "write", (intptr_t) SM_mindustry_gen_LogicIO_write_java_lang_Object_java_lang_StringBuilder, 0, "(Ljava/lang/Object;Ljava/lang/StringBuilder;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_LogicIO, 0, "()V", 8 },
};

Class class_mindustry_gen_LogicIO{
		.nativeName = (intptr_t) "mindustry/gen/LogicIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_LogicIO),
		.classVtable = (intptr_t) vtable_mindustry_gen_LogicIO,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_LogicIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_LogicIO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_LogicIO = registerClass(&class_mindustry_gen_LogicIO);

}
