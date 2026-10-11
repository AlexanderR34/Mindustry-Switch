#include "mindustry/ai/UnitGroup.h"
#include "arc/math/geom/Vec2.h"
#include "java/util/concurrent/Future.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/struct/IntSeq.h"
#include "arc/Application.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/math/geom/IntQuadTree_IntQuadTreeProvider.h"
#include "mindustry/ai/UnitGroup_invoke_java_lang_Runnable_4.h"
#include "mindustry/ai/UnitGroup_invoke_java_lang_Runnable_5.h"
#include "mindustry/ai/UnitGroup_invoke_java_lang_Runnable_3.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/ai/UnitGroup.h"
#include "arc/math/geom/IntQuadTree.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/ai/UnitGroup_invoke_arc_math_geom_IntQuadTree_IntQuadTreeProvider_1.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_ai_UnitGroup(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_UnitGroup *) object;
	if (self->F_units)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_units)->clazz)->markFunction)((jobject) self->F_units, mark, depth + 1);
	if (self->F_positions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_positions)->clazz)->markFunction)((jobject) self->F_positions, mark, depth + 1);
	if (self->F_originalPositions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalPositions)->clazz)->markFunction)((jobject) self->F_originalPositions, mark, depth + 1);
}

void clinit_mindustry_ai_UnitGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_UnitGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitGroup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_UnitGroup *) NULL_CHECK(sp[0].o))->F_units = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:calculateFormation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_collisionLayer = (frame[2].i);
	LINE_NUMBER(25);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(27);
	frame[3].f = ((frame[3].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x));
	LINE_NUMBER(28);
	frame[4].f = ((frame[4].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y));
	LINE_NUMBER(29);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(30);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	frame[3].f = (temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))));
	LINE_NUMBER(31);
	jfloat temp1 = frame[4].f;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	frame[4].f = (temp1 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) * (jint(2))));
	((mindustry_ai_UnitGroup *) NULL_CHECK(sp[0].o))->F_positions = (jref) sp[1].o;
	LINE_NUMBER(36);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[5].i) * (jint(2)))) = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x) - (frame[3].f));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[5].i) * (jint(2))) + (jint(1)))) = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y) - (frame[4].f));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[6].o));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_groupIndex = (frame[5].i);
	LINE_NUMBER(36);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(44);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ai_UnitGroup_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:updateRaycast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:updateRaycast", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(161);
	if (((jint)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_collisionLayer) == (jint(2))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_originalPositions;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_originalPositions;
	frame[4].f = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[1].i) * (jint(2))))) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_originalPositions;
	frame[5].f = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[1].i) * (jint(2))) + (jint(1))))) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCost;
	frame[7].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = frame[7].o;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[4].f));
	jint temp4 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[5].f));
	jint temp5 = (jint)SM_mindustry_ai_ControlPathfinder_raycastFastAvoid_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_int(ctx, temp0, sp[0].o, temp1, temp2, temp3, temp4);
	frame[8].i = temp5;
	LINE_NUMBER(174);
	if ((frame[8].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[8].i));
	jfloat temp1 = (jfloat((temp0 * (8)))) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x);
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[8].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat((temp2 * (8)))) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(176);
	sp[0].o = frame[3].o;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[3].o));
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((temp3 - (jfloat(8.0f))) - (jfloat(4.0f))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp4);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[1].i) * (jint(2)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[1].i) * (jint(2))) + (jint(1)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y);
	}
