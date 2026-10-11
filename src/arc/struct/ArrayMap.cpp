#include "arc/struct/ArrayMap.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/struct/ArrayMap_Entries.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/ArrayMap.h"
#include "java/lang/Iterable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/ArrayMap_Keys.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "arc/struct/ArrayMap_Values.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_ArrayMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ArrayMap *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_entries1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries1)->clazz)->markFunction)((jobject) self->F_entries1, mark, depth + 1);
	if (self->F_entries2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries2)->clazz)->markFunction)((jobject) self->F_entries2, mark, depth + 1);
	if (self->F_valuesIter1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valuesIter1)->clazz)->markFunction)((jobject) self->F_valuesIter1, mark, depth + 1);
	if (self->F_valuesIter2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valuesIter2)->clazz)->markFunction)((jobject) self->F_valuesIter2, mark, depth + 1);
	if (self->F_keysIter1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keysIter1)->clazz)->markFunction)((jobject) self->F_keysIter1, mark, depth + 1);
	if (self->F_keysIter2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keysIter2)->clazz)->markFunction)((jobject) self->F_keysIter2, mark, depth + 1);
}

void clinit_arc_struct_ArrayMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ArrayMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_arc_struct_ArrayMap_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ArrayMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	init_arc_struct_ArrayMap_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ArrayMap_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[3].o), (frame[2].i));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[4].o), (frame[2].i));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_values = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ArrayMap_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(63);
	init_arc_struct_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(ctx, (frame[0].o), (jint(0)), (16), (frame[1].o), (frame[2].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ArrayMap_arc_struct_ArrayMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_ordered;
	jint temp1 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[2].o);
	init_arc_struct_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (jint(0)), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp3 = jint(0);
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, (jint(0)), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(80);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (temp0 + (jint(1)));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(91);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(92);
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) + (jint(1))), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:putAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	((func_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:putAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(108);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(109);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(110);
	frame[4].i = ((((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i)) - (frame[2].i));
	LINE_NUMBER(111);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[4].i))) * (jfloat(1.75f))))));
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(123);
	frame[3].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(124);
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(125);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(126);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != (frame[1].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_7:;
	{
	LINE_NUMBER(125);
	INST_IINC(3, -1);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(128);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_9:;
	{
	LINE_NUMBER(128);
	INST_IINC(3, -1);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:getKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(141);
	frame[4].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(142);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(143);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(144);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_7:;
	{
	LINE_NUMBER(143);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(146);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_9:;
	{
	LINE_NUMBER(146);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:getKeyAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(153);
	if ((frame[1].i) < ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:getValueAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(158);
	if ((frame[1].i) < ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:firstKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Map is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_firstValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:firstValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Map is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_setKey_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:setKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(173);
	if ((frame[1].i) < ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_setValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:setValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(178);
	if ((frame[1].i) < ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(183);
	if ((frame[1].i) <= ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(185);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_3;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (jint(1))), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[1].i) + (jint(1))), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:containsKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(199);
	frame[3].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(200);
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(201);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != (frame[1].o)) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(204);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	if (temp1 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(213);
	frame[4].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(214);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(215);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != (frame[1].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(218);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	if (temp1 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:indexOfKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(226);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(227);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(228);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(227);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(230);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(230);
	INST_IINC(3, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:indexOfValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(239);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(240);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(239);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(242);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(242);
	INST_IINC(4, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:removeKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(251);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(252);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(254);
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(251);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	goto label_12;
label_2:;
	{
	LINE_NUMBER(259);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_14:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(262);
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_16:;
	{
	LINE_NUMBER(259);
	INST_IINC(3, 1);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:removeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(272);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(273);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(274);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(275);
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(273);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_11;
label_3:;
	{
	LINE_NUMBER(280);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(282);
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(280);
	INST_IINC(4, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_removeIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:removeIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(292);
	if ((frame[1].i) < ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(295);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(296);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(299);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(302);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jobject M_arc_struct_ArrayMap_peekKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:peekKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_peekValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:peekValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(324);
	((func_arc_struct_ArrayMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(327);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(328);
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(334);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(335);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(336);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(334);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(338);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_shrink(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(347);
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, (frame[0].o), ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(355);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(356);
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
	LINE_NUMBER(357);
	frame[2].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(358);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	((func_arc_struct_ArrayMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_4:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(364);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys = (jref) (frame[2].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp3 = jint(0);
	sp[1].o = frame[3].o;
	jint temp4 = jint(0);
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, temp4, temp5);
	LINE_NUMBER(368);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[3].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	frame[1].i = (jint(0));
	frame[2].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[3].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(373);
	frame[4].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[5].o);
	LINE_NUMBER(378);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[6].o);
	LINE_NUMBER(372);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	frame[1].i = (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(392);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp2 = frame[1].i;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(385);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:truncate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(402);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) > (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(403);
	frame[2].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(403);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(407);
	((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ArrayMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(412);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(413);
	frame[3].i = (jint(0));
	LINE_NUMBER(414);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(415);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)));
	LINE_NUMBER(416);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(417);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	frame[3].i = (temp0 + (temp1 * (31)));
	}
label_10:;
	{
	LINE_NUMBER(418);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[3].i = (temp0 + temp1);
	}
label_11:;
	{
	LINE_NUMBER(414);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(424);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(425);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ArrayMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(426);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ArrayMap, (frame[1].o)));
	LINE_NUMBER(427);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(430);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(431);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(432);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(433);
	if ((frame[8].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(434);
	jint temp0 = (jint)((func_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].o));
	if (sp[0].o == nullptr) goto label_16;
	}
label_15:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(436);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_16;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(430);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(446);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(451);
	frame[4].i = (jint(1));
	}
label_9:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(451);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Entries);
	init_arc_struct_ArrayMap$Entries_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Entries);
	init_arc_struct_ArrayMap$Entries_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Values);
	init_arc_struct_ArrayMap$Values_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_valuesIter1 = (jref) sp[1].o;
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Values);
	init_arc_struct_ArrayMap$Values_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_valuesIter2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	if (((jint)((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter2;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter2;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter2;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter1;
	((arc_struct_ArrayMap$Values *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_valuesIter2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Keys);
	init_arc_struct_ArrayMap$Keys_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_keysIter1 = (jref) sp[1].o;
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ArrayMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ArrayMap$Keys);
	init_arc_struct_ArrayMap$Keys_arc_struct_ArrayMap(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_keysIter2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	if (((jint)((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter2;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter2;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter2;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter1;
	((arc_struct_ArrayMap$Keys *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keysIter2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ArrayMap[] {
	(void *) M_arc_struct_ArrayMap_hashCode_R_int,
	(void *) M_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ArrayMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ArrayMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int,
	(void *) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int,
	(void *) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap,
	(void *) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int,
	(void *) M_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_firstKey_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_firstValue_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_setKey_int_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_setValue_int_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ArrayMap_removeIndex_int,
	(void *) M_arc_struct_ArrayMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ArrayMap_peekKey_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_peekValue_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_clear_int,
	(void *) M_arc_struct_ArrayMap_clear,
	(void *) M_arc_struct_ArrayMap_shrink,
	(void *) M_arc_struct_ArrayMap_ensureCapacity_int,
	(void *) M_arc_struct_ArrayMap_resize_int,
	(void *) M_arc_struct_ArrayMap_reverse,
	(void *) M_arc_struct_ArrayMap_shuffle,
	(void *) M_arc_struct_ArrayMap_truncate_int,
	(void *) M_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries,
	(void *) M_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values,
	(void *) M_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys,
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
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;I)I" },
	{ "putAll", "(Larc/struct/ArrayMap;)V" },
	{ "putAll", "(Larc/struct/ArrayMap;II)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "getKeyAt", "(I)Ljava/lang/Object;" },
	{ "getValueAt", "(I)Ljava/lang/Object;" },
	{ "firstKey", "()Ljava/lang/Object;" },
	{ "firstValue", "()Ljava/lang/Object;" },
	{ "setKey", "(ILjava/lang/Object;)V" },
	{ "setValue", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;Ljava/lang/Object;)V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "indexOfKey", "(Ljava/lang/Object;)I" },
	{ "indexOfValue", "(Ljava/lang/Object;Z)I" },
	{ "removeKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)V" },
	{ "isEmpty", "()Z" },
	{ "peekKey", "()Ljava/lang/Object;" },
	{ "peekValue", "()Ljava/lang/Object;" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "shrink", "()V" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "entries", "()Larc/struct/ArrayMap$Entries;" },
	{ "values", "()Larc/struct/ArrayMap$Values;" },
	{ "keys", "()Larc/struct/ArrayMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_ArrayMap$Entries,
	&class_arc_struct_ArrayMap$Values,
	&class_arc_struct_ArrayMap$Keys,
};

static FieldMetadata fields[] {
	{ "keys", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ArrayMap, F_keys), "[Ljava/lang/Object;", 1 },
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ArrayMap, F_values), "[Ljava/lang/Object;", 1 },
	{ "size", &class_int, offsetof(arc_struct_ArrayMap, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_ArrayMap, F_ordered), "Z", 1 },
	{ "entries1", &class_arc_struct_ArrayMap$Entries, offsetof(arc_struct_ArrayMap, F_entries1), "Larc/struct/ArrayMap$Entries;", 2 },
	{ "entries2", &class_arc_struct_ArrayMap$Entries, offsetof(arc_struct_ArrayMap, F_entries2), "Larc/struct/ArrayMap$Entries;", 2 },
	{ "valuesIter1", &class_arc_struct_ArrayMap$Values, offsetof(arc_struct_ArrayMap, F_valuesIter1), "Larc/struct/ArrayMap$Values;", 2 },
	{ "valuesIter2", &class_arc_struct_ArrayMap$Values, offsetof(arc_struct_ArrayMap, F_valuesIter2), "Larc/struct/ArrayMap$Values;", 2 },
	{ "keysIter1", &class_arc_struct_ArrayMap$Keys, offsetof(arc_struct_ArrayMap, F_keysIter1), "Larc/struct/ArrayMap$Keys;", 2 },
	{ "keysIter2", &class_arc_struct_ArrayMap$Keys, offsetof(arc_struct_ArrayMap, F_keysIter2), "Larc/struct/ArrayMap$Keys;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap_boolean_int_java_lang_Class_java_lang_Class, 0, "(ZILjava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap_java_lang_Class_java_lang_Class, 0, "(Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap_arc_struct_ArrayMap, 0, "(Larc/struct/ArrayMap;)V", 1 },
	{ "put", (intptr_t) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int, VTABLE_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "put", (intptr_t) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int, VTABLE_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int, "(Ljava/lang/Object;Ljava/lang/Object;I)I", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap, VTABLE_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap, "(Larc/struct/ArrayMap;)V", 1 },
	{ "putAll", (intptr_t) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int, VTABLE_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int, "(Larc/struct/ArrayMap;II)V", 1 },
	{ "get", (intptr_t) M_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getKey", (intptr_t) M_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object, "(Ljava/lang/Object;Z)Ljava/lang/Object;", 1 },
	{ "getKeyAt", (intptr_t) M_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "getValueAt", (intptr_t) M_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "firstKey", (intptr_t) M_arc_struct_ArrayMap_firstKey_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "firstValue", (intptr_t) M_arc_struct_ArrayMap_firstValue_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_firstValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setKey", (intptr_t) M_arc_struct_ArrayMap_setKey_int_java_lang_Object, VTABLE_arc_struct_ArrayMap_setKey_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "setValue", (intptr_t) M_arc_struct_ArrayMap_setValue_int_java_lang_Object, VTABLE_arc_struct_ArrayMap_setValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object, VTABLE_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object, "(ILjava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean, VTABLE_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "indexOfKey", (intptr_t) M_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int, VTABLE_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "indexOfValue", (intptr_t) M_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int, VTABLE_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "removeKey", (intptr_t) M_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeValue", (intptr_t) M_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_ArrayMap_removeIndex_int, VTABLE_arc_struct_ArrayMap_removeIndex_int, "(I)V", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ArrayMap_isEmpty_R_boolean, VTABLE_arc_struct_ArrayMap_isEmpty_R_boolean, "()Z", 1 },
	{ "peekKey", (intptr_t) M_arc_struct_ArrayMap_peekKey_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_peekKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekValue", (intptr_t) M_arc_struct_ArrayMap_peekValue_R_java_lang_Object, VTABLE_arc_struct_ArrayMap_peekValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_arc_struct_ArrayMap_clear_int, VTABLE_arc_struct_ArrayMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ArrayMap_clear, VTABLE_arc_struct_ArrayMap_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ArrayMap_shrink, VTABLE_arc_struct_ArrayMap_shrink, "()V", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ArrayMap_ensureCapacity_int, VTABLE_arc_struct_ArrayMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_ArrayMap_resize_int, VTABLE_arc_struct_ArrayMap_resize_int, "(I)V", 4 },
	{ "reverse", (intptr_t) M_arc_struct_ArrayMap_reverse, VTABLE_arc_struct_ArrayMap_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_ArrayMap_shuffle, VTABLE_arc_struct_ArrayMap_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_arc_struct_ArrayMap_truncate_int, VTABLE_arc_struct_ArrayMap_truncate_int, "(I)V", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_ArrayMap_hashCode_R_int, VTABLE_arc_struct_ArrayMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ArrayMap_toString_R_java_lang_String, VTABLE_arc_struct_ArrayMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ArrayMap_iterator_R_java_util_Iterator, VTABLE_arc_struct_ArrayMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "entries", (intptr_t) M_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries, VTABLE_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries, "()Larc/struct/ArrayMap$Entries;", 1 },
	{ "values", (intptr_t) M_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values, VTABLE_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values, "()Larc/struct/ArrayMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys, VTABLE_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys, "()Larc/struct/ArrayMap$Keys;", 1 },
};

Class class_arc_struct_ArrayMap{
		.nativeName = (intptr_t) "arc/struct/ArrayMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ArrayMap),
		.classVtable = (intptr_t) vtable_arc_struct_ArrayMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_ArrayMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ArrayMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ArrayMap = registerClass(&class_arc_struct_ArrayMap);

}
