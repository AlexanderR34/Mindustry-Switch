#include "mindustry/entities/Units.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/entities/Units_BuildingPriorityf.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/UnitSorts.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/entities/Units_UnitSyncContainer.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Units_invoke_arc_func_Floatf_1.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/entities/Units_Sortf.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_9.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_12.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_13.h"
#include "arc/Application.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_10.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_11.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_16.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_17.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_14.h"
#include "java/lang/String.h"
#include "mindustry/entities/Units_invoke_arc_func_Cons_15.h"
#include "mindustry/entities/Units_invoke_java_lang_Runnable_2.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/entities/Units_invoke_java_lang_Runnable_3.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/Teams.h"
#include "mindustry/entities/Units_invoke_arc_func_Boolf_7.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/entities/Units_invoke_arc_func_Boolf_6.h"
#include "mindustry/entities/Units_invoke_arc_func_Boolf_5.h"
#include "mindustry/entities/Units_invoke_arc_func_Boolf_4.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Buildingc.h"

extern "C" {

jobject SF_mindustry_entities_Units_hitrect;
jobject SF_mindustry_entities_Units_result;
jfloat SF_mindustry_entities_Units_cdist;
jfloat SF_mindustry_entities_Units_cpriority;
jint SF_mindustry_entities_Units_intResult;
jobject SF_mindustry_entities_Units_buildResult;
jbool SF_mindustry_entities_Units_anyEntityGround;
jfloat SF_mindustry_entities_Units_aeX;
jfloat SF_mindustry_entities_Units_aeY;
jfloat SF_mindustry_entities_Units_aeW;
jfloat SF_mindustry_entities_Units_aeH;
jobject SF_mindustry_entities_Units_anyEntityLambda;

void mark_mindustry_entities_Units(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_Units_hitrect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Units_hitrect)->clazz)->markFunction)((jobject) SF_mindustry_entities_Units_hitrect, mark, depth + 1);
		if (SF_mindustry_entities_Units_result)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Units_result)->clazz)->markFunction)((jobject) SF_mindustry_entities_Units_result, mark, depth + 1);
		if (SF_mindustry_entities_Units_buildResult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Units_buildResult)->clazz)->markFunction)((jobject) SF_mindustry_entities_Units_buildResult, mark, depth + 1);
		if (SF_mindustry_entities_Units_anyEntityLambda)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Units_anyEntityLambda)->clazz)->markFunction)((jobject) SF_mindustry_entities_Units_anyEntityLambda, mark, depth + 1);
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
	auto self = (mindustry_entities_Units *) object;
}

void init_mindustry_entities_Units(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:notifyUnitSpawn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_entities_Units$UnitSyncContainer(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_Units$UnitSyncContainer);
	init_mindustry_entities_Units$UnitSyncContainer_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	SM_mindustry_gen_Call_unitSpawn_mindustry_entities_Units$UnitSyncContainer(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitSpawn_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitSpawn", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitCapDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitCapDeath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(52);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(53);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitCapKill;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(54);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_entities_Units_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitEnvDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitEnvDeath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(62);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitEnvKill;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_entities_Units_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitDeath_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitDeath", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(69);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(73);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(76);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(77);
	((func_mindustry_gen_Unit_killed) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_killed])(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitDestroy_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitDestroy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(84);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(87);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(88);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(91);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(92);
	((func_mindustry_gen_Unit_destroy) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_destroy])(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitDespawn_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitDespawn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(99);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDespawn;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), (frame[0].o));
	LINE_NUMBER(100);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[0].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_unitSafeDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:unitSafeDeath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(106);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathExplosionEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(3.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake;
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(109);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (frame[1].f), (frame[1].f), (frame[0].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_deathSoundVolume));
	LINE_NUMBER(111);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:canCreate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(116);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_useUnitCap) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp1 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
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

jint SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:getCap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableUnitCap) != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_ignoreUnitCap) == 0) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jint(2147483647));
	}
