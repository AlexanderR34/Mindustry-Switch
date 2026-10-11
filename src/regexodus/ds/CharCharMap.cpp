#include "regexodus/ds/CharCharMap.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/ds/CharCharMap_Entry.h"
#include "java/lang/Long.h"
#include "regexodus/ds/CharCharMap.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_regexodus_ds_CharCharMap_serialVersionUID;

void mark_regexodus_ds_CharCharMap(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_ds_CharCharMap *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_valueTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valueTable)->clazz)->markFunction)((jobject) self->F_valueTable, mark, depth + 1);
}

void clinit_regexodus_ds_CharCharMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_ds_CharCharMap_serialVersionUID = jlong(0ll);
}

jint SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:tableSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(75);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(76);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"capacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(78);
	jint temp0 = jint(1);
	jint temp1 = jint(2);
	jdouble temp2 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat((frame[0].i))) / (frame[1].f)))));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, (jint(temp2)));
	jint temp4 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, (temp3 - (jint(1))));
	frame[2].i = (temp0 << (-temp4));
	LINE_NUMBER(79);
	if ((frame[2].i) > (jint(1073741824))) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_5;
label_4:;
	{
	LINE_NUMBER(80);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"The required capacity is too large: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_CharCharMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(89);
	init_regexodus_ds_CharCharMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_CharCharMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	init_regexodus_ds_CharCharMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_CharCharMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(107);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue = (jint(0));
	LINE_NUMBER(108);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) <= 0) goto label_4;
	}
label_3:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"loadFactor must be > 0 and <= 1: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(109);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(111);
	jint temp0 = (jint)SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(112);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(113);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_CharCharMap_regexodus_ds_CharCharMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_regexodus_ds_CharCharMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(127);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(128);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_defaultReturnValue);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_CharCharMap_Array1_char_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	init_regexodus_ds_CharCharMap_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(139);
	((func_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	clinit_regexodus_ds_CharCharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_CharCharMap);
	init_regexodus_ds_CharCharMap_regexodus_ds_CharCharMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_CharCharMap_place_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong((frame[1].i))) * (jlong(-7046029254386353131ll)))) >> ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_CharCharMap_locateKey_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:locateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_place_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_place_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(175);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(176);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return ((frame[3].i) ^ (jint(-1)));
	}
label_4:;
	{
	LINE_NUMBER(179);
	if ((frame[4].i) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(174);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_put_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(189);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	frame[3].i = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue);
	LINE_NUMBER(191);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_4;
	}
	{
	frame[3].i = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	goto label_5;
	}
label_4:;
	{
	sp[0].o = frame[0].o;
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(192);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(193);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].i);
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_1:;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(197);
	if ((frame[3].i) < 0) goto label_9;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_9:;
	{
	LINE_NUMBER(202);
	frame[3].i = ((frame[3].i) ^ (jint(-1)));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_16:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue);
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putOrDefault", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(213);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(214);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(215);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_4;
	}
	{
	frame[4].i = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	goto label_5;
	}
label_4:;
	{
	sp[0].o = frame[0].o;
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(216);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(217);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].i);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_1:;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(221);
	if ((frame[4].i) < 0) goto label_9;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_9:;
	{
	LINE_NUMBER(226);
	frame[4].i = ((frame[4].i) ^ (jint(-1)));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_16:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	((func_regexodus_ds_CharCharMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(235);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	LINE_NUMBER(236);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(237);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(238);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_zeroValue);
	}
label_2:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(243);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_10;
	}
	{
	LINE_NUMBER(244);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(245);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, (frame[0].o), (frame[4].i), ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i))));
	}
