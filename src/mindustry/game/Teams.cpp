#include "mindustry/game/Teams.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/util/Arrays.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/Teams_invoke_arc_func_Boolf_1.h"
#include "mindustry/gen/Statusc.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_Teams(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Teams *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_active)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_active)->clazz)->markFunction)((jobject) self->F_active, mark, depth + 1);
	if (self->F_present)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_present)->clazz)->markFunction)((jobject) self->F_present, mark, depth + 1);
	if (self->F_bosses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bosses)->clazz)->markFunction)((jobject) self->F_bosses, mark, depth + 1);
}

void clinit_mindustry_game_Teams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Teams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Teams$TeamData, (256));
	((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_active = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_game_Teams$TeamData)));
	((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_bosses = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[1].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_crux;
	sp[1].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:closestEnemyCore", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(40);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(41);
	frame[5].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[3].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_coreEnemies;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_3:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_4;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(45);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getX_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getX_R_float])(ctx, (frame[11].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getY_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getY_R_float])(ctx, (frame[11].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	frame[12].f = temp4;
	LINE_NUMBER(46);
	if ((floatCompare((frame[5].f), (frame[12].f), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(47);
	frame[4].o = (frame[11].o);
	LINE_NUMBER(48);
	frame[5].f = (frame[12].f);
	}
label_10:;
	LINE_NUMBER(50);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(43);
	INST_IINC(8, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:closestCore", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(57);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o), (frame[3].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:anyEnemyCoresWithinBuildRadius", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) == 0) goto label_4;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(64);
	sp[0].o = frame[7].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	jint temp3 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 + (jfloat(8.0f))));
	if (temp3 == 0) goto label_8;
	}
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	LINE_NUMBER(67);
	goto label_6;
label_4:;
	LINE_NUMBER(69);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:anyEnemyCoresWithin", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) == 0) goto label_4;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_float_float_float_R_boolean])(ctx, (frame[8].o), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	LINE_NUMBER(80);
	goto label_6;
label_4:;
	LINE_NUMBER(82);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:eachEnemyCore", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(90);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(91);
	goto label_6;
	}
label_4:;
	LINE_NUMBER(93);
	goto label_1;
label_2:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_map;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	LINE_NUMBER(99);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id;
	clinit_mindustry_game_Teams$TeamData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams$TeamData);
	init_mindustry_game_Teams$TeamData_mindustry_game_Team(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:getOrNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_map;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams_playerCores_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	clinit_mindustry_Vars(ctx);
	jobject team = nullptr;
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules) {
		auto rules = (mindustry_game_Rules *) ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
		if (rules->F_defaultTeam) {
			team = (jobject) rules->F_defaultTeam;
		}
	}
	if (!team) {
		clinit_mindustry_game_Team(ctx);
		team = (jobject) SF_mindustry_game_Team_sharded;
	}
	auto teamData = ((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, self)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, self, team);
	if (!teamData || !((mindustry_game_Teams$TeamData *) teamData)->F_cores) {
		clinit_arc_struct_Seq(ctx);
		auto emptySeq = gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, emptySeq);
		return emptySeq;
	}
	return (jobject) ((mindustry_game_Teams$TeamData *) teamData)->F_cores;
}