label_4:;
	{
	LINE_NUMBER(124);
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(temp1))->F_unitCapVariable) == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCap;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	jint temp1 = temp0 + ((jint)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCap);
	sp[0].i = temp1;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCap;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	POP_N(2); // Pop method args
	sp->i = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, sp[0].i, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:getStringCap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(130);
	if ((frame[1].i) < (jint(2147483646))) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u221e"_j));
	goto label_3;
label_2:;
	INST_ILOAD(1);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, sp[0].i));
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:canInteract", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(135);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_2;
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

jbool SM_mindustry_entities_Units_isHittable_mindustry_gen_Posc_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:isHittable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(139);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Buildingc)) == 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_1;
	goto label_3;
label_2:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:invalidateTarget", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(155);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(3,402823e+38f)), -1)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	LINE_NUMBER(153);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_entities_Sized)) == 0) goto label_4;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[0].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[8].o)))(ctx, (frame[8].o));
	jfloat temp1 = temp0 / (jfloat(2));
	sp[0].f = temp1;
	sp += 1;
	goto label_6;
	}
label_4:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_arc_math_geom_Position_within_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Teamc)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(154);
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[0].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[7].o)))(ctx, (frame[7].o));
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_7:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Healthc)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(155);
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
label_10:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Unit)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(156);
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 != 0) goto label_13;
	}
label_1:;
	INST_ICONST(1);
	goto label_16;
label_13:;
	INST_ICONST(0);
