#include "arc/struct/IntFloatMap.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/struct/IntFloatMap_MapIterator.h"
#include "arc/struct/IntFloatMap.h"
#include "arc/struct/IntFloatMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Float.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/struct/IntFloatMap_Entries.h"
#include "arc/struct/IntFloatMap_Keys.h"
#include "arc/struct/IntFloatMap_Values.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_IntFloatMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntFloatMap *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_valueTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valueTable)->clazz)->markFunction)((jobject) self->F_valueTable, mark, depth + 1);
	if (self->F_entries1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries1)->clazz)->markFunction)((jobject) self->F_entries1, mark, depth + 1);
	if (self->F_entries2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries2)->clazz)->markFunction)((jobject) self->F_entries2, mark, depth + 1);
	if (self->F_values1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values1)->clazz)->markFunction)((jobject) self->F_values1, mark, depth + 1);
	if (self->F_values2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values2)->clazz)->markFunction)((jobject) self->F_values2, mark, depth + 1);
	if (self->F_keys1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys1)->clazz)->markFunction)((jobject) self->F_keys1, mark, depth + 1);
	if (self->F_keys2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys2)->clazz)->markFunction)((jobject) self->F_keys2, mark, depth + 1);
}

void clinit_arc_struct_IntFloatMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_IntFloatMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntFloatMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(56);
	init_arc_struct_IntFloatMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntFloatMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	init_arc_struct_IntFloatMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntFloatMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(72);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(73);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(74);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"loadFactor must be > 0 and < 1: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(75);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(77);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(78);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(79);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntFloatMap_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntFloatMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_arc_struct_IntFloatMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(91);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(92);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_zeroValue);
	LINE_NUMBER(93);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntFloatMap_place_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong((frame[1].i))) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntFloatMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	if (!((arc_struct_IntFloatMap *)self)->F_keyTable) {
		init_arc_struct_IntFloatMap(ctx, self);
	}
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:locateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_arc_struct_IntFloatMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(120);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(121);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_4:;
	{
	LINE_NUMBER(122);
	if ((frame[4].i) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(119);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_put_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(127);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(128);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].f);
	LINE_NUMBER(129);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_4;
	}
	{
	LINE_NUMBER(130);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_4:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(136);
	if ((frame[3].i) < 0) goto label_8;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(140);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntFloatMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_14:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_put_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(151);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(152);
	frame[4].f = ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	LINE_NUMBER(153);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].f);
	LINE_NUMBER(154);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_5;
	}
	{
	LINE_NUMBER(155);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[3].f);
	}
label_5:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[4].f);
	}
label_1:;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(162);
	if ((frame[4].i) < 0) goto label_10;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_10:;
	{
	LINE_NUMBER(167);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntFloatMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_17:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_putMissing_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(175);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(176);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	{
	LINE_NUMBER(177);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].f);
	LINE_NUMBER(178);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_3:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(184);
	if ((frame[3].i) < 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(185);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntFloatMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_12:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_putMissing_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:putMissing", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(192);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(193);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	{
	LINE_NUMBER(194);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].f);
	LINE_NUMBER(195);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (frame[3].f);
	}
label_3:;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	}
label_1:;
	{
	LINE_NUMBER(201);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(202);
	if ((frame[4].i) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	}
label_9:;
	{
	LINE_NUMBER(203);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntFloatMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	((func_arc_struct_IntFloatMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(212);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, (frame[0].o), (jint(0)), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_zeroValue));
	}
label_2:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(216);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(217);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, (frame[0].o), (frame[6].i), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	}
label_10:;
	{
	LINE_NUMBER(215);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_putResize_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_arc_struct_IntFloatMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(225);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(226);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(224);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_get_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(234);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, (frame[0].o), (frame[1].i), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_get_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(239);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(241);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_FLOAD(2);
label_6:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_increment_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:increment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(245);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_increment_int_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float])(ctx, (frame[0].o), (frame[1].i), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_increment_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:increment", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(249);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_increment_int_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float])(ctx, (frame[0].o), (frame[1].i), (jfloat(0)), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_increment_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:increment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(257);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	{
	LINE_NUMBER(259);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(260);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = ((frame[2].f) + (frame[3].f));
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[2].f);
	}
