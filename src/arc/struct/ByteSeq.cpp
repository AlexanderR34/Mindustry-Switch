#include "arc/struct/ByteSeq.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/ByteSeq.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_ByteSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ByteSeq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_ByteSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ByteSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_arc_struct_ByteSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ByteSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	init_arc_struct_ByteSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ByteSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ByteSeq_arc_struct_ByteSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(44);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ByteSeq_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_arc_struct_ByteSeq_boolean_Array1_byte_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ByteSeq_boolean_Array1_byte_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(64);
	init_arc_struct_ByteSeq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(65);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_ByteSeq_with_Array1_byte_R_arc_struct_ByteSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ByteSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	clinit_arc_struct_ByteSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ByteSeq);
	init_arc_struct_ByteSeq_Array1_byte(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_add_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(76);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_add_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(82);
	if ((((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(83);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(84);
	ARRAY_ACCESS(jbyte, (frame[3].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_add_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(90);
	if ((((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(91);
	ARRAY_ACCESS(jbyte, (frame[4].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(92);
	ARRAY_ACCESS(jbyte, (frame[4].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(93);
	ARRAY_ACCESS(jbyte, (frame[4].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_add_byte_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jbyte param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(99);
	if ((((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(100);
	ARRAY_ACCESS(jbyte, (frame[5].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(101);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ByteSeq_addAll_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_addAll_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(112);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(113);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ByteSeq_addAll_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_addAll_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_addAll_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	((func_arc_struct_ByteSeq_addAll_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ByteSeq_addAll_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_addAll_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	frame[5].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(124);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(125);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_arc_struct_ByteSeq_get_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_set_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_incr_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(140);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + (frame[2].i))));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_mul_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(145);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) * (frame[2].i))));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_insert_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(150);
	if ((frame[1].i) <= ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(152);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(153);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(154);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(156);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(158);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(162);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(163);
	if ((frame[2].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(165);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(166);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(167);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ByteSeq_contains_byte_R_boolean(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(171);
	frame[2].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(173);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) != (frame[1].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ByteSeq_indexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(180);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(181);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(180);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ByteSeq_lastIndexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(187);
	frame[3].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(188);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(187);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ByteSeq_removeValue_byte_R_boolean(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(194);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(195);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_arc_struct_ByteSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ByteSeq_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(194);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ByteSeq_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	if ((frame[1].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(207);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(209);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(210);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(212);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(218);
	if ((frame[2].i) < ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(219);
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
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(221);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(222);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(223);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(225);
	frame[5].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(226);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(227);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(226);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	frame[2].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(238);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_arc_struct_ByteSeq_get_int_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ByteSeq_get_int_R_byte])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(242);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(243);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_arc_struct_ByteSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ByteSeq_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(245);
	INST_IINC(2, -1);
	LINE_NUMBER(246);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(242);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(240);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(250);
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

jbyte M_arc_struct_ByteSeq_pop_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ByteSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((arc_struct_ByteSeq *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jbyte M_arc_struct_ByteSeq_peek_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jbyte M_arc_struct_ByteSeq_first_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ByteSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ByteSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_shrink_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, (frame[0].o), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(294);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(295);
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
	LINE_NUMBER(296);
	frame[2].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(297);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_setSize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(306);
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
	LINE_NUMBER(307);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_ByteSeq_resize_int_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(308);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_resize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(316);
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_byte_int_int(ctx, sp[0].o, (jint(0)), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(326);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(327);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(328);
	frame[6].i = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(329);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(330);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(326);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(336);
	frame[2].i = (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(338);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(339);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(340);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(336);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ByteSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(349);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_arc_struct_ByteSeq_random_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_toArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ByteSeq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(367);
	frame[2].i = (jint(1));
	LINE_NUMBER(368);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(369);
	frame[2].i = (((frame[2].i) * (31)) + ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(368);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(375);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(376);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ByteSeq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(377);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ByteSeq, (frame[1].o)));
	LINE_NUMBER(378);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(379);
	frame[3].i = ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(380);
	if ((frame[3].i) == ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(383);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(384);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i))) == ((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(383);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(391);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))));
	LINE_NUMBER(394);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(394);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ByteSeq:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	if (((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(405);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))));
	LINE_NUMBER(407);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_ByteSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(407);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ByteSeq[] {
	(void *) M_arc_struct_ByteSeq_hashCode_R_int,
	(void *) M_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ByteSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ByteSeq_add_byte,
	(void *) M_arc_struct_ByteSeq_add_byte_byte,
	(void *) M_arc_struct_ByteSeq_add_byte_byte_byte,
	(void *) M_arc_struct_ByteSeq_add_byte_byte_byte_byte,
	(void *) M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq,
	(void *) M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int,
	(void *) M_arc_struct_ByteSeq_addAll_Array1_byte,
	(void *) M_arc_struct_ByteSeq_addAll_Array1_byte_int_int,
	(void *) M_arc_struct_ByteSeq_get_int_R_byte,
	(void *) M_arc_struct_ByteSeq_set_int_byte,
	(void *) M_arc_struct_ByteSeq_incr_int_byte,
	(void *) M_arc_struct_ByteSeq_mul_int_byte,
	(void *) M_arc_struct_ByteSeq_insert_int_byte,
	(void *) M_arc_struct_ByteSeq_swap_int_int,
	(void *) M_arc_struct_ByteSeq_contains_byte_R_boolean,
	(void *) M_arc_struct_ByteSeq_indexOf_byte_R_int,
	(void *) M_arc_struct_ByteSeq_lastIndexOf_byte_R_int,
	(void *) M_arc_struct_ByteSeq_removeValue_byte_R_boolean,
	(void *) M_arc_struct_ByteSeq_removeIndex_int_R_int,
	(void *) M_arc_struct_ByteSeq_removeRange_int_int,
	(void *) M_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean,
	(void *) M_arc_struct_ByteSeq_pop_R_byte,
	(void *) M_arc_struct_ByteSeq_peek_R_byte,
	(void *) M_arc_struct_ByteSeq_first_R_byte,
	(void *) M_arc_struct_ByteSeq_isEmpty_R_boolean,
	(void *) M_arc_struct_ByteSeq_clear,
	(void *) M_arc_struct_ByteSeq_shrink_R_Array1_byte,
	(void *) M_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte,
	(void *) M_arc_struct_ByteSeq_setSize_int_R_Array1_byte,
	(void *) M_arc_struct_ByteSeq_resize_int_R_Array1_byte,
	(void *) M_arc_struct_ByteSeq_sort,
	(void *) M_arc_struct_ByteSeq_reverse,
	(void *) M_arc_struct_ByteSeq_shuffle,
	(void *) M_arc_struct_ByteSeq_truncate_int,
	(void *) M_arc_struct_ByteSeq_random_R_byte,
	(void *) M_arc_struct_ByteSeq_toArray_R_Array1_byte,
	(void *) M_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(B)V" },
	{ "add", "(BB)V" },
	{ "add", "(BBB)V" },
	{ "add", "(BBBB)V" },
	{ "addAll", "(Larc/struct/ByteSeq;)V" },
	{ "addAll", "(Larc/struct/ByteSeq;II)V" },
	{ "addAll", "([B)V" },
	{ "addAll", "([BII)V" },
	{ "get", "(I)B" },
	{ "set", "(IB)V" },
	{ "incr", "(IB)V" },
	{ "mul", "(IB)V" },
	{ "insert", "(IB)V" },
	{ "swap", "(II)V" },
	{ "contains", "(B)Z" },
	{ "indexOf", "(B)I" },
	{ "lastIndexOf", "(B)I" },
	{ "removeValue", "(B)Z" },
	{ "removeIndex", "(I)I" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/struct/ByteSeq;)Z" },
	{ "pop", "()B" },
	{ "peek", "()B" },
	{ "first", "()B" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[B" },
	{ "ensureCapacity", "(I)[B" },
	{ "setSize", "(I)[B" },
	{ "resize", "(I)[B" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()B" },
	{ "toArray", "()[B" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_byte, 1), offsetof(arc_struct_ByteSeq, F_items), "[B", 1 },
	{ "size", &class_int, offsetof(arc_struct_ByteSeq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_ByteSeq, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq_arc_struct_ByteSeq, 0, "(Larc/struct/ByteSeq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq_Array1_byte, 0, "([B)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ByteSeq_boolean_Array1_byte_int_int, 0, "(Z[BII)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_ByteSeq_with_Array1_byte_R_arc_struct_ByteSeq, 0, "([B)Larc/struct/ByteSeq;", 137 },
	{ "add", (intptr_t) M_arc_struct_ByteSeq_add_byte, VTABLE_arc_struct_ByteSeq_add_byte, "(B)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ByteSeq_add_byte_byte, VTABLE_arc_struct_ByteSeq_add_byte_byte, "(BB)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ByteSeq_add_byte_byte_byte, VTABLE_arc_struct_ByteSeq_add_byte_byte_byte, "(BBB)V", 1 },
	{ "add", (intptr_t) M_arc_struct_ByteSeq_add_byte_byte_byte_byte, VTABLE_arc_struct_ByteSeq_add_byte_byte_byte_byte, "(BBBB)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq, VTABLE_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq, "(Larc/struct/ByteSeq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int, VTABLE_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int, "(Larc/struct/ByteSeq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ByteSeq_addAll_Array1_byte, VTABLE_arc_struct_ByteSeq_addAll_Array1_byte, "([B)V", 129 },
	{ "addAll", (intptr_t) M_arc_struct_ByteSeq_addAll_Array1_byte_int_int, VTABLE_arc_struct_ByteSeq_addAll_Array1_byte_int_int, "([BII)V", 1 },
	{ "get", (intptr_t) M_arc_struct_ByteSeq_get_int_R_byte, VTABLE_arc_struct_ByteSeq_get_int_R_byte, "(I)B", 1 },
	{ "set", (intptr_t) M_arc_struct_ByteSeq_set_int_byte, VTABLE_arc_struct_ByteSeq_set_int_byte, "(IB)V", 1 },
	{ "incr", (intptr_t) M_arc_struct_ByteSeq_incr_int_byte, VTABLE_arc_struct_ByteSeq_incr_int_byte, "(IB)V", 1 },
	{ "mul", (intptr_t) M_arc_struct_ByteSeq_mul_int_byte, VTABLE_arc_struct_ByteSeq_mul_int_byte, "(IB)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_ByteSeq_insert_int_byte, VTABLE_arc_struct_ByteSeq_insert_int_byte, "(IB)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_ByteSeq_swap_int_int, VTABLE_arc_struct_ByteSeq_swap_int_int, "(II)V", 1 },
	{ "contains", (intptr_t) M_arc_struct_ByteSeq_contains_byte_R_boolean, VTABLE_arc_struct_ByteSeq_contains_byte_R_boolean, "(B)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_ByteSeq_indexOf_byte_R_int, VTABLE_arc_struct_ByteSeq_indexOf_byte_R_int, "(B)I", 1 },
	{ "lastIndexOf", (intptr_t) M_arc_struct_ByteSeq_lastIndexOf_byte_R_int, VTABLE_arc_struct_ByteSeq_lastIndexOf_byte_R_int, "(B)I", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_ByteSeq_removeValue_byte_R_boolean, VTABLE_arc_struct_ByteSeq_removeValue_byte_R_boolean, "(B)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_ByteSeq_removeIndex_int_R_int, VTABLE_arc_struct_ByteSeq_removeIndex_int_R_int, "(I)I", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_ByteSeq_removeRange_int_int, VTABLE_arc_struct_ByteSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean, VTABLE_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean, "(Larc/struct/ByteSeq;)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_ByteSeq_pop_R_byte, VTABLE_arc_struct_ByteSeq_pop_R_byte, "()B", 1 },
	{ "peek", (intptr_t) M_arc_struct_ByteSeq_peek_R_byte, VTABLE_arc_struct_ByteSeq_peek_R_byte, "()B", 1 },
	{ "first", (intptr_t) M_arc_struct_ByteSeq_first_R_byte, VTABLE_arc_struct_ByteSeq_first_R_byte, "()B", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ByteSeq_isEmpty_R_boolean, VTABLE_arc_struct_ByteSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_ByteSeq_clear, VTABLE_arc_struct_ByteSeq_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ByteSeq_shrink_R_Array1_byte, VTABLE_arc_struct_ByteSeq_shrink_R_Array1_byte, "()[B", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte, VTABLE_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte, "(I)[B", 1 },
	{ "setSize", (intptr_t) M_arc_struct_ByteSeq_setSize_int_R_Array1_byte, VTABLE_arc_struct_ByteSeq_setSize_int_R_Array1_byte, "(I)[B", 1 },
	{ "resize", (intptr_t) M_arc_struct_ByteSeq_resize_int_R_Array1_byte, VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte, "(I)[B", 4 },
	{ "sort", (intptr_t) M_arc_struct_ByteSeq_sort, VTABLE_arc_struct_ByteSeq_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_arc_struct_ByteSeq_reverse, VTABLE_arc_struct_ByteSeq_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_ByteSeq_shuffle, VTABLE_arc_struct_ByteSeq_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_ByteSeq_truncate_int, VTABLE_arc_struct_ByteSeq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_ByteSeq_random_R_byte, VTABLE_arc_struct_ByteSeq_random_R_byte, "()B", 1 },
	{ "toArray", (intptr_t) M_arc_struct_ByteSeq_toArray_R_Array1_byte, VTABLE_arc_struct_ByteSeq_toArray_R_Array1_byte, "()[B", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_ByteSeq_hashCode_R_int, VTABLE_arc_struct_ByteSeq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ByteSeq_toString_R_java_lang_String, VTABLE_arc_struct_ByteSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_arc_struct_ByteSeq{
		.nativeName = (intptr_t) "arc/struct/ByteSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ByteSeq),
		.classVtable = (intptr_t) vtable_arc_struct_ByteSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_ByteSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ByteSeq,
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
		.methodCount = 47,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ByteSeq = registerClass(&class_arc_struct_ByteSeq);

}
