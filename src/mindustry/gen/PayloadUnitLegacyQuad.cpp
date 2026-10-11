#include "mindustry/gen/PayloadUnitLegacyQuad.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Payloadc.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/Queue.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/gen/PayloadUnit.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"
#include "mindustry/gen/PayloadUnitLegacyQuad.h"

extern "C" {


void mark_mindustry_gen_PayloadUnitLegacyQuad(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_PayloadUnit(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_PayloadUnitLegacyQuad *) object;
}

void clinit_mindustry_gen_PayloadUnitLegacyQuad(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_PayloadUnit(ctx);
}

void init_mindustry_gen_PayloadUnitLegacyQuad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PayloadUnitLegacyQuad(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(79);
	init_mindustry_gen_PayloadUnit(ctx, (frame[0].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_PayloadUnitLegacyQuad_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (23);
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PayloadUnitLegacyQuad_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(90);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(91);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(92);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(94);
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp3;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(99);
	jint temp6 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp6;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(101);
	frame[4].i = (jint(0));
	}
label_14:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(103);
	if ((frame[5].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_18:;
	{
	LINE_NUMBER(101);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(110);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(112);
	frame[5].i = (jint(0));
	}
label_26:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_27;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(114);
	if ((frame[6].o) == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_30:;
	{
	LINE_NUMBER(112);
	INST_IINC(5, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(120);
	goto label_35;
	}
label_2:;
	{
	if ((frame[2].i) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(121);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(122);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(128);
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp5;
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(130);
	frame[4].i = (jint(0));
	}
label_47:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_48;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(132);
	if ((frame[5].o) == nullptr) goto label_51;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_51:;
	{
	LINE_NUMBER(130);
	INST_IINC(4, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(139);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(141);
	frame[5].i = (jint(0));
	}
label_59:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_60;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(143);
	if ((frame[6].o) == nullptr) goto label_63;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_63:;
	{
	LINE_NUMBER(141);
	INST_IINC(5, 1);
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(149);
	goto label_35;
	}
label_36:;
	{
	if ((frame[2].i) != (jint(2))) goto label_68;
	}
	{
	LINE_NUMBER(150);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(151);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(158);
	jint temp6 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp6;
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(160);
	frame[4].i = (jint(0));
	}
label_80:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_81;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(162);
	if ((frame[5].o) == nullptr) goto label_84;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_84:;
	{
	LINE_NUMBER(160);
	INST_IINC(4, 1);
	goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(169);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(171);
	frame[5].i = (jint(0));
	}
label_92:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_93;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(173);
	if ((frame[6].o) == nullptr) goto label_96;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_96:;
	{
	LINE_NUMBER(171);
	INST_IINC(5, 1);
	goto label_92;
	}
label_93:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(179);
	goto label_35;
	}
label_68:;
	{
	if ((frame[2].i) != (jint(3))) goto label_101;
	}
	{
	LINE_NUMBER(180);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(181);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(189);
	jint temp6 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp6;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(191);
	frame[4].i = (jint(0));
	}
label_114:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_115;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(193);
	if ((frame[5].o) == nullptr) goto label_118;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_118:;
	{
	LINE_NUMBER(191);
	INST_IINC(4, 1);
	goto label_114;
	}
label_115:;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(200);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(202);
	frame[5].i = (jint(0));
	}
label_126:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_127;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(204);
	if ((frame[6].o) == nullptr) goto label_130;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_130:;
	{
	LINE_NUMBER(202);
	INST_IINC(5, 1);
	goto label_126;
	}
label_127:;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(210);
	goto label_35;
	}
label_101:;
	{
	if ((frame[2].i) != (jint(4))) goto label_135;
	}
	{
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(212);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(220);
	jint temp6 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp6;
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(222);
	frame[4].i = (jint(0));
	}
label_148:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_149;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(224);
	if ((frame[5].o) == nullptr) goto label_152;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_152:;
	{
	LINE_NUMBER(222);
	INST_IINC(4, 1);
	goto label_148;
	}
label_149:;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(231);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(233);
	frame[5].i = (jint(0));
	}
label_160:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_161;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[6].o) == nullptr) goto label_164;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_164:;
	{
	LINE_NUMBER(233);
	INST_IINC(5, 1);
	goto label_160;
	}
label_161:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(242);
	goto label_35;
	}
label_135:;
	{
	if ((frame[2].i) != (jint(5))) goto label_170;
	}
	{
	LINE_NUMBER(243);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(251);
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp5;
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(253);
	frame[4].i = (jint(0));
	}
label_182:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_183;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(255);
	if ((frame[5].o) == nullptr) goto label_186;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_186:;
	{
	LINE_NUMBER(253);
	INST_IINC(4, 1);
	goto label_182;
	}
label_183:;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(262);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(264);
	frame[5].i = (jint(0));
	}
label_194:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_195;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(266);
	if ((frame[6].o) == nullptr) goto label_198;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_198:;
	{
	LINE_NUMBER(264);
	INST_IINC(5, 1);
	goto label_194;
	}
label_195:;
	{
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(274);
	goto label_35;
	}
label_170:;
	{
	if ((frame[2].i) != (6)) goto label_205;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(284);
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp5;
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(286);
	frame[4].i = (jint(0));
	}
label_218:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_219;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[5].o) == nullptr) goto label_222;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_222:;
	{
	LINE_NUMBER(286);
	INST_IINC(4, 1);
	goto label_218;
	}