label_16:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:invalidateTarget", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(3,402823e+38f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:invalidateTarget", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_x_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_x_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_y_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_y_R_float])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, (frame[2].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	frame[2].f = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))));
	LINE_NUMBER(172);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 - ((frame[2].f) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean(ctx, temp1, (temp2 - ((frame[2].f) / (jfloat(2)))), (frame[2].f), (frame[2].f), (frame[1].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_boolean_R_boolean(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean(ctx, ((frame[0].f) - ((frame[2].f) / (jfloat(2)))), ((frame[1].f) - ((frame[2].f) / (jfloat(2)))), (frame[2].f), (frame[2].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(189);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_anyEntityGround = (frame[4].i);
	LINE_NUMBER(190);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_aeX = (frame[0].f);
	LINE_NUMBER(191);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_aeY = (frame[1].f);
	LINE_NUMBER(192);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_aeW = (frame[2].f);
	LINE_NUMBER(193);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_aeH = (frame[3].f);
	LINE_NUMBER(195);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_anyEntityLambda;
	jint temp4 = (jint)SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:anyEntities", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(201);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Boolf_4);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_findDamagedTile_mindustry_game_Team_float_float_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:findDamagedTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_findAllyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:findAllyTile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(218);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:findEnemyTile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestBuilding_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestBuilding", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(230);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_buildResult = (jobject(nullptr));
	LINE_NUMBER(231);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[5].o = sp[0].o;
	LINE_NUMBER(234);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[5].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_9);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(245);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_buildResult;
	frame[6].o = sp[0].o;
	LINE_NUMBER(246);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_buildResult = (jobject(nullptr));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearbyBuildings_float_float_float_arc_func_Cons(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearbyBuildings", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	((func_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].o));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestTarget", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestTarget", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Boolf_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestTarget", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_mindustry_game_Team_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jobject(nullptr)), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_mindustry_game_Team_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestTarget", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(276);
	if ((frame[7].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_3:;
	{
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_UnitSorts_buildingDefault;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, (frame[6].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_bestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:bestTarget", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)SM_mindustry_entities_Units_bestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[7].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_3:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)SM_mindustry_entities_Units_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestEnemy", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(299);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(300);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(301);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cpriority = (jfloat(-99999.0f));
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_10);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(314);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_bestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:bestEnemy", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(321);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(322);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(323);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cpriority = (jfloat(-99999.0f));
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_11);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (jref) (frame[0].o);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(336);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closest", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(341);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(342);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(344);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	if (sp[0].o == (frame[0].o)) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(347);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[5].o), (frame[1].f), (frame[2].f));
	frame[6].f = temp0;
	LINE_NUMBER(348);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if ((floatCompare((frame[6].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) >= 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(349);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[5].o);
	LINE_NUMBER(350);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[6].f);
	}
label_9:;
	LINE_NUMBER(352);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(354);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closest", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(359);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(360);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_12);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(372);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closest", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(377);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(378);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_13);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(390);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Units_closestOverlap_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:closestOverlap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(396);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (jobject(nullptr));
	LINE_NUMBER(397);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (jfloat(0));
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_14);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(409);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:count", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)SM_mindustry_entities_Units_count_float_float_float_float_arc_func_Boolf_R_int(ctx, ((frame[0].f) - ((frame[2].f) / (jfloat(2)))), ((frame[1].f) - ((frame[2].f) / (jfloat(2)))), (frame[2].f), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_entities_Units_count_float_float_float_float_arc_func_Boolf_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:count", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(419);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_intResult = (jint(0));
	LINE_NUMBER(420);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (clinit_mindustry_entities_Units(ctx), (jint)SF_mindustry_entities_Units_intResult);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_any_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:any", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(430);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearby", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(435);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(438);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, (frame[7].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	LINE_NUMBER(440);
	goto label_4;
	}
label_3:;
	LINE_NUMBER(442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearby", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(446);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_16);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearby_float_float_float_float_arc_func_Cons(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearby", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(455);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearbyCheck", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(463);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearby", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(468);
	SM_mindustry_entities_Units_nearby_float_float_float_float_arc_func_Cons(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (frame[1].o));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearbyEnemies", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(473);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[6].o = sp[0].o;
	LINE_NUMBER(474);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[7].i)))))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_5;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[7].i)))))->F_team;
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(474);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearbyEnemies", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Cons_17);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearbyEnemies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(492);
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].o));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_nearEnemy_mindustry_game_Team_float_float_float_float_R_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:nearEnemy", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(497);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[5].o = sp[0].o;
	LINE_NUMBER(498);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_items;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[6].i)));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_turretTree;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[7].o)))->F_turretTree;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(498);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$nearbyEnemies$0_float_float_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$nearbyEnemies$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[4].o), (frame[0].f), (frame[1].f), ((frame[2].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(485);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	}
label_1:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$nearby$0_float_float_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$nearby$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[4].o), (frame[0].f), (frame[1].f), ((frame[2].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(448);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	}
label_1:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$count$0_arc_func_Boolf_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$count$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(421);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(422);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_intResult = ((clinit_mindustry_entities_Units(ctx), (jint)SF_mindustry_entities_Units_intResult) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$closestOverlap$0_arc_func_Boolf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closestOverlap$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(402);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[3].o), (frame[1].f), (frame[2].f));
	frame[4].f = temp0;
	LINE_NUMBER(403);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare((frame[4].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) >= 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(404);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[3].o);
	LINE_NUMBER(405);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[4].f);
	}
label_5:;
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$closest$1_arc_func_Boolf_mindustry_entities_Units$Sortf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closest$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(383);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$Sortf, INDEX_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o), (frame[2].f), (frame[3].f));
	frame[5].f = temp0;
	LINE_NUMBER(384);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare((frame[5].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) >= 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(385);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[4].o);
	LINE_NUMBER(386);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[5].f);
	}
label_5:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$closest$0_arc_func_Boolf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closest$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(365);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[3].o), (frame[1].f), (frame[2].f));
	frame[4].f = temp0;
	LINE_NUMBER(366);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare((frame[4].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) >= 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(367);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[3].o);
	LINE_NUMBER(368);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[4].f);
	}