label_13:;
	{
	LINE_NUMBER(243);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((func_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp1, temp2);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(265);
	((func_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putAll", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(277);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[5].i = temp2;
	LINE_NUMBER(278);
	((func_regexodus_ds_CharCharMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_ensureCapacity_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(279);
	frame[6].i = (frame[2].i);
	frame[7].i = (frame[4].i);
	frame[8].i = (jint(0));
	frame[9].i = (frame[5].i);
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_7;
	}
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[6].i))), ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[7].i))));
	LINE_NUMBER(279);
	INST_IINC(8, 1);
	INST_IINC(6, 1);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_putResize_char_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_place_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_place_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(290);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(291);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(292);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(289);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_get_char_R_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(304);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].i = ((regexodus_ds_CharCharMap *) NULL_CHECK(sp[-1].o))->F_defaultReturnValue;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(306);
	if ((frame[2].i) >= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:getOrDefault", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(313);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(315);
	if ((frame[3].i) >= 0) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_remove_char_R_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(319);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(320);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_3;
	}
	{
	LINE_NUMBER(321);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	}
label_3:;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue);
	}
label_1:;
	{
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(328);
	if ((frame[2].i) >= 0) goto label_8;
	}
	{
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue);
	}
label_8:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(332);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[2].i)));
	LINE_NUMBER(333);
	frame[7].i = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[2].i) + (jint(1))) & (frame[7].i));
	}
label_13:;
	{
	LINE_NUMBER(334);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[8].i));
	frame[4].i = temp0;
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_place_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_place_char_R_int])(ctx, (frame[0].o), (frame[4].i));
	frame[9].i = temp0;
	LINE_NUMBER(336);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[2].i) - (frame[9].i)) & (frame[7].i))) goto label_18;
	}
	{
	LINE_NUMBER(337);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(338);
	ARRAY_ACCESS(jchar, (frame[5].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(339);
	frame[2].i = (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(341);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(342);
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(343);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[2].i)) = (jint(0));
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jint M_regexodus_ds_CharCharMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jchar M_regexodus_ds_CharCharMap_defaultReturnValue_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:defaultReturnValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue);
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_defaultReturnValue_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:defaultReturnValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(392);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_defaultReturnValue = (frame[1].i);
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(401);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"maximumCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(403);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(410);
	jint temp0 = (jint)SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(411);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(412);
	((func_regexodus_ds_CharCharMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(415);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(416);
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(421);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_char_char(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_containsValue_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(430);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(433);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(434);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) == 0) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i))) != (frame[1].i)) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(433);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_containsKey_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(440);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue);
	}
label_1:;
	{
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_locateKey_char_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 < 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_findKey_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:findKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(449);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(451);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(452);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(453);
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i))) == 0) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i))) != (frame[1].i)) goto label_7;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i)));
	}
label_7:;
	{
	LINE_NUMBER(452);
	INST_IINC(5, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(ctx, (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(465);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(470);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(471);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(474);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(475);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	((regexodus_ds_CharCharMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(480);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(481);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(482);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(483);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	M_regexodus_ds_CharCharMap_putResize_char_char(ctx, (frame[0].o), (frame[6].i), ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(481);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(486);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_regexodus_ds_CharCharMap_getLoadFactor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:getLoadFactor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return ((jfloat)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor);
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_CharCharMap_setLoadFactor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:setLoadFactor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(493);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) <= 0) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"loadFactor must be > 0 and <= 1: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(494);
	((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[1].f);
	LINE_NUMBER(495);
	jint temp0 = (jint)SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(ctx, ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size), (frame[1].f));
	frame[2].i = temp0;
	LINE_NUMBER(496);
	if (((frame[2].i) - (jint(1))) == ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_mask)) goto label_5;
	}
	{
	LINE_NUMBER(497);
	((func_regexodus_ds_CharCharMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_5:;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_regexodus_ds_CharCharMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(503);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) + ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].i = ((regexodus_ds_CharCharMap *) NULL_CHECK(sp[-1].o))->F_size;
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(504);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(506);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(507);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(508);
	if ((frame[6].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(509);
	frame[1].i = ((frame[1].i) + ((frame[6].i) * (31)));
	LINE_NUMBER(510);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(511);
	frame[1].i = ((frame[1].i) + (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(506);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(519);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(520);
	if ((isInstance(ctx, (frame[1].o), &class_regexodus_ds_CharCharMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(521);
	frame[2].o = (checkCast(ctx, &class_regexodus_ds_CharCharMap, (frame[1].o)));
	LINE_NUMBER(522);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(523);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) != ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_5;
	}
	{
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[2].o)))->F_zeroValue) == ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue)) goto label_6;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(525);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(526);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(527);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(528);
	if ((frame[7].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(529);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(530);
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, (frame[2].o), (frame[7].i));
	if (temp0 == temp1) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(526);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:toString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(546);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(547);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(548);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(549);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"0="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_zeroValue));
	LINE_NUMBER(551);
	if (((jint)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_size) <= (jint(1))) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(554);
	sp[0].o = (jobject)((regexodus_ds_CharCharMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(555);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_11:;
	{
	LINE_NUMBER(556);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_12;
	}
	{
	LINE_NUMBER(557);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(558);
	if ((frame[7].i) != 0) goto label_15;
	}
	goto label_11;
label_15:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].i));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(561);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[8].i));
	LINE_NUMBER(563);
	goto label_12;
	}
