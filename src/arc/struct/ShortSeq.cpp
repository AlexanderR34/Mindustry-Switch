#include "arc/struct/ShortSeq.h"
#include "arc/struct/ShortSeq.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_ShortSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ShortSeq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_ShortSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ShortSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_arc_struct_ShortSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ShortSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	init_arc_struct_ShortSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ShortSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[2].i));
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ShortSeq_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(44);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ShortSeq_Array1_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_arc_struct_ShortSeq_boolean_Array1_short_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ShortSeq_boolean_Array1_short_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(64);
	init_arc_struct_ShortSeq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(65);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_ShortSeq_with_Array1_short_R_arc_struct_ShortSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ShortSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	clinit_arc_struct_ShortSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq_Array1_short(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort((frame[1].i)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_add_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(83);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_add_short_short(jcontext ctx, jobject self, jshort param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(89);
	if ((((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(90);
	ARRAY_ACCESS(jshort, (frame[3].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(91);
	ARRAY_ACCESS(jshort, (frame[3].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_add_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(97);
	if ((((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(98);
	ARRAY_ACCESS(jshort, (frame[4].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(99);
	ARRAY_ACCESS(jshort, (frame[4].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(100);
	ARRAY_ACCESS(jshort, (frame[4].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_add_short_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(106);
	if ((((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(107);
	ARRAY_ACCESS(jshort, (frame[5].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(108);
	ARRAY_ACCESS(jshort, (frame[5].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(109);
	ARRAY_ACCESS(jshort, (frame[5].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(110);
	ARRAY_ACCESS(jshort, (frame[5].o), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ShortSeq_addAll_Array1_short_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_addAll_Array1_short_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(119);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(120);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ShortSeq_addAll_Array1_short_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_addAll_Array1_short_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_addAll_Array1_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	((func_arc_struct_ShortSeq_addAll_Array1_short_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ShortSeq_addAll_Array1_short_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_addAll_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(130);
	frame[5].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(131);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(132);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort M_arc_struct_ShortSeq_get_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(137);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_set_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_incr_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(147);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort((((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) + (frame[2].i))));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_mul_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(152);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort((((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) * (frame[2].i))));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_insert_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(157);
	if ((frame[1].i) <= ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(159);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(160);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(161);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(163);
	ARRAY_ACCESS(jshort, (frame[3].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(165);
	ARRAY_ACCESS(jshort, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(169);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(170);
	if ((frame[2].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(172);
	frame[4].i = ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(173);
	ARRAY_ACCESS(jshort, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(174);
	ARRAY_ACCESS(jshort, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ShortSeq_contains_short_R_boolean(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(178);
	frame[2].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(180);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) != (frame[1].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ShortSeq_indexOf_short_R_int(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(187);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(188);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(187);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ShortSeq_lastIndexOf_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(194);
	frame[3].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(195);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(194);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ShortSeq_removeValue_short_R_boolean(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(201);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(202);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(201);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jshort M_arc_struct_ShortSeq_removeIndex_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	if ((frame[1].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(214);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(216);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(217);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(219);
	ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(225);
	if ((frame[2].i) < ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(226);
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
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(228);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(229);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(230);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(232);
	frame[5].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(233);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(234);
	ARRAY_ACCESS(jshort, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jint)ARRAY_ACCESS(jshort, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(233);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	frame[2].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(245);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(247);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_get_int_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ShortSeq_get_int_R_short])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(249);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(250);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jshort, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(251);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(252);
	INST_IINC(2, -1);
	LINE_NUMBER(253);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(249);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(247);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(257);
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

jshort M_arc_struct_ShortSeq_pop_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((arc_struct_ShortSeq *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jshort M_arc_struct_ShortSeq_peek_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jshort M_arc_struct_ShortSeq_first_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ShortSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ShortSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_shrink_R_Array1_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, (frame[0].o), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(301);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
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
	LINE_NUMBER(303);
	frame[2].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(304);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_setSize_int_R_Array1_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
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
	LINE_NUMBER(314);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_resize_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(315);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_resize_int_R_Array1_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(322);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(323);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_short_int_int(ctx, sp[0].o, (jint(0)), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(333);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(334);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(335);
	frame[6].i = ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(336);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(337);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(333);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(343);
	frame[2].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(345);
	frame[4].i = ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(346);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(347);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(343);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ShortSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(356);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jshort M_arc_struct_ShortSeq_random_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_toArray_R_Array1_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject) createArray(ctx, &class_short, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ShortSeq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(374);
	frame[2].i = (jint(1));
	LINE_NUMBER(375);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(376);
	frame[2].i = (((frame[2].i) * (31)) + ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(375);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(381);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(382);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(383);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ShortSeq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(384);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ShortSeq, (frame[1].o)));
	LINE_NUMBER(385);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(386);
	frame[3].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(387);
	if ((frame[3].i) == ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(390);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[2].o)))->F_items;
	if (temp0 == ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(390);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(398);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (jint(0)))));
	LINE_NUMBER(401);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(401);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ShortSeq:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	if (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(412);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (jint(0)))));
	LINE_NUMBER(414);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(414);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ShortSeq[] {
	(void *) M_arc_struct_ShortSeq_hashCode_R_int,
	(void *) M_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ShortSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ShortSeq_add_int,
	(void *) M_arc_struct_ShortSeq_add_short,
	(void *) M_arc_struct_ShortSeq_add_short_short,
	(void *) M_arc_struct_ShortSeq_add_short_short_short,
	(void *) M_arc_struct_ShortSeq_add_short_short_short_short,
	(void *) M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq,
	(void *) M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int,
	(void *) M_arc_struct_ShortSeq_addAll_Array1_short,
	(void *) M_arc_struct_ShortSeq_addAll_Array1_short_int_int,
	(void *) M_arc_struct_ShortSeq_get_int_R_short,
	(void *) M_arc_struct_ShortSeq_set_int_short,
	(void *) M_arc_struct_ShortSeq_incr_int_short,
	(void *) M_arc_struct_ShortSeq_mul_int_short,
	(void *) M_arc_struct_ShortSeq_insert_int_short,
	(void *) M_arc_struct_ShortSeq_swap_int_int,
	(void *) M_arc_struct_ShortSeq_contains_short_R_boolean,
	(void *) M_arc_struct_ShortSeq_indexOf_short_R_int,
	(void *) M_arc_struct_ShortSeq_lastIndexOf_char_R_int,
	(void *) M_arc_struct_ShortSeq_removeValue_short_R_boolean,
	(void *) M_arc_struct_ShortSeq_removeIndex_int_R_short,
	(void *) M_arc_struct_ShortSeq_removeRange_int_int,
	(void *) M_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean,
	(void *) M_arc_struct_ShortSeq_pop_R_short,
	(void *) M_arc_struct_ShortSeq_peek_R_short,
	(void *) M_arc_struct_ShortSeq_first_R_short,
	(void *) M_arc_struct_ShortSeq_isEmpty_R_boolean,
	(void *) M_arc_struct_ShortSeq_clear,
	(void *) M_arc_struct_ShortSeq_shrink_R_Array1_short,
	(void *) M_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short,
	(void *) M_arc_struct_ShortSeq_setSize_int_R_Array1_short,
	(void *) M_arc_struct_ShortSeq_resize_int_R_Array1_short,
	(void *) M_arc_struct_ShortSeq_sort,
	(void *) M_arc_struct_ShortSeq_reverse,
	(void *) M_arc_struct_ShortSeq_shuffle,
	(void *) M_arc_struct_ShortSeq_truncate_int,
	(void *) M_arc_struct_ShortSeq_random_R_short,
	(void *) M_arc_struct_ShortSeq_toArray_R_Array1_short,
	(void *) M_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(I)V" },
	{ "add", "(S)V" },
	{ "add", "(SS)V" },
	{ "add", "(SSS)V" },
	{ "add", "(SSSS)V" },
	{ "addAll", "(Larc/struct/ShortSeq;)V" },
	{ "addAll", "(Larc/struct/ShortSeq;II)V" },
	{ "addAll", "([S)V" },
	{ "addAll", "([SII)V" },
	{ "get", "(I)S" },
	{ "set", "(IS)V" },
	{ "incr", "(IS)V" },
	{ "mul", "(IS)V" },
	{ "insert", "(IS)V" },
	{ "swap", "(II)V" },
	{ "contains", "(S)Z" },
	{ "indexOf", "(S)I" },
	{ "lastIndexOf", "(C)I" },
	{ "removeValue", "(S)Z" },
	{ "removeIndex", "(I)S" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/struct/ShortSeq;)Z" },
	{ "pop", "()S" },
	{ "peek", "()S" },
	{ "first", "()S" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[S" },
	{ "ensureCapacity", "(I)[S" },
	{ "setSize", "(I)[S" },
	{ "resize", "(I)[S" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()S" },
	{ "toArray", "()[S" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_short, 1), offsetof(arc_struct_ShortSeq, F_items), "[S", 1 },
	{ "size", &class_int, offsetof(arc_struct_ShortSeq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_ShortSeq, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq_arc_struct_ShortSeq, 0, "(Larc/struct/ShortSeq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq_Array1_short, 0, "([S)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ShortSeq_boolean_Array1_short_int_int, 0, "(Z[SII)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_ShortSeq_with_Array1_short_R_arc_struct_ShortSeq, 0, "([S)Larc/struct/ShortSeq;", 137 },
	{ "add", (intptr_t) M_arc_struct_ShortSeq_add_int, VTABLE_arc_struct_ShortSeq_add_int, "(I)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ShortSeq_add_short, VTABLE_arc_struct_ShortSeq_add_short, "(S)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ShortSeq_add_short_short, VTABLE_arc_struct_ShortSeq_add_short_short, "(SS)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ShortSeq_add_short_short_short, VTABLE_arc_struct_ShortSeq_add_short_short_short, "(SSS)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ShortSeq_add_short_short_short_short, VTABLE_arc_struct_ShortSeq_add_short_short_short_short, "(SSSS)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq, VTABLE_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq, "(Larc/struct/ShortSeq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int, VTABLE_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int, "(Larc/struct/ShortSeq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ShortSeq_addAll_Array1_short, VTABLE_arc_struct_ShortSeq_addAll_Array1_short, "([S)V", 129 },
	{ "addAll", (intptr_t) M_arc_struct_ShortSeq_addAll_Array1_short_int_int, VTABLE_arc_struct_ShortSeq_addAll_Array1_short_int_int, "([SII)V", 1 },
	{ "get", (intptr_t) M_arc_struct_ShortSeq_get_int_R_short, VTABLE_arc_struct_ShortSeq_get_int_R_short, "(I)S", 1 },
	{ "set", (intptr_t) M_arc_struct_ShortSeq_set_int_short, VTABLE_arc_struct_ShortSeq_set_int_short, "(IS)V", 1 },
	{ "incr", (intptr_t) M_arc_struct_ShortSeq_incr_int_short, VTABLE_arc_struct_ShortSeq_incr_int_short, "(IS)V", 1 },
	{ "mul", (intptr_t) M_arc_struct_ShortSeq_mul_int_short, VTABLE_arc_struct_ShortSeq_mul_int_short, "(IS)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_ShortSeq_insert_int_short, VTABLE_arc_struct_ShortSeq_insert_int_short, "(IS)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_ShortSeq_swap_int_int, VTABLE_arc_struct_ShortSeq_swap_int_int, "(II)V", 1 },
	{ "contains", (intptr_t) M_arc_struct_ShortSeq_contains_short_R_boolean, VTABLE_arc_struct_ShortSeq_contains_short_R_boolean, "(S)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_ShortSeq_indexOf_short_R_int, VTABLE_arc_struct_ShortSeq_indexOf_short_R_int, "(S)I", 1 },
	{ "lastIndexOf", (intptr_t) M_arc_struct_ShortSeq_lastIndexOf_char_R_int, VTABLE_arc_struct_ShortSeq_lastIndexOf_char_R_int, "(C)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_ShortSeq_removeValue_short_R_boolean, VTABLE_arc_struct_ShortSeq_removeValue_short_R_boolean, "(S)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_ShortSeq_removeIndex_int_R_short, VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short, "(I)S", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_ShortSeq_removeRange_int_int, VTABLE_arc_struct_ShortSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean, VTABLE_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean, "(Larc/struct/ShortSeq;)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_ShortSeq_pop_R_short, VTABLE_arc_struct_ShortSeq_pop_R_short, "()S", 1 },
	{ "peek", (intptr_t) M_arc_struct_ShortSeq_peek_R_short, VTABLE_arc_struct_ShortSeq_peek_R_short, "()S", 1 },
	{ "first", (intptr_t) M_arc_struct_ShortSeq_first_R_short, VTABLE_arc_struct_ShortSeq_first_R_short, "()S", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ShortSeq_isEmpty_R_boolean, VTABLE_arc_struct_ShortSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_ShortSeq_clear, VTABLE_arc_struct_ShortSeq_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ShortSeq_shrink_R_Array1_short, VTABLE_arc_struct_ShortSeq_shrink_R_Array1_short, "()[S", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short, VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short, "(I)[S", 1 },
	{ "setSize", (intptr_t) M_arc_struct_ShortSeq_setSize_int_R_Array1_short, VTABLE_arc_struct_ShortSeq_setSize_int_R_Array1_short, "(I)[S", 1 },
	{ "resize", (intptr_t) M_arc_struct_ShortSeq_resize_int_R_Array1_short, VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short, "(I)[S", 4 },
	{ "sort", (intptr_t) M_arc_struct_ShortSeq_sort, VTABLE_arc_struct_ShortSeq_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_arc_struct_ShortSeq_reverse, VTABLE_arc_struct_ShortSeq_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_ShortSeq_shuffle, VTABLE_arc_struct_ShortSeq_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_ShortSeq_truncate_int, VTABLE_arc_struct_ShortSeq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_ShortSeq_random_R_short, VTABLE_arc_struct_ShortSeq_random_R_short, "()S", 1 },
	{ "toArray", (intptr_t) M_arc_struct_ShortSeq_toArray_R_Array1_short, VTABLE_arc_struct_ShortSeq_toArray_R_Array1_short, "()[S", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_ShortSeq_hashCode_R_int, VTABLE_arc_struct_ShortSeq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ShortSeq_toString_R_java_lang_String, VTABLE_arc_struct_ShortSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_arc_struct_ShortSeq{
		.nativeName = (intptr_t) "arc/struct/ShortSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ShortSeq),
		.classVtable = (intptr_t) vtable_arc_struct_ShortSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_ShortSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ShortSeq,
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
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ShortSeq = registerClass(&class_arc_struct_ShortSeq);

}