label_5:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$bestEnemy$0_arc_func_Boolf_float_float_float_mindustry_game_Team_mindustry_entities_Units$Sortf_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$bestEnemy$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[6].o), (frame[1].f), (frame[2].f), ((frame[3].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, (frame[6].o), (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[6].o), (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(328);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$Sortf, INDEX_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float, (frame[5].o)))(ctx, (frame[5].o), (frame[6].o), (frame[1].f), (frame[2].f));
	frame[7].f = temp0;
	LINE_NUMBER(329);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_result;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare((frame[7].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) < 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cpriority), -1)) <= 0) goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cpriority), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(330);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[6].o);
	LINE_NUMBER(331);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[7].f);
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cpriority = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority);
	}
label_5:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$closestEnemy$0_arc_func_Boolf_mindustry_game_Team_float_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closestEnemy$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(306);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[5].o), (frame[2].f), (frame[3].f));
	frame[6].f = (temp0 - (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_hitSize) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_hitSize)));
	LINE_NUMBER(307);
	if ((floatCompare((frame[6].f), ((frame[4].f) * (frame[4].f)), 1)) >= 0) goto label_4;
	}
	clinit_mindustry_entities_Units(ctx);
	(sp++)->o = SF_mindustry_entities_Units_result;
	if ((--sp)->o == nullptr) goto label_5;
	{
	if ((floatCompare((frame[6].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cpriority), -1)) <= 0) goto label_4;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cpriority), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(308);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_result = (frame[5].o);
	LINE_NUMBER(309);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[6].f);
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cpriority = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetPriority);
	}
label_4:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_lambda$closestTarget$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closestTarget$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$closestBuilding$0_arc_func_Boolf_float_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$closestBuilding$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(237);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[4].o), (frame[1].f), (frame[2].f));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[4].o));
	frame[5].f = (temp0 - (temp1 / (jfloat(2))));
	LINE_NUMBER(238);
	if ((floatCompare((frame[5].f), (frame[3].f), 1)) > 0) goto label_1;
	}
	clinit_mindustry_entities_Units(ctx);
	(sp++)->o = SF_mindustry_entities_Units_buildResult;
	if ((--sp)->o == nullptr) goto label_4;
	{
	if ((floatCompare((frame[5].f), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_cdist), 1)) > 0) goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(239);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_cdist = (frame[5].f);
	LINE_NUMBER(240);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_buildResult = (frame[4].o);
	}