label_3:;
	{
	LINE_NUMBER(264);
	frame[4].f = ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_zeroValue = (((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_zeroValue) + (frame[3].f));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[4].f);
	}
label_1:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(269);
	if ((frame[4].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[3].f));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_11:;
	{
	LINE_NUMBER(274);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = ((frame[2].f) + (frame[3].f));
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntFloatMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_18:;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap_remove_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(286);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(288);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	}
label_1:;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(294);
	if ((frame[3].i) >= 0) goto label_7;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_7:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(297);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(298);
	frame[7].i = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[3].i) + (jint(1))) & (frame[7].i));
	}
label_12:;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[8].i));
	frame[1].i = temp0;
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_arc_struct_IntFloatMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[9].i = temp0;
	LINE_NUMBER(301);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[3].i) - (frame[9].i)) & (frame[7].i))) goto label_16;
	}
	{
	LINE_NUMBER(302);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(303);
	ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(304);
	frame[3].i = (frame[8].i);
	}
label_16:;
	{
	LINE_NUMBER(306);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(307);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(308);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[3].i)) = (jint(0));
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (frame[6].f);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_IntFloatMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_IntFloatMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(329);
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
	LINE_NUMBER(330);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(331);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	M_arc_struct_IntFloatMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(338);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(339);
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(342);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(343);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(344);
	M_arc_struct_IntFloatMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(350);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(351);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap_containsValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(359);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue), (frame[1].f), -1)) != 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(362);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(363);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))) == 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (frame[1].f), -1)) != 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(362);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap_containsValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(372);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(375);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(376);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(375);
	INST_IINC(5, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(381);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue);
	}
label_1:;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)M_arc_struct_IntFloatMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
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

jint M_arc_struct_IntFloatMap_findKey_float_int_R_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:findKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(390);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue), (frame[1].f), -1)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(393);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(394);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))) == 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), (frame[1].f), -1)) != 0) goto label_7;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	}
label_7:;
	{
	LINE_NUMBER(393);
	INST_IINC(5, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntFloatMap_findKey_float_float_int_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(403);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(405);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(406);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(407);
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i))) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_7;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	}
label_7:;
	{
	LINE_NUMBER(406);
	INST_IINC(6, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_arc_struct_IntFloatMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(422);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(423);
	((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(426);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(432);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(433);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(434);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(435);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	M_arc_struct_IntFloatMap_putResize_int_float(ctx, (frame[0].o), (frame[6].i), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(433);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntFloatMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	frame[1].i = ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(442);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue));
	frame[1].i = (temp0 + temp1);
	}
label_2:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(445);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(446);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(447);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (frame[6].i) * (31);
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	frame[1].i = (temp0 + (temp1 + temp2));
	}
label_10:;
	{
	LINE_NUMBER(445);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(454);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntFloatMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(455);
	frame[2].o = (checkCast(ctx, &class_arc_struct_IntFloatMap, (frame[1].o)));
	LINE_NUMBER(456);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(457);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) == ((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(458);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	LINE_NUMBER(459);
	if ((floatCompare(((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[2].o)))->F_zeroValue), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue), -1)) == 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(462);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(463);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(464);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(465);
	if ((frame[7].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(466);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, (frame[2].o), (frame[7].i), (jfloat(0)));
	frame[8].f = temp0;
	LINE_NUMBER(467);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_arc_struct_IntFloatMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntFloatMap_containsKey_int_R_boolean])(ctx, (frame[2].o), (frame[7].i));
	if (temp0 != 0) goto label_18;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(468);
	if ((floatCompare((frame[8].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), -1)) == 0) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(463);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(476);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[1].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(480);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(481);
	if (((jint)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_7;
	}
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0="_j))));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_zeroValue));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(485);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(486);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(487);
	if ((frame[5].i) != 0) goto label_13;
	}
	goto label_7;