label_219:;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(295);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(297);
	frame[5].i = (jint(0));
	}
label_230:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_231;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(299);
	if ((frame[6].o) == nullptr) goto label_234;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_234:;
	{
	LINE_NUMBER(297);
	INST_IINC(5, 1);
	goto label_230;
	}
label_231:;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(307);
	goto label_35;
	}
label_205:;
	{
	if ((frame[2].i) != (7)) goto label_241;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(309);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(317);
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp5;
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(319);
	frame[4].i = (jint(0));
	}
label_254:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_255;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(321);
	if ((frame[5].o) == nullptr) goto label_258;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_258:;
	{
	LINE_NUMBER(319);
	INST_IINC(4, 1);
	goto label_254;
	}
label_255:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(328);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(330);
	frame[5].i = (jint(0));
	}
label_266:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_267;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(332);
	if ((frame[6].o) == nullptr) goto label_270;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_270:;
	{
	LINE_NUMBER(330);
	INST_IINC(5, 1);
	goto label_266;
	}
label_267:;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(340);
	goto label_35;
	}
label_241:;
	{
	if ((frame[2].i) != (8)) goto label_277;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_PayloadUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	jdouble temp1 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp1;
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp2;
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp3;
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(349);
	jint temp4 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp4;
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(351);
	frame[4].i = (jint(0));
	}
label_289:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_290;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPayload_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(353);
	if ((frame[5].o) == nullptr) goto label_293;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_293:;
	{
	LINE_NUMBER(351);
	INST_IINC(4, 1);
	goto label_289;
	}
label_290:;
	{
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp1;
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp2;
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(360);
	jint temp3 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[4].i = temp3;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(362);
	frame[5].i = (jint(0));
	}
label_301:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_302;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(364);
	if ((frame[6].o) == nullptr) goto label_305;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_305:;
	{
	LINE_NUMBER(362);
	INST_IINC(5, 1);
	goto label_301;
	}
label_302:;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(372);
	goto label_35;
	}
label_277:;
	{
	LINE_NUMBER(373);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'quad'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(376);
	((func_mindustry_gen_PayloadUnitLegacyQuad_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_PayloadUnitLegacyQuad_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PayloadUnitLegacyQuad_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(381);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (8));
	LINE_NUMBER(382);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(384);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	LINE_NUMBER(385);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[1].o), ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag));
	LINE_NUMBER(386);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(387);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting));
	LINE_NUMBER(388);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(390);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(391);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writePayload_arc_util_io_Writes_mindustry_world_blocks_payloads_Payload(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[1].o)));
	LINE_NUMBER(391);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(395);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(395);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(398);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(399);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	LINE_NUMBER(400);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore));
	LINE_NUMBER(401);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(402);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(403);
	frame[2].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_26;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_PayloadUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[1].o)));
	LINE_NUMBER(403);
	INST_IINC(2, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	if (sp[0].o != nullptr) goto label_30;
	}
	INST_ICONST(-1);
	goto label_31;