jobject M_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:cores", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:isActive", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:canInteract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(126);
	if ((frame[1].o) == (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_2;
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

jobject M_mindustry_game_Teams_getActive_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:getActive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_game_Teams_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_game_Teams_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_updateActive_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:updateActive", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(140);
	((func_mindustry_game_Teams_updateEnemies) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_updateEnemies])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jobject param0) {
	if (!self || !param0) return;
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:registerCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[1].o))->F_team;
	if (!sp[1].o) {
		clinit_mindustry_game_Team(ctx);
		sp[1].o = (jobject) SF_mindustry_game_Team_sharded;
	}
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	if (!frame[2].o) {
		popStackFrame(ctx);
		return;
	}
	auto teamData = (mindustry_game_Teams$TeamData *) frame[2].o;
	if (!teamData->F_cores) {
		clinit_arc_struct_Seq(ctx);
		teamData->F_cores = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, (jobject) teamData->F_cores);
	}
	LINE_NUMBER(147);
	sp[0].o = (jobject)teamData->F_cores;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) (frame[2].o))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	auto teamData = (mindustry_game_Teams$TeamData *) frame[2].o;
	int coreCount = teamData->F_cores ? ((arc_struct_Seq *) teamData->F_cores)->F_size : 0;
	int teamId = teamData->F_team ? ((mindustry_game_Team *) teamData->F_team)->F_id : -1;
	printf("[Teams] registerCore: team=%d, coreCount=%d\n", teamId, coreCount);

	LINE_NUMBER(152);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(154);
	((func_mindustry_game_Teams_updateEnemies) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_updateEnemies])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jobject param0) {
	if (!self || !param0) return;
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:unregisterCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[1].o))->F_team;
	if (!sp[1].o) {
		clinit_mindustry_game_Team(ctx);
		sp[1].o = (jobject) SF_mindustry_game_Team_sharded;
	}
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	if (!frame[2].o) {
		popStackFrame(ctx);
		return;
	}
	auto teamData = (mindustry_game_Teams$TeamData *) frame[2].o;
	LINE_NUMBER(160);
	if (teamData->F_cores) {
		sp[0].o = (jobject)teamData->F_cores;
		jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
	int remaining = teamData->F_cores ? ((arc_struct_Seq *) teamData->F_cores)->F_size : 0;
	int teamId = teamData->F_team ? ((mindustry_game_Team *) teamData->F_team)->F_id : -1;
	printf("[Teams] unregisterCore: team=%d, remaining=%d\n", teamId, remaining);

	LINE_NUMBER(162);
	jint temp1 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_3;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(164);
	((func_mindustry_game_Teams_updateEnemies) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_updateEnemies])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_count_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:count", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(171);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[6].o)));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[5].o)))->F_unit;
	((func_mindustry_game_Teams_count_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_count_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(173);
	INST_IINC(4, 1);
	goto label_5;
	}
label_2:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_updateTeamStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:updateTeamStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(185);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp += 1;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_presentFlag = sp[1].i;
	LINE_NUMBER(189);
	((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitCount = (jint(0));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_cores;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_lastCore = (jref) (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[1].o));
	}
label_13:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitTree;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitTree;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_typeCounts;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_typeCounts;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	}
label_17:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitsByType;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(205);
	frame[6].i = (jint(0));
	}
label_21:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitsByType;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitsByType;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_unitsByType;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))));
	}
label_23:;
	{
	LINE_NUMBER(205);
	INST_IINC(6, 1);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(185);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(214);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (sp[0].o != nullptr) goto label_28;
	}
	goto label_25;
label_28:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, (frame[3].o));
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(219);
	((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_presentFlag = (jint(1));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBoss_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isBoss_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_33:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_unitsByType;
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_unitsByType;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (temp0 > ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id)) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitsByType = (jref) sp[1].o;
	}