label_13:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(491);
	goto label_10;
	}
label_10:;
	{
	LINE_NUMBER(494);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_17;
	}
	{
	LINE_NUMBER(495);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(496);
	if ((frame[5].i) != 0) goto label_20;
	}
	goto label_10;
label_20:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(501);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Entries);
	init_arc_struct_IntFloatMap$Entries_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Entries);
	init_arc_struct_IntFloatMap$Entries_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_arc_struct_IntFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(522);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_arc_struct_IntFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Values);
	init_arc_struct_IntFloatMap$Values_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Values);
	init_arc_struct_IntFloatMap$Values_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_arc_struct_IntFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(544);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(545);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_arc_struct_IntFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(549);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Keys);
	init_arc_struct_IntFloatMap$Keys_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap$Keys);
	init_arc_struct_IntFloatMap$Keys_arc_struct_IntFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_arc_struct_IntFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(566);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_arc_struct_IntFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(571);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(573);
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntFloatMap[] {
	(void *) M_arc_struct_IntFloatMap_hashCode_R_int,
	(void *) M_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_IntFloatMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_IntFloatMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_IntFloatMap_place_int_R_int,
	(void *) M_arc_struct_IntFloatMap_locateKey_int_R_int,
	(void *) M_arc_struct_IntFloatMap_put_int_float,
	(void *) M_arc_struct_IntFloatMap_put_int_float_float_R_float,
	(void *) M_arc_struct_IntFloatMap_putMissing_int_float,
	(void *) M_arc_struct_IntFloatMap_putMissing_int_float_float_R_float,
	(void *) M_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap,
	(void *) M_arc_struct_IntFloatMap_putResize_int_float,
	(void *) M_arc_struct_IntFloatMap_get_int_R_float,
	(void *) M_arc_struct_IntFloatMap_get_int_float_R_float,
	(void *) M_arc_struct_IntFloatMap_increment_int_R_float,
	(void *) M_arc_struct_IntFloatMap_increment_int_float_R_float,
	(void *) M_arc_struct_IntFloatMap_increment_int_float_float_R_float,
	(void *) M_arc_struct_IntFloatMap_remove_int_float_R_float,
	(void *) M_arc_struct_IntFloatMap_notEmpty_R_boolean,
	(void *) M_arc_struct_IntFloatMap_isEmpty_R_boolean,
	(void *) M_arc_struct_IntFloatMap_shrink_int,
	(void *) M_arc_struct_IntFloatMap_clear_int,
	(void *) M_arc_struct_IntFloatMap_clear,
	(void *) M_arc_struct_IntFloatMap_containsValue_float_R_boolean,
	(void *) M_arc_struct_IntFloatMap_containsValue_float_float_R_boolean,
	(void *) M_arc_struct_IntFloatMap_containsKey_int_R_boolean,
	(void *) M_arc_struct_IntFloatMap_findKey_float_int_R_int,
	(void *) M_arc_struct_IntFloatMap_findKey_float_float_int_R_int,
	(void *) M_arc_struct_IntFloatMap_ensureCapacity_int,
	(void *) M_arc_struct_IntFloatMap_resize_int,
	(void *) M_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries,
	(void *) M_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values,
	(void *) M_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "place", "(I)I" },
	{ "locateKey", "(I)I" },
	{ "put", "(IF)V" },
	{ "put", "(IFF)F" },
	{ "putMissing", "(IF)V" },
	{ "putMissing", "(IFF)F" },
	{ "putAll", "(Larc/struct/IntFloatMap;)V" },
	{ "putResize", "(IF)V" },
	{ "get", "(I)F" },
	{ "get", "(IF)F" },
	{ "increment", "(I)F" },
	{ "increment", "(IF)F" },
	{ "increment", "(IFF)F" },
	{ "remove", "(IF)F" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(F)Z" },
	{ "containsValue", "(FF)Z" },
	{ "containsKey", "(I)Z" },
	{ "findKey", "(FI)I" },
	{ "findKey", "(FFI)I" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "entries", "()Larc/struct/IntFloatMap$Entries;" },
	{ "values", "()Larc/struct/IntFloatMap$Values;" },
	{ "keys", "()Larc/struct/IntFloatMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_IntFloatMap$Entries,
	&class_arc_struct_IntFloatMap$Values,
	&class_arc_struct_IntFloatMap$Keys,
	&class_arc_struct_IntFloatMap$MapIterator,
	&class_arc_struct_IntFloatMap$Entry,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_IntFloatMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_int, 1), offsetof(arc_struct_IntFloatMap, F_keyTable), "[I", 0 },
	{ "valueTable", getArrayClass(&class_float, 1), offsetof(arc_struct_IntFloatMap, F_valueTable), "[F", 0 },
	{ "zeroValue", &class_float, offsetof(arc_struct_IntFloatMap, F_zeroValue), "F", 0 },
	{ "hasZeroValue", &class_boolean, offsetof(arc_struct_IntFloatMap, F_hasZeroValue), "Z", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_IntFloatMap, F_loadFactor), "F", 18 },
	{ "threshold", &class_int, offsetof(arc_struct_IntFloatMap, F_threshold), "I", 2 },
	{ "shift", &class_int, offsetof(arc_struct_IntFloatMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_IntFloatMap, F_mask), "I", 4 },
	{ "entries1", &class_arc_struct_IntFloatMap$Entries, offsetof(arc_struct_IntFloatMap, F_entries1), "Larc/struct/IntFloatMap$Entries;", 130 },
	{ "entries2", &class_arc_struct_IntFloatMap$Entries, offsetof(arc_struct_IntFloatMap, F_entries2), "Larc/struct/IntFloatMap$Entries;", 130 },
	{ "values1", &class_arc_struct_IntFloatMap$Values, offsetof(arc_struct_IntFloatMap, F_values1), "Larc/struct/IntFloatMap$Values;", 130 },
	{ "values2", &class_arc_struct_IntFloatMap$Values, offsetof(arc_struct_IntFloatMap, F_values2), "Larc/struct/IntFloatMap$Values;", 130 },
	{ "keys1", &class_arc_struct_IntFloatMap$Keys, offsetof(arc_struct_IntFloatMap, F_keys1), "Larc/struct/IntFloatMap$Keys;", 130 },
	{ "keys2", &class_arc_struct_IntFloatMap$Keys, offsetof(arc_struct_IntFloatMap, F_keys2), "Larc/struct/IntFloatMap$Keys;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_IntFloatMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntFloatMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntFloatMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntFloatMap_arc_struct_IntFloatMap, 0, "(Larc/struct/IntFloatMap;)V", 1 },
	{ "place", (intptr_t) M_arc_struct_IntFloatMap_place_int_R_int, VTABLE_arc_struct_IntFloatMap_place_int_R_int, "(I)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_IntFloatMap_locateKey_int_R_int, VTABLE_arc_struct_IntFloatMap_locateKey_int_R_int, "(I)I", 2 },
	{ "put", (intptr_t) M_arc_struct_IntFloatMap_put_int_float, VTABLE_arc_struct_IntFloatMap_put_int_float, "(IF)V", 1 },
	{ "put", (intptr_t) M_arc_struct_IntFloatMap_put_int_float_float_R_float, VTABLE_arc_struct_IntFloatMap_put_int_float_float_R_float, "(IFF)F", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_IntFloatMap_putMissing_int_float, VTABLE_arc_struct_IntFloatMap_putMissing_int_float, "(IF)V", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_IntFloatMap_putMissing_int_float_float_R_float, VTABLE_arc_struct_IntFloatMap_putMissing_int_float_float_R_float, "(IFF)F", 1 },
	{ "putAll", (intptr_t) M_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap, VTABLE_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap, "(Larc/struct/IntFloatMap;)V", 1 },
	{ "putResize", (intptr_t) M_arc_struct_IntFloatMap_putResize_int_float, VTABLE_arc_struct_IntFloatMap_putResize_int_float, "(IF)V", 2 },
	{ "get", (intptr_t) M_arc_struct_IntFloatMap_get_int_R_float, VTABLE_arc_struct_IntFloatMap_get_int_R_float, "(I)F", 1 },
	{ "get", (intptr_t) M_arc_struct_IntFloatMap_get_int_float_R_float, VTABLE_arc_struct_IntFloatMap_get_int_float_R_float, "(IF)F", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntFloatMap_increment_int_R_float, VTABLE_arc_struct_IntFloatMap_increment_int_R_float, "(I)F", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntFloatMap_increment_int_float_R_float, VTABLE_arc_struct_IntFloatMap_increment_int_float_R_float, "(IF)F", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntFloatMap_increment_int_float_float_R_float, VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float, "(IFF)F", 1 },
	{ "remove", (intptr_t) M_arc_struct_IntFloatMap_remove_int_float_R_float, VTABLE_arc_struct_IntFloatMap_remove_int_float_R_float, "(IF)F", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_IntFloatMap_notEmpty_R_boolean, VTABLE_arc_struct_IntFloatMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_IntFloatMap_isEmpty_R_boolean, VTABLE_arc_struct_IntFloatMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_IntFloatMap_shrink_int, VTABLE_arc_struct_IntFloatMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntFloatMap_clear_int, VTABLE_arc_struct_IntFloatMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntFloatMap_clear, VTABLE_arc_struct_IntFloatMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_IntFloatMap_containsValue_float_R_boolean, VTABLE_arc_struct_IntFloatMap_containsValue_float_R_boolean, "(F)Z", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_IntFloatMap_containsValue_float_float_R_boolean, VTABLE_arc_struct_IntFloatMap_containsValue_float_float_R_boolean, "(FF)Z", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_IntFloatMap_containsKey_int_R_boolean, VTABLE_arc_struct_IntFloatMap_containsKey_int_R_boolean, "(I)Z", 1 },
	{ "findKey", (intptr_t) M_arc_struct_IntFloatMap_findKey_float_int_R_int, VTABLE_arc_struct_IntFloatMap_findKey_float_int_R_int, "(FI)I", 1 },
	{ "findKey", (intptr_t) M_arc_struct_IntFloatMap_findKey_float_float_int_R_int, VTABLE_arc_struct_IntFloatMap_findKey_float_float_int_R_int, "(FFI)I", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_IntFloatMap_ensureCapacity_int, VTABLE_arc_struct_IntFloatMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_IntFloatMap_resize_int, VTABLE_arc_struct_IntFloatMap_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_arc_struct_IntFloatMap_hashCode_R_int, VTABLE_arc_struct_IntFloatMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_IntFloatMap_toString_R_java_lang_String, VTABLE_arc_struct_IntFloatMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_IntFloatMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_IntFloatMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "entries", (intptr_t) M_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries, VTABLE_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries, "()Larc/struct/IntFloatMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values, VTABLE_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values, "()Larc/struct/IntFloatMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys, VTABLE_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys, "()Larc/struct/IntFloatMap$Keys;", 1 },
};

Class class_arc_struct_IntFloatMap{
		.nativeName = (intptr_t) "arc/struct/IntFloatMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntFloatMap),
		.classVtable = (intptr_t) vtable_arc_struct_IntFloatMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntFloatMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntFloatMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntFloatMap = registerClass(&class_arc_struct_IntFloatMap);

}
