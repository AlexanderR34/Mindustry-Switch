#include "mindustry/entities/EntityCollisions.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/entities/EntityCollisions.h"
#include "arc/func/Cons.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/EntityCollisions_invoke_mindustry_entities_EntityCollisions_SolidPred_1.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Hitboxc.h"
#include "java/lang/Class.h"
#include "mindustry/entities/EntityCollisions_invoke_arc_func_Cons_3.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/entities/EntityCollisions_invoke_arc_func_Cons_5.h"
#include "mindustry/entities/EntityCollisions_invoke_arc_func_Cons_4.h"

extern "C" {

jfloat SF_mindustry_entities_EntityCollisions_seg;
jfloat SF_mindustry_entities_EntityCollisions_maxDelta;

void mark_mindustry_entities_EntityCollisions(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_EntityCollisions *) object;
	if (self->F_vector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vector)->clazz)->markFunction)((jobject) self->F_vector, mark, depth + 1);
	if (self->F_l1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_l1)->clazz)->markFunction)((jobject) self->F_l1, mark, depth + 1);
	if (self->F_r1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_r1)->clazz)->markFunction)((jobject) self->F_r1, mark, depth + 1);
	if (self->F_r2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_r2)->clazz)->markFunction)((jobject) self->F_r2, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_arrOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrOut)->clazz)->markFunction)((jobject) self->F_arrOut, mark, depth + 1);
	if (self->F_hitCons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitCons)->clazz)->markFunction)((jobject) self->F_hitCons, mark, depth + 1);
	if (self->F_treeCons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_treeCons)->clazz)->markFunction)((jobject) self->F_treeCons, mark, depth + 1);
}

void clinit_mindustry_entities_EntityCollisions(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_EntityCollisions_seg = jfloat(1.0f);
	SF_mindustry_entities_EntityCollisions_maxDelta = jfloat(1000.0f);
}

void init_mindustry_entities_EntityCollisions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityCollisions(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_vector = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_l1 = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_r1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_r2 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_gen_Hitboxc)));
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_arrOut = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_EntityCollisions_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_hitCons = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_entities_EntityCollisions_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_EntityCollisions *) NULL_CHECK(sp[0].o))->F_treeCons = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:moveCheck", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_mindustry_gen_Posc_tileX_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileX_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)((func_mindustry_gen_Posc_tileY_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileY_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_1;
	}
	{
	LINE_NUMBER(28);
	((func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].o));
	}
label_1:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:move", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityCollisions_invoke_mindustry_entities_EntityCollisions$SolidPred_1(ctx);
		auto proxy = (mindustry_entities_EntityCollisions_invoke_mindustry_entities_EntityCollisions$SolidPred_1 *) gcAlloc(ctx, &class_mindustry_entities_EntityCollisions_invoke_mindustry_entities_EntityCollisions$SolidPred_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:move", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), 1)) < 0) goto label_2;
	}
label_1:;
	{
	if ((floatCompare((frame[2].f), (frame[2].f), -1)) != 0) goto label_2;
	}
	{
	if ((floatCompare((frame[3].f), (frame[3].f), -1)) == 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[2].f), (jfloat(-1000.0f)), (jfloat(1000.0f)));
	frame[2].f = temp0;
	LINE_NUMBER(41);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[3].f), (jfloat(-1000.0f)), (jfloat(1000.0f)));
	frame[3].f = temp1;
	LINE_NUMBER(43);
	frame[5].i = (jint(0));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((func_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, (jint(1)));
	frame[6].i = temp3;
	}
label_8:;
	{
	LINE_NUMBER(47);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((floatCompare(temp0, (jfloat(0)), -1)) > 0) goto label_9;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_10;
label_9:;
	{
	LINE_NUMBER(48);
	frame[5].i = (jint(1));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (jfloat(1)));
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[2].f));
	((func_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, sp[1].o, (temp1 * (jfloat(temp2))), (jfloat(0)), (frame[6].i), (jint(1)), (frame[4].o));
	LINE_NUMBER(51);
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((floatCompare(temp3, (jfloat(1)), -1)) < 0) goto label_13;
	}
	{
	LINE_NUMBER(52);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = jfloat(1);
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[2].f));
	frame[2].f = (temp0 - (temp1 * (jfloat(temp2))));
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(54);
	frame[2].f = (jfloat(0));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(58);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(60);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	if ((floatCompare(temp0, (jfloat(0)), -1)) > 0) goto label_16;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_17;
