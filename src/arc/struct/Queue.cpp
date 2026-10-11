#include "arc/struct/Queue.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Array.h"
#include "arc/util/Eachable.h"
#include "arc/struct/Queue.h"
#include "java/lang/Iterable.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/struct/Queue_QueueIterable.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_arc_struct_Queue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Queue *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
}

void clinit_arc_struct_Queue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_Queue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Queue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_arc_struct_Queue_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Queue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Queue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(20);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(25);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Queue_int_java_lang_Class(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Queue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(20);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(25);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[2].o), (frame[1].i));
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_values = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[1].o), ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(49);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(49);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:addLast", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(63);
	((func_arc_struct_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_tail;
	((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_tail = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(68);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(69);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:addFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(88);
	((func_arc_struct_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_resize_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (jint(1))));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(92);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(93);
	INST_IINC(3, -1);
	LINE_NUMBER(94);
	if ((frame[3].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(95);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(97);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(99);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (frame[3].i);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	((func_arc_struct_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_resize_int])(ctx, (frame[0].o), ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	frame[2].i = (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(120);
	((func_arc_struct_Queue_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Queue_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:resize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(128);
	frame[4].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(131);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(133);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), ((frame[4].i) - (frame[3].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(134);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(136);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i));
	LINE_NUMBER(137);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[5].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(138);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (frame[6].i), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(140);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[5].o);
	LINE_NUMBER(141);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(142);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_removeFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:removeFirst", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(158);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(159);
	ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head)) = (jobject(nullptr));
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(161);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(162);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_removeLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:removeLast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(177);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(181);
	frame[2].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(182);
	INST_IINC(2, -1);
	LINE_NUMBER(183);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(184);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(186);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(187);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(188);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (frame[2].i);
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (temp0 == (jint(-1))) goto label_1;
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

jint M_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:indexOf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(208);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(210);
	frame[4].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[5].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(211);
	if ((frame[2].i) != 0) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_6;
label_5:;
	{
	LINE_NUMBER(212);
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(213);
	frame[6].i = (frame[4].i);
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(214);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_12;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_12:;
	{
	LINE_NUMBER(213);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	goto label_13;
label_7:;
	{
	LINE_NUMBER(216);
	frame[6].i = (frame[4].i);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_16;
	}
	{
	LINE_NUMBER(217);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_18;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_18:;
	{
	LINE_NUMBER(216);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(218);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_20;
	}
	{
	LINE_NUMBER(219);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != (frame[1].o)) goto label_22;
	}
	{
	popStackFrame(ctx);
	return (((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)) - (frame[4].i));
	}
label_22:;
	{
	LINE_NUMBER(218);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	goto label_13;
label_6:;
	{
	LINE_NUMBER(222);
	if ((frame[4].i) >= (frame[5].i)) goto label_23;
	}
	{
	LINE_NUMBER(223);
	frame[6].i = (frame[4].i);
	}
label_25:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_26;
	}
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_28;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_28:;
	{
	LINE_NUMBER(223);
	INST_IINC(6, 1);
	goto label_25;
	}
label_26:;
	goto label_13;
label_23:;
	{
	LINE_NUMBER(226);
	frame[6].i = (frame[4].i);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_30:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_31;
	}
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_33;
	}
	{
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[4].i));
	}
label_33:;
	{
	LINE_NUMBER(226);
	INST_IINC(6, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(228);
	frame[6].i = (jint(0));
	}
label_34:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_13;
	}
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	if (temp0 == 0) goto label_36;
	}
	{
	popStackFrame(ctx);
	return (((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)) - (frame[4].i));
	}
label_36:;
	{
	LINE_NUMBER(228);
	INST_IINC(6, 1);
	goto label_34;
	}
label_13:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Queue_indexOf_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:indexOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(238);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(239);
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(240);
	frame[5].i = (frame[3].i);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))));
	if (temp0 == 0) goto label_10;
	}
	{
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[3].i));
	}
label_10:;
	{
	LINE_NUMBER(240);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(243);
	frame[5].i = (frame[3].i);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[3].i));
	}
label_16:;
	{
	LINE_NUMBER(243);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(245);
	frame[5].i = (jint(0));
	}
label_17:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))));
	if (temp0 == 0) goto label_19;
	}
	{
	popStackFrame(ctx);
	return (((frame[5].i) + (((jarray) nullCheck(ctx, (frame[2].o)))->length)) - (frame[3].i));
	}
