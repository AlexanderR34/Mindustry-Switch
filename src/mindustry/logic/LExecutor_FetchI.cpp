#include "mindustry/logic/LExecutor_FetchI.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_FetchI.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/logic/FetchType.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_logic_LExecutor$FetchI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$FetchI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_extra)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extra)->clazz)->markFunction)((jobject) self->F_extra, mark, depth + 1);
	if (self->F_index)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_index)->clazz)->markFunction)((jobject) self->F_index, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$FetchI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$FetchI_mindustry_logic_FetchType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FetchI:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FetchI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1376);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1373);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1377);
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(1378);
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[2].o);
	LINE_NUMBER(1379);
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	LINE_NUMBER(1380);
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_extra = (jref) (frame[4].o);
	LINE_NUMBER(1381);
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_index = (jref) (frame[5].o);
	LINE_NUMBER(1382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$FetchI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FetchI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FetchI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1384);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1373);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	((mindustry_logic_LExecutor$FetchI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$FetchI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FetchI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1389);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_index;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1390);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1391);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1392);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1394);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$FetchType;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_logic_FetchType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_FetchType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		default: goto label_13;
	}
	}
label_5:;
	{
	LINE_NUMBER(1396);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_type_UnitType)) == 0) goto label_14;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[7].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_16;
	}
label_14:;
	INST_ACONST_NULL();
label_16:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1397);
	if ((frame[5].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[2].i) < 0) goto label_20;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_units;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_21;
	}
label_20:;
	INST_ACONST_NULL();
	goto label_22;
label_21:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_22:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_23;
label_18:;
	{
	LINE_NUMBER(1400);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[6].o) == nullptr) goto label_25;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_25;
	{
	if ((frame[2].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_26;
	}
label_25:;
	INST_ACONST_NULL();
	goto label_27;
label_26:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[2].i));
	sp += 1;
	}
label_27:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
label_23:;
	LINE_NUMBER(1403);
	goto label_13;
label_6:;
	{
	LINE_NUMBER(1404);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[2].i) < 0) goto label_28;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_players;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_29;
	}
label_28:;
	INST_ACONST_NULL();
	goto label_30;
label_29:;
	{
	LINE_NUMBER(1405);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o)));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_31;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[6].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building, (frame[5].o)))(ctx, (frame[5].o));
	sp += 1;
	goto label_30;
	}
label_31:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o)));
	sp += 1;
	}
label_30:;
	{
	sp -= 2;
	LINE_NUMBER(1404);
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[2].i) < 0) goto label_33;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_34;
	}
label_33:;
	INST_ACONST_NULL();
	goto label_35;
label_34:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_35:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
label_8:;
	{
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_world_Block)) == 0) goto label_36;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[7].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_38;
	}
label_36:;
	INST_ACONST_NULL();
label_38:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1409);
	if ((frame[5].o) != nullptr) goto label_40;
	}
	{
	LINE_NUMBER(1410);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[2].i) < 0) goto label_42;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_buildings;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_43;
	}
label_42:;
	INST_ACONST_NULL();
	goto label_44;
label_43:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_44:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_45;
label_40:;
	{
	LINE_NUMBER(1412);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1413);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp += 1;
	if ((frame[2].i) < 0) goto label_47;
	}
	{
	if ((frame[2].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_48;
	}
label_47:;
	INST_ACONST_NULL();
	goto label_49;
label_48:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[2].i));
	sp += 1;
	}
label_49:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
label_45:;
	LINE_NUMBER(1415);
	goto label_13;
label_9:;
	{
	LINE_NUMBER(1417);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_type_UnitType)) == 0) goto label_50;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[7].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_52;
	}
label_50:;
	INST_ACONST_NULL();
label_52:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1418);
	if ((frame[5].o) != nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1419);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_units;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(1421);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[5].o));
	sp += 1;
	if (sp[0].o != nullptr) goto label_57;
	}
	INST_DCONST(0);
	goto label_58;
label_57:;
	{
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[5].o));
	jdouble temp0 = jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].d = temp0;
	sp += 1;
	}
label_58:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, sp[1].d);
label_56:;
	LINE_NUMBER(1423);
	goto label_13;
label_10:;
	{
	LINE_NUMBER(1424);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1425);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_players;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1427);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_world_Block)) == 0) goto label_59;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[7].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_61;
	}
label_59:;
	INST_ACONST_NULL();
label_61:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1428);
	if ((frame[5].o) != nullptr) goto label_63;
	}
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_buildings;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	goto label_13;
	}
label_63:;
	{
	LINE_NUMBER(1431);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FetchI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[5].o));
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size))));
	}
label_13:;
	LINE_NUMBER(1435);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$FetchI[] {
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
	(void *) M_mindustry_logic_LExecutor$FetchI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_FetchType, offsetof(mindustry_logic_LExecutor$FetchI, F_type), "Lmindustry/logic/FetchType;", 1 },
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FetchI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FetchI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "extra", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FetchI, F_extra), "Lmindustry/logic/LVar;", 1 },
	{ "index", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FetchI, F_index), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FetchI_mindustry_logic_FetchType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/FetchType;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FetchI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$FetchI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$FetchI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$FetchI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$FetchI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$FetchI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$FetchI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$FetchI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$FetchI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$FetchI = registerClass(&class_mindustry_logic_LExecutor$FetchI);

}