label_16:;
	{
	LINE_NUMBER(61);
	frame[7].i = (jint(1));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp1, (jfloat(1)));
	jint temp3 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[3].f));
	((func_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, sp[1].o, temp0, (temp2 * (jfloat(temp3))), (frame[6].i), (jint(0)), (frame[4].o));
	LINE_NUMBER(64);
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[3].f));
	if ((floatCompare(temp4, (jfloat(1)), -1)) < 0) goto label_20;
	}
	{
	LINE_NUMBER(65);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = jfloat(1);
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[3].f));
	frame[3].f = (temp0 - (temp1 * (jfloat(temp2))));
	goto label_15;
	}
label_20:;
	{
	LINE_NUMBER(67);
	frame[3].f = (jfloat(0));
	goto label_15;
	}
label_17:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:moveDelta", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((func_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	((func_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + (frame[2].f));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + (frame[3].f));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp0 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) / (jfloat(8.0f))));
	frame[7].i = temp1;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp2 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) / (jfloat(8.0f))));
	frame[8].i = temp3;
	LINE_NUMBER(80);
	frame[9].i = (-(frame[4].i));
	}
label_7:;
	{
	if ((frame[9].i) > (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(81);
	frame[10].i = (-(frame[4].i));
	}
label_10:;
	{
	if ((frame[10].i) > (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(82);
	frame[11].i = ((frame[9].i) + (frame[7].i));
	frame[12].i = ((frame[10].i) + (frame[8].i));
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[11].i), (frame[12].i));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(((frame[11].i) * (8)))), (jfloat(((frame[12].i) * (8)))));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_overlap_arc_math_geom_Rect_arc_math_geom_Rect_boolean_R_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, (frame[5].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y));
	}
label_15:;
	{
	LINE_NUMBER(81);
	INST_IINC(10, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(80);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	((func_mindustry_gen_Posc_trns_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_trns_float_float, sp[0].o))(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:overlapsTile", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(1)));
	frame[3].i = temp1;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_vector;
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f))));
	frame[4].i = temp2;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_vector;
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f))));
	frame[5].i = temp3;
	LINE_NUMBER(108);
	frame[6].i = (-(frame[3].i));
	}
