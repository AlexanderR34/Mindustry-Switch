#include "arc/struct/IntIntMap.h"
#include "java/lang/StringBuilder.h"
#include "arc/struct/IntIntMap_MapIterator.h"
#include "arc/struct/IntIntMap_Entry.h"
#include "java/util/Iterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "java/lang/Object.h"
#include "arc/struct/IntIntMap_Keys.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/struct/IntIntMap_Entries.h"
#include "arc/struct/IntIntMap_Values.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/IntIntMap.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_IntIntMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntIntMap *) object;
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

void clinit_arc_struct_IntIntMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_arc_struct_IntIntMap_of_Array1_int_R_arc_struct_IntIntMap(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:of", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_arc_struct_IntIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(55);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(56);
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))), ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[2].i) + (jint(1))))));
	LINE_NUMBER(55);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntIntMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_arc_struct_IntIntMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntIntMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(71);
	init_arc_struct_IntIntMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntIntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(81);
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
	LINE_NUMBER(82);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(84);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(85);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(86);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_IntIntMap_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_arc_struct_IntIntMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(98);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(99);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_zeroValue);
	LINE_NUMBER(100);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_place_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong((frame[1].i))) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	if (!((arc_struct_IntIntMap *)self)->F_keyTable) {
		init_arc_struct_IntIntMap(ctx, self);
	}
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:locateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(127);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(128);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_4:;
	{
	LINE_NUMBER(129);
	if ((frame[4].i) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(126);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_put_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(134);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(135);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].i);
	LINE_NUMBER(136);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_4;
	}
	{
	LINE_NUMBER(137);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_4:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(143);
	if ((frame[3].i) < 0) goto label_8;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(147);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntIntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_14:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_put_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(155);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(156);
	frame[4].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	LINE_NUMBER(157);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].i);
	LINE_NUMBER(158);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_5;
	}
	{
	LINE_NUMBER(159);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_1:;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(166);
	if ((frame[4].i) < 0) goto label_10;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(171);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntIntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_17:;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_putMissing_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_putMissing_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_putMissing_int_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_putMissing_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:putMissing", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(183);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	{
	LINE_NUMBER(185);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (frame[2].i);
	LINE_NUMBER(186);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_3:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	}
label_1:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(193);
	if ((frame[4].i) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	}
label_9:;
	{
	LINE_NUMBER(194);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntIntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	((func_arc_struct_IntIntMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(203);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, (frame[0].o), (jint(0)), ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_zeroValue));
	}
label_2:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(206);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(207);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(208);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, (frame[0].o), (frame[6].i), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	}
label_10:;
	{
	LINE_NUMBER(206);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(210);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_putResize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(216);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(217);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(215);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_get_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(229);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
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
	LINE_NUMBER(230);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(231);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ILOAD(2);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_increment_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:increment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_increment_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_increment_int_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_increment_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:increment", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_increment_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_increment_int_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_increment_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:increment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(247);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(248);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	{
	LINE_NUMBER(249);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(250);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_3:;
	{
	LINE_NUMBER(254);
	frame[4].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_zeroValue = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_zeroValue) + (frame[3].i));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_1:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(259);
	if ((frame[4].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[3].i));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_11:;
	{
	LINE_NUMBER(264);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_IntIntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_18:;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_remove_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_remove_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_remove_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_remove_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(278);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(279);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(280);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue);
	}
label_1:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(286);
	if ((frame[3].i) >= 0) goto label_7;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(289);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)));
	frame[7].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[3].i) + (jint(1))) & (frame[7].i));
	}
label_12:;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[8].i));
	frame[1].i = temp0;
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[9].i = temp0;
	LINE_NUMBER(292);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[3].i) - (frame[9].i)) & (frame[7].i))) goto label_16;
	}
	{
	LINE_NUMBER(293);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(294);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)) = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(295);
	frame[3].i = (frame[8].i);
	}
label_16:;
	{
	LINE_NUMBER(297);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(298);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(299);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[3].i)) = (jint(0));
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntIntMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_IntIntMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_IntIntMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(320);
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
	LINE_NUMBER(321);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	M_arc_struct_IntIntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(324);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(330);
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(333);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(334);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(335);
	M_arc_struct_IntIntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(341);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(342);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntIntMap_containsValue_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(350);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(353);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(354);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))) == 0) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(353);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntIntMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(359);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue);
	}
