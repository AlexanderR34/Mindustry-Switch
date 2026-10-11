#include "arc/struct/ObjectMap.h"
#include "arc/struct/ObjectMap_MapIterator.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Prov.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/struct/ObjectMap_Values.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_struct_ObjectMap_dummy;

void mark_arc_struct_ObjectMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_struct_ObjectMap_dummy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_struct_ObjectMap_dummy)->clazz)->markFunction)((jobject) SF_arc_struct_ObjectMap_dummy, mark, depth + 1);
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
	auto self = (arc_struct_ObjectMap *) object;
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

jobject SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:of", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2)))) goto label_3;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) * (jint(2))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (((frame[2].i) * (jint(2))) + (jint(1))))));
	LINE_NUMBER(60);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(69);
	init_arc_struct_ObjectMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	init_arc_struct_ObjectMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(85);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(86);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(87);
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
	LINE_NUMBER(88);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(91);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(92);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectMap_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_arc_struct_ObjectMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(104);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!((arc_struct_ObjectMap *)self)->F_keyTable) {
		init_arc_struct_ObjectMap(ctx, self);
	}
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(135);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(136);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(134);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(144);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(149);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(158);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_2:;
	{
	LINE_NUMBER(159);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_arc_struct_ObjectMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:putAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) / (jint(2)))) goto label_2;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) * (jint(2))))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) * (jint(2))) + (jint(1))))));
	LINE_NUMBER(167);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	((func_arc_struct_ObjectMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(177);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(178);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(179);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	}
label_9:;
	{
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:merge", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_each_arc_func_Cons2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(192);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(193);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap_arc_struct_ObjectMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_set_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(202);
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(209);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(210);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[2].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(208);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:getThrow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	throwException(ctx, (checkCast(ctx, &class_java_lang_RuntimeException, sp[0].o)));	}
label_1:;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(236);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(243);
	if ((frame[3].i) >= 0) goto label_3;
	}
	INST_ALOAD(2);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:remove", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(249);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(252);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)));
	LINE_NUMBER(253);
	frame[6].i = ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[7].i = (((frame[2].i) + (jint(1))) & (frame[6].i));
	}
label_7:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(256);
	if ((((frame[7].i) - (frame[8].i)) & (frame[6].i)) <= (((frame[2].i) - (frame[8].i)) & (frame[6].i))) goto label_11;
	}
	{
	LINE_NUMBER(257);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(258);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(259);
	frame[2].i = (frame[7].i);
	}
label_11:;
	{
	LINE_NUMBER(261);
	frame[7].i = (((frame[7].i) + (jint(1))) & (frame[6].i));
	LINE_NUMBER(262);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(263);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(264);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_ObjectMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ObjectMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(285);
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
	LINE_NUMBER(286);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	((func_arc_struct_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(295);
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(298);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(299);
	((func_arc_struct_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(304);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:containsValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(317);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(319);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_5:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(320);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) == nullptr) goto label_8;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) != nullptr) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(319);
	INST_IINC(5, -1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(321);
	goto label_9;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(322);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_12:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(323);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_15;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(322);
	INST_IINC(4, -1);
	goto label_12;
	}
label_13:;
	goto label_9;
label_10:;
	{
	LINE_NUMBER(325);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_16:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(325);
	INST_IINC(4, -1);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(345);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_5:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(346);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) == nullptr) goto label_8;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) != nullptr) goto label_8;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	}
