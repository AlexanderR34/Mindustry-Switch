#include "rhino/v8dtoa/FastDtoaBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "rhino/v8dtoa/FastDtoaBuilder.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_v8dtoa_FastDtoaBuilder_digits;

void mark_rhino_v8dtoa_FastDtoaBuilder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_v8dtoa_FastDtoaBuilder_digits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_v8dtoa_FastDtoaBuilder_digits)->clazz)->markFunction)((jobject) SF_rhino_v8dtoa_FastDtoaBuilder_digits, mark, depth + 1);
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
	auto self = (rhino_v8dtoa_FastDtoaBuilder *) object;
	if (self->F_chars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chars)->clazz)->markFunction)((jobject) self->F_chars, mark, depth + 1);
}

void init_rhino_v8dtoa_FastDtoaBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoaBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (25));
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_chars = (jref) sp[1].o;
	LINE_NUMBER(9);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end = (jint(0));
	LINE_NUMBER(11);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_formatted = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_FastDtoaBuilder_append_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:append", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_FastDtoaBuilder_decreaseLast(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:decreaseLast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp0 = ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) - (jint(1));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) - (jint(1)))));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_FastDtoaBuilder_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end = (jint(0));
	LINE_NUMBER(23);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_formatted = (jint(0));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[chars:"_j))));
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", point:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:format", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	if (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_formatted) != 0) goto label_1;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (jint(0)))) != (45)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(35);
	frame[2].i = (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point) - (frame[1].i));
	LINE_NUMBER(36);
	if ((frame[2].i) < (-5)) goto label_7;
	}
	{
	if ((frame[2].i) <= (21)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(37);
	M_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(39);
	M_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_9:;
	{
	LINE_NUMBER(41);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_formatted = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(43);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:toFixedFormat", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	if (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point) >= ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end)) goto label_1;
	}
	{
	LINE_NUMBER(50);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp0 = (jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point;
	sp[1].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point) + (jint(1))), (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) - ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point)));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	ARRAY_ACCESS(jchar, sp[0].o, ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point)) = (46);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end = (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end) + (jint(1)));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(57);
	frame[3].i = (((frame[1].i) + (jint(2))) - (frame[2].i));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) - (frame[1].i)));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (48);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (jint(1)))) = (46);
	LINE_NUMBER(61);
	if ((frame[2].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, ((frame[1].i) + (jint(2))), (frame[3].i), (48));
	}
label_12:;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end = (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end) + ((jint(2)) - (frame[2].i)));
	LINE_NUMBER(65);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(66);
	if (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point) <= ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end)) goto label_7;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end), ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point), (48));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end = (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end) + (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_point) - ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end)));
	}
label_7:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:toExponentialFormat", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(74);
	if ((((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) - (frame[1].i)) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(76);
	frame[3].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) - (frame[3].i)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)) = (46);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end = (((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[0].o))->F_end) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (101);
	LINE_NUMBER(82);
	frame[3].i = (43);
	LINE_NUMBER(83);
	frame[4].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(84);
	if ((frame[4].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(85);
	frame[3].i = (45);
	LINE_NUMBER(86);
	frame[4].i = (-(frame[4].i));
	}
label_9:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end;
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[1].o))->F_end = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[3].i);
	LINE_NUMBER(90);
	if ((frame[4].i) <= (99)) goto label_13;
	}
	{
	jint temp0 = ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) + (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	if ((frame[4].i) <= (9)) goto label_15;
	}
	{
	jint temp0 = ((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_15:;
	INST_ALOAD(0);
	sp[-1].i = ((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK(sp[-1].o))->F_end;
label_14:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(91);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_end = ((frame[5].i) + (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(95);
	frame[6].i = ((frame[4].i) % (10));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	clinit_rhino_v8dtoa_FastDtoaBuilder(ctx);
	sp[1].o = (jobject)SF_rhino_v8dtoa_FastDtoaBuilder_digits;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[6].i)));
	LINE_NUMBER(97);
	frame[4].i = ((frame[4].i) / (10));
	LINE_NUMBER(98);
	if ((frame[4].i) != 0) goto label_21;
	}
	goto label_22;
label_21:;
	LINE_NUMBER(99);
	goto label_17;
label_22:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_rhino_v8dtoa_FastDtoaBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoaBuilder:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoaBuilder(ctx);
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject) createArray(ctx, &class_char, (10));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	clinit_rhino_v8dtoa_FastDtoaBuilder(ctx);
	SF_rhino_v8dtoa_FastDtoaBuilder_digits = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_FastDtoaBuilder[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_append_char,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_decreaseLast,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_reset,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int,
	(void *) M_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int,
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
	{ "append", "(C)V" },
	{ "decreaseLast", "()V" },
	{ "reset", "()V" },
	{ "format", "()Ljava/lang/String;" },
	{ "toFixedFormat", "(II)V" },
	{ "toExponentialFormat", "(II)V" },
};

static FieldMetadata fields[] {
	{ "chars", getArrayClass(&class_char, 1), offsetof(rhino_v8dtoa_FastDtoaBuilder, F_chars), "[C", 16 },
	{ "end", &class_int, offsetof(rhino_v8dtoa_FastDtoaBuilder, F_end), "I", 0 },
	{ "point", &class_int, offsetof(rhino_v8dtoa_FastDtoaBuilder, F_point), "I", 0 },
	{ "formatted", &class_boolean, offsetof(rhino_v8dtoa_FastDtoaBuilder, F_formatted), "Z", 0 },
	{ "digits", getArrayClass(&class_char, 1), (intptr_t) &SF_rhino_v8dtoa_FastDtoaBuilder_digits, "[C", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_FastDtoaBuilder, 0, "()V", 1 },
	{ "append", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_append_char, VTABLE_rhino_v8dtoa_FastDtoaBuilder_append_char, "(C)V", 0 },
	{ "decreaseLast", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_decreaseLast, VTABLE_rhino_v8dtoa_FastDtoaBuilder_decreaseLast, "()V", 0 },
	{ "reset", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_reset, VTABLE_rhino_v8dtoa_FastDtoaBuilder_reset, "()V", 1 },
	{ "toString", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String, VTABLE_rhino_v8dtoa_FastDtoaBuilder_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String, VTABLE_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toFixedFormat", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int, VTABLE_rhino_v8dtoa_FastDtoaBuilder_toFixedFormat_int_int, "(II)V", 2 },
	{ "toExponentialFormat", (intptr_t) M_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int, VTABLE_rhino_v8dtoa_FastDtoaBuilder_toExponentialFormat_int_int, "(II)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_v8dtoa_FastDtoaBuilder, 0, "()V", 8 },
};

Class class_rhino_v8dtoa_FastDtoaBuilder{
		.nativeName = (intptr_t) "rhino/v8dtoa/FastDtoaBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_FastDtoaBuilder),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_FastDtoaBuilder,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_FastDtoaBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_FastDtoaBuilder,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_FastDtoaBuilder = registerClass(&class_rhino_v8dtoa_FastDtoaBuilder);

}
