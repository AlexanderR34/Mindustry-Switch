#include "mindustry/async/PhysicsProcess_PhysicsWorld.h"
#include "mindustry/async/PhysicsProcess.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "arc/math/Rand.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/math/geom/Rect.h"
#include "arc/util/Time.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld_PhysicsBody.h"
#include "arc/util/OS.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {

jfloat SF_mindustry_async_PhysicsProcess$PhysicsWorld_scl;

void mark_mindustry_async_PhysicsProcess$PhysicsWorld(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_PhysicsProcess$PhysicsWorld *) object;
	if (self->F_tree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tree)->clazz)->markFunction)((jobject) self->F_tree, mark, depth + 1);
	if (self->F_bodies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bodies)->clazz)->markFunction)((jobject) self->F_bodies, mark, depth + 1);
	if (self->F_seq)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_seq)->clazz)->markFunction)((jobject) self->F_seq, mark, depth + 1);
	if (self->F_vec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vec)->clazz)->markFunction)((jobject) self->F_vec, mark, depth + 1);
	if (self->F_rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rand)->clazz)->markFunction)((jobject) self->F_rand, mark, depth + 1);
}

void clinit_mindustry_async_PhysicsProcess$PhysicsWorld(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_async_PhysicsProcess$PhysicsWorld_scl = jfloat(1.25f);
}

void init_mindustry_async_PhysicsProcess$PhysicsWorld_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_PhysicsProcess$PhysicsWorld(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody)));
	((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK(sp[0].o))->F_bodies = (jref) sp[1].o;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody)));
	((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK(sp[0].o))->F_seq = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK(sp[0].o))->F_vec = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[1].o);
	((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK(sp[0].o))->F_rand = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_arc_math_geom_Rect(ctx, sp[2].o, (frame[1].o));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK(sp[0].o))->F_tree = (jref) sp[1].o;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_bodies;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_bodies;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess$PhysicsWorld_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld:update", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_bodies;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, 1), sp[0].o));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_bodies;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_4;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isMobile;
	if ((--sp)->i == 0) goto label_5;
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(194);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_tree;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_bodies;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(197);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(198);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i)))))->F_collided = (jint(0));
	LINE_NUMBER(197);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(201);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(202);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i)));
	LINE_NUMBER(204);
	if (((jint)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_local) != 0) goto label_20;
	}
	goto label_21;
label_20:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_seq;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_tree;
	jfloat temp0 = ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_x) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_radius);
	jfloat temp1 = ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_y) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_radius);
	jfloat temp2 = ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_radius) * (jfloat(2));
	jfloat temp3 = ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_radius) * (jfloat(2));
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_seq;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_seq;
	frame[9].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[10].o = (checkCast(ctx, getArrayClass(&class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, 1), sp[0].o));
	LINE_NUMBER(211);
	frame[11].i = (jint(0));
	}
label_26:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_27;
	}
	{
	LINE_NUMBER(212);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[11].i)));
	LINE_NUMBER(214);
	if ((frame[12].o) == (frame[8].o)) goto label_30;
	}
	{
	if (((jint)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_collided) == 0) goto label_31;
	}
	goto label_30;
label_31:;
	{
	LINE_NUMBER(216);
	frame[13].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_radius) + ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_radius));
	LINE_NUMBER(217);
	frame[14].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_x) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_x));
	frame[15].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_y) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_y));
	LINE_NUMBER(218);
	frame[16].f = (((frame[14].f) * (frame[14].f)) + ((frame[15].f) * (frame[15].f)));
	LINE_NUMBER(221);
	if ((floatCompare((frame[16].f), ((frame[13].f) * (frame[13].f)), 1)) >= 0) goto label_30;
	}
	{
	LINE_NUMBER(222);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (frame[16].f));
	frame[17].f = temp0;
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[14].f), (frame[15].f));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	jint temp1 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_39;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((frame[13].f) - (frame[17].f)));
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[13].f) - (frame[17].f)));
	}
label_41:;
	{
	LINE_NUMBER(231);
	frame[18].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_mass) + ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_mass));
	LINE_NUMBER(232);
	frame[19].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_mass) / (frame[18].f));
	frame[20].f = (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_mass) / (frame[18].f));
	LINE_NUMBER(235);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[19].f)) / (jfloat(1.25f))));
	LINE_NUMBER(236);
	sp[0].o = frame[8].o;
	jfloat temp1 = (jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[19].f)) / (jfloat(1.25f))));
	LINE_NUMBER(238);
	if (((jint)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[12].o)))->F_local) == 0) goto label_30;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = frame[12].o;
	jfloat temp0 = (jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_x = (temp0 - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[20].f)) / (jfloat(1.25f))));
	LINE_NUMBER(240);
	sp[0].o = frame[12].o;
	jfloat temp1 = (jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicsWorld *) NULL_CHECK((frame[0].o)))->F_vec;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_y = (temp1 - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[20].f)) / (jfloat(1.25f))));
	}
label_30:;
	{
	LINE_NUMBER(211);
	INST_IINC(11, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(246);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[8].o)))->F_collided = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(201);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(194);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(250);
	clinit_mindustry_async_PhysicsProcess(ctx);
	jlong temp0 = (jlong)SF_mindustry_async_PhysicsProcess_maxPhysicsTime;
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, (frame[1].l));
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, temp1);
	clinit_mindustry_async_PhysicsProcess(ctx);
	SF_mindustry_async_PhysicsProcess_maxPhysicsTime = temp2;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_async_PhysicsProcess$PhysicsWorld[] {
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
	(void *) M_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
	(void *) M_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
	(void *) M_mindustry_async_PhysicsProcess$PhysicsWorld_update,
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
	{ "add", "(Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;)V" },
	{ "remove", "(Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;)V" },
	{ "update", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
};

static FieldMetadata fields[] {
	{ "scl", &class_float, (intptr_t) &SF_mindustry_async_PhysicsProcess$PhysicsWorld_scl, "F", 26 },
	{ "tree", &class_arc_math_geom_QuadTree, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld, F_tree), "Larc/math/geom/QuadTree;", 18 },
	{ "bodies", &class_arc_struct_Seq, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld, F_bodies), "Larc/struct/Seq;", 18 },
	{ "seq", &class_arc_struct_Seq, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld, F_seq), "Larc/struct/Seq;", 18 },
	{ "vec", &class_arc_math_geom_Vec2, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld, F_vec), "Larc/math/geom/Vec2;", 18 },
	{ "rand", &class_arc_math_Rand, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld, F_rand), "Larc/math/Rand;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_PhysicsProcess$PhysicsWorld_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 1 },
	{ "add", (intptr_t) M_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, "(Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, "(Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;)V", 1 },
	{ "update", (intptr_t) M_mindustry_async_PhysicsProcess$PhysicsWorld_update, VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_update, "()V", 1 },
};

Class class_mindustry_async_PhysicsProcess$PhysicsWorld{
		.nativeName = (intptr_t) "mindustry/async/PhysicsProcess$PhysicsWorld",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_PhysicsProcess$PhysicsWorld),
		.classVtable = (intptr_t) vtable_mindustry_async_PhysicsProcess$PhysicsWorld,
		.staticInitializer = (intptr_t) clinit_mindustry_async_PhysicsProcess$PhysicsWorld,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_PhysicsProcess$PhysicsWorld,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_async_PhysicsProcess,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_PhysicsProcess$PhysicsWorld = registerClass(&class_mindustry_async_PhysicsProcess$PhysicsWorld);

}