label_8:;
	{
	LINE_NUMBER(345);
	INST_IINC(5, -1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(347);
	goto label_9;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(348);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_12:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(349);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_15:;
	{
	LINE_NUMBER(348);
	INST_IINC(4, -1);
	goto label_12;
	}
label_13:;
	goto label_9;
label_10:;
	{
	LINE_NUMBER(351);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_16:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_18:;
	{
	LINE_NUMBER(351);
	INST_IINC(4, -1);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(362);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_arc_struct_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(368);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(369);
	((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(378);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(379);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(380);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(381);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(379);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(384);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	frame[1].i = ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(390);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(391);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(392);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(393);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(394);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(395);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[1].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(390);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(403);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(404);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[1].o)));
	LINE_NUMBER(405);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(407);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(408);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(409);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(410);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(411);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(412);
	if ((frame[8].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = frame[2].o;
	sp[1].o = frame[7].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[2].o = (jobject)SF_arc_struct_ObjectMap_dummy;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (sp[0].o == nullptr) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(408);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:toString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(432);
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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
	LINE_NUMBER(433);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(434);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(436);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(437);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_8:;
	{
	LINE_NUMBER(438);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(439);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(440);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	goto label_8;
label_12:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[7].o) != (frame[0].o)) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_14;
label_13:;
	INST_ALOAD(7);
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(443);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(444);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[8].o) != (frame[0].o)) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_19;
label_18:;
	INST_ALOAD(8);
label_19:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(445);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(447);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_21;
	}
	{
	LINE_NUMBER(448);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(449);
	if ((frame[7].o) != nullptr) goto label_24;
	}
	goto label_9;
label_24:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(451);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[7].o) != (frame[0].o)) goto label_26;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_27;
label_26:;
	INST_ALOAD(7);
label_27:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(453);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(454);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[8].o) != (frame[0].o)) goto label_31;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_32;
label_31:;
	INST_ALOAD(8);
label_32:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(455);
	goto label_9;
	}