label_1:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Units_lambda$findDamagedTile$0_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$findDamagedTile$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(213);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_lambda$anyEntities$0_arc_func_Boolf_float_float_float_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$anyEntities$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = frame[5].o;
	clinit_mindustry_entities_Units(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Units_hitrect;
	((func_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(205);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_hitrect;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$unitEnvDeath$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$unitEnvDeath$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	SM_mindustry_gen_Call_unitDestroy_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Units_lambda$unitCapDeath$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$unitCapDeath$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	SM_mindustry_gen_Call_unitDestroy_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Units_lambda$static$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:lambda$static$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_mindustry_entities_Units(ctx);
	(sp++)->i = SF_mindustry_entities_Units_anyEntityGround;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_3;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Units(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Units_hitrect;
	((func_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	clinit_mindustry_entities_Units(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Units_hitrect;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_aeX), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_aeY), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_aeW), (clinit_mindustry_entities_Units(ctx), (jfloat)SF_mindustry_entities_Units_aeH));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_Units(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_hitrect = sp[0].o;
	LINE_NUMBER(29);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Units_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_entities_Units_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_entities_Units_invoke_arc_func_Boolf_7);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_Units(ctx);
	SF_mindustry_entities_Units_anyEntityLambda = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_Units;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method closestBuilding
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[25]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_Units[] {
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

static jclass innerClasses[] {
	&class_mindustry_entities_Units$UnitSyncContainer,
	&class_mindustry_entities_Units$BuildingPriorityf,
	&class_mindustry_entities_Units$Sortf,
};

static FieldMetadata fields[] {
	{ "hitrect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_Units_hitrect, "Larc/math/geom/Rect;", 26 },
	{ "result", &class_mindustry_gen_Unit, (intptr_t) &SF_mindustry_entities_Units_result, "Lmindustry/gen/Unit;", 10 },
	{ "cdist", &class_float, (intptr_t) &SF_mindustry_entities_Units_cdist, "F", 10 },
	{ "cpriority", &class_float, (intptr_t) &SF_mindustry_entities_Units_cpriority, "F", 10 },
	{ "intResult", &class_int, (intptr_t) &SF_mindustry_entities_Units_intResult, "I", 10 },
	{ "buildResult", &class_mindustry_gen_Building, (intptr_t) &SF_mindustry_entities_Units_buildResult, "Lmindustry/gen/Building;", 10 },
	{ "anyEntityGround", &class_boolean, (intptr_t) &SF_mindustry_entities_Units_anyEntityGround, "Z", 10 },
	{ "aeX", &class_float, (intptr_t) &SF_mindustry_entities_Units_aeX, "F", 10 },
	{ "aeY", &class_float, (intptr_t) &SF_mindustry_entities_Units_aeY, "F", 10 },
	{ "aeW", &class_float, (intptr_t) &SF_mindustry_entities_Units_aeW, "F", 10 },
	{ "aeH", &class_float, (intptr_t) &SF_mindustry_entities_Units_aeH, "F", 10 },
	{ "anyEntityLambda", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_entities_Units_anyEntityLambda, "Larc/func/Boolf;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Units, 0, "()V", 1 },
	{ "notifyUnitSpawn", (intptr_t) SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitSpawn", (intptr_t) SM_mindustry_entities_Units_unitSpawn_mindustry_entities_Units$UnitSyncContainer, 0, "(Lmindustry/entities/Units$UnitSyncContainer;)V", 9 },
	{ "unitCapDeath", (intptr_t) SM_mindustry_entities_Units_unitCapDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitEnvDeath", (intptr_t) SM_mindustry_entities_Units_unitEnvDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitDeath", (intptr_t) SM_mindustry_entities_Units_unitDeath_int, 0, "(I)V", 9 },
	{ "unitDestroy", (intptr_t) SM_mindustry_entities_Units_unitDestroy_int, 0, "(I)V", 9 },
	{ "unitDespawn", (intptr_t) SM_mindustry_entities_Units_unitDespawn_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitSafeDeath", (intptr_t) SM_mindustry_entities_Units_unitSafeDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "canCreate", (intptr_t) SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/type/UnitType;)Z", 9 },
	{ "getCap", (intptr_t) SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int, 0, "(Lmindustry/game/Team;)I", 9 },
	{ "getStringCap", (intptr_t) SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String, 0, "(Lmindustry/game/Team;)Ljava/lang/String;", 9 },
	{ "canInteract", (intptr_t) SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)Z", 9 },
	{ "isHittable", (intptr_t) SM_mindustry_entities_Units_isHittable_mindustry_gen_Posc_boolean_boolean_R_boolean, 0, "(Lmindustry/gen/Posc;ZZ)Z", 9 },
	{ "invalidateTarget", (intptr_t) SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean, 0, "(Lmindustry/gen/Posc;Lmindustry/game/Team;FFF)Z", 9 },
	{ "invalidateTarget", (intptr_t) SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_R_boolean, 0, "(Lmindustry/gen/Posc;Lmindustry/game/Team;FF)Z", 9 },
	{ "invalidateTarget", (intptr_t) SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean, 0, "(Lmindustry/gen/Teamc;Lmindustry/gen/Unit;F)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_boolean_R_boolean, 0, "(Lmindustry/world/Tile;Z)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_float_float_float_float_R_boolean, 0, "(FFFF)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean, 0, "(FFFFZ)Z", 9 },
	{ "anyEntities", (intptr_t) SM_mindustry_entities_Units_anyEntities_float_float_float_float_arc_func_Boolf_R_boolean, 0, "(FFFFLarc/func/Boolf;)Z", 9 },
	{ "findDamagedTile", (intptr_t) SM_mindustry_entities_Units_findDamagedTile_mindustry_game_Team_float_float_R_mindustry_gen_Building, 0, "(Lmindustry/game/Team;FF)Lmindustry/gen/Building;", 9 },
	{ "findAllyTile", (intptr_t) SM_mindustry_entities_Units_findAllyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;", 9 },
	{ "findEnemyTile", (intptr_t) SM_mindustry_entities_Units_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;", 9 },
	{ "closestBuilding", (intptr_t) SM_mindustry_entities_Units_closestBuilding_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;", 9 },
	{ "nearbyBuildings", (intptr_t) SM_mindustry_entities_Units_nearbyBuildings_float_float_float_arc_func_Cons, 0, "(FFFLarc/func/Cons;)V", 9 },
	{ "closestTarget", (intptr_t) SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_R_mindustry_gen_Teamc, 0, "(Lmindustry/game/Team;FFF)Lmindustry/gen/Teamc;", 9 },
	{ "closestTarget", (intptr_t) SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Teamc, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Teamc;", 9 },
	{ "closestTarget", (intptr_t) SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Larc/func/Boolf;)Lmindustry/gen/Teamc;", 9 },
	{ "closestTarget", (intptr_t) SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_mindustry_game_Team_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc, 0, "(Lmindustry/game/Team;FFFLmindustry/game/Team;Larc/func/Boolf;Larc/func/Boolf;)Lmindustry/gen/Teamc;", 9 },
	{ "bestTarget", (intptr_t) SM_mindustry_entities_Units_bestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Teamc, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Larc/func/Boolf;Lmindustry/entities/Units$Sortf;)Lmindustry/gen/Teamc;", 9 },
	{ "closestEnemy", (intptr_t) SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Unit;", 9 },
	{ "bestEnemy", (intptr_t) SM_mindustry_entities_Units_bestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Lmindustry/entities/Units$Sortf;)Lmindustry/gen/Unit;", 9 },
	{ "closest", (intptr_t) SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_arc_func_Boolf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFLarc/func/Boolf;)Lmindustry/gen/Unit;", 9 },
	{ "closest", (intptr_t) SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Unit;", 9 },
	{ "closest", (intptr_t) SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Lmindustry/entities/Units$Sortf;)Lmindustry/gen/Unit;", 9 },
	{ "closestOverlap", (intptr_t) SM_mindustry_entities_Units_closestOverlap_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Unit;", 9 },
	{ "count", (intptr_t) SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int, 0, "(FFFLarc/func/Boolf;)I", 9 },
	{ "count", (intptr_t) SM_mindustry_entities_Units_count_float_float_float_float_arc_func_Boolf_R_int, 0, "(FFFFLarc/func/Boolf;)I", 9 },
	{ "any", (intptr_t) SM_mindustry_entities_Units_any_float_float_float_float_arc_func_Boolf_R_boolean, 0, "(FFFFLarc/func/Boolf;)Z", 9 },
	{ "nearby", (intptr_t) SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons, 0, "(Lmindustry/game/Team;FFFFLarc/func/Cons;)V", 9 },
	{ "nearby", (intptr_t) SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons, 0, "(Lmindustry/game/Team;FFFLarc/func/Cons;)V", 9 },
	{ "nearby", (intptr_t) SM_mindustry_entities_Units_nearby_float_float_float_float_arc_func_Cons, 0, "(FFFFLarc/func/Cons;)V", 9 },
	{ "nearbyCheck", (intptr_t) SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean, 0, "(FFFFLarc/func/Boolf;)Z", 9 },
	{ "nearby", (intptr_t) SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons, 0, "(Larc/math/geom/Rect;Larc/func/Cons;)V", 9 },
	{ "nearbyEnemies", (intptr_t) SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons, 0, "(Lmindustry/game/Team;FFFFLarc/func/Cons;)V", 9 },
	{ "nearbyEnemies", (intptr_t) SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_arc_func_Cons, 0, "(Lmindustry/game/Team;FFFLarc/func/Cons;)V", 9 },
	{ "nearbyEnemies", (intptr_t) SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons, 0, "(Lmindustry/game/Team;Larc/math/geom/Rect;Larc/func/Cons;)V", 9 },
	{ "nearEnemy", (intptr_t) SM_mindustry_entities_Units_nearEnemy_mindustry_game_Team_float_float_float_float_R_boolean, 0, "(Lmindustry/game/Team;FFFF)Z", 9 },
	{ "lambda$nearbyEnemies$0", (intptr_t) SM_mindustry_entities_Units_lambda$nearbyEnemies$0_float_float_float_arc_func_Cons_mindustry_gen_Unit, 0, "(FFFLarc/func/Cons;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$nearby$0", (intptr_t) SM_mindustry_entities_Units_lambda$nearby$0_float_float_float_arc_func_Cons_mindustry_gen_Unit, 0, "(FFFLarc/func/Cons;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$count$0", (intptr_t) SM_mindustry_entities_Units_lambda$count$0_arc_func_Boolf_mindustry_gen_Unit, 0, "(Larc/func/Boolf;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$closestOverlap$0", (intptr_t) SM_mindustry_entities_Units_lambda$closestOverlap$0_arc_func_Boolf_float_float_mindustry_gen_Unit, 0, "(Larc/func/Boolf;FFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$closest$1", (intptr_t) SM_mindustry_entities_Units_lambda$closest$1_arc_func_Boolf_mindustry_entities_Units$Sortf_float_float_mindustry_gen_Unit, 0, "(Larc/func/Boolf;Lmindustry/entities/Units$Sortf;FFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$closest$0", (intptr_t) SM_mindustry_entities_Units_lambda$closest$0_arc_func_Boolf_float_float_mindustry_gen_Unit, 0, "(Larc/func/Boolf;FFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$bestEnemy$0", (intptr_t) SM_mindustry_entities_Units_lambda$bestEnemy$0_arc_func_Boolf_float_float_float_mindustry_game_Team_mindustry_entities_Units$Sortf_mindustry_gen_Unit, 0, "(Larc/func/Boolf;FFFLmindustry/game/Team;Lmindustry/entities/Units$Sortf;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$closestEnemy$0", (intptr_t) SM_mindustry_entities_Units_lambda$closestEnemy$0_arc_func_Boolf_mindustry_game_Team_float_float_float_mindustry_gen_Unit, 0, "(Larc/func/Boolf;Lmindustry/game/Team;FFFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$closestTarget$0", (intptr_t) SM_mindustry_entities_Units_lambda$closestTarget$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$closestBuilding$0", (intptr_t) SM_mindustry_entities_Units_lambda$closestBuilding$0_arc_func_Boolf_float_float_float_mindustry_gen_Building, 0, "(Larc/func/Boolf;FFFLmindustry/gen/Building;)V", 4106 },
	{ "lambda$findDamagedTile$0", (intptr_t) SM_mindustry_entities_Units_lambda$findDamagedTile$0_float_float_mindustry_gen_Building_R_float, 0, "(FFLmindustry/gen/Building;)F", 4106 },
	{ "lambda$anyEntities$0", (intptr_t) SM_mindustry_entities_Units_lambda$anyEntities$0_arc_func_Boolf_float_float_float_float_mindustry_gen_Unit_R_boolean, 0, "(Larc/func/Boolf;FFFFLmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$unitEnvDeath$0", (intptr_t) SM_mindustry_entities_Units_lambda$unitEnvDeath$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$unitCapDeath$0", (intptr_t) SM_mindustry_entities_Units_lambda$unitCapDeath$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_Units_lambda$static$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_Units, 0, "()V", 8 },
};

Class class_mindustry_entities_Units{
		.nativeName = (intptr_t) "mindustry/entities/Units",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Units),
		.classVtable = (intptr_t) vtable_mindustry_entities_Units,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Units,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_Units,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 67,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Units = registerClass(&class_mindustry_entities_Units);

}
