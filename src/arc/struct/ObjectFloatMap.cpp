#include "arc/struct/ObjectFloatMap.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/struct/ObjectFloatMap_Values.h"
#include "arc/struct/ObjectFloatMap.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Float.h"
#include "arc/struct/ObjectFloatMap_Keys.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/struct/ObjectFloatMap_Entries.h"
#include "arc/struct/ObjectFloatMap_Entry.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectFloatMap_MapIterator.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_ObjectFloatMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ObjectFloatMap *) object;
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

void clinit_arc_struct_ObjectFloatMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ObjectFloatMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectFloatMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(54);
	init_arc_struct_ObjectFloatMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectFloatMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	init_arc_struct_ObjectFloatMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectFloatMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(71);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(72);
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
	LINE_NUMBER(73);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(76);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(77);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))));
	init_arc_struct_ObjectFloatMap_int_float(ctx, sp[0].o, (jint(temp0)), ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp2 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, temp2, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp4 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, temp4, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(89);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:putAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) / (jint(2)))) goto label_2;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) * (jint(2))));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) * (jint(2))) + (jint(1))))))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) * (jint(2))) + (jint(1))))))));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(93);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!((arc_struct_ObjectFloatMap *)self)->F_keyTable) {
		init_arc_struct_ObjectFloatMap(ctx, self);
	}
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(128);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(129);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(127);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_put_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(136);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(140);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_8:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(152);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_2:;
	{
	LINE_NUMBER(157);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(166);
	if ((frame[3].i) < 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(167);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:putMissing", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(175);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	}
label_2:;
	{
	LINE_NUMBER(176);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	((func_arc_struct_ObjectFloatMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(189);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(190);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, (frame[0].o), (frame[4].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[5].i))));
	}
label_9:;
	{
	LINE_NUMBER(188);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((func_arc_struct_ObjectFloatMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(200);
	((func_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:each", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap$Entry, sp[0].o));
	LINE_NUMBER(205);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(206);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(213);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(214);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(212);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(226);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(228);
	if ((frame[3].i) >= 0) goto label_3;
	}
	INST_FLOAD(2);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i));
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:increment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(237);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[3].f));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_2:;
	{
	LINE_NUMBER(242);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = ((frame[2].f) + (frame[3].f));
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(255);
	if ((frame[3].i) >= 0) goto label_2;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(258);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(259);
	frame[7].i = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[3].i) + (jint(1))) & (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(262);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[3].i) - (frame[9].i)) & (frame[7].i))) goto label_11;
	}
	{
	LINE_NUMBER(263);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(264);
	ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(265);
	frame[3].i = (frame[8].i);
	}