label_1:;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)M_arc_struct_IntIntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
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

jint M_arc_struct_IntIntMap_findKey_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(368);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	{
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(370);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(371);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(372);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(373);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i))) != (frame[1].i)) goto label_8;
	}
	INST_ILOAD(6);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(371);
	INST_IINC(5, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_arc_struct_IntIntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(389);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(390);
	((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(393);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(399);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(400);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(401);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(402);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	M_arc_struct_IntIntMap_putResize_int_int(ctx, (frame[0].o), (frame[6].i), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(400);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_IntIntMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	frame[1].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(409);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	frame[1].i = ((frame[1].i) + ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue));
	}
label_2:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(412);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(413);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(414);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	frame[1].i = ((frame[1].i) + (((frame[6].i) * (31)) + ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)))));
	}
label_10:;
	{
	LINE_NUMBER(412);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(421);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_IntIntMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(422);
	frame[2].o = (checkCast(ctx, &class_arc_struct_IntIntMap, (frame[1].o)));
	LINE_NUMBER(423);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(424);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) == ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(425);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	LINE_NUMBER(426);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[2].o)))->F_zeroValue) == ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(430);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(431);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(432);
	if ((frame[7].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(433);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntIntMap_get_int_int_R_int])(ctx, (frame[2].o), (frame[7].i), (jint(0)));
	frame[8].i = temp0;
	LINE_NUMBER(434);
	if ((frame[8].i) != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_arc_struct_IntIntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntIntMap_containsKey_int_R_boolean])(ctx, (frame[2].o), (frame[7].i));
	if (temp0 != 0) goto label_18;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(435);
	if ((frame[8].i) == ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i)))) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(430);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntIntMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(443);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[1].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(446);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(447);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(448);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_7;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0="_j))));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(452);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(453);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(454);
	if ((frame[5].i) != 0) goto label_13;
	}
	goto label_7;
label_13:;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(458);
	goto label_10;
	}
label_10:;
	{
	LINE_NUMBER(461);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_17;
	}
	{
	LINE_NUMBER(462);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(463);
	if ((frame[5].i) != 0) goto label_20;
	}
	goto label_10;