label_6:;
	{
	if ((frame[6].i) > (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(109);
	frame[7].i = (-(frame[3].i));
	}
label_9:;
	{
	if ((frame[7].i) > (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(110);
	frame[8].i = ((frame[6].i) + (frame[4].i));
	frame[9].i = ((frame[7].i) + (frame[5].i));
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[8].i), (frame[9].i));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(((frame[8].i) * (8)))), (jfloat(((frame[9].i) * (8)))), (jfloat(8.0f)));
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(109);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(108);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:updatePhysics", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq])(ctx, (frame[1].o));
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_entities_EntityCollisions_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_entities_EntityCollisions_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_EntityCollisions_legsSolid_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:legsSolid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityCollisions(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_legSolid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_legSolid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_EntityCollisions_waterSolid_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:waterSolid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityCollisions(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(136);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_EntityCollisions_solid_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:solid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityCollisions(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(141);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:checkCollide", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	((func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Hitboxc_lastX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 - temp2));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Hitboxc_lastY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp3 + (temp4 - temp5));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp6 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp7 = (jfloat)((func_mindustry_gen_Hitboxc_lastX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp8 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp6 + (temp7 - temp8));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp9 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp10 = (jfloat)((func_mindustry_gen_Hitboxc_lastY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp11 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp9 + (temp10 - temp11));
	LINE_NUMBER(153);
	jfloat temp12 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp13 = (jfloat)((func_mindustry_gen_Hitboxc_lastX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].f = (temp12 - temp13);
	LINE_NUMBER(154);
	jfloat temp14 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp15 = (jfloat)((func_mindustry_gen_Hitboxc_lastY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].f = (temp14 - temp15);
	LINE_NUMBER(155);
	jfloat temp16 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp17 = (jfloat)((func_mindustry_gen_Hitboxc_lastX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].f = (temp16 - temp17);
	LINE_NUMBER(156);
	jfloat temp18 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp19 = (jfloat)((func_mindustry_gen_Hitboxc_lastY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].f = (temp18 - temp19);
	LINE_NUMBER(158);
	if ((frame[1].o) == (frame[2].o)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[4].f;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp6 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp7 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp8 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	jfloat temp9 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height;
	jfloat temp10 = frame[5].f;
	jfloat temp11 = frame[6].f;
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	jint temp12 = (jint)SM_mindustry_entities_EntityCollisions_collide_float_float_float_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, sp[0].o);
	if (temp12 == 0) goto label_15;
	}
label_14:;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(162);
	if ((frame[7].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	((func_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	LINE_NUMBER(164);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_l1;
	((func_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	}
label_11:;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_EntityCollisions_collide_float_float_float_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jobject param12) {
	jtype frame[30];
	auto stack = &frame[27];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:collide", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityCollisions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].o = param12;
	{
	LINE_NUMBER(171);
	frame[13].f = (frame[4].f);
	frame[14].f = (frame[5].f);
	LINE_NUMBER(173);
	frame[4].f = ((frame[4].f) - (frame[10].f));
	LINE_NUMBER(174);
	frame[5].f = ((frame[5].f) - (frame[11].f));
	LINE_NUMBER(179);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(180);
	frame[15].f = ((frame[6].f) - ((frame[0].f) + (frame[2].f)));
	LINE_NUMBER(181);
	frame[17].f = (((frame[6].f) + (frame[8].f)) - (frame[0].f));
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(183);
	frame[15].f = (((frame[6].f) + (frame[8].f)) - (frame[0].f));
	LINE_NUMBER(184);
	frame[17].f = ((frame[6].f) - ((frame[0].f) + (frame[2].f)));
	}
label_9:;
	{
	LINE_NUMBER(187);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(188);
	frame[16].f = ((frame[7].f) - ((frame[1].f) + (frame[3].f)));
	LINE_NUMBER(189);
	frame[18].f = (((frame[7].f) + (frame[9].f)) - (frame[1].f));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(191);
	frame[16].f = (((frame[7].f) + (frame[9].f)) - (frame[1].f));
	LINE_NUMBER(192);
	frame[18].f = ((frame[7].f) - ((frame[1].f) + (frame[3].f)));
	}
label_15:;
	{
	LINE_NUMBER(195);
	frame[19].f = ((frame[15].f) / (frame[4].f));
	LINE_NUMBER(196);
	frame[20].f = ((frame[17].f) / (frame[4].f));
	LINE_NUMBER(197);
	frame[21].f = ((frame[16].f) / (frame[5].f));
	LINE_NUMBER(198);
	frame[22].f = ((frame[18].f) / (frame[5].f));
	LINE_NUMBER(200);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[19].f), (frame[21].f));
	frame[23].f = temp0;
	LINE_NUMBER(201);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[20].f), (frame[22].f));
	frame[24].f = temp1;
	LINE_NUMBER(203);
	if ((floatCompare((frame[23].f), (frame[24].f), -1)) > 0) goto label_23;
	}
	{
	if ((floatCompare((frame[20].f), (jfloat(0)), 1)) < 0) goto label_23;
	}
	{
	if ((floatCompare((frame[22].f), (jfloat(0)), 1)) < 0) goto label_23;
	}
	{
	if ((floatCompare((frame[19].f), (jfloat(1)), -1)) > 0) goto label_23;
	}
	{
	if ((floatCompare((frame[21].f), (jfloat(1)), -1)) <= 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(206);
	frame[25].f = (((frame[0].f) + ((frame[2].f) / (jfloat(2)))) + ((frame[13].f) * (frame[23].f)));
	LINE_NUMBER(207);
	frame[26].f = (((frame[1].f) + ((frame[3].f) / (jfloat(2)))) + ((frame[14].f) * (frame[23].f)));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[12].o), (frame[25].f), (frame[26].f));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:collide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_hitCons;
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:updateCollision", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Hitboxc_lastX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 - temp2));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Hitboxc_lastY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_lastY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp3 + (temp4 - temp5));
	LINE_NUMBER(225);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	((func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_arrOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_treeCons;
	((func_mindustry_gen_Hitboxc_getCollisions_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_getCollisions_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_arrOut;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Hitboxc, 1), sp[0].o));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_arrOut;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(236);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(237);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(238);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	((func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(240);
	((func_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc])(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_mindustry_gen_Entityc_isAdded_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_isAdded_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(236);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityCollisions:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_r2;
	sp[2].o = (jobject)((mindustry_entities_EntityCollisions *) NULL_CHECK((frame[0].o)))->F_arrOut;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_EntityCollisions[] {
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
	(void *) M_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean,
	(void *) M_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup,
	(void *) M_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc,
	(void *) M_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup,
	(void *) M_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc,
	(void *) M_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree,
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
	{ "moveCheck", "(Lmindustry/gen/Hitboxc;FFLmindustry/entities/EntityCollisions$SolidPred;)V" },
	{ "move", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "move", "(Lmindustry/gen/Hitboxc;FFLmindustry/entities/EntityCollisions$SolidPred;)V" },
	{ "moveDelta", "(Lmindustry/gen/Hitboxc;FFIZLmindustry/entities/EntityCollisions$SolidPred;)V" },
	{ "overlapsTile", "(Larc/math/geom/Rect;Lmindustry/entities/EntityCollisions$SolidPred;)Z" },
	{ "updatePhysics", "(Lmindustry/entities/EntityGroup;)V" },
	{ "checkCollide", "(Lmindustry/gen/Hitboxc;Lmindustry/gen/Hitboxc;)V" },
	{ "collide", "(Lmindustry/entities/EntityGroup;)V" },
	{ "updateCollision", "(Lmindustry/gen/Hitboxc;)V" },
	{ "lambda$new$0", "(Larc/math/geom/QuadTree;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_entities_EntityCollisions$SolidPred,
};

static FieldMetadata fields[] {
	{ "seg", &class_float, (intptr_t) &SF_mindustry_entities_EntityCollisions_seg, "F", 26 },
	{ "maxDelta", &class_float, (intptr_t) &SF_mindustry_entities_EntityCollisions_maxDelta, "F", 26 },
	{ "vector", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_EntityCollisions, F_vector), "Larc/math/geom/Vec2;", 2 },
	{ "l1", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_EntityCollisions, F_l1), "Larc/math/geom/Vec2;", 2 },
	{ "r1", &class_arc_math_geom_Rect, offsetof(mindustry_entities_EntityCollisions, F_r1), "Larc/math/geom/Rect;", 2 },
	{ "r2", &class_arc_math_geom_Rect, offsetof(mindustry_entities_EntityCollisions, F_r2), "Larc/math/geom/Rect;", 2 },
	{ "tmp", &class_arc_math_geom_Rect, offsetof(mindustry_entities_EntityCollisions, F_tmp), "Larc/math/geom/Rect;", 2 },
	{ "arrOut", &class_arc_struct_Seq, offsetof(mindustry_entities_EntityCollisions, F_arrOut), "Larc/struct/Seq;", 2 },
	{ "hitCons", &class_arc_func_Cons, offsetof(mindustry_entities_EntityCollisions, F_hitCons), "Larc/func/Cons;", 2 },
	{ "treeCons", &class_arc_func_Cons, offsetof(mindustry_entities_EntityCollisions, F_treeCons), "Larc/func/Cons;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_EntityCollisions, 0, "()V", 1 },
	{ "moveCheck", (intptr_t) M_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred, "(Lmindustry/gen/Hitboxc;FFLmindustry/entities/EntityCollisions$SolidPred;)V", 1 },
	{ "move", (intptr_t) M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "move", (intptr_t) M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred, "(Lmindustry/gen/Hitboxc;FFLmindustry/entities/EntityCollisions$SolidPred;)V", 1 },
	{ "moveDelta", (intptr_t) M_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred, "(Lmindustry/gen/Hitboxc;FFIZLmindustry/entities/EntityCollisions$SolidPred;)V", 1 },
	{ "overlapsTile", (intptr_t) M_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean, VTABLE_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean, "(Larc/math/geom/Rect;Lmindustry/entities/EntityCollisions$SolidPred;)Z", 1 },
	{ "updatePhysics", (intptr_t) M_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup, VTABLE_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup, "(Lmindustry/entities/EntityGroup;)V", 1 },
	{ "legsSolid", (intptr_t) SM_mindustry_entities_EntityCollisions_legsSolid_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "waterSolid", (intptr_t) SM_mindustry_entities_EntityCollisions_waterSolid_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "solid", (intptr_t) SM_mindustry_entities_EntityCollisions_solid_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "checkCollide", (intptr_t) M_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc, VTABLE_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc, "(Lmindustry/gen/Hitboxc;Lmindustry/gen/Hitboxc;)V", 2 },
	{ "collide", (intptr_t) SM_mindustry_entities_EntityCollisions_collide_float_float_float_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean, 0, "(FFFFFFFFFFFFLarc/math/geom/Vec2;)Z", 9 },
	{ "collide", (intptr_t) M_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup, VTABLE_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup, "(Lmindustry/entities/EntityGroup;)V", 1 },
	{ "updateCollision", (intptr_t) M_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc, VTABLE_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc, "(Lmindustry/gen/Hitboxc;)V", 2 },
	{ "lambda$new$0", (intptr_t) M_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree, VTABLE_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree, "(Larc/math/geom/QuadTree;)V", 4098 },
};

Class class_mindustry_entities_EntityCollisions{
		.nativeName = (intptr_t) "mindustry/entities/EntityCollisions",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_EntityCollisions),
		.classVtable = (intptr_t) vtable_mindustry_entities_EntityCollisions,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_EntityCollisions,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_EntityCollisions,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_EntityCollisions = registerClass(&class_mindustry_entities_EntityCollisions);

}
