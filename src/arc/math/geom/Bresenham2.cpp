#include "arc/math/geom/Bresenham2.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "arc/func/Intc2.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/pooling/Pool.h"
#include "java/lang/Class.h"
#include "arc/math/geom/Bresenham2_invoke_arc_func_Prov_0.h"
#include "arc/math/geom/Bresenham2.h"

extern "C" {


void mark_arc_math_geom_Bresenham2(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Bresenham2 *) object;
	if (self->F_points)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_points)->clazz)->markFunction)((jobject) self->F_points, mark, depth + 1);
	if (self->F_pool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pool)->clazz)->markFunction)((jobject) self->F_pool, mark, depth + 1);
}

void clinit_arc_math_geom_Bresenham2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Bresenham2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bresenham2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_math_geom_Bresenham2 *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Bresenham2_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_math_geom_Bresenham2_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_math_geom_Bresenham2_invoke_arc_func_Prov_0);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_Bresenham2 *) NULL_CHECK(sp[0].o))->F_pool = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:line", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bresenham2(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[0].i)));
	frame[5].i = temp0;
	LINE_NUMBER(29);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[1].i)));
	frame[6].i = temp1;
	LINE_NUMBER(31);
	if ((frame[0].i) >= (frame[2].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(32);
	if ((frame[1].i) >= (frame[3].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(34);
	frame[9].i = ((frame[5].i) - (frame[6].i));
	}
label_9:;
	{
	LINE_NUMBER(37);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[4].o)))(ctx, (frame[4].o), (frame[0].i), (frame[1].i));
	LINE_NUMBER(38);
	if ((frame[0].i) != (frame[2].i)) goto label_11;
	}
	{
	if ((frame[1].i) != (frame[3].i)) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(40);
	frame[10].i = ((jint(2)) * (frame[9].i));
	LINE_NUMBER(41);
	if ((frame[10].i) <= (-(frame[6].i))) goto label_14;
	}
	{
	LINE_NUMBER(42);
	frame[9].i = ((frame[9].i) - (frame[6].i));
	LINE_NUMBER(43);
	frame[0].i = ((frame[0].i) + (frame[7].i));
	}
label_14:;
	{
	LINE_NUMBER(46);
	if ((frame[10].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(47);
	frame[9].i = ((frame[9].i) + (frame[5].i));
	LINE_NUMBER(48);
	frame[1].i = ((frame[1].i) + (frame[8].i));
	goto label_9;
	}
label_12:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:line", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq])(ctx, (frame[0].o), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:line", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_math_geom_Bresenham2 *) NULL_CHECK((frame[0].o)))->F_pool;
	sp[1].o = (jobject)((arc_math_geom_Bresenham2 *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_util_pooling_Pool_freeAll_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_math_geom_Bresenham2 *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].o = (jobject)((arc_math_geom_Bresenham2 *) NULL_CHECK((frame[0].o)))->F_pool;
	sp[2].o = (jobject)((arc_math_geom_Bresenham2 *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:line", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(89);
	frame[7].i = ((frame[3].i) - (frame[1].i));
	LINE_NUMBER(90);
	frame[8].i = ((frame[4].i) - (frame[2].i));
	LINE_NUMBER(91);
	frame[9].i = (jint(0));
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	frame[12].i = (jint(0));
	LINE_NUMBER(92);
	if ((frame[7].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(93);
	frame[9].i = (jint(-1));
	LINE_NUMBER(94);
	frame[11].i = (jint(-1));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(95);
	if ((frame[7].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(96);
	frame[9].i = (jint(1));
	LINE_NUMBER(97);
	frame[11].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(99);
	if ((frame[8].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(100);
	frame[10].i = (jint(-1));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(101);
	if ((frame[8].i) <= 0) goto label_15;
	}
	INST_ICONST(1);
	INST_ISTORE(10);
label_15:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[7].i));
	frame[13].i = temp0;
	LINE_NUMBER(103);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[8].i));
	frame[14].i = temp1;
	LINE_NUMBER(104);
	if ((frame[13].i) > (frame[14].i)) goto label_18;
	}
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[8].i));
	frame[13].i = temp0;
	LINE_NUMBER(106);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[7].i));
	frame[14].i = temp1;
	LINE_NUMBER(107);
	if ((frame[8].i) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(108);
	frame[12].i = (jint(-1));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(109);
	if ((frame[8].i) <= 0) goto label_24;
	}
	INST_ICONST(1);
	INST_ISTORE(12);