label_11:;
	{
	LINE_NUMBER(267);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(268);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(269);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[6].f);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_ObjectFloatMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ObjectFloatMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(290);
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
	LINE_NUMBER(291);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(300);
	((func_arc_struct_ObjectFloatMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(303);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(304);
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(309);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap_containsValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(320);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(321);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) == nullptr) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (frame[1].f), -1)) != 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(320);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(332);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(333);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) == nullptr) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(332);
	INST_IINC(5, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_1;
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

jobject M_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:findKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(348);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(349);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(350);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (frame[1].f), -1)) != 0) goto label_7;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(348);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(362);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(363);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(364);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_7;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(362);
	INST_IINC(5, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_arc_struct_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(380);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(381);
	((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(390);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(391);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(392);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(393);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	M_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float(ctx, (frame[0].o), (frame[6].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(391);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectFloatMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	frame[1].i = ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(402);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(403);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(404);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	frame[1].i = (temp0 + (temp1 + temp2));
	}
label_9:;
	{
	LINE_NUMBER(402);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(411);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectFloatMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(412);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[1].o)));
	LINE_NUMBER(413);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(416);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(417);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(418);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(419);
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, (frame[2].o), (frame[7].o), (jfloat(0)));
	frame[8].f = temp0;
	LINE_NUMBER(420);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(421);
	if ((floatCompare((frame[8].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), -1)) == 0) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(416);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(436);
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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
	LINE_NUMBER(437);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(438);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(441);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_8:;
	{
	LINE_NUMBER(442);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(443);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(444);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	goto label_8;
label_12:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(448);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(450);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(451);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(452);
	if ((frame[7].o) != nullptr) goto label_19;
	}
	goto label_9;
label_19:;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(457);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(458);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_24:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Entries);
	init_arc_struct_ObjectFloatMap$Entries_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Entries);
	init_arc_struct_ObjectFloatMap$Entries_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_arc_struct_ObjectFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(478);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_arc_struct_ObjectFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Values);
	init_arc_struct_ObjectFloatMap$Values_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Values);
	init_arc_struct_ObjectFloatMap$Values_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_arc_struct_ObjectFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_arc_struct_ObjectFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Keys);
	init_arc_struct_ObjectFloatMap$Keys_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap$Keys);
	init_arc_struct_ObjectFloatMap$Keys_arc_struct_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_arc_struct_ObjectFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(522);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_arc_struct_ObjectFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_ObjectFloatMap;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findKey
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method findKey
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_ObjectFloatMap[] {
	(void *) M_arc_struct_ObjectFloatMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectFloatMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap,
	(void *) M_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectFloatMap_put_java_lang_Object_float,
	(void *) M_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float,
	(void *) M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float,
	(void *) M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float,
	(void *) M_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap,
	(void *) M_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap,
	(void *) M_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap,
	(void *) M_arc_struct_ObjectFloatMap_each_arc_func_Cons,
	(void *) M_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float,
	(void *) M_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float,
	(void *) M_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float,
	(void *) M_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float,
	(void *) M_arc_struct_ObjectFloatMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap_shrink_int,
	(void *) M_arc_struct_ObjectFloatMap_clear_int,
	(void *) M_arc_struct_ObjectFloatMap_clear,
	(void *) M_arc_struct_ObjectFloatMap_containsValue_float_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object,
	(void *) M_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object,
	(void *) M_arc_struct_ObjectFloatMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectFloatMap_resize_int,
	(void *) M_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries,
	(void *) M_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries,
	(void *) M_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values,
	(void *) M_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys,
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
	{ "putAll", "([Ljava/lang/Object;)Larc/struct/ObjectFloatMap;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;F)V" },
	{ "put", "(Ljava/lang/Object;FF)F" },
	{ "putMissing", "(Ljava/lang/Object;F)V" },
	{ "putMissing", "(Ljava/lang/Object;FF)F" },
	{ "putAll", "(Larc/struct/ObjectFloatMap;)V" },
	{ "copy", "()Larc/struct/ObjectFloatMap;" },
	{ "set", "(Larc/struct/ObjectFloatMap;)V" },
	{ "each", "(Larc/func/Cons;)V" },
	{ "putResize", "(Ljava/lang/Object;F)V" },
	{ "get", "(Ljava/lang/Object;F)F" },
	{ "increment", "(Ljava/lang/Object;FF)F" },
	{ "remove", "(Ljava/lang/Object;F)F" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(F)Z" },
	{ "containsValue", "(FF)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(F)Ljava/lang/Object;" },
	{ "findKey", "(FF)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectFloatMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectFloatMap$Entries;" },
	{ "values", "()Larc/struct/ObjectFloatMap$Values;" },
	{ "keys", "()Larc/struct/ObjectFloatMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_ObjectFloatMap$Entries,
	&class_arc_struct_ObjectFloatMap$Entry,
	&class_arc_struct_ObjectFloatMap$Values,
	&class_arc_struct_ObjectFloatMap$Keys,
	&class_arc_struct_ObjectFloatMap$MapIterator,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_ObjectFloatMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ObjectFloatMap, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "valueTable", getArrayClass(&class_float, 1), offsetof(arc_struct_ObjectFloatMap, F_valueTable), "[F", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_ObjectFloatMap, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(arc_struct_ObjectFloatMap, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(arc_struct_ObjectFloatMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_ObjectFloatMap, F_mask), "I", 4 },
	{ "entries1", &class_arc_struct_ObjectFloatMap$Entries, offsetof(arc_struct_ObjectFloatMap, F_entries1), "Larc/struct/ObjectFloatMap$Entries;", 128 },
	{ "entries2", &class_arc_struct_ObjectFloatMap$Entries, offsetof(arc_struct_ObjectFloatMap, F_entries2), "Larc/struct/ObjectFloatMap$Entries;", 128 },
	{ "values1", &class_arc_struct_ObjectFloatMap$Values, offsetof(arc_struct_ObjectFloatMap, F_values1), "Larc/struct/ObjectFloatMap$Values;", 128 },
	{ "values2", &class_arc_struct_ObjectFloatMap$Values, offsetof(arc_struct_ObjectFloatMap, F_values2), "Larc/struct/ObjectFloatMap$Values;", 128 },
	{ "keys1", &class_arc_struct_ObjectFloatMap$Keys, offsetof(arc_struct_ObjectFloatMap, F_keys1), "Larc/struct/ObjectFloatMap$Keys;", 128 },
	{ "keys2", &class_arc_struct_ObjectFloatMap$Keys, offsetof(arc_struct_ObjectFloatMap, F_keys2), "Larc/struct/ObjectFloatMap$Keys;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectFloatMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectFloatMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectFloatMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap, 0, "(Larc/struct/ObjectFloatMap;)V", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap, VTABLE_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap, "([Ljava/lang/Object;)Larc/struct/ObjectFloatMap;", 129 },
	{ "place", (intptr_t) M_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int, VTABLE_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int, VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "put", (intptr_t) M_arc_struct_ObjectFloatMap_put_java_lang_Object_float, VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "put", (intptr_t) M_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float, VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float, VTABLE_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float, VTABLE_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap, VTABLE_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap, "(Larc/struct/ObjectFloatMap;)V", 1 },
	{ "copy", (intptr_t) M_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap, VTABLE_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap, "()Larc/struct/ObjectFloatMap;", 1 },
	{ "set", (intptr_t) M_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap, VTABLE_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap, "(Larc/struct/ObjectFloatMap;)V", 1 },
	{ "each", (intptr_t) M_arc_struct_ObjectFloatMap_each_arc_func_Cons, VTABLE_arc_struct_ObjectFloatMap_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "putResize", (intptr_t) M_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float, VTABLE_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float, "(Ljava/lang/Object;F)V", 2 },
	{ "get", (intptr_t) M_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float, VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float, "(Ljava/lang/Object;F)F", 1 },
	{ "increment", (intptr_t) M_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float, VTABLE_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float, VTABLE_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float, "(Ljava/lang/Object;F)F", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_ObjectFloatMap_notEmpty_R_boolean, VTABLE_arc_struct_ObjectFloatMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ObjectFloatMap_isEmpty_R_boolean, VTABLE_arc_struct_ObjectFloatMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ObjectFloatMap_shrink_int, VTABLE_arc_struct_ObjectFloatMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectFloatMap_clear_int, VTABLE_arc_struct_ObjectFloatMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectFloatMap_clear, VTABLE_arc_struct_ObjectFloatMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_ObjectFloatMap_containsValue_float_R_boolean, VTABLE_arc_struct_ObjectFloatMap_containsValue_float_R_boolean, "(F)Z", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean, VTABLE_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean, "(FF)Z", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "findKey", (intptr_t) M_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object, VTABLE_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object, "(F)Ljava/lang/Object;", 1 },
	{ "findKey", (intptr_t) M_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object, VTABLE_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object, "(FF)Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ObjectFloatMap_ensureCapacity_int, VTABLE_arc_struct_ObjectFloatMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_ObjectFloatMap_resize_int, VTABLE_arc_struct_ObjectFloatMap_resize_int, "(I)V", 16 },
	{ "hashCode", (intptr_t) M_arc_struct_ObjectFloatMap_hashCode_R_int, VTABLE_arc_struct_ObjectFloatMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectFloatMap_toString_R_java_lang_String, VTABLE_arc_struct_ObjectFloatMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 2 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries, VTABLE_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries, "()Larc/struct/ObjectFloatMap$Entries;", 1 },
	{ "entries", (intptr_t) M_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries, VTABLE_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries, "()Larc/struct/ObjectFloatMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values, VTABLE_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values, "()Larc/struct/ObjectFloatMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys, VTABLE_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys, "()Larc/struct/ObjectFloatMap$Keys;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_ObjectFloatMap{
		.nativeName = (intptr_t) "arc/struct/ObjectFloatMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ObjectFloatMap),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectFloatMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectFloatMap,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_ObjectFloatMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 41,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectFloatMap = registerClass(&class_arc_struct_ObjectFloatMap);

}