label_30:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_31:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(408);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding));
	LINE_NUMBER(409);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(410);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(411);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_PayloadUnitLegacyQuad_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_PayloadUnitLegacyQuad_create_R_mindustry_gen_PayloadUnitLegacyQuad(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PayloadUnitLegacyQuad:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PayloadUnitLegacyQuad(ctx);
	{
	LINE_NUMBER(420);
	clinit_mindustry_gen_PayloadUnitLegacyQuad(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PayloadUnitLegacyQuad);
	init_mindustry_gen_PayloadUnitLegacyQuad(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_PayloadUnitLegacyQuad[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_PayloadUnit_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_PayloadUnit_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_PayloadUnit_as_R_java_lang_Object,
	(void *) M_mindustry_gen_PayloadUnit_isAdded_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isLocal_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isRemote_R_boolean,
	(void *) M_mindustry_gen_PayloadUnitLegacyQuad_serialize_R_boolean,
	(void *) M_mindustry_gen_PayloadUnitLegacyQuad_classId_R_int,
	(void *) M_mindustry_gen_Unit_id_R_int,
	(void *) M_mindustry_gen_PayloadUnit_add,
	(void *) M_mindustry_gen_PayloadUnit_afterRead,
	(void *) M_mindustry_gen_PayloadUnit_afterReadAll,
	(void *) M_mindustry_gen_PayloadUnit_beforeWrite,
	(void *) M_mindustry_gen_Unit_id_int,
	(void *) M_mindustry_gen_PayloadUnitLegacyQuad_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_PayloadUnit_remove,
	(void *) M_mindustry_gen_PayloadUnit_update,
	(void *) M_mindustry_gen_PayloadUnitLegacyQuad_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_PayloadUnit_getX_R_float,
	(void *) M_mindustry_gen_PayloadUnit_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_PayloadUnit_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_PayloadUnit_onSolid_R_boolean,
	(void *) M_mindustry_gen_Unit_x_R_float,
	(void *) M_mindustry_gen_Unit_y_R_float,
	(void *) M_mindustry_gen_PayloadUnit_tileX_R_int,
	(void *) M_mindustry_gen_PayloadUnit_tileY_R_int,
	(void *) M_mindustry_gen_PayloadUnit_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_PayloadUnit_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_PayloadUnit_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_PayloadUnit_set_float_float,
	(void *) M_mindustry_gen_PayloadUnit_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_PayloadUnit_trns_float_float,
	(void *) M_mindustry_gen_Unit_x_float,
	(void *) M_mindustry_gen_Unit_y_float,
	(void *) M_mindustry_gen_Unit_rotation_R_float,
	(void *) M_mindustry_gen_Unit_rotation_float,
	(void *) M_mindustry_gen_PayloadUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_PayloadUnit_apply_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_PayloadUnit_apply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_PayloadUnit_unapply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_PayloadUnit_statusDamageMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_statusReloadMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_statusArmor_float,
	(void *) M_mindustry_gen_PayloadUnit_statusBuildSpeed_float,
	(void *) M_mindustry_gen_PayloadUnit_statusDrag_float,
	(void *) M_mindustry_gen_PayloadUnit_statusMaxHealth_float,
	(void *) M_mindustry_gen_PayloadUnit_statusSpeed_float,
	(void *) M_mindustry_gen_PayloadUnit_statusColor_R_arc_graphics_Color,
	(void *) M_mindustry_gen_PayloadUnit_statusBits_R_arc_struct_Bits,
	(void *) M_mindustry_gen_Unit_disarmed_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_hasEffect_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isBoss_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isGrounded_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isImmune_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_Unit_armorOverride_R_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_damageMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_dragMultiplier_R_float,
	(void *) M_mindustry_gen_PayloadUnit_getDuration_mindustry_type_StatusEffect_R_float,
	(void *) M_mindustry_gen_Unit_healthMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_armorOverride_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_clearStatuses,
	(void *) M_mindustry_gen_Unit_damageMultiplier_float,
	(void *) M_mindustry_gen_Unit_disarmed_boolean,
	(void *) M_mindustry_gen_Unit_dragMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_draw,
	(void *) M_mindustry_gen_Unit_healthMultiplier_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_setDuration_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_float,
	(void *) M_mindustry_gen_PayloadUnit_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_cheating_R_boolean,
	(void *) M_mindustry_gen_Unit_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_PayloadUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_PayloadUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_PayloadUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Unit_team_mindustry_game_Team,
	(void *) M_mindustry_gen_PayloadUnit_buildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_PayloadUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_addBuild_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_gen_PayloadUnit_addBuild_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_PayloadUnit_clearBuilding,
	(void *) M_mindustry_gen_PayloadUnit_isBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_plans_R_arc_struct_Queue,
	(void *) M_mindustry_gen_PayloadUnit_activelyBuilding_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canBuild_R_boolean,
	(void *) M_mindustry_gen_Unit_updateBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_buildAlpha_R_float,
	(void *) M_mindustry_gen_Unit_buildAlpha_float,
	(void *) M_mindustry_gen_PayloadUnit_drawBuilding,
	(void *) M_mindustry_gen_PayloadUnit_drawBuildingBeam_float_float,
	(void *) M_mindustry_gen_PayloadUnit_drawPlan_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_PayloadUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_Unit_plans_arc_struct_Queue,
	(void *) M_mindustry_gen_PayloadUnit_removeBuild_int_int_boolean,
	(void *) M_mindustry_gen_PayloadUnit_updateBuildLogic,
	(void *) M_mindustry_gen_Unit_updateBuilding_boolean,
	(void *) M_mindustry_gen_PayloadUnit_validatePlans,
	(void *) M_mindustry_gen_PayloadUnit_clipSize_R_float,
	(void *) M_mindustry_gen_PayloadUnit_damageArmorMult_float_float,
	(void *) M_mindustry_gen_PayloadUnit_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_PayloadUnit_damagePierce_float,
	(void *) M_mindustry_gen_PayloadUnit_damagePierce_float_boolean,
	(void *) M_mindustry_gen_PayloadUnit_healFract_float,
	(void *) M_mindustry_gen_PayloadUnit_heal_float,
	(void *) M_mindustry_gen_PayloadUnit_damaged_R_boolean,
	(void *) M_mindustry_gen_Unit_dead_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isValid_R_boolean,
	(void *) M_mindustry_gen_Unit_health_R_float,
	(void *) M_mindustry_gen_PayloadUnit_healthf_R_float,
	(void *) M_mindustry_gen_Unit_hitTime_R_float,
	(void *) M_mindustry_gen_Unit_maxHealth_R_float,
	(void *) M_mindustry_gen_PayloadUnit_clampHealth,
	(void *) M_mindustry_gen_PayloadUnit_damage_float,
	(void *) M_mindustry_gen_PayloadUnit_damage_float_boolean,
	(void *) M_mindustry_gen_PayloadUnit_damageContinuous_float,
	(void *) M_mindustry_gen_PayloadUnit_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_PayloadUnit_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Unit_dead_boolean,
	(void *) M_mindustry_gen_PayloadUnit_heal,
	(void *) M_mindustry_gen_Unit_health_float,
	(void *) M_mindustry_gen_Unit_hitTime_float,
	(void *) M_mindustry_gen_PayloadUnit_kill,
	(void *) M_mindustry_gen_PayloadUnit_killed,
	(void *) M_mindustry_gen_Unit_maxHealth_float,
	(void *) M_mindustry_gen_PayloadUnit_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_PayloadUnit_hitSize_R_float,
	(void *) M_mindustry_gen_PayloadUnit_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_deltaAngle_R_float,
	(void *) M_mindustry_gen_PayloadUnit_deltaLen_R_float,
	(void *) M_mindustry_gen_Unit_deltaX_R_float,
	(void *) M_mindustry_gen_Unit_deltaY_R_float,
	(void *) M_mindustry_gen_Unit_lastX_R_float,
	(void *) M_mindustry_gen_Unit_lastY_R_float,
	(void *) M_mindustry_gen_PayloadUnit_collision_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_gen_Unit_deltaX_float,
	(void *) M_mindustry_gen_Unit_deltaY_float,
	(void *) M_mindustry_gen_PayloadUnit_getCollisions_arc_func_Cons,
	(void *) M_mindustry_gen_Unit_hitSize_float,
	(void *) M_mindustry_gen_PayloadUnit_hitboxTile_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Unit_lastX_float,
	(void *) M_mindustry_gen_Unit_lastY_float,
	(void *) M_mindustry_gen_PayloadUnit_updateLastPosition,
	(void *) M_mindustry_gen_Unit_setIndex__draw_int,
	(void *) M_mindustry_gen_Unit_setIndex__sync_int,
	(void *) M_mindustry_gen_Unit_setIndex__unit_int,
	(void *) M_mindustry_gen_PayloadUnit_acceptsItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_hasItem_R_boolean,
	(void *) M_mindustry_gen_Unit_itemTime_R_float,
	(void *) M_mindustry_gen_PayloadUnit_itemCapacity_R_int,
	(void *) M_mindustry_gen_PayloadUnit_maxAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_PayloadUnit_item_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_PayloadUnit_addItem_mindustry_type_Item,
	(void *) M_mindustry_gen_PayloadUnit_addItem_mindustry_type_Item_int,
	(void *) M_mindustry_gen_PayloadUnit_clearItem,
	(void *) M_mindustry_gen_Unit_itemTime_float,
	(void *) M_mindustry_gen_Unit_stack_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_PayloadUnit_canMine_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canMine_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_mining_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_offloadImmediately_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_validMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_validMine_mindustry_world_Tile_boolean_R_boolean,
	(void *) M_mindustry_gen_Unit_mineTimer_R_float,
	(void *) M_mindustry_gen_PayloadUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_mineTile_mindustry_world_Tile,
	(void *) M_mindustry_gen_Unit_mineTimer_float,
	(void *) M_mindustry_gen_PayloadUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_gen_PayloadUnit_canPassOn_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canPass_int_int_R_boolean,
	(void *) M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_ignoreSolids_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_moving_R_boolean,
	(void *) M_mindustry_gen_Unit_drag_R_float,
	(void *) M_mindustry_gen_Unit_drag_float,
	(void *) M_mindustry_gen_PayloadUnit_move_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_move_float_float,
	(void *) M_mindustry_gen_Unit_vel_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_velAddNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_velAddNet_float_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_mass_R_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_boolean,
	(void *) M_mindustry_gen_PayloadUnit_impulse_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_impulse_float_float,
	(void *) M_mindustry_gen_PayloadUnit_impulseNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_shield_R_float,
	(void *) M_mindustry_gen_Unit_shield_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_R_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_float,
	(void *) M_mindustry_gen_Unit_armor_R_float,
	(void *) M_mindustry_gen_Unit_armor_float,
	(void *) M_mindustry_gen_PayloadUnit_rawDamage_float,
	(void *) M_mindustry_gen_PayloadUnit_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_lastUpdated_R_long,
	(void *) M_mindustry_gen_Unit_updateSpacing_R_long,
	(void *) M_mindustry_gen_PayloadUnit_afterSync,
	(void *) M_mindustry_gen_PayloadUnit_handleSyncHidden,
	(void *) M_mindustry_gen_PayloadUnit_interpolate,
	(void *) M_mindustry_gen_Unit_lastUpdated_long,
	(void *) M_mindustry_gen_PayloadUnit_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_PayloadUnit_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_PayloadUnit_snapInterpolation,
	(void *) M_mindustry_gen_PayloadUnit_snapSync,
	(void *) M_mindustry_gen_Unit_updateSpacing_long,
	(void *) M_mindustry_gen_PayloadUnit_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_PayloadUnit_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_PayloadUnit_aim_float_float,
	(void *) M_mindustry_gen_PayloadUnit_aim_float_float_boolean,
	(void *) M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_PayloadUnit_canShoot_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isRotate_R_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_R_boolean,
	(void *) M_mindustry_gen_Unit_aimX_R_float,
	(void *) M_mindustry_gen_Unit_aimY_R_float,
	(void *) M_mindustry_gen_PayloadUnit_aim_arc_math_geom_Position,
	(void *) M_mindustry_gen_Unit_aimX_float,
	(void *) M_mindustry_gen_Unit_aimY_float,
	(void *) M_mindustry_gen_PayloadUnit_controlWeapons_boolean_boolean,
	(void *) M_mindustry_gen_PayloadUnit_controlWeapons_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_boolean,
	(void *) M_mindustry_gen_PayloadUnit_setWeaponRotation_float,
	(void *) M_mindustry_gen_PayloadUnit_setupWeapons_mindustry_type_UnitType,
	(void *) M_mindustry_gen_PayloadUnit_range_R_float,
	(void *) M_mindustry_gen_PayloadUnit_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_PayloadUnit_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_PayloadUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_PayloadUnit_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_PayloadUnit_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_PayloadUnit_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_gen_PayloadUnit_displayable_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_PayloadUnit_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_PayloadUnit_physicSize_R_float,
	(void *) M_mindustry_gen_PayloadUnit_getControllerName_R_java_lang_String,
	(void *) M_mindustry_gen_PayloadUnit_speed_R_float,
	(void *) M_mindustry_gen_PayloadUnit_collisionLayer_R_int,
	(void *) M_mindustry_gen_PayloadUnit_prefRotation_R_float,
	(void *) M_mindustry_gen_PayloadUnit_allowCommand_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isCommandable_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canLand_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_destroy,
	(void *) M_mindustry_gen_PayloadUnit_unloaded,
	(void *) M_mindustry_gen_PayloadUnit_movePref_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_hasTarget_R_boolean,
	(void *) M_mindustry_gen_Unit_hasTarget_boolean,
	(void *) M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_PayloadUnit_getPlayer_R_mindustry_gen_Player,
	(void *) M_mindustry_gen_PayloadUnit_canDrown_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canTarget_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_checkTarget_boolean_boolean_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_hasWeapons_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_hittable_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_inRange_arc_math_geom_Position_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isAI_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isEnemy_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isFlying_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isMissile_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isPathImpassable_int_int_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_isPlayer_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_killable_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_playerControllable_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_shouldUpdateController_R_boolean,
	(void *) M_mindustry_gen_Unit_spawnedByCore_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_targetable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_flag_R_double,
	(void *) M_mindustry_gen_PayloadUnit_ammof_R_float,
	(void *) M_mindustry_gen_PayloadUnit_bounds_R_float,
	(void *) M_mindustry_gen_Unit_drownTime_R_float,
	(void *) M_mindustry_gen_Unit_elevation_R_float,
	(void *) M_mindustry_gen_PayloadUnit_floorSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_healTime_R_float,
	(void *) M_mindustry_gen_Unit_shadowAlpha_R_float,
	(void *) M_mindustry_gen_Unit_splashTimer_R_float,
	(void *) M_mindustry_gen_PayloadUnit_cap_R_int,
	(void *) M_mindustry_gen_PayloadUnit_count_R_int,
	(void *) M_mindustry_gen_Unit_lastFogPos_R_int,
	(void *) M_mindustry_gen_Unit_lastCommanded_R_java_lang_String,
	(void *) M_mindustry_gen_PayloadUnit_command_R_mindustry_ai_types_CommandAI,
	(void *) M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_PayloadUnit_controller_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_type_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_PayloadUnit_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_PayloadUnit_aimLook_arc_math_geom_Position,
	(void *) M_mindustry_gen_PayloadUnit_aimLook_float_float,
	(void *) M_mindustry_gen_PayloadUnit_approach_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_controller_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_drownTime_float,
	(void *) M_mindustry_gen_Unit_elevation_float,
	(void *) M_mindustry_gen_Unit_flag_double,
	(void *) M_mindustry_gen_Unit_healTime_float,
	(void *) M_mindustry_gen_PayloadUnit_landed,
	(void *) M_mindustry_gen_Unit_lastCommanded_java_lang_String,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_lastFogPos_int,
	(void *) M_mindustry_gen_PayloadUnit_lookAt_arc_math_geom_Position,
	(void *) M_mindustry_gen_PayloadUnit_lookAt_float,
	(void *) M_mindustry_gen_PayloadUnit_lookAt_float_float,
	(void *) M_mindustry_gen_PayloadUnit_moveAt_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_moveAt_arc_math_geom_Vec2_float,
	(void *) M_mindustry_gen_PayloadUnit_resetController,
	(void *) M_mindustry_gen_PayloadUnit_rotateMove_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_PayloadUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_PayloadUnit_setType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_shadowAlpha_float,
	(void *) M_mindustry_gen_Unit_spawnedByCore_boolean,
	(void *) M_mindustry_gen_Unit_splashTimer_float,
	(void *) M_mindustry_gen_Unit_trail_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_type_mindustry_type_UnitType,
	(void *) M_mindustry_gen_PayloadUnit_updateBoosting_boolean,
	(void *) M_mindustry_gen_PayloadUnit_updateBoosting_boolean_boolean,
	(void *) M_mindustry_gen_PayloadUnit_updateDrowning,
	(void *) M_mindustry_gen_PayloadUnit_wobble,
	(void *) M_mindustry_gen_PayloadUnit_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_payloads_R_arc_struct_Seq,
	(void *) M_mindustry_gen_PayloadUnit_canDropPayload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canPickup_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canPickup_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_dropLastPayload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_hasPayload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_payloadUsed_R_float,
	(void *) M_mindustry_gen_PayloadUnit_addPayload_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_PayloadUnit_contentInfo_arc_scene_ui_layout_Table_float_float,
	(void *) M_mindustry_gen_PayloadUnit_payloads_arc_struct_Seq,
	(void *) M_mindustry_gen_PayloadUnit_pickup_mindustry_gen_Building,
	(void *) M_mindustry_gen_PayloadUnit_pickup_mindustry_gen_Unit,
	(void *) M_mindustry_gen_PayloadUnit_playPayloadDropSound_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_PayloadUnit_applyStatus_mindustry_type_StatusEffect_float_boolean,
	(void *) M_mindustry_gen_PayloadUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_PayloadUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_PayloadUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__sync", "(I)V" },
	{ "setIndex__unit", "(I)V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
	{ "dropBlock", "(Lmindustry/world/blocks/payloads/BuildPayload;)Z" },
	{ "payloads", "()Larc/struct/Seq;" },
	{ "canDropPayload", "()Z" },
	{ "canPickup", "(Lmindustry/gen/Building;)Z" },
	{ "canPickup", "(Lmindustry/gen/Unit;)Z" },
	{ "canPickupPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "dropLastPayload", "()Z" },
	{ "dropUnit", "(Lmindustry/world/blocks/payloads/UnitPayload;)Z" },
	{ "hasPayload", "()Z" },
	{ "tryDropPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "payloadUsed", "()F" },
	{ "addPayload", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "contentInfo", "(Larc/scene/ui/layout/Table;FF)V" },
	{ "payloads", "(Larc/struct/Seq;)V" },
	{ "pickup", "(Lmindustry/gen/Building;)V" },
	{ "pickup", "(Lmindustry/gen/Unit;)V" },
	{ "playPayloadDropSound", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "applyStatus", "(Lmindustry/type/StatusEffect;FZ)V" },
	{ "lambda$unapply$0", "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z" },
	{ "lambda$destroy$0", "(FLmindustry/gen/Building;)Z" },
	{ "lambda$clearStatuses$0", "(Lmindustry/entities/units/StatusEntry;)V" },
	{ "lambda$canLand$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Builderc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Minerc, &class_mindustry_gen_Payloadc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Shieldc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Velc, &class_mindustry_gen_Weaponsc, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_PayloadUnitLegacyQuad, 0, "()V", 4 },
	{ "classId", (intptr_t) M_mindustry_gen_PayloadUnitLegacyQuad_classId_R_int, VTABLE_mindustry_gen_PayloadUnitLegacyQuad_classId_R_int, "()I", 1 },
	{ "read", (intptr_t) M_mindustry_gen_PayloadUnitLegacyQuad_read_arc_util_io_Reads, VTABLE_mindustry_gen_PayloadUnitLegacyQuad_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_PayloadUnitLegacyQuad_write_arc_util_io_Writes, VTABLE_mindustry_gen_PayloadUnitLegacyQuad_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_PayloadUnitLegacyQuad_serialize_R_boolean, VTABLE_mindustry_gen_PayloadUnitLegacyQuad_serialize_R_boolean, "()Z", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_PayloadUnitLegacyQuad_create_R_mindustry_gen_PayloadUnitLegacyQuad, 0, "()Lmindustry/gen/PayloadUnitLegacyQuad;", 9 },
};

Class class_mindustry_gen_PayloadUnitLegacyQuad{
		.nativeName = (intptr_t) "mindustry/gen/PayloadUnitLegacyQuad",
		.parentClass = (intptr_t) &class_mindustry_gen_PayloadUnit,
		.size = sizeof(mindustry_gen_PayloadUnitLegacyQuad),
		.classVtable = (intptr_t) vtable_mindustry_gen_PayloadUnitLegacyQuad,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PayloadUnitLegacyQuad,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PayloadUnitLegacyQuad,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 18,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 364,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_PayloadUnitLegacyQuad = registerClass(&class_mindustry_gen_PayloadUnitLegacyQuad);

}
