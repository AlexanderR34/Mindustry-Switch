#include "arc/struct/ObjectIntMap.h"
#include "arc/struct/ObjectIntMap_Keys.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "java/util/Arrays.h"
#include "arc/struct/ObjectIntMap_Values.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/struct/ObjectIntMap_MapIterator.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_ObjectIntMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ObjectIntMap *) object;
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

void clinit_arc_struct_ObjectIntMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ObjectIntMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(53);
	init_arc_struct_ObjectIntMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectIntMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	init_arc_struct_ObjectIntMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectIntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(71);
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
	LINE_NUMBER(72);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(75);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(76);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectIntMap_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_arc_struct_ObjectIntMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(88);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!((arc_struct_ObjectIntMap *)self)->F_keyTable) {
		init_arc_struct_ObjectIntMap(ctx, self);
	}
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(119);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(120);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(118);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_put_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(127);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(131);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_8:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(140);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_2:;
	{
	LINE_NUMBER(145);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(154);
	if ((frame[3].i) < 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(155);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:putMissing", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(163);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	}
label_2:;
	{
	LINE_NUMBER(164);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	((func_arc_struct_ObjectIntMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(176);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(177);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(178);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, (frame[0].o), (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))));
	}
label_9:;
	{
	LINE_NUMBER(176);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:putAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) / (jint(2)))) goto label_2;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) * (jint(2))));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) * (jint(2))) + (jint(1))))))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) * (jint(2))) + (jint(1))))))));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(183);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap_arc_struct_ObjectIntMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(194);
	((func_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_putResize_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(201);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(202);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(203);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(201);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_get_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(216);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(218);
	if ((frame[3].i) >= 0) goto label_3;
	}
	INST_ILOAD(2);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:increment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:increment", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(226);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:increment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(235);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[3].i));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_2:;
	{
	LINE_NUMBER(240);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(242);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(254);
	if ((frame[3].i) >= 0) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(257);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(258);
	frame[7].i = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[3].i) + (jint(1))) & (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(261);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[3].i) - (frame[9].i)) & (frame[7].i))) goto label_11;
	}
	{
	LINE_NUMBER(262);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(263);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)) = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(264);
	frame[3].i = (frame[8].i);
	}
label_11:;
	{
	LINE_NUMBER(266);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(267);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(268);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_ObjectIntMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ObjectIntMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(289);
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
	LINE_NUMBER(290);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(299);
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(302);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(303);
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(308);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap_containsValue_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(319);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(320);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) == nullptr) goto label_6;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(319);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:findKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(335);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(336);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(337);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_7;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(335);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_arc_struct_ObjectIntMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(353);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(354);
	((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(363);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(364);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(365);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(366);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	M_arc_struct_ObjectIntMap_putResize_java_lang_Object_int(ctx, (frame[0].o), (frame[6].o), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(364);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	frame[1].i = ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(375);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(376);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(377);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	frame[1].i = (temp0 + (temp1 + ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)))));
	}
label_9:;
	{
	LINE_NUMBER(375);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(383);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(384);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectIntMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(385);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[1].o)));
	LINE_NUMBER(386);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(389);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(390);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(391);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, (frame[2].o), (frame[7].o), (jint(0)));
	frame[8].i = temp0;
	LINE_NUMBER(393);
	if ((frame[8].i) != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(394);
	if ((frame[8].i) == ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i)))) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(389);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(409);
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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
	LINE_NUMBER(410);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(411);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(413);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(414);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_8:;
	{
	LINE_NUMBER(415);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(416);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(417);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	goto label_8;
label_12:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(421);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(423);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(424);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(425);
	if ((frame[7].o) != nullptr) goto label_19;
	}
	goto label_9;
