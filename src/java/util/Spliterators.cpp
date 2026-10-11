#include "java/util/Spliterators.h"
#include "java/util/Spliterator.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/Spliterators_IteratorSpliterator.h"
#include "java/util/Spliterators_IntIteratorSpliterator.h"
#include "java/util/PrimitiveIterator_OfLong.h"
#include "java/util/Collection.h"
#include "java/util/Spliterators.h"
#include "java/lang/String.h"
#include "java/util/PrimitiveIterator_OfInt.h"
#include "java/util/Spliterator_OfDouble.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/util/Spliterators_EmptySpliterator_OfInt.h"
#include "java/util/Spliterators_AbstractDoubleSpliterator.h"
#include "java/util/Spliterators_LongArraySpliterator.h"
#include "java/util/Spliterators_4Adapter.h"
#include "java/util/Spliterators_3Adapter.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterators_LongIteratorSpliterator.h"
#include "java/util/Spliterators_AbstractLongSpliterator.h"
#include "java/util/Spliterators_AbstractIntSpliterator.h"
#include "java/util/Spliterators_1Adapter.h"
#include "java/util/Spliterators_2Adapter.h"
#include "java/util/Spliterators_EmptySpliterator_OfLong.h"
#include "java/util/Spliterators_IntArraySpliterator.h"
#include "java/util/Spliterators_DoubleArraySpliterator.h"
#include "java/util/PrimitiveIterator_OfDouble.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators_ArraySpliterator.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Spliterators_DoubleIteratorSpliterator.h"
#include "java/util/Spliterators_AbstractSpliterator.h"
#include "java/util/Objects.h"
#include "java/util/Spliterators_EmptySpliterator_OfRef.h"
#include "java/util/Spliterators_EmptySpliterator_OfDouble.h"

extern "C" {

jobject SF_java_util_Spliterators_EMPTY_SPLITERATOR;
jobject SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR;
jobject SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR;
jobject SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR;

void mark_java_util_Spliterators(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Spliterators_EMPTY_SPLITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Spliterators_EMPTY_SPLITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Spliterators_EMPTY_SPLITERATOR, mark, depth + 1);
		if (SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR, mark, depth + 1);
		if (SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR, mark, depth + 1);
		if (SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR, mark, depth + 1);
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
	auto self = (java_util_Spliterators *) object;
}