label_36:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_unitsByType;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id))) != nullptr) goto label_37;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_unitsByType;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_37:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_unitsByType;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id))))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id))), (frame[2].o));
	LINE_NUMBER(235);
	((func_mindustry_game_Teams_count_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams_count_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(236);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(238);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_41:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(240);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(243);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_45:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_46;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(246);
	if (((jint)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_presentFlag) != 0) goto label_49;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_50;
	}
label_49:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_50:;
	{
	LINE_NUMBER(243);
	INST_IINC(3, 1);
	goto label_45;
	}
label_46:;
	LINE_NUMBER(250);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams_updateEnemies(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:updateEnemies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_waveTeam;
	sp[1].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_waveTeam;
	sp[1].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(258);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK((frame[0].o)))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_team;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(264);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_Team)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_coreEnemies = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_game_Team, 1), sp[1].o));
	LINE_NUMBER(267);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_Teams_destroyPayload_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:destroyPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(507);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[2].o)));
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_gen_Unit_killed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_killed])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(511);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Teams_lambda$getActive$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams:lambda$getActive$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_active_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_active_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Teams;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getOrNull
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

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_Teams[] {
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
	(void *) M_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean,
	(void *) M_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean,
	(void *) M_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons,
	(void *) M_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData,
	(void *) M_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData,
	(void *) M_mindustry_game_Teams_playerCores_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_game_Teams_getActive_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams_updateActive_mindustry_game_Team,
	(void *) M_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Teams_count_mindustry_gen_Unit,
	(void *) M_mindustry_game_Teams_updateTeamStats,
	(void *) M_mindustry_game_Teams_updateEnemies,
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
	{ "closestEnemyCore", "(FFLmindustry/game/Team;)Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestCore", "(FFLmindustry/game/Team;)Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "anyEnemyCoresWithinBuildRadius", "(Lmindustry/game/Team;FF)Z" },
	{ "anyEnemyCoresWithin", "(Lmindustry/game/Team;FFF)Z" },
	{ "eachEnemyCore", "(Lmindustry/game/Team;Larc/func/Cons;)V" },
	{ "get", "(Lmindustry/game/Team;)Lmindustry/game/Teams$TeamData;" },
	{ "getOrNull", "(Lmindustry/game/Team;)Lmindustry/game/Teams$TeamData;" },
	{ "playerCores", "()Larc/struct/Seq;" },
	{ "cores", "(Lmindustry/game/Team;)Larc/struct/Seq;" },
	{ "isActive", "(Lmindustry/game/Team;)Z" },
	{ "canInteract", "(Lmindustry/game/Team;Lmindustry/game/Team;)Z" },
	{ "getActive", "()Larc/struct/Seq;" },
	{ "updateActive", "(Lmindustry/game/Team;)V" },
	{ "registerCore", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V" },
	{ "unregisterCore", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V" },
	{ "count", "(Lmindustry/gen/Unit;)V" },
	{ "updateTeamStats", "()V" },
	{ "updateEnemies", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_game_Teams$TeamData,
	&class_mindustry_game_Teams$BlockPlan,
};

static FieldMetadata fields[] {
	{ "map", getArrayClass(&class_mindustry_game_Teams$TeamData, 1), offsetof(mindustry_game_Teams, F_map), "[Lmindustry/game/Teams$TeamData;", 2 },
	{ "active", &class_arc_struct_Seq, offsetof(mindustry_game_Teams, F_active), "Larc/struct/Seq;", 1 },
	{ "present", &class_arc_struct_Seq, offsetof(mindustry_game_Teams, F_present), "Larc/struct/Seq;", 1 },
	{ "bosses", &class_arc_struct_Seq, offsetof(mindustry_game_Teams, F_bosses), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Teams, 0, "()V", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "(FFLmindustry/game/Team;)Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "(FFLmindustry/game/Team;)Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "anyEnemyCoresWithinBuildRadius", (intptr_t) M_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean, VTABLE_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean, "(Lmindustry/game/Team;FF)Z", 1 },
	{ "anyEnemyCoresWithin", (intptr_t) M_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean, VTABLE_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean, "(Lmindustry/game/Team;FFF)Z", 1 },
	{ "eachEnemyCore", (intptr_t) M_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons, VTABLE_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons, "(Lmindustry/game/Team;Larc/func/Cons;)V", 1 },
	{ "get", (intptr_t) M_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData, VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData, "(Lmindustry/game/Team;)Lmindustry/game/Teams$TeamData;", 1 },
	{ "getOrNull", (intptr_t) M_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData, VTABLE_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData, "(Lmindustry/game/Team;)Lmindustry/game/Teams$TeamData;", 1 },
	{ "playerCores", (intptr_t) M_mindustry_game_Teams_playerCores_R_arc_struct_Seq, VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "cores", (intptr_t) M_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq, VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq, "(Lmindustry/game/Team;)Larc/struct/Seq;", 1 },
	{ "isActive", (intptr_t) M_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean, VTABLE_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "canInteract", (intptr_t) M_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean, VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;Lmindustry/game/Team;)Z", 1 },
	{ "getActive", (intptr_t) M_mindustry_game_Teams_getActive_R_arc_struct_Seq, VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "updateActive", (intptr_t) M_mindustry_game_Teams_updateActive_mindustry_game_Team, VTABLE_mindustry_game_Teams_updateActive_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "registerCore", (intptr_t) M_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V", 1 },
	{ "unregisterCore", (intptr_t) M_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V", 1 },
	{ "count", (intptr_t) M_mindustry_game_Teams_count_mindustry_gen_Unit, VTABLE_mindustry_game_Teams_count_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 2 },
	{ "updateTeamStats", (intptr_t) M_mindustry_game_Teams_updateTeamStats, VTABLE_mindustry_game_Teams_updateTeamStats, "()V", 1 },
	{ "updateEnemies", (intptr_t) M_mindustry_game_Teams_updateEnemies, VTABLE_mindustry_game_Teams_updateEnemies, "()V", 2 },
	{ "destroyPayload", (intptr_t) SM_mindustry_game_Teams_destroyPayload_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "lambda$getActive$0", (intptr_t) SM_mindustry_game_Teams_lambda$getActive$0_mindustry_game_Teams$TeamData_R_boolean, 0, "(Lmindustry/game/Teams$TeamData;)Z", 4106 },
};

Class class_mindustry_game_Teams{
		.nativeName = (intptr_t) "mindustry/game/Teams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Teams),
		.classVtable = (intptr_t) vtable_mindustry_game_Teams,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Teams,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Teams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Teams = registerClass(&class_mindustry_game_Teams);

}
