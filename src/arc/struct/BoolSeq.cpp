#include "arc/struct/BoolSeq.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/BoolSeq.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_BoolSeq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_BoolSeq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_BoolSeq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_BoolSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_struct_BoolSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BoolSeq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	init_arc_struct_BoolSeq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BoolSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (frame[2].i));
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BoolSeq_arc_struct_BoolSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(46);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BoolSeq_Array1_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	init_arc_struct_BoolSeq_boolean_Array1_boolean_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_BoolSeq_boolean_Array1_boolean_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(66);
	init_arc_struct_BoolSeq_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(67);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(68);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_BoolSeq_with_Array1_boolean_R_arc_struct_BoolSeq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BoolSeq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	clinit_arc_struct_BoolSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_BoolSeq);
	init_arc_struct_BoolSeq_Array1_boolean(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_add_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(78);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_add_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(84);
	if ((((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(85);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(86);
	ARRAY_ACCESS(jbyte, (frame[3].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_add_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(92);
	if ((((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(93);
	ARRAY_ACCESS(jbyte, (frame[4].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(94);
	ARRAY_ACCESS(jbyte, (frame[4].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(95);
	ARRAY_ACCESS(jbyte, (frame[4].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(101);
	if ((((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(102);
	ARRAY_ACCESS(jbyte, (frame[5].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(104);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(105);
	ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_BoolSeq_addAll_Array1_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(114);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(115);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_BoolSeq_addAll_Array1_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_addAll_Array1_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	((func_arc_struct_BoolSeq_addAll_Array1_boolean_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_addAll_Array1_boolean_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(125);
	frame[5].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(126);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(127);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_get_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(132);
	if ((frame[1].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	if ((frame[1].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_insert_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	if ((frame[1].i) <= ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(144);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(145);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(146);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(148);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(150);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(154);
	if ((frame[1].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(155);
	if ((frame[2].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(157);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(158);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(159);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_removeIndex_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(164);
	if ((frame[1].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(166);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(168);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(169);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(171);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(177);
	if ((frame[2].i) < ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(178);
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
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(180);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(181);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(182);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(184);
	frame[5].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(185);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(186);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(185);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	frame[2].i = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(197);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(199);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_arc_struct_BoolSeq_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_BoolSeq_get_int_R_boolean])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(201);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(202);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_arc_struct_BoolSeq_removeIndex_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_BoolSeq_removeIndex_int_R_boolean])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(204);
	INST_IINC(2, -1);
	LINE_NUMBER(205);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(201);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(199);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(209);
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

jbool M_arc_struct_BoolSeq_pop_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_BoolSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((arc_struct_BoolSeq *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_peek_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_first_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_BoolSeq_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_shrink_R_Array1_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, (frame[0].o), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(253);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(254);
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
	LINE_NUMBER(255);
	frame[2].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(256);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_setSize_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(265);
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
	LINE_NUMBER(266);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_resize_int_R_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(267);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_resize_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(274);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(275);
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(281);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(282);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(283);
	frame[6].i = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(284);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(285);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(281);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(291);
	frame[2].i = (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(293);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(294);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(295);
	ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(291);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_BoolSeq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:truncate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(304);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_random_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_toArray_R_Array1_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_BoolSeq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(322);
	frame[2].i = (jint(1));
	LINE_NUMBER(323);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(324);
	jint temp0 = (frame[2].i) * (31);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i))) == 0) goto label_8;
	}
	INST_SIPUSH(1231);
	goto label_9;
label_8:;
	INST_SIPUSH(1237);
label_9:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(323);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(329);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(330);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(331);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_BoolSeq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(332);
	frame[2].o = (checkCast(ctx, &class_arc_struct_BoolSeq, (frame[1].o)));
	LINE_NUMBER(333);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(334);
	frame[3].i = ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(335);
	if ((frame[3].i) == ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(338);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(339);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i))) == ((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(338);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(346);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))));
	LINE_NUMBER(349);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(349);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BoolSeq:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	if (((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(360);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))));
	LINE_NUMBER(362);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_BoolSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(362);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_BoolSeq[] {
	(void *) M_arc_struct_BoolSeq_hashCode_R_int,
	(void *) M_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_BoolSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_BoolSeq_add_boolean,
	(void *) M_arc_struct_BoolSeq_add_boolean_boolean,
	(void *) M_arc_struct_BoolSeq_add_boolean_boolean_boolean,
	(void *) M_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean,
	(void *) M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq,
	(void *) M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int,
	(void *) M_arc_struct_BoolSeq_addAll_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_addAll_Array1_boolean_int_int,
	(void *) M_arc_struct_BoolSeq_get_int_R_boolean,
	(void *) M_arc_struct_BoolSeq_set_int_boolean,
	(void *) M_arc_struct_BoolSeq_insert_int_boolean,
	(void *) M_arc_struct_BoolSeq_swap_int_int,
	(void *) M_arc_struct_BoolSeq_removeIndex_int_R_boolean,
	(void *) M_arc_struct_BoolSeq_removeRange_int_int,
	(void *) M_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean,
	(void *) M_arc_struct_BoolSeq_pop_R_boolean,
	(void *) M_arc_struct_BoolSeq_peek_R_boolean,
	(void *) M_arc_struct_BoolSeq_first_R_boolean,
	(void *) M_arc_struct_BoolSeq_isEmpty_R_boolean,
	(void *) M_arc_struct_BoolSeq_clear,
	(void *) M_arc_struct_BoolSeq_shrink_R_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_setSize_int_R_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_resize_int_R_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_reverse,
	(void *) M_arc_struct_BoolSeq_shuffle,
	(void *) M_arc_struct_BoolSeq_truncate_int,
	(void *) M_arc_struct_BoolSeq_random_R_boolean,
	(void *) M_arc_struct_BoolSeq_toArray_R_Array1_boolean,
	(void *) M_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(Z)V" },
	{ "add", "(ZZ)V" },
	{ "add", "(ZZZ)V" },
	{ "add", "(ZZZZ)V" },
	{ "addAll", "(Larc/struct/BoolSeq;)V" },
	{ "addAll", "(Larc/struct/BoolSeq;II)V" },
	{ "addAll", "([Z)V" },
	{ "addAll", "([ZII)V" },
	{ "get", "(I)Z" },
	{ "set", "(IZ)V" },
	{ "insert", "(IZ)V" },
	{ "swap", "(II)V" },
	{ "removeIndex", "(I)Z" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/struct/BoolSeq;)Z" },
	{ "pop", "()Z" },
	{ "peek", "()Z" },
	{ "first", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[Z" },
	{ "ensureCapacity", "(I)[Z" },
	{ "setSize", "(I)[Z" },
	{ "resize", "(I)[Z" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()Z" },
	{ "toArray", "()[Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_boolean, 1), offsetof(arc_struct_BoolSeq, F_items), "[Z", 1 },
	{ "size", &class_int, offsetof(arc_struct_BoolSeq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_BoolSeq, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq_arc_struct_BoolSeq, 0, "(Larc/struct/BoolSeq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq_Array1_boolean, 0, "([Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_BoolSeq_boolean_Array1_boolean_int_int, 0, "(Z[ZII)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_BoolSeq_with_Array1_boolean_R_arc_struct_BoolSeq, 0, "([Z)Larc/struct/BoolSeq;", 137 },
	{ "add", (intptr_t) M_arc_struct_BoolSeq_add_boolean, VTABLE_arc_struct_BoolSeq_add_boolean, "(Z)V", 1 },
	{ "add", (intptr_t) M_arc_struct_BoolSeq_add_boolean_boolean, VTABLE_arc_struct_BoolSeq_add_boolean_boolean, "(ZZ)V", 1 },
	{ "add", (intptr_t) M_arc_struct_BoolSeq_add_boolean_boolean_boolean, VTABLE_arc_struct_BoolSeq_add_boolean_boolean_boolean, "(ZZZ)V", 1 },
	{ "add", (intptr_t) M_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean, VTABLE_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean, "(ZZZZ)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq, VTABLE_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq, "(Larc/struct/BoolSeq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int, VTABLE_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int, "(Larc/struct/BoolSeq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_BoolSeq_addAll_Array1_boolean, VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean, "([Z)V", 129 },
	{ "addAll", (intptr_t) M_arc_struct_BoolSeq_addAll_Array1_boolean_int_int, VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean_int_int, "([ZII)V", 1 },
	{ "get", (intptr_t) M_arc_struct_BoolSeq_get_int_R_boolean, VTABLE_arc_struct_BoolSeq_get_int_R_boolean, "(I)Z", 1 },
	{ "set", (intptr_t) M_arc_struct_BoolSeq_set_int_boolean, VTABLE_arc_struct_BoolSeq_set_int_boolean, "(IZ)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_BoolSeq_insert_int_boolean, VTABLE_arc_struct_BoolSeq_insert_int_boolean, "(IZ)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_BoolSeq_swap_int_int, VTABLE_arc_struct_BoolSeq_swap_int_int, "(II)V", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_BoolSeq_removeIndex_int_R_boolean, VTABLE_arc_struct_BoolSeq_removeIndex_int_R_boolean, "(I)Z", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_BoolSeq_removeRange_int_int, VTABLE_arc_struct_BoolSeq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean, VTABLE_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean, "(Larc/struct/BoolSeq;)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_BoolSeq_pop_R_boolean, VTABLE_arc_struct_BoolSeq_pop_R_boolean, "()Z", 1 },
	{ "peek", (intptr_t) M_arc_struct_BoolSeq_peek_R_boolean, VTABLE_arc_struct_BoolSeq_peek_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_arc_struct_BoolSeq_first_R_boolean, VTABLE_arc_struct_BoolSeq_first_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_BoolSeq_isEmpty_R_boolean, VTABLE_arc_struct_BoolSeq_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_BoolSeq_clear, VTABLE_arc_struct_BoolSeq_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_BoolSeq_shrink_R_Array1_boolean, VTABLE_arc_struct_BoolSeq_shrink_R_Array1_boolean, "()[Z", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean, VTABLE_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean, "(I)[Z", 1 },
	{ "setSize", (intptr_t) M_arc_struct_BoolSeq_setSize_int_R_Array1_boolean, VTABLE_arc_struct_BoolSeq_setSize_int_R_Array1_boolean, "(I)[Z", 1 },
	{ "resize", (intptr_t) M_arc_struct_BoolSeq_resize_int_R_Array1_boolean, VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean, "(I)[Z", 4 },
	{ "reverse", (intptr_t) M_arc_struct_BoolSeq_reverse, VTABLE_arc_struct_BoolSeq_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_BoolSeq_shuffle, VTABLE_arc_struct_BoolSeq_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_BoolSeq_truncate_int, VTABLE_arc_struct_BoolSeq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_BoolSeq_random_R_boolean, VTABLE_arc_struct_BoolSeq_random_R_boolean, "()Z", 1 },
	{ "toArray", (intptr_t) M_arc_struct_BoolSeq_toArray_R_Array1_boolean, VTABLE_arc_struct_BoolSeq_toArray_R_Array1_boolean, "()[Z", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_BoolSeq_hashCode_R_int, VTABLE_arc_struct_BoolSeq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_BoolSeq_toString_R_java_lang_String, VTABLE_arc_struct_BoolSeq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_arc_struct_BoolSeq{
		.nativeName = (intptr_t) "arc/struct/BoolSeq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_BoolSeq),
		.classVtable = (intptr_t) vtable_arc_struct_BoolSeq,
		.staticInitializer = (intptr_t) clinit_arc_struct_BoolSeq,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_BoolSeq,
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
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_BoolSeq = registerClass(&class_arc_struct_BoolSeq);

}