label_12:;
	{
	LINE_NUMBER(565);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(566);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(567);
	if ((frame[7].i) != 0) goto label_23;
	}
	goto label_12;
label_23:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].i));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(571);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[8].i));
	LINE_NUMBER(573);
	goto label_12;
	}
label_20:;
	{
	LINE_NUMBER(574);
	if ((frame[2].i) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_29:;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:putIfAbsent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(654);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(655);
	jint temp1 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(661);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(662);
	if ((frame[4].i) != (frame[2].i)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, (frame[0].o), (frame[1].i), (frame[3].i));
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap_replace_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(670);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(671);
	jint temp1 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap:clone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_ds_CharCharMap[] {
	(void *) M_regexodus_ds_CharCharMap_hashCode_R_int,
	(void *) M_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_ds_CharCharMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap,
	(void *) M_regexodus_ds_CharCharMap_place_char_R_int,
	(void *) M_regexodus_ds_CharCharMap_locateKey_char_R_int,
	(void *) M_regexodus_ds_CharCharMap_put_char_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap,
	(void *) M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char,
	(void *) M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int,
	(void *) M_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int,
	(void *) M_regexodus_ds_CharCharMap_putResize_char_char,
	(void *) M_regexodus_ds_CharCharMap_get_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_remove_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_notEmpty_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_size_R_int,
	(void *) M_regexodus_ds_CharCharMap_isEmpty_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_defaultReturnValue_R_char,
	(void *) M_regexodus_ds_CharCharMap_defaultReturnValue_char,
	(void *) M_regexodus_ds_CharCharMap_shrink_int,
	(void *) M_regexodus_ds_CharCharMap_clear_int,
	(void *) M_regexodus_ds_CharCharMap_clear,
	(void *) M_regexodus_ds_CharCharMap_containsValue_char_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_containsKey_char_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_findKey_char_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_ensureCapacity_int,
	(void *) M_regexodus_ds_CharCharMap_resize_int,
	(void *) M_regexodus_ds_CharCharMap_getLoadFactor_R_float,
	(void *) M_regexodus_ds_CharCharMap_setLoadFactor_float,
	(void *) M_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char,
	(void *) M_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean,
	(void *) M_regexodus_ds_CharCharMap_replace_char_char_R_char,
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
	{ "clone", "()Lregexodus/ds/CharCharMap;" },
	{ "place", "(C)I" },
	{ "locateKey", "(C)I" },
	{ "put", "(CC)C" },
	{ "putOrDefault", "(CCC)C" },
	{ "putAll", "(Lregexodus/ds/CharCharMap;)V" },
	{ "putAll", "([C[C)V" },
	{ "putAll", "([C[CI)V" },
	{ "putAll", "([CI[CII)V" },
	{ "putResize", "(CC)V" },
	{ "get", "(C)C" },
	{ "getOrDefault", "(CC)C" },
	{ "remove", "(C)C" },
	{ "notEmpty", "()Z" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "defaultReturnValue", "()C" },
	{ "defaultReturnValue", "(C)V" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(C)Z" },
	{ "containsKey", "(C)Z" },
	{ "findKey", "(CC)C" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "getLoadFactor", "()F" },
	{ "setLoadFactor", "(F)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "putIfAbsent", "(CC)C" },
	{ "replace", "(CCC)Z" },
	{ "replace", "(CC)C" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_regexodus_ds_CharCharMap$Entry,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_ds_CharCharMap_serialVersionUID, "J", 26 },
	{ "size", &class_int, offsetof(regexodus_ds_CharCharMap, F_size), "I", 4 },
	{ "keyTable", getArrayClass(&class_char, 1), offsetof(regexodus_ds_CharCharMap, F_keyTable), "[C", 4 },
	{ "valueTable", getArrayClass(&class_char, 1), offsetof(regexodus_ds_CharCharMap, F_valueTable), "[C", 4 },
	{ "hasZeroValue", &class_boolean, offsetof(regexodus_ds_CharCharMap, F_hasZeroValue), "Z", 4 },
	{ "zeroValue", &class_char, offsetof(regexodus_ds_CharCharMap, F_zeroValue), "C", 4 },
	{ "loadFactor", &class_float, offsetof(regexodus_ds_CharCharMap, F_loadFactor), "F", 4 },
	{ "threshold", &class_int, offsetof(regexodus_ds_CharCharMap, F_threshold), "I", 4 },
	{ "shift", &class_int, offsetof(regexodus_ds_CharCharMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(regexodus_ds_CharCharMap, F_mask), "I", 4 },
	{ "defaultReturnValue", &class_char, offsetof(regexodus_ds_CharCharMap, F_defaultReturnValue), "C", 1 },
};

static MethodMetadata methods[] {
	{ "tableSize", (intptr_t) SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int, 0, "(IF)I", 8 },
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap_regexodus_ds_CharCharMap, 0, "(Lregexodus/ds/CharCharMap;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap_Array1_char_Array1_char, 0, "([C[C)V", 1 },
	{ "clone", (intptr_t) M_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap, VTABLE_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap, "()Lregexodus/ds/CharCharMap;", 1 },
	{ "place", (intptr_t) M_regexodus_ds_CharCharMap_place_char_R_int, VTABLE_regexodus_ds_CharCharMap_place_char_R_int, "(C)I", 4 },
	{ "locateKey", (intptr_t) M_regexodus_ds_CharCharMap_locateKey_char_R_int, VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int, "(C)I", 4 },
	{ "put", (intptr_t) M_regexodus_ds_CharCharMap_put_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char, "(CC)C", 1 },
	{ "putOrDefault", (intptr_t) M_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char, "(CCC)C", 1 },
	{ "putAll", (intptr_t) M_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap, VTABLE_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap, "(Lregexodus/ds/CharCharMap;)V", 1 },
	{ "putAll", (intptr_t) M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char, VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char, "([C[C)V", 1 },
	{ "putAll", (intptr_t) M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int, VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int, "([C[CI)V", 1 },
	{ "putAll", (intptr_t) M_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int, VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int, "([CI[CII)V", 1 },
	{ "putResize", (intptr_t) M_regexodus_ds_CharCharMap_putResize_char_char, VTABLE_regexodus_ds_CharCharMap_putResize_char_char, "(CC)V", 2 },
	{ "get", (intptr_t) M_regexodus_ds_CharCharMap_get_char_R_char, VTABLE_regexodus_ds_CharCharMap_get_char_R_char, "(C)C", 1 },
	{ "getOrDefault", (intptr_t) M_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char, "(CC)C", 1 },
	{ "remove", (intptr_t) M_regexodus_ds_CharCharMap_remove_char_R_char, VTABLE_regexodus_ds_CharCharMap_remove_char_R_char, "(C)C", 1 },
	{ "notEmpty", (intptr_t) M_regexodus_ds_CharCharMap_notEmpty_R_boolean, VTABLE_regexodus_ds_CharCharMap_notEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_regexodus_ds_CharCharMap_size_R_int, VTABLE_regexodus_ds_CharCharMap_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_regexodus_ds_CharCharMap_isEmpty_R_boolean, VTABLE_regexodus_ds_CharCharMap_isEmpty_R_boolean, "()Z", 1 },
	{ "defaultReturnValue", (intptr_t) M_regexodus_ds_CharCharMap_defaultReturnValue_R_char, VTABLE_regexodus_ds_CharCharMap_defaultReturnValue_R_char, "()C", 1 },
	{ "defaultReturnValue", (intptr_t) M_regexodus_ds_CharCharMap_defaultReturnValue_char, VTABLE_regexodus_ds_CharCharMap_defaultReturnValue_char, "(C)V", 1 },
	{ "shrink", (intptr_t) M_regexodus_ds_CharCharMap_shrink_int, VTABLE_regexodus_ds_CharCharMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_regexodus_ds_CharCharMap_clear_int, VTABLE_regexodus_ds_CharCharMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_regexodus_ds_CharCharMap_clear, VTABLE_regexodus_ds_CharCharMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_regexodus_ds_CharCharMap_containsValue_char_R_boolean, VTABLE_regexodus_ds_CharCharMap_containsValue_char_R_boolean, "(C)Z", 1 },
	{ "containsKey", (intptr_t) M_regexodus_ds_CharCharMap_containsKey_char_R_boolean, VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean, "(C)Z", 1 },
	{ "findKey", (intptr_t) M_regexodus_ds_CharCharMap_findKey_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_findKey_char_char_R_char, "(CC)C", 1 },
	{ "ensureCapacity", (intptr_t) M_regexodus_ds_CharCharMap_ensureCapacity_int, VTABLE_regexodus_ds_CharCharMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_regexodus_ds_CharCharMap_resize_int, VTABLE_regexodus_ds_CharCharMap_resize_int, "(I)V", 4 },
	{ "getLoadFactor", (intptr_t) M_regexodus_ds_CharCharMap_getLoadFactor_R_float, VTABLE_regexodus_ds_CharCharMap_getLoadFactor_R_float, "()F", 1 },
	{ "setLoadFactor", (intptr_t) M_regexodus_ds_CharCharMap_setLoadFactor_float, VTABLE_regexodus_ds_CharCharMap_setLoadFactor_float, "(F)V", 1 },
	{ "hashCode", (intptr_t) M_regexodus_ds_CharCharMap_hashCode_R_int, VTABLE_regexodus_ds_CharCharMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean, VTABLE_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String, VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_regexodus_ds_CharCharMap_toString_R_java_lang_String, VTABLE_regexodus_ds_CharCharMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 4 },
	{ "putIfAbsent", (intptr_t) M_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char, "(CC)C", 1 },
	{ "replace", (intptr_t) M_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean, VTABLE_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean, "(CCC)Z", 1 },
	{ "replace", (intptr_t) M_regexodus_ds_CharCharMap_replace_char_char_R_char, VTABLE_regexodus_ds_CharCharMap_replace_char_char_R_char, "(CC)C", 1 },
	{ "clone", (intptr_t) M_regexodus_ds_CharCharMap_clone_R_java_lang_Object, VTABLE_regexodus_ds_CharCharMap_clone_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_regexodus_ds_CharCharMap{
		.nativeName = (intptr_t) "regexodus/ds/CharCharMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_ds_CharCharMap),
		.classVtable = (intptr_t) vtable_regexodus_ds_CharCharMap,
		.staticInitializer = (intptr_t) clinit_regexodus_ds_CharCharMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_ds_CharCharMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_ds_CharCharMap = registerClass(&class_regexodus_ds_CharCharMap);

}