label_8:;
	{
	LINE_NUMBER(181);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_1;
	}
	{
	LINE_NUMBER(182);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ai_UnitGroup_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_4);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_UnitGroup_lambda$updateRaycast$0_mindustry_gen_Unit_arc_math_geom_Vec2_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[16];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:lambda$updateRaycast$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitGroup(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(182);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_debugLine;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(0);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_green;
	sp[2].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(2)));
	jint temp3 = jint(0);
	clinit_arc_math_geom_Vec2(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[3].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(1);
	clinit_arc_math_geom_Vec2(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[3].o, (frame[2].f), (frame[3].f));
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[39];
	auto stack = &frame[31];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:lambda$calculateFormation$0", 39 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	frame[2].f = (jfloat(0.7f));
	LINE_NUMBER(47);
	frame[3].i = (jint(1));
	LINE_NUMBER(49);
	frame[4].i = (jint(0));
	LINE_NUMBER(50);
	frame[5].i = (jint(0));
	LINE_NUMBER(51);
	frame[6].i = (jint(0));
	LINE_NUMBER(52);
	jint temp0 = jint(1);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))), (jdouble(0.65)));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 + (jint((temp1 / (jdouble(10.0)))))), (6));
	frame[7].i = temp2;
	LINE_NUMBER(55);
	clinit_arc_math_geom_IntQuadTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_IntQuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp5 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[2].o);
	jfloat temp6 = jfloat(temp5);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[2].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[1].o, temp3, temp4, temp6, (jfloat(temp7)));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_1(ctx);
		auto proxy = (mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_1 *) gcAlloc(ctx, &class_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_math_geom_IntQuadTree_arc_math_geom_Rect_arc_math_geom_IntQuadTree$IntQuadTreeProvider(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(58);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(63);
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	if (temp0 >= (40)) goto label_11;
	}
	{
	if ((frame[5].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(64);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(66);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(67);
	INST_IINC(4, 1);
	LINE_NUMBER(69);
	frame[13].f = (jfloat(1));
	frame[14].f = (jfloat(0));
	LINE_NUMBER(70);
	frame[15].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[15].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_20;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[15].i) * (jint(2))));
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[15].i) * (jint(2))) + (jint(1))))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[11].o), (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(0.3f)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[15].i) * (jint(2)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[15].i) * (jint(2))) + (jint(1)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[15].i));
	frame[16].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o))))->F_hitSize) * (jfloat(0.6f)));
	LINE_NUMBER(77);
	jfloat temp1 = frame[13].f;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, (frame[10].o), (jfloat(0)), (jfloat(0)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (temp2 + (frame[16].f)));
	frame[13].f = temp3;
	LINE_NUMBER(78);
	frame[14].f = ((frame[14].f) + (((jfloat(3.1415927f)) * (frame[16].f)) * (frame[16].f)));
	LINE_NUMBER(70);
	INST_IINC(15, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(82);
	frame[15].f = (((jfloat(3.1415927f)) * (frame[13].f)) * (frame[13].f));
	LINE_NUMBER(83);
	frame[12].f = ((frame[14].f) / (frame[15].f));
	LINE_NUMBER(86);
	if ((floatCompare((frame[12].f), (frame[2].f), 1)) > 0) goto label_30;
	}
	{
	if ((frame[4].i) >= (20)) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	INST_ISTORE(3);
label_14:;
	{
	LINE_NUMBER(90);
	if ((frame[3].i) == 0) goto label_32;
	}
	{
	if ((floatCompare((frame[12].f), (jfloat(0.5f)), -1)) <= 0) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(91);
	INST_IINC(5, 1);
	LINE_NUMBER(93);
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, (frame[8].o));
	LINE_NUMBER(95);
	frame[13].i = (jint(0));
	}
label_36:;
	{
	jint temp0 = frame[13].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_37;
	}
	{
	LINE_NUMBER(96);
	((func_arc_math_geom_IntQuadTree_insert_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_insert_int])(ctx, (frame[8].o), (frame[13].i));
	LINE_NUMBER(95);
	INST_IINC(13, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(99);
	frame[13].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[13].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_33;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[13].i));
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[13].i) * (jint(2)))));
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[16].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[13].i) * (jint(2))) + (jint(1)))));
	frame[17].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[14].o)))->F_hitSize) / (jfloat(2)));
	LINE_NUMBER(103);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[9].o));
	LINE_NUMBER(104);
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, (frame[8].o), ((frame[15].f) - (frame[17].f)), ((frame[16].f) - (frame[17].f)), ((frame[17].f) * (jfloat(2))), ((frame[17].f) * (jfloat(2))), (frame[9].o));
	LINE_NUMBER(105);
	frame[18].i = (jint(0));
	}
label_48:;
	{
	if ((frame[18].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[9].o)))->F_size)) goto label_49;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[9].o)))->F_items;
	frame[19].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[18].i)));
	LINE_NUMBER(109);
	if ((frame[13].i) == (frame[19].i)) goto label_52;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[20].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[19].i) * (jint(2)))));
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[21].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[19].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[19].i));
	frame[22].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(113);
	frame[23].f = (((frame[17].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[22].o)))->F_hitSize) / (jfloat(2)))) * (jfloat(1.2f)));
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[15].f), (frame[16].f), (frame[20].f), (frame[21].f));
	frame[24].f = temp0;
	LINE_NUMBER(116);
	if ((floatCompare((frame[24].f), (frame[23].f), 1)) >= 0) goto label_52;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[11].o), ((frame[15].f) - (frame[20].f)), ((frame[16].f) - (frame[21].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[23].f) - (frame[24].f)));
	LINE_NUMBER(118);
	frame[25].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[14].o)))->F_hitSize);
	frame[26].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[22].o)))->F_hitSize);
	LINE_NUMBER(119);
	frame[27].f = ((frame[25].f) + (frame[26].f));
	LINE_NUMBER(120);
	frame[28].f = ((frame[26].f) / (frame[27].f));
	frame[29].f = ((frame[25].f) / (frame[27].f));
	LINE_NUMBER(121);
	frame[30].f = (jfloat(1));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jint temp0 = (frame[13].i) * (jint(2));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x) * (frame[28].f)) * (frame[30].f)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jint temp3 = ((frame[13].i) * (jint(2))) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y) * (frame[28].f)) * (frame[30].f)));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jint temp6 = (frame[19].i) * (jint(2));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x) * (frame[29].f)) * (frame[30].f)));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jint temp9 = ((frame[19].i) * (jint(2))) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp9)) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y) * (frame[29].f)) * (frame[30].f)));
	}