label_20:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(468);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntIntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Entries);
	init_arc_struct_IntIntMap$Entries_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Entries);
	init_arc_struct_IntIntMap$Entries_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_arc_struct_IntIntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(489);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_arc_struct_IntIntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Values);
	init_arc_struct_IntIntMap$Values_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Values);
	init_arc_struct_IntIntMap$Values_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_arc_struct_IntIntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(511);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_arc_struct_IntIntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(517);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Keys);
	init_arc_struct_IntIntMap$Keys_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap$Keys);
	init_arc_struct_IntIntMap$Keys_arc_struct_IntIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_arc_struct_IntIntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(533);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(535);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_arc_struct_IntIntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntIntMap[] {
	(void *) M_arc_struct_IntIntMap_hashCode_R_int,
	(void *) M_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_IntIntMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_IntIntMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_IntIntMap_place_int_R_int,
	(void *) M_arc_struct_IntIntMap_locateKey_int_R_int,
	(void *) M_arc_struct_IntIntMap_put_int_int,
	(void *) M_arc_struct_IntIntMap_put_int_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_putMissing_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_putMissing_int_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap,
	(void *) M_arc_struct_IntIntMap_putResize_int_int,
	(void *) M_arc_struct_IntIntMap_get_int_R_int,
	(void *) M_arc_struct_IntIntMap_get_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_increment_int_R_int,
	(void *) M_arc_struct_IntIntMap_increment_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_increment_int_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_remove_int_R_int,
	(void *) M_arc_struct_IntIntMap_remove_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_notEmpty_R_boolean,
	(void *) M_arc_struct_IntIntMap_isEmpty_R_boolean,
	(void *) M_arc_struct_IntIntMap_shrink_int,
	(void *) M_arc_struct_IntIntMap_clear_int,
	(void *) M_arc_struct_IntIntMap_clear,
	(void *) M_arc_struct_IntIntMap_containsValue_int_R_boolean,
	(void *) M_arc_struct_IntIntMap_containsKey_int_R_boolean,
	(void *) M_arc_struct_IntIntMap_findKey_int_int_R_int,
	(void *) M_arc_struct_IntIntMap_ensureCapacity_int,
	(void *) M_arc_struct_IntIntMap_resize_int,
	(void *) M_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries,
	(void *) M_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values,
	(void *) M_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys,
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
	{ "put", "(II)V" },
	{ "put", "(III)I" },
	{ "putMissing", "(II)I" },
	{ "putMissing", "(III)I" },
	{ "putAll", "(Larc/struct/IntIntMap;)V" },
	{ "putResize", "(II)V" },
	{ "get", "(I)I" },
	{ "get", "(II)I" },
	{ "increment", "(I)I" },
	{ "increment", "(II)I" },
	{ "increment", "(III)I" },
	{ "remove", "(I)I" },
	{ "remove", "(II)I" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(I)Z" },
	{ "containsKey", "(I)Z" },
	{ "findKey", "(II)I" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "entries", "()Larc/struct/IntIntMap$Entries;" },
	{ "values", "()Larc/struct/IntIntMap$Values;" },
	{ "keys", "()Larc/struct/IntIntMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_IntIntMap$Entries,
	&class_arc_struct_IntIntMap$Values,
	&class_arc_struct_IntIntMap$Keys,
	&class_arc_struct_IntIntMap$MapIterator,
	&class_arc_struct_IntIntMap$Entry,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_IntIntMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_int, 1), offsetof(arc_struct_IntIntMap, F_keyTable), "[I", 0 },
	{ "valueTable", getArrayClass(&class_int, 1), offsetof(arc_struct_IntIntMap, F_valueTable), "[I", 0 },
	{ "zeroValue", &class_int, offsetof(arc_struct_IntIntMap, F_zeroValue), "I", 0 },
	{ "hasZeroValue", &class_boolean, offsetof(arc_struct_IntIntMap, F_hasZeroValue), "Z", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_IntIntMap, F_loadFactor), "F", 18 },
	{ "threshold", &class_int, offsetof(arc_struct_IntIntMap, F_threshold), "I", 2 },
	{ "shift", &class_int, offsetof(arc_struct_IntIntMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_IntIntMap, F_mask), "I", 4 },
	{ "entries1", &class_arc_struct_IntIntMap$Entries, offsetof(arc_struct_IntIntMap, F_entries1), "Larc/struct/IntIntMap$Entries;", 130 },
	{ "entries2", &class_arc_struct_IntIntMap$Entries, offsetof(arc_struct_IntIntMap, F_entries2), "Larc/struct/IntIntMap$Entries;", 130 },
	{ "values1", &class_arc_struct_IntIntMap$Values, offsetof(arc_struct_IntIntMap, F_values1), "Larc/struct/IntIntMap$Values;", 130 },
	{ "values2", &class_arc_struct_IntIntMap$Values, offsetof(arc_struct_IntIntMap, F_values2), "Larc/struct/IntIntMap$Values;", 130 },
	{ "keys1", &class_arc_struct_IntIntMap$Keys, offsetof(arc_struct_IntIntMap, F_keys1), "Larc/struct/IntIntMap$Keys;", 130 },
	{ "keys2", &class_arc_struct_IntIntMap$Keys, offsetof(arc_struct_IntIntMap, F_keys2), "Larc/struct/IntIntMap$Keys;", 130 },
};