label_19:;
	{
	LINE_NUMBER(245);
	INST_IINC(5, 1);
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_remove_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_indexOf_arc_func_Boolf_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(253);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(271);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:removeIndex", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(278);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(279);
	if ((frame[1].i) < ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(282);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	frame[4].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(283);
	frame[1].i = ((frame[1].i) + (frame[3].i));
	LINE_NUMBER(285);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(286);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(287);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(288);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(290);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(291);
	frame[1].i = ((frame[1].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(292);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(293);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), ((frame[4].i) - (frame[1].i)));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_tail = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_tail) - (jint(1)));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(296);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(297);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[2].o), ((frame[3].i) + (jint(1))), ((frame[1].i) - (frame[3].i)));
	LINE_NUMBER(298);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_head = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_head) + (jint(1)));
	LINE_NUMBER(300);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(301);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jobject M_arc_struct_Queue_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(322);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head)));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:last", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(336);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(339);
	frame[2].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(340);
	INST_IINC(2, -1);
	LINE_NUMBER(341);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(342);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(353);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(354);
	if ((frame[1].i) < ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(357);
	frame[3].i = (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[1].i));
	LINE_NUMBER(358);
	if ((frame[3].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(359);
	frame[3].i = ((frame[3].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(371);
	frame[2].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(372);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(374);
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(376);
	frame[4].i = (frame[2].i);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(377);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(376);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(381);
	frame[4].i = (frame[2].i);
	}
label_12:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(382);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(381);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(384);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(385);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(384);
	INST_IINC(4, 1);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(388);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head = (jint(0));
	LINE_NUMBER(389);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail = (jint(0));
	LINE_NUMBER(390);
	((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_iterable;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue$QueueIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue$QueueIterable);
	init_arc_struct_Queue$QueueIterable_arc_struct_Queue(ctx, sp[1].o, (frame[0].o));
	((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_iterable = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[0].o = (jobject)((func_arc_struct_Queue$QueueIterable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue$QueueIterable_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:each", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(407);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(408);
	frame[4].i = (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[3].i));
	LINE_NUMBER(409);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(410);
	frame[4].i = ((frame[4].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_6:;
	{
	LINE_NUMBER(412);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(407);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(414);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:find", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(419);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(420);
	frame[4].i = (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head) + (frame[3].i));
	LINE_NUMBER(421);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(422);
	frame[4].i = ((frame[4].i) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_6:;
	{
	LINE_NUMBER(424);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(425);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_9:;
	{
	LINE_NUMBER(419);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].o = sp[0].o;
	LINE_NUMBER(437);
	frame[2].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(438);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_tail);
	LINE_NUMBER(440);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[4].o = sp[0].o;
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (91));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(443);
	frame[5].i = (((frame[2].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_9:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(443);
	frame[5].i = (((frame[5].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (93));
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Queue_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	frame[1].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].o = sp[0].o;
	LINE_NUMBER(453);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(454);
	frame[4].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(456);
	frame[5].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(457);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(458);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(460);
	frame[5].i = ((frame[5].i) * (31));
	LINE_NUMBER(461);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[5].i = (temp0 + temp1);
	}
label_11:;
	{
	LINE_NUMBER(463);
	INST_IINC(4, 1);
	LINE_NUMBER(464);
	if ((frame[4].i) != (frame[3].i)) goto label_13;
	}
	INST_ICONST(0);
	INST_ISTORE(4);
label_13:;
	{
	LINE_NUMBER(457);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue:equals", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(471);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(472);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Queue)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(474);
	frame[2].o = (checkCast(ctx, &class_arc_struct_Queue, (frame[1].o)));
	LINE_NUMBER(475);
	frame[3].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(477);
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[2].o)))->F_size) == (frame[3].i)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(480);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_struct_Queue *) NULL_CHECK((frame[2].o)))->F_values;
	frame[6].o = sp[0].o;
	LINE_NUMBER(482);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	LINE_NUMBER(484);
	frame[8].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(485);
	frame[9].i = ((jint)((arc_struct_Queue *) NULL_CHECK((frame[2].o)))->F_head);
	LINE_NUMBER(486);
	frame[10].i = (jint(0));
	}
label_12:;
	{
	if ((frame[10].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(487);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i)));
	LINE_NUMBER(488);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i)));
	LINE_NUMBER(490);
	if ((frame[11].o) != nullptr) goto label_17;
	}
	INST_ALOAD(12);
	if ((--sp)->o != nullptr) goto label_18;
	goto label_19;
label_17:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (frame[12].o));
	if (temp0 != 0) goto label_19;
	}
label_18:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(491);
	INST_IINC(8, 1);
	LINE_NUMBER(492);
	INST_IINC(9, 1);
	LINE_NUMBER(493);
	if ((frame[8].i) != (frame[5].i)) goto label_22;
	}
	INST_ICONST(0);
	INST_ISTORE(8);
label_22:;
	{
	LINE_NUMBER(494);
	if ((frame[9].i) != (frame[7].i)) goto label_23;
	}
	INST_ICONST(0);
	INST_ISTORE(9);