label_19:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(430);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(431);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_24:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Entries);
	init_arc_struct_ObjectIntMap$Entries_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Entries);
	init_arc_struct_ObjectIntMap$Entries_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_arc_struct_ObjectIntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_arc_struct_ObjectIntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(457);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(458);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Values);
	init_arc_struct_ObjectIntMap$Values_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Values);
	init_arc_struct_ObjectIntMap$Values_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_arc_struct_ObjectIntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(474);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_arc_struct_ObjectIntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Keys);
	init_arc_struct_ObjectIntMap$Keys_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Keys);
	init_arc_struct_ObjectIntMap$Keys_arc_struct_ObjectIntMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_arc_struct_ObjectIntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_arc_struct_ObjectIntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(501);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_ObjectIntMap;
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

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findKey
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[25]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_ObjectIntMap[] {
	(void *) M_arc_struct_ObjectIntMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectIntMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectIntMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectIntMap_put_java_lang_Object_int,
	(void *) M_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int,
	(void *) M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_ObjectIntMap_putResize_java_lang_Object_int,
	(void *) M_arc_struct_ObjectIntMap_get_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int,
	(void *) M_arc_struct_ObjectIntMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectIntMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectIntMap_shrink_int,
	(void *) M_arc_struct_ObjectIntMap_clear_int,
	(void *) M_arc_struct_ObjectIntMap_clear,
	(void *) M_arc_struct_ObjectIntMap_containsValue_int_R_boolean,
	(void *) M_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object,
	(void *) M_arc_struct_ObjectIntMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectIntMap_resize_int,
	(void *) M_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries,
	(void *) M_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries,
	(void *) M_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values,
	(void *) M_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys,
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
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;I)V" },
	{ "put", "(Ljava/lang/Object;II)I" },
	{ "putMissing", "(Ljava/lang/Object;I)V" },
	{ "putMissing", "(Ljava/lang/Object;II)I" },
	{ "putAll", "(Larc/struct/ObjectIntMap;)V" },
	{ "putAll", "([Ljava/lang/Object;)V" },
	{ "copy", "()Larc/struct/ObjectIntMap;" },
	{ "set", "(Larc/struct/ObjectIntMap;)V" },
	{ "putResize", "(Ljava/lang/Object;I)V" },
	{ "get", "(Ljava/lang/Object;)I" },
	{ "get", "(Ljava/lang/Object;I)I" },
	{ "increment", "(Ljava/lang/Object;)I" },
	{ "increment", "(Ljava/lang/Object;I)I" },
	{ "increment", "(Ljava/lang/Object;II)I" },
	{ "remove", "(Ljava/lang/Object;)I" },
	{ "remove", "(Ljava/lang/Object;I)I" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(I)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(I)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectIntMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectIntMap$Entries;" },
	{ "values", "()Larc/struct/ObjectIntMap$Values;" },
	{ "keys", "()Larc/struct/ObjectIntMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_ObjectIntMap$Entries,
	&class_arc_struct_ObjectIntMap$Values,
	&class_arc_struct_ObjectIntMap$Keys,
	&class_arc_struct_ObjectIntMap$MapIterator,
	&class_arc_struct_ObjectIntMap$Entry,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_ObjectIntMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ObjectIntMap, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "valueTable", getArrayClass(&class_int, 1), offsetof(arc_struct_ObjectIntMap, F_valueTable), "[I", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_ObjectIntMap, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(arc_struct_ObjectIntMap, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(arc_struct_ObjectIntMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_ObjectIntMap, F_mask), "I", 4 },
	{ "entries1", &class_arc_struct_ObjectIntMap$Entries, offsetof(arc_struct_ObjectIntMap, F_entries1), "Larc/struct/ObjectIntMap$Entries;", 128 },
	{ "entries2", &class_arc_struct_ObjectIntMap$Entries, offsetof(arc_struct_ObjectIntMap, F_entries2), "Larc/struct/ObjectIntMap$Entries;", 128 },
	{ "values1", &class_arc_struct_ObjectIntMap$Values, offsetof(arc_struct_ObjectIntMap, F_values1), "Larc/struct/ObjectIntMap$Values;", 128 },
	{ "values2", &class_arc_struct_ObjectIntMap$Values, offsetof(arc_struct_ObjectIntMap, F_values2), "Larc/struct/ObjectIntMap$Values;", 128 },
	{ "keys1", &class_arc_struct_ObjectIntMap$Keys, offsetof(arc_struct_ObjectIntMap, F_keys1), "Larc/struct/ObjectIntMap$Keys;", 128 },
	{ "keys2", &class_arc_struct_ObjectIntMap$Keys, offsetof(arc_struct_ObjectIntMap, F_keys2), "Larc/struct/ObjectIntMap$Keys;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap_arc_struct_ObjectIntMap, 0, "(Larc/struct/ObjectIntMap;)V", 1 },
	{ "place", (intptr_t) M_arc_struct_ObjectIntMap_place_java_lang_Object_R_int, VTABLE_arc_struct_ObjectIntMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int, VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "put", (intptr_t) M_arc_struct_ObjectIntMap_put_java_lang_Object_int, VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "put", (intptr_t) M_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int, VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int, "(Ljava/lang/Object;II)I", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int, VTABLE_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int, VTABLE_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int, "(Ljava/lang/Object;II)I", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap, VTABLE_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap, "(Larc/struct/ObjectIntMap;)V", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object, VTABLE_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "copy", (intptr_t) M_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap, VTABLE_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap, "()Larc/struct/ObjectIntMap;", 1 },
	{ "set", (intptr_t) M_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap, VTABLE_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap, "(Larc/struct/ObjectIntMap;)V", 1 },
	{ "putResize", (intptr_t) M_arc_struct_ObjectIntMap_putResize_java_lang_Object_int, VTABLE_arc_struct_ObjectIntMap_putResize_java_lang_Object_int, "(Ljava/lang/Object;I)V", 2 },
	{ "get", (intptr_t) M_arc_struct_ObjectIntMap_get_java_lang_Object_R_int, VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "get", (intptr_t) M_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int, VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int, VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int, VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "increment", (intptr_t) M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int, VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int, "(Ljava/lang/Object;II)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int, VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int, VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_ObjectIntMap_notEmpty_R_boolean, VTABLE_arc_struct_ObjectIntMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ObjectIntMap_isEmpty_R_boolean, VTABLE_arc_struct_ObjectIntMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ObjectIntMap_shrink_int, VTABLE_arc_struct_ObjectIntMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectIntMap_clear_int, VTABLE_arc_struct_ObjectIntMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectIntMap_clear, VTABLE_arc_struct_ObjectIntMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_ObjectIntMap_containsValue_int_R_boolean, VTABLE_arc_struct_ObjectIntMap_containsValue_int_R_boolean, "(I)Z", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "findKey", (intptr_t) M_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object, VTABLE_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ObjectIntMap_ensureCapacity_int, VTABLE_arc_struct_ObjectIntMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_ObjectIntMap_resize_int, VTABLE_arc_struct_ObjectIntMap_resize_int, "(I)V", 16 },
	{ "hashCode", (intptr_t) M_arc_struct_ObjectIntMap_hashCode_R_int, VTABLE_arc_struct_ObjectIntMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectIntMap_toString_R_java_lang_String, VTABLE_arc_struct_ObjectIntMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 2 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries, VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries, "()Larc/struct/ObjectIntMap$Entries;", 1 },
	{ "entries", (intptr_t) M_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries, VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries, "()Larc/struct/ObjectIntMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values, VTABLE_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values, "()Larc/struct/ObjectIntMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys, VTABLE_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys, "()Larc/struct/ObjectIntMap$Keys;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_ObjectIntMap{
		.nativeName = (intptr_t) "arc/struct/ObjectIntMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ObjectIntMap),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectIntMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectIntMap,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_ObjectIntMap,
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
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectIntMap = registerClass(&class_arc_struct_ObjectIntMap);

}