label_21:;
	{
	LINE_NUMBER(456);
	if ((frame[2].i) == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_34:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Entries);
	init_arc_struct_ObjectMap$Entries_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Entries);
	init_arc_struct_ObjectMap$Entries_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_arc_struct_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(477);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_arc_struct_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(482);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Values);
	init_arc_struct_ObjectMap$Values_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Values);
	init_arc_struct_ObjectMap$Values_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_arc_struct_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(499);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_arc_struct_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(504);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Keys);
	init_arc_struct_ObjectMap$Keys_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Keys);
	init_arc_struct_ObjectMap$Keys_arc_struct_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_arc_struct_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_arc_struct_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_struct_ObjectMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap(ctx);
	{
	LINE_NUMBER(24);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_arc_struct_ObjectMap(ctx);
	SF_arc_struct_ObjectMap_dummy = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_ObjectMap;
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

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method put
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method putMissing
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method remove
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_ObjectMap[] {
	(void *) M_arc_struct_ObjectMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_each_arc_func_Cons2,
	(void *) M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_set_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_shrink_int,
	(void *) M_arc_struct_ObjectMap_clear_int,
	(void *) M_arc_struct_ObjectMap_clear,
	(void *) M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectMap_resize_int,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values,
	(void *) M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys,
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
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "([Ljava/lang/Object;)V" },
	{ "putAll", "(Larc/struct/ObjectMap;)V" },
	{ "merge", "(Larc/struct/ObjectMap;)Larc/struct/ObjectMap;" },
	{ "each", "(Larc/func/Cons2;)V" },
	{ "copy", "()Larc/struct/ObjectMap;" },
	{ "set", "(Larc/struct/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "getThrow", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectMap$Entries;" },
	{ "values", "()Larc/struct/ObjectMap$Values;" },
	{ "keys", "()Larc/struct/ObjectMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_ObjectMap$Entries,
	&class_arc_struct_ObjectMap$Entry,
	&class_arc_struct_ObjectMap$Values,
	&class_arc_struct_ObjectMap$Keys,
	&class_arc_struct_ObjectMap$MapIterator,
};

static FieldMetadata fields[] {
	{ "dummy", &class_java_lang_Object, (intptr_t) &SF_arc_struct_ObjectMap_dummy, "Ljava/lang/Object;", 24 },
	{ "size", &class_int, offsetof(arc_struct_ObjectMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ObjectMap, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "valueTable", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ObjectMap, F_valueTable), "[Ljava/lang/Object;", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_ObjectMap, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(arc_struct_ObjectMap, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(arc_struct_ObjectMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_ObjectMap, F_mask), "I", 4 },
	{ "entries1", &class_arc_struct_ObjectMap$Entries, offsetof(arc_struct_ObjectMap, F_entries1), "Larc/struct/ObjectMap$Entries;", 128 },
	{ "entries2", &class_arc_struct_ObjectMap$Entries, offsetof(arc_struct_ObjectMap, F_entries2), "Larc/struct/ObjectMap$Entries;", 128 },
	{ "values1", &class_arc_struct_ObjectMap$Values, offsetof(arc_struct_ObjectMap, F_values1), "Larc/struct/ObjectMap$Values;", 128 },
	{ "values2", &class_arc_struct_ObjectMap$Values, offsetof(arc_struct_ObjectMap, F_values2), "Larc/struct/ObjectMap$Values;", 128 },
	{ "keys1", &class_arc_struct_ObjectMap$Keys, offsetof(arc_struct_ObjectMap, F_keys1), "Larc/struct/ObjectMap$Keys;", 128 },
	{ "keys2", &class_arc_struct_ObjectMap$Keys, offsetof(arc_struct_ObjectMap, F_keys2), "Larc/struct/ObjectMap$Keys;", 128 },
};

static MethodMetadata methods[] {
	{ "of", (intptr_t) SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap, 0, "([Ljava/lang/Object;)Larc/struct/ObjectMap;", 137 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectMap_arc_struct_ObjectMap, 0, "(Larc/struct/ObjectMap;)V", 1 },
	{ "place", (intptr_t) M_arc_struct_ObjectMap_place_java_lang_Object_R_int, VTABLE_arc_struct_ObjectMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int, VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "put", (intptr_t) M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putMissing", (intptr_t) M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object, VTABLE_arc_struct_ObjectMap_putAll_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "putAll", (intptr_t) M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap, VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 1 },
	{ "merge", (intptr_t) M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap, VTABLE_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)Larc/struct/ObjectMap;", 1 },
	{ "each", (intptr_t) M_arc_struct_ObjectMap_each_arc_func_Cons2, VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2, "(Larc/func/Cons2;)V", 1 },
	{ "copy", (intptr_t) M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap, VTABLE_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "set", (intptr_t) M_arc_struct_ObjectMap_set_arc_struct_ObjectMap, VTABLE_arc_struct_ObjectMap_set_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 1 },
	{ "putResize", (intptr_t) M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object, VTABLE_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 2 },
	{ "getThrow", (intptr_t) M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object, "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object, "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_ObjectMap_notEmpty_R_boolean, VTABLE_arc_struct_ObjectMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ObjectMap_isEmpty_R_boolean, VTABLE_arc_struct_ObjectMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ObjectMap_shrink_int, VTABLE_arc_struct_ObjectMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectMap_clear_int, VTABLE_arc_struct_ObjectMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectMap_clear, VTABLE_arc_struct_ObjectMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "findKey", (intptr_t) M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object, VTABLE_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object, "(Ljava/lang/Object;Z)Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ObjectMap_ensureCapacity_int, VTABLE_arc_struct_ObjectMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_ObjectMap_resize_int, VTABLE_arc_struct_ObjectMap_resize_int, "(I)V", 16 },
	{ "hashCode", (intptr_t) M_arc_struct_ObjectMap_hashCode_R_int, VTABLE_arc_struct_ObjectMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectMap_toString_R_java_lang_String, VTABLE_arc_struct_ObjectMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries, VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries, "()Larc/struct/ObjectMap$Entries;", 1 },
	{ "entries", (intptr_t) M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries, VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries, "()Larc/struct/ObjectMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values, VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values, "()Larc/struct/ObjectMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys, VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys, "()Larc/struct/ObjectMap$Keys;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
	{ "<clinit>", (intptr_t) clinit_arc_struct_ObjectMap, 0, "()V", 8 },
};

Class class_arc_struct_ObjectMap{
		.nativeName = (intptr_t) "arc/struct/ObjectMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ObjectMap),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectMap,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_ObjectMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectMap = registerClass(&class_arc_struct_ObjectMap);

}
