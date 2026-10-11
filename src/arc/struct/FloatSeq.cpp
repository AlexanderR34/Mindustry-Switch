#include "arc/struct/FloatSeq.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/FloatSeq.h"
#include "java/lang/Float.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_FloatSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_FloatSeq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_FloatSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_FloatSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_arc_struct_FloatSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_FloatSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(25);
	init_arc_struct_FloatSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_FloatSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[2].i));
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_FloatSeq_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(45);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_FloatSeq_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	init_arc_struct_FloatSeq_boolean_Array1_float_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_FloatSeq_boolean_Array1_float_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(65);
	init_arc_struct_FloatSeq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(66);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(67);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_FloatSeq_with_Array1_float_R_arc_struct_FloatSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_FloatSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_Array1_float(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:toVec2Array", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	sp[2].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, ((frame[2].i) + (jint(1))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_add_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(86);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (frame[1].f);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_add_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	if ((((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(93);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].f);
	LINE_NUMBER(94);
	ARRAY_ACCESS(jfloat, (frame[3].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_add_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(100);
	if ((((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(101);
	ARRAY_ACCESS(jfloat, (frame[4].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].f);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jfloat, (frame[4].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jfloat, (frame[4].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_add_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(109);
	if ((((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(110);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].f);
	LINE_NUMBER(111);
	ARRAY_ACCESS(jfloat, (frame[5].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(112);
	ARRAY_ACCESS(jfloat, (frame[5].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(113);
	ARRAY_ACCESS(jfloat, (frame[5].o), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].f);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_FloatSeq_addAll_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(122);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(123);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"offset + length must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_FloatSeq_addAll_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_addAll_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((func_arc_struct_FloatSeq_addAll_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_addAll_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	frame[5].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(134);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(135);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_get_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(140);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_set_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(145);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)) = (frame[2].f);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_incr_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(150);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[2].f));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_mul_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(155);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[2].f));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_insert_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(160);
	if ((frame[1].i) <= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(162);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(163);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(164);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(166);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(168);
	ARRAY_ACCESS(jfloat, (frame[3].o), (frame[1].i)) = (frame[2].f);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(172);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"first can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(173);
	if ((frame[2].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"second can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(175);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(176);
	ARRAY_ACCESS(jfloat, (frame[3].o), (frame[1].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(177);
	ARRAY_ACCESS(jfloat, (frame[3].o), (frame[2].i)) = (frame[4].f);
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_contains_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(181);
	frame[2].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(183);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)), (frame[1].f), -1)) != 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_FloatSeq_indexOf_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(190);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(191);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))), (frame[1].f), -1)) != 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(190);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_FloatSeq_lastIndexOf_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(197);
	frame[3].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(198);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))), (frame[1].f), -1)) != 0) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(197);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_removeValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(204);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(205);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))), (frame[1].f), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(206);
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_removeIndex_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_FloatSeq_removeIndex_int_R_float])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(204);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_removeIndex_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	if ((frame[1].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(217);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(219);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(220);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(222);
	ARRAY_ACCESS(jfloat, (frame[2].o), (frame[1].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(228);
	if ((frame[2].i) < ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(229);
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start can't be > end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(231);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(232);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(233);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(235);
	frame[5].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(236);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(237);
	ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(236);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	frame[2].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(248);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(250);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(251);
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[1].o), (frame[5].i));
	frame[7].f = temp0;
	LINE_NUMBER(252);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(253);
	if ((floatCompare((frame[7].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[8].i))), -1)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(254);
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_removeIndex_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_FloatSeq_removeIndex_int_R_float])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(255);
	INST_IINC(2, -1);
	LINE_NUMBER(256);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(252);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(250);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(260);
	if ((frame[2].i) == (frame[3].i)) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_pop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_peek_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_first_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_FloatSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_sum_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:sum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(290);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(291);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))));
	LINE_NUMBER(290);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_shrink_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, (frame[0].o), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(312);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(313);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"additionalCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(314);
	frame[2].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(315);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_setSize_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(324);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(325);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_resize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(326);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(327);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_resize_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(333);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(334);
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_float_int_int(ctx, sp[0].o, (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(344);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(345);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(346);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(347);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(348);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i)) = (frame[6].f);
	LINE_NUMBER(344);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(354);
	frame[2].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(356);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(357);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(358);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i)) = (frame[4].f);
	LINE_NUMBER(354);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_FloatSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(367);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_FloatSeq_random_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_toArray_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(378);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_FloatSeq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(385);
	frame[2].i = (jint(1));
	LINE_NUMBER(386);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(387);
	jint temp0 = (frame[2].i) * (31);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i))));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(386);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(392);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(393);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(394);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_FloatSeq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(395);
	frame[2].o = (checkCast(ctx, &class_arc_struct_FloatSeq, (frame[1].o)));
	LINE_NUMBER(396);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(397);
	frame[3].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(398);
	if ((frame[3].i) == ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(401);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(402);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[6].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))), -1)) == 0) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(401);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(407);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(408);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_FloatSeq)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(409);
	frame[3].o = (checkCast(ctx, &class_arc_struct_FloatSeq, (frame[1].o)));
	LINE_NUMBER(410);
	frame[4].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(411);
	if ((frame[4].i) == ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(412);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(413);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_ordered) != 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(416);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(417);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[7].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[7].i)))));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(416);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(424);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))));
	LINE_NUMBER(427);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(427);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/FloatSeq:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(436);
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(438);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	LINE_NUMBER(440);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(440);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_FloatSeq[] {
	(void *) M_arc_struct_FloatSeq_hashCode_R_int,
	(void *) M_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_FloatSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq,
	(void *) M_arc_struct_FloatSeq_add_float,
	(void *) M_arc_struct_FloatSeq_add_float_float,
	(void *) M_arc_struct_FloatSeq_add_float_float_float,
	(void *) M_arc_struct_FloatSeq_add_float_float_float_float,
	(void *) M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq,
	(void *) M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int,
	(void *) M_arc_struct_FloatSeq_addAll_Array1_float,
	(void *) M_arc_struct_FloatSeq_addAll_Array1_float_int_int,
	(void *) M_arc_struct_FloatSeq_get_int_R_float,
	(void *) M_arc_struct_FloatSeq_set_int_float,
	(void *) M_arc_struct_FloatSeq_incr_int_float,
	(void *) M_arc_struct_FloatSeq_mul_int_float,
	(void *) M_arc_struct_FloatSeq_insert_int_float,
	(void *) M_arc_struct_FloatSeq_swap_int_int,
	(void *) M_arc_struct_FloatSeq_contains_float_R_boolean,
	(void *) M_arc_struct_FloatSeq_indexOf_float_R_int,
	(void *) M_arc_struct_FloatSeq_lastIndexOf_float_R_int,
	(void *) M_arc_struct_FloatSeq_removeValue_float_R_boolean,
	(void *) M_arc_struct_FloatSeq_removeIndex_int_R_float,
	(void *) M_arc_struct_FloatSeq_removeRange_int_int,
	(void *) M_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean,
	(void *) M_arc_struct_FloatSeq_pop_R_float,
	(void *) M_arc_struct_FloatSeq_peek_R_float,
	(void *) M_arc_struct_FloatSeq_first_R_float,
	(void *) M_arc_struct_FloatSeq_isEmpty_R_boolean,
	(void *) M_arc_struct_FloatSeq_clear,
	(void *) M_arc_struct_FloatSeq_sum_R_float,
	(void *) M_arc_struct_FloatSeq_shrink_R_Array1_float,
	(void *) M_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float,
	(void *) M_arc_struct_FloatSeq_setSize_int_R_Array1_float,
	(void *) M_arc_struct_FloatSeq_resize_int_R_Array1_float,
	(void *) M_arc_struct_FloatSeq_sort,
	(void *) M_arc_struct_FloatSeq_reverse,
	(void *) M_arc_struct_FloatSeq_shuffle,
	(void *) M_arc_struct_FloatSeq_truncate_int,
	(void *) M_arc_struct_FloatSeq_random_R_float,
	(void *) M_arc_struct_FloatSeq_toArray_R_Array1_float,
	(void *) M_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean,
	(void *) M_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String,
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
	{ "toVec2Array", "()Larc/struct/Seq;" },
	{ "add", "(F)V" },
	{ "add", "(FF)V" },
	{ "add", "(FFF)V" },
	{ "add", "(FFFF)V" },
	{ "addAll", "(Larc/struct/FloatSeq;)V" },
	{ "addAll", "(Larc/struct/FloatSeq;II)V" },
	{ "addAll", "([F)V" },
	{ "addAll", "([FII)V" },
	{ "get", "(I)F" },
	{ "set", "(IF)V" },
	{ "incr", "(IF)V" },
	{ "mul", "(IF)V" },
	{ "insert", "(IF)V" },
	{ "swap", "(II)V" },
	{ "contains", "(F)Z" },
	{ "indexOf", "(F)I" },
	{ "lastIndexOf", "(F)I" },
	{ "removeValue", "(F)Z" },
	{ "removeIndex", "(I)F" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/struct/FloatSeq;)Z" },
	{ "pop", "()F" },
	{ "peek", "()F" },
	{ "first", "()F" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "sum", "()F" },
	{ "shrink", "()[F" },
	{ "ensureCapacity", "(I)[F" },
	{ "setSize", "(I)[F" },
	{ "resize", "(I)[F" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()F" },
	{ "toArray", "()[F" },
	{ "equals", "(Ljava/lang/Object;F)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_float, 1), offsetof(arc_struct_FloatSeq, F_items), "[F", 1 },
	{ "size", &class_int, offsetof(arc_struct_FloatSeq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_FloatSeq, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq_arc_struct_FloatSeq, 0, "(Larc/struct/FloatSeq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_FloatSeq_boolean_Array1_float_int_int, 0, "(Z[FII)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_FloatSeq_with_Array1_float_R_arc_struct_FloatSeq, 0, "([F)Larc/struct/FloatSeq;", 137 },
	{ "toVec2Array", (intptr_t) M_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq, VTABLE_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_FloatSeq_add_float, VTABLE_arc_struct_FloatSeq_add_float, "(F)V", 1 },
	{ "add", (intptr_t) M_arc_struct_FloatSeq_add_float_float, VTABLE_arc_struct_FloatSeq_add_float_float, "(FF)V", 1 },
	{ "add", (intptr_t) M_arc_struct_FloatSeq_add_float_float_float, VTABLE_arc_struct_FloatSeq_add_float_float_float, "(FFF)V", 1 },
	{ "add", (intptr_t) M_arc_struct_FloatSeq_add_float_float_float_float, VTABLE_arc_struct_FloatSeq_add_float_float_float_float, "(FFFF)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq, VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq, "(Larc/struct/FloatSeq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int, VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int, "(Larc/struct/FloatSeq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_FloatSeq_addAll_Array1_float, VTABLE_arc_struct_FloatSeq_addAll_Array1_float, "([F)V", 129 },
	{ "addAll", (intptr_t) M_arc_struct_FloatSeq_addAll_Array1_float_int_int, VTABLE_arc_struct_FloatSeq_addAll_Array1_float_int_int, "([FII)V", 1 },
	{ "get", (intptr_t) M_arc_struct_FloatSeq_get_int_R_float, VTABLE_arc_struct_FloatSeq_get_int_R_float, "(I)F", 1 },
	{ "set", (intptr_t) M_arc_struct_FloatSeq_set_int_float, VTABLE_arc_struct_FloatSeq_set_int_float, "(IF)V", 1 },
	{ "incr", (intptr_t) M_arc_struct_FloatSeq_incr_int_float, VTABLE_arc_struct_FloatSeq_incr_int_float, "(IF)V", 1 },
	{ "mul", (intptr_t) M_arc_struct_FloatSeq_mul_int_float, VTABLE_arc_struct_FloatSeq_mul_int_float, "(IF)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_FloatSeq_insert_int_float, VTABLE_arc_struct_FloatSeq_insert_int_float, "(IF)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_FloatSeq_swap_int_int, VTABLE_arc_struct_FloatSeq_swap_int_int, "(II)V", 1 },
	{ "contains", (intptr_t) M_arc_struct_FloatSeq_contains_float_R_boolean, VTABLE_arc_struct_FloatSeq_contains_float_R_boolean, "(F)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_FloatSeq_indexOf_float_R_int, VTABLE_arc_struct_FloatSeq_indexOf_float_R_int, "(F)I", 1 },
	{ "lastIndexOf", (intptr_t) M_arc_struct_FloatSeq_lastIndexOf_float_R_int, VTABLE_arc_struct_FloatSeq_lastIndexOf_float_R_int, "(F)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_FloatSeq_removeValue_float_R_boolean, VTABLE_arc_struct_FloatSeq_removeValue_float_R_boolean, "(F)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_FloatSeq_removeIndex_int_R_float, VTABLE_arc_struct_FloatSeq_removeIndex_int_R_float, "(I)F", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_FloatSeq_removeRange_int_int, VTABLE_arc_struct_FloatSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean, VTABLE_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean, "(Larc/struct/FloatSeq;)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_FloatSeq_pop_R_float, VTABLE_arc_struct_FloatSeq_pop_R_float, "()F", 1 },
	{ "peek", (intptr_t) M_arc_struct_FloatSeq_peek_R_float, VTABLE_arc_struct_FloatSeq_peek_R_float, "()F", 1 },
	{ "first", (intptr_t) M_arc_struct_FloatSeq_first_R_float, VTABLE_arc_struct_FloatSeq_first_R_float, "()F", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_FloatSeq_isEmpty_R_boolean, VTABLE_arc_struct_FloatSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_FloatSeq_clear, VTABLE_arc_struct_FloatSeq_clear, "()V", 1 },
	{ "sum", (intptr_t) M_arc_struct_FloatSeq_sum_R_float, VTABLE_arc_struct_FloatSeq_sum_R_float, "()F", 1 },
	{ "shrink", (intptr_t) M_arc_struct_FloatSeq_shrink_R_Array1_float, VTABLE_arc_struct_FloatSeq_shrink_R_Array1_float, "()[F", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float, VTABLE_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float, "(I)[F", 1 },
	{ "setSize", (intptr_t) M_arc_struct_FloatSeq_setSize_int_R_Array1_float, VTABLE_arc_struct_FloatSeq_setSize_int_R_Array1_float, "(I)[F", 1 },
	{ "resize", (intptr_t) M_arc_struct_FloatSeq_resize_int_R_Array1_float, VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float, "(I)[F", 4 },
	{ "sort", (intptr_t) M_arc_struct_FloatSeq_sort, VTABLE_arc_struct_FloatSeq_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_arc_struct_FloatSeq_reverse, VTABLE_arc_struct_FloatSeq_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_FloatSeq_shuffle, VTABLE_arc_struct_FloatSeq_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_FloatSeq_truncate_int, VTABLE_arc_struct_FloatSeq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_FloatSeq_random_R_float, VTABLE_arc_struct_FloatSeq_random_R_float, "()F", 1 },
	{ "toArray", (intptr_t) M_arc_struct_FloatSeq_toArray_R_Array1_float, VTABLE_arc_struct_FloatSeq_toArray_R_Array1_float, "()[F", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_FloatSeq_hashCode_R_int, VTABLE_arc_struct_FloatSeq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean, VTABLE_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean, "(Ljava/lang/Object;F)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_FloatSeq_toString_R_java_lang_String, VTABLE_arc_struct_FloatSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_arc_struct_FloatSeq{
		.nativeName = (intptr_t) "arc/struct/FloatSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_FloatSeq),
		.classVtable = (intptr_t) vtable_arc_struct_FloatSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_FloatSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_FloatSeq,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 50,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_FloatSeq = registerClass(&class_arc_struct_FloatSeq);

}