void init_java_util_Spliterators(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_emptySpliterator_R_java_util_Spliterator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:emptySpliterator", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	{
	LINE_NUMBER(60);
	clinit_java_util_Spliterators(ctx);
	sp[0].o = (jobject)SF_java_util_Spliterators_EMPTY_SPLITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_emptyIntSpliterator_R_java_util_Spliterator$OfInt(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:emptyIntSpliterator", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	{
	LINE_NUMBER(76);
	clinit_java_util_Spliterators(ctx);
	sp[0].o = (jobject)SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_emptyLongSpliterator_R_java_util_Spliterator$OfLong(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:emptyLongSpliterator", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	{
	LINE_NUMBER(92);
	clinit_java_util_Spliterators(ctx);
	sp[0].o = (jobject)SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_emptyDoubleSpliterator_R_java_util_Spliterator$OfDouble(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:emptyDoubleSpliterator", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	{
	LINE_NUMBER(108);
	clinit_java_util_Spliterators(ctx);
	sp[0].o = (jobject)SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(142);
	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$ArraySpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_int_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	SM_java_util_Spliterators_checkFromToBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o))))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(178);
	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$ArraySpliterator);
	init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(206);
	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntArraySpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IntArraySpliterator_Array1_int_int(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_int, 1), sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_int_int_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	SM_java_util_Spliterators_checkFromToBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o))))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(240);
	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntArraySpliterator);
	init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_long_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(268);
	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongArraySpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$LongArraySpliterator_Array1_long_int(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_long, 1), sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_long_int_int_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	SM_java_util_Spliterators_checkFromToBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_long, 1), sp[0].o))))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(306);
	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongArraySpliterator);
	init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_double_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(334);
	clinit_java_util_Spliterators$DoubleArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$DoubleArraySpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$DoubleArraySpliterator_Array1_double_int(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_double, 1), sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_Array1_double_int_int_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	SM_java_util_Spliterators_checkFromToBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_double, 1), sp[0].o))))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(372);
	clinit_java_util_Spliterators$DoubleArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$DoubleArraySpliterator);
	init_java_util_Spliterators$DoubleArraySpliterator_Array1_double_int_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Spliterators_checkFromToBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:checkFromToBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(386);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(387);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"origin("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") > fence("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ArrayIndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(390);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(391);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(393);
	if ((frame[2].i) <= (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(394);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_java_util_Collection_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(420);
	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IteratorSpliterator_java_util_Collection_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_Collection, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_java_util_Iterator_long_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jlong param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(451);
	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_long_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_Iterator, sp[1].o)), (frame[1].l), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_Iterator_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliteratorUnknownSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(478);
	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_Iterator, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfInt_long_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jlong param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(508);
	clinit_java_util_Spliterators$IntIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_long_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfInt, sp[1].o)), (frame[1].l), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfInt_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliteratorUnknownSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(535);
	clinit_java_util_Spliterators$IntIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfInt, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfLong_long_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jlong param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(565);
	clinit_java_util_Spliterators$LongIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_long_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfLong, sp[1].o)), (frame[1].l), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfLong_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliteratorUnknownSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(592);
	clinit_java_util_Spliterators$LongIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfLong, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfDouble_long_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jlong param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(622);
	clinit_java_util_Spliterators$DoubleIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$DoubleIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$DoubleIteratorSpliterator_java_util_PrimitiveIterator$OfDouble_long_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfDouble, sp[1].o)), (frame[1].l), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfDouble_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:spliteratorUnknownSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(649);
	clinit_java_util_Spliterators$DoubleIteratorSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$DoubleIteratorSpliterator);
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	init_java_util_Spliterators$DoubleIteratorSpliterator_java_util_PrimitiveIterator$OfDouble_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_PrimitiveIterator$OfDouble, sp[1].o)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_iterator_java_util_Spliterator_R_java_util_Iterator(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(696);
	clinit_java_util_Spliterators$1Adapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$1Adapter);
	init_java_util_Spliterators$1Adapter_java_util_Spliterator(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfInt_R_java_util_PrimitiveIterator$OfInt(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(741);
	clinit_java_util_Spliterators$2Adapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$2Adapter);
	init_java_util_Spliterators$2Adapter_java_util_Spliterator$OfInt(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfLong_R_java_util_PrimitiveIterator$OfLong(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(786);
	clinit_java_util_Spliterators$3Adapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$3Adapter);
	init_java_util_Spliterators$3Adapter_java_util_Spliterator$OfLong(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfDouble_R_java_util_PrimitiveIterator$OfDouble(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(802);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(831);
	clinit_java_util_Spliterators$4Adapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$4Adapter);
	init_java_util_Spliterators$4Adapter_java_util_Spliterator$OfDouble(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Spliterators(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators(ctx);
	{
	LINE_NUMBER(63);
	clinit_java_util_Spliterators$EmptySpliterator$OfRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$EmptySpliterator$OfRef);
	init_java_util_Spliterators$EmptySpliterator$OfRef(ctx, sp[0].o);
	clinit_java_util_Spliterators(ctx);
	SF_java_util_Spliterators_EMPTY_SPLITERATOR = sp[0].o;
	LINE_NUMBER(79);
	clinit_java_util_Spliterators$EmptySpliterator$OfInt(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$EmptySpliterator$OfInt);
	init_java_util_Spliterators$EmptySpliterator$OfInt(ctx, sp[0].o);
	clinit_java_util_Spliterators(ctx);
	SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR = sp[0].o;
	LINE_NUMBER(95);
	clinit_java_util_Spliterators$EmptySpliterator$OfLong(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$EmptySpliterator$OfLong);
	init_java_util_Spliterators$EmptySpliterator$OfLong(ctx, sp[0].o);
	clinit_java_util_Spliterators(ctx);
	SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR = sp[0].o;
	LINE_NUMBER(111);
	clinit_java_util_Spliterators$EmptySpliterator$OfDouble(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$EmptySpliterator$OfDouble);
	init_java_util_Spliterators$EmptySpliterator$OfDouble(ctx, sp[0].o);
	clinit_java_util_Spliterators(ctx);
	SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators[] {
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
	&class_java_util_Spliterators$ArraySpliterator,
	&class_java_util_Spliterators$IntArraySpliterator,
	&class_java_util_Spliterators$LongArraySpliterator,
	&class_java_util_Spliterators$DoubleArraySpliterator,
	&class_java_util_Spliterators$IteratorSpliterator,
	&class_java_util_Spliterators$IntIteratorSpliterator,
	&class_java_util_Spliterators$LongIteratorSpliterator,
	&class_java_util_Spliterators$DoubleIteratorSpliterator,
	&class_java_util_Spliterators$EmptySpliterator,
	&class_java_util_Spliterators$AbstractDoubleSpliterator,
	&class_java_util_Spliterators$AbstractLongSpliterator,
	&class_java_util_Spliterators$AbstractIntSpliterator,
	&class_java_util_Spliterators$AbstractSpliterator,
};

static FieldMetadata fields[] {
	{ "EMPTY_SPLITERATOR", &class_java_util_Spliterator, (intptr_t) &SF_java_util_Spliterators_EMPTY_SPLITERATOR, "Ljava/util/Spliterator;", 26 },
	{ "EMPTY_INT_SPLITERATOR", &class_java_util_Spliterator$OfInt, (intptr_t) &SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR, "Ljava/util/Spliterator$OfInt;", 26 },
	{ "EMPTY_LONG_SPLITERATOR", &class_java_util_Spliterator$OfLong, (intptr_t) &SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR, "Ljava/util/Spliterator$OfLong;", 26 },
	{ "EMPTY_DOUBLE_SPLITERATOR", &class_java_util_Spliterator$OfDouble, (intptr_t) &SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR, "Ljava/util/Spliterator$OfDouble;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators, 0, "()V", 2 },
	{ "emptySpliterator", (intptr_t) SM_java_util_Spliterators_emptySpliterator_R_java_util_Spliterator, 0, "()Ljava/util/Spliterator;", 9 },
	{ "emptyIntSpliterator", (intptr_t) SM_java_util_Spliterators_emptyIntSpliterator_R_java_util_Spliterator$OfInt, 0, "()Ljava/util/Spliterator$OfInt;", 9 },
	{ "emptyLongSpliterator", (intptr_t) SM_java_util_Spliterators_emptyLongSpliterator_R_java_util_Spliterator$OfLong, 0, "()Ljava/util/Spliterator$OfLong;", 9 },
	{ "emptyDoubleSpliterator", (intptr_t) SM_java_util_Spliterators_emptyDoubleSpliterator_R_java_util_Spliterator$OfDouble, 0, "()Ljava/util/Spliterator$OfDouble;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_R_java_util_Spliterator, 0, "([Ljava/lang/Object;I)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_int_int_R_java_util_Spliterator, 0, "([Ljava/lang/Object;III)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_int_int_R_java_util_Spliterator$OfInt, 0, "([II)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_int_int_int_int_R_java_util_Spliterator$OfInt, 0, "([IIII)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_long_int_R_java_util_Spliterator$OfLong, 0, "([JI)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_long_int_int_int_R_java_util_Spliterator$OfLong, 0, "([JIII)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_double_int_R_java_util_Spliterator$OfDouble, 0, "([DI)Ljava/util/Spliterator$OfDouble;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_Array1_double_int_int_int_R_java_util_Spliterator$OfDouble, 0, "([DIII)Ljava/util/Spliterator$OfDouble;", 9 },
	{ "checkFromToBounds", (intptr_t) SM_java_util_Spliterators_checkFromToBounds_int_int_int, 0, "(III)V", 10 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_java_util_Collection_int_R_java_util_Spliterator, 0, "(Ljava/util/Collection;I)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_java_util_Iterator_long_int_R_java_util_Spliterator, 0, "(Ljava/util/Iterator;JI)Ljava/util/Spliterator;", 9 },
	{ "spliteratorUnknownSize", (intptr_t) SM_java_util_Spliterators_spliteratorUnknownSize_java_util_Iterator_int_R_java_util_Spliterator, 0, "(Ljava/util/Iterator;I)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfInt_long_int_R_java_util_Spliterator$OfInt, 0, "(Ljava/util/PrimitiveIterator$OfInt;JI)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliteratorUnknownSize", (intptr_t) SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfInt_int_R_java_util_Spliterator$OfInt, 0, "(Ljava/util/PrimitiveIterator$OfInt;I)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfLong_long_int_R_java_util_Spliterator$OfLong, 0, "(Ljava/util/PrimitiveIterator$OfLong;JI)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliteratorUnknownSize", (intptr_t) SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfLong_int_R_java_util_Spliterator$OfLong, 0, "(Ljava/util/PrimitiveIterator$OfLong;I)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfDouble_long_int_R_java_util_Spliterator$OfDouble, 0, "(Ljava/util/PrimitiveIterator$OfDouble;JI)Ljava/util/Spliterator$OfDouble;", 9 },
	{ "spliteratorUnknownSize", (intptr_t) SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfDouble_int_R_java_util_Spliterator$OfDouble, 0, "(Ljava/util/PrimitiveIterator$OfDouble;I)Ljava/util/Spliterator$OfDouble;", 9 },
	{ "iterator", (intptr_t) SM_java_util_Spliterators_iterator_java_util_Spliterator_R_java_util_Iterator, 0, "(Ljava/util/Spliterator;)Ljava/util/Iterator;", 9 },
	{ "iterator", (intptr_t) SM_java_util_Spliterators_iterator_java_util_Spliterator$OfInt_R_java_util_PrimitiveIterator$OfInt, 0, "(Ljava/util/Spliterator$OfInt;)Ljava/util/PrimitiveIterator$OfInt;", 9 },
	{ "iterator", (intptr_t) SM_java_util_Spliterators_iterator_java_util_Spliterator$OfLong_R_java_util_PrimitiveIterator$OfLong, 0, "(Ljava/util/Spliterator$OfLong;)Ljava/util/PrimitiveIterator$OfLong;", 9 },
	{ "iterator", (intptr_t) SM_java_util_Spliterators_iterator_java_util_Spliterator$OfDouble_R_java_util_PrimitiveIterator$OfDouble, 0, "(Ljava/util/Spliterator$OfDouble;)Ljava/util/PrimitiveIterator$OfDouble;", 9 },
	{ "<clinit>", (intptr_t) clinit_java_util_Spliterators, 0, "()V", 8 },
};

Class class_java_util_Spliterators{
		.nativeName = (intptr_t) "java/util/Spliterators",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators),
		.classVtable = (intptr_t) vtable_java_util_Spliterators,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 13,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators = registerClass(&class_java_util_Spliterators);

}