static MethodMetadata methods[] {
	{ "of", (intptr_t) SM_arc_struct_IntIntMap_of_Array1_int_R_arc_struct_IntIntMap, 0, "([I)Larc/struct/IntIntMap;", 137 },
	{ "<init>", (intptr_t) init_arc_struct_IntIntMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntIntMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntIntMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_IntIntMap_arc_struct_IntIntMap, 0, "(Larc/struct/IntIntMap;)V", 1 },
	{ "place", (intptr_t) M_arc_struct_IntIntMap_place_int_R_int, VTABLE_arc_struct_IntIntMap_place_int_R_int, "(I)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_IntIntMap_locateKey_int_R_int, VTABLE_arc_struct_IntIntMap_locateKey_int_R_int, "(I)I", 2 },
	{ "put", (intptr_t) M_arc_struct_IntIntMap_put_int_int, VTABLE_arc_struct_IntIntMap_put_int_int, "(II)V", 1 },
	{ "put", (intptr_t) M_arc_struct_IntIntMap_put_int_int_int_R_int, VTABLE_arc_struct_IntIntMap_put_int_int_int_R_int, "(III)I", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_IntIntMap_putMissing_int_int_R_int, VTABLE_arc_struct_IntIntMap_putMissing_int_int_R_int, "(II)I", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_IntIntMap_putMissing_int_int_int_R_int, VTABLE_arc_struct_IntIntMap_putMissing_int_int_int_R_int, "(III)I", 1 },
	{ "putAll", (intptr_t) M_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap, VTABLE_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap, "(Larc/struct/IntIntMap;)V", 1 },
	{ "putResize", (intptr_t) M_arc_struct_IntIntMap_putResize_int_int, VTABLE_arc_struct_IntIntMap_putResize_int_int, "(II)V", 2 },
	{ "get", (intptr_t) M_arc_struct_IntIntMap_get_int_R_int, VTABLE_arc_struct_IntIntMap_get_int_R_int, "(I)I", 1 },
	{ "get", (intptr_t) M_arc_struct_IntIntMap_get_int_int_R_int, VTABLE_arc_struct_IntIntMap_get_int_int_R_int, "(II)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntIntMap_increment_int_R_int, VTABLE_arc_struct_IntIntMap_increment_int_R_int, "(I)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntIntMap_increment_int_int_R_int, VTABLE_arc_struct_IntIntMap_increment_int_int_R_int, "(II)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_IntIntMap_increment_int_int_int_R_int, VTABLE_arc_struct_IntIntMap_increment_int_int_int_R_int, "(III)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_IntIntMap_remove_int_R_int, VTABLE_arc_struct_IntIntMap_remove_int_R_int, "(I)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_IntIntMap_remove_int_int_R_int, VTABLE_arc_struct_IntIntMap_remove_int_int_R_int, "(II)I", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_IntIntMap_notEmpty_R_boolean, VTABLE_arc_struct_IntIntMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_IntIntMap_isEmpty_R_boolean, VTABLE_arc_struct_IntIntMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_IntIntMap_shrink_int, VTABLE_arc_struct_IntIntMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntIntMap_clear_int, VTABLE_arc_struct_IntIntMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_IntIntMap_clear, VTABLE_arc_struct_IntIntMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_IntIntMap_containsValue_int_R_boolean, VTABLE_arc_struct_IntIntMap_containsValue_int_R_boolean, "(I)Z", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_IntIntMap_containsKey_int_R_boolean, VTABLE_arc_struct_IntIntMap_containsKey_int_R_boolean, "(I)Z", 1 },
	{ "findKey", (intptr_t) M_arc_struct_IntIntMap_findKey_int_int_R_int, VTABLE_arc_struct_IntIntMap_findKey_int_int_R_int, "(II)I", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_IntIntMap_ensureCapacity_int, VTABLE_arc_struct_IntIntMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_IntIntMap_resize_int, VTABLE_arc_struct_IntIntMap_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_arc_struct_IntIntMap_hashCode_R_int, VTABLE_arc_struct_IntIntMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_IntIntMap_toString_R_java_lang_String, VTABLE_arc_struct_IntIntMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_IntIntMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_IntIntMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "entries", (intptr_t) M_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries, VTABLE_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries, "()Larc/struct/IntIntMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values, VTABLE_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values, "()Larc/struct/IntIntMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys, VTABLE_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys, "()Larc/struct/IntIntMap$Keys;", 1 },
};

Class class_arc_struct_IntIntMap{
		.nativeName = (intptr_t) "arc/struct/IntIntMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntIntMap),
		.classVtable = (intptr_t) vtable_arc_struct_IntIntMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntIntMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntIntMap,
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
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntIntMap = registerClass(&class_arc_struct_IntIntMap);

}