label_24:;
	{
	LINE_NUMBER(110);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(112);
	frame[15].i = ((frame[13].i) >> (jint(1)));
	LINE_NUMBER(113);
	frame[16].i = (jint(0));
	}
label_26:;
	{
	if ((frame[16].i) > (frame[13].i)) goto label_27;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[5].o));
	frame[17].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[17].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[6].o), (frame[17].o));
	LINE_NUMBER(117);
	frame[15].i = ((frame[15].i) + (frame[14].i));
	LINE_NUMBER(118);
	if ((frame[15].i) <= (frame[13].i)) goto label_33;
	}
	{
	LINE_NUMBER(119);
	frame[15].i = ((frame[15].i) - (frame[13].i));
	LINE_NUMBER(120);
	frame[1].i = ((frame[1].i) + (frame[9].i));
	LINE_NUMBER(121);
	frame[2].i = ((frame[2].i) + (frame[10].i));
	goto label_37;
	}
label_33:;
	{
	LINE_NUMBER(123);
	frame[1].i = ((frame[1].i) + (frame[11].i));
	LINE_NUMBER(124);
	frame[2].i = ((frame[2].i) + (frame[12].i));
	}
label_37:;
	{
	LINE_NUMBER(113);
	INST_IINC(16, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bresenham2:lineNoDiagonal", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[1].i)));
	frame[7].i = temp0;
	LINE_NUMBER(142);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[2].i)));
	frame[8].i = (-temp1);
	LINE_NUMBER(143);
	if ((frame[1].i) >= (frame[3].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(144);
	if ((frame[2].i) >= (frame[4].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(145);
	frame[11].i = ((frame[7].i) + (frame[8].i));
	LINE_NUMBER(147);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)), (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(149);
	if ((frame[1].i) != (frame[3].i)) goto label_11;
	}
	{
	if ((frame[2].i) == (frame[4].i)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(151);
	if ((((jint(2)) * (frame[11].i)) - (frame[8].i)) <= ((frame[7].i) - ((jint(2)) * (frame[11].i)))) goto label_13;
	}
	{
	LINE_NUMBER(152);
	frame[11].i = ((frame[11].i) + (frame[8].i));
	LINE_NUMBER(153);
	frame[1].i = ((frame[1].i) + (frame[9].i));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(155);
	frame[11].i = ((frame[11].i) + (frame[7].i));
	LINE_NUMBER(156);
	frame[2].i = ((frame[2].i) + (frame[10].i));
	}
label_16:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)), (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Bresenham2[] {
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
	(void *) M_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq,
	(void *) M_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq,
	(void *) M_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq,
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
	{ "line", "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Larc/struct/Seq;" },
	{ "line", "(IIII)Larc/struct/Seq;" },
	{ "line", "(IIIILarc/util/pooling/Pool;Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "lineNoDiagonal", "(IIIILarc/util/pooling/Pool;Larc/struct/Seq;)Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "points", &class_arc_struct_Seq, offsetof(arc_math_geom_Bresenham2, F_points), "Larc/struct/Seq;", 18 },
	{ "pool", &class_arc_util_pooling_Pool, offsetof(arc_math_geom_Bresenham2, F_pool), "Larc/util/pooling/Pool;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Bresenham2, 0, "()V", 1 },
	{ "line", (intptr_t) SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2, 0, "(IIIILarc/func/Intc2;)V", 9 },
	{ "line", (intptr_t) M_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq, VTABLE_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Larc/struct/Seq;", 1 },
	{ "line", (intptr_t) M_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq, VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq, "(IIII)Larc/struct/Seq;", 1 },
	{ "line", (intptr_t) M_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq, "(IIIILarc/util/pooling/Pool;Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "lineNoDiagonal", (intptr_t) M_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq, "(IIIILarc/util/pooling/Pool;Larc/struct/Seq;)Larc/struct/Seq;", 1 },
};

Class class_arc_math_geom_Bresenham2{
		.nativeName = (intptr_t) "arc/math/geom/Bresenham2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Bresenham2),
		.classVtable = (intptr_t) vtable_arc_math_geom_Bresenham2,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Bresenham2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Bresenham2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Bresenham2 = registerClass(&class_arc_math_geom_Bresenham2);

}