label_52:;
	{
	LINE_NUMBER(105);
	INST_IINC(18, 1);
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(99);
	INST_IINC(13, 1);
	goto label_40;
	}
label_33:;
	LINE_NUMBER(133);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_ai_UnitGroup *) NULL_CHECK(sp[0].o))->F_originalPositions = (jref) (checkCast(ctx, getArrayClass(&class_float, 1), sp[1].o));
	LINE_NUMBER(138);
	frame[12].i = (jint(0));
	}
label_71:;
	{
	jint temp0 = frame[12].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_72;
	}
	{
	LINE_NUMBER(139);
	((func_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[12].i), (frame[1].o), (frame[10].o));
	LINE_NUMBER(138);
	INST_IINC(12, 1);
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(142);
	((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(144);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_76;
	}
	{
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ai_UnitGroup_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ai_UnitGroup_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_76:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:lambda$calculateFormation$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) * (jint(2)))));
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[2].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(149);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_placeBlock;
	jfloat temp0 = (frame[3].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	jfloat temp1 = (frame[4].f) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	jfloat temp2 = jfloat(1);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_green;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(146);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitGroup:lambda$calculateFormation$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[1].i) * (jint(2))));
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_positions;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[1].i) * (jint(2))) + (jint(1))));
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[0].o)))->F_units;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o))))->F_hitSize));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_UnitGroup[] {
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
	(void *) M_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int,
	(void *) M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect,
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
	{ "calculateFormation", "(Larc/math/geom/Vec2;I)V" },
	{ "updateRaycast", "(ILarc/math/geom/Vec2;)V" },
	{ "updateRaycast", "(ILarc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "lambda$calculateFormation$0", "(Larc/math/geom/Vec2;)V" },
	{ "lambda$calculateFormation$2", "(Larc/math/geom/Vec2;)V" },
	{ "lambda$calculateFormation$1", "(ILarc/math/geom/Rect;)V" },
};

static FieldMetadata fields[] {
	{ "units", &class_arc_struct_Seq, offsetof(mindustry_ai_UnitGroup, F_units), "Larc/struct/Seq;", 1 },
	{ "collisionLayer", &class_int, offsetof(mindustry_ai_UnitGroup, F_collisionLayer), "I", 1 },
	{ "positions", getArrayClass(&class_float, 1), offsetof(mindustry_ai_UnitGroup, F_positions), "[F", 65 },
	{ "originalPositions", getArrayClass(&class_float, 1), offsetof(mindustry_ai_UnitGroup, F_originalPositions), "[F", 65 },
	{ "valid", &class_boolean, offsetof(mindustry_ai_UnitGroup, F_valid), "Z", 65 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_UnitGroup, 0, "()V", 1 },
	{ "calculateFormation", (intptr_t) M_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int, VTABLE_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int, "(Larc/math/geom/Vec2;I)V", 1 },
	{ "updateRaycast", (intptr_t) M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2, VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2, "(ILarc/math/geom/Vec2;)V", 1 },
	{ "updateRaycast", (intptr_t) M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2, VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2, "(ILarc/math/geom/Vec2;Larc/math/geom/Vec2;)V", 2 },
	{ "lambda$updateRaycast$0", (intptr_t) SM_mindustry_ai_UnitGroup_lambda$updateRaycast$0_mindustry_gen_Unit_arc_math_geom_Vec2_float_float, 0, "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;FF)V", 4106 },
	{ "lambda$calculateFormation$0", (intptr_t) M_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2, VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 4098 },
	{ "lambda$calculateFormation$2", (intptr_t) M_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2, VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 4098 },
	{ "lambda$calculateFormation$1", (intptr_t) M_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect, VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect, "(ILarc/math/geom/Rect;)V", 4098 },
};

Class class_mindustry_ai_UnitGroup{
		.nativeName = (intptr_t) "mindustry/ai/UnitGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_UnitGroup),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitGroup,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitGroup,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitGroup = registerClass(&class_mindustry_ai_UnitGroup);

}