label_23:;
	{
	LINE_NUMBER(486);
	INST_IINC(10, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_Queue;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field iterable
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_Queue[] {
	(void *) M_arc_struct_Queue_hashCode_R_int,
	(void *) M_arc_struct_Queue_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_Queue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_Queue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_Queue_each_arc_func_Cons,
	(void *) M_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Queue_addLast_java_lang_Object,
	(void *) M_arc_struct_Queue_add_java_lang_Object,
	(void *) M_arc_struct_Queue_addFirst_java_lang_Object,
	(void *) M_arc_struct_Queue_shrink_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Queue_ensureCapacity_int,
	(void *) M_arc_struct_Queue_resize_int,
	(void *) M_arc_struct_Queue_removeFirst_R_java_lang_Object,
	(void *) M_arc_struct_Queue_removeLast_R_java_lang_Object,
	(void *) M_arc_struct_Queue_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Queue_indexOf_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Queue_remove_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Queue_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Queue_removeIndex_int_R_java_lang_Object,
	(void *) M_arc_struct_Queue_isEmpty_R_boolean,
	(void *) M_arc_struct_Queue_first_R_java_lang_Object,
	(void *) M_arc_struct_Queue_last_R_java_lang_Object,
	(void *) M_arc_struct_Queue_get_int_R_java_lang_Object,
	(void *) M_arc_struct_Queue_clear,
	(void *) M_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object,
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
	{ "each", "(Larc/func/Cons;)V" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "addLast", "(Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "addFirst", "(Ljava/lang/Object;)V" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "removeFirst", "()Ljava/lang/Object;" },
	{ "removeLast", "()Ljava/lang/Object;" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "indexOf", "(Larc/func/Boolf;)I" },
	{ "remove", "(Larc/func/Boolf;)Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "remove", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "first", "()Ljava/lang/Object;" },
	{ "last", "()Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "clear", "()V" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_arc_util_Eachable, };

static jclass innerClasses[] {
	&class_arc_struct_Queue$QueueIterable,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_Queue, F_size), "I", 1 },
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_Queue, F_values), "[Ljava/lang/Object;", 1 },
	{ "head", &class_int, offsetof(arc_struct_Queue, F_head), "I", 4 },
	{ "tail", &class_int, offsetof(arc_struct_Queue, F_tail), "I", 4 },
	{ "iterable", &class_arc_struct_Queue$QueueIterable, offsetof(arc_struct_Queue, F_iterable), "Larc/struct/Queue$QueueIterable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Queue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Queue_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Queue_int_java_lang_Class, 0, "(ILjava/lang/Class;)V", 1 },
	{ "toArray", (intptr_t) M_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object, VTABLE_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object, "(Ljava/lang/Class;)[Ljava/lang/Object;", 1 },
	{ "addLast", (intptr_t) M_arc_struct_Queue_addLast_java_lang_Object, VTABLE_arc_struct_Queue_addLast_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_arc_struct_Queue_add_java_lang_Object, VTABLE_arc_struct_Queue_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addFirst", (intptr_t) M_arc_struct_Queue_addFirst_java_lang_Object, VTABLE_arc_struct_Queue_addFirst_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "shrink", (intptr_t) M_arc_struct_Queue_shrink_R_Array1_java_lang_Object, VTABLE_arc_struct_Queue_shrink_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_Queue_ensureCapacity_int, VTABLE_arc_struct_Queue_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_Queue_resize_int, VTABLE_arc_struct_Queue_resize_int, "(I)V", 4 },
	{ "removeFirst", (intptr_t) M_arc_struct_Queue_removeFirst_R_java_lang_Object, VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeLast", (intptr_t) M_arc_struct_Queue_removeLast_R_java_lang_Object, VTABLE_arc_struct_Queue_removeLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "contains", (intptr_t) M_arc_struct_Queue_contains_java_lang_Object_R_boolean, VTABLE_arc_struct_Queue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "contains", (intptr_t) M_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int, VTABLE_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_Queue_indexOf_arc_func_Boolf_R_int, VTABLE_arc_struct_Queue_indexOf_arc_func_Boolf_R_int, "(Larc/func/Boolf;)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_Queue_remove_arc_func_Boolf_R_boolean, VTABLE_arc_struct_Queue_remove_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_Queue_remove_java_lang_Object_R_boolean, VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "removeIndex", (intptr_t) M_arc_struct_Queue_removeIndex_int_R_java_lang_Object, VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_Queue_isEmpty_R_boolean, VTABLE_arc_struct_Queue_isEmpty_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_arc_struct_Queue_first_R_java_lang_Object, VTABLE_arc_struct_Queue_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "last", (intptr_t) M_arc_struct_Queue_last_R_java_lang_Object, VTABLE_arc_struct_Queue_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_Queue_get_int_R_java_lang_Object, VTABLE_arc_struct_Queue_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_arc_struct_Queue_clear, VTABLE_arc_struct_Queue_clear, "()V", 1 },
	{ "iterator", (intptr_t) M_arc_struct_Queue_iterator_R_java_util_Iterator, VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "each", (intptr_t) M_arc_struct_Queue_each_arc_func_Cons, VTABLE_arc_struct_Queue_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "find", (intptr_t) M_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object, VTABLE_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object, "(Larc/func/Boolf;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_arc_struct_Queue_toString_R_java_lang_String, VTABLE_arc_struct_Queue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_Queue_hashCode_R_int, VTABLE_arc_struct_Queue_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_Queue_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_Queue_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_arc_struct_Queue{
		.nativeName = (intptr_t) "arc/struct/Queue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Queue),
		.classVtable = (intptr_t) vtable_arc_struct_Queue,
		.staticInitializer = (intptr_t) clinit_arc_struct_Queue,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_Queue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Queue = registerClass(&class_arc_struct_Queue);

}
