#include "arc/struct/Seq.h"
#include "arc/struct/Seq_invoke_arc_func_Prov_0.h"
#include "arc/struct/Seq_invoke_arc_func_Func_0.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/struct/Seq_invoke_arc_func_Func_1.h"
#include "arc/math/Rand.h"
#include "java/lang/reflect/Array.h"
#include "arc/util/Eachable.h"
#include "java/util/ArrayList.h"
#include "arc/struct/FloatSeq.h"
#include "arc/func/Func2.h"
#include "java/lang/Iterable.h"
#include "arc/struct/IntSeq.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/func/Intf.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/struct/Seq_SeqIterable.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "arc/struct/Seq_invoke_arc_func_Cons_1.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq_invoke_arc_func_Cons_0.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "arc/util/Structs.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "arc/struct/Sort.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/Seq_invoke_arc_func_Boolf_0.h"
#include "arc/util/Select.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"
#include "java/util/Objects.h"
#include "arc/struct/ObjectIntMap.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_struct_Seq_iteratorsAllocated;

void mark_arc_struct_Seq(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Seq *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
}

void init_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_arc_struct_Seq_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	init_arc_struct_Seq_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	init_arc_struct_Seq_boolean_int(ctx, (frame[0].o), (frame[1].i), (16));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[3].o), (frame[2].i));
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, (frame[0].o), (jint(1)), (16), (frame[1].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_ordered;
	jint temp1 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(77);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[4].i;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(98);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(99);
	sp[0].o = frame[2].o;
	jint temp2 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_withArrays_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:withArrays", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(103);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[5].o), &class_arc_struct_Seq)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[1].o), (checkCast(ctx, &class_arc_struct_Seq, (frame[5].o))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(104);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(116);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:with", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(120);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(123);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_map_Array1_java_lang_Object_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:map", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(128);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(129);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:select", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(137);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(138);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:asMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(147);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i))));
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[2].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[2].o))(ctx, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[4].i))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(148);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:groupBy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(156);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(158);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Prov_0);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[4].o));
	LINE_NUMBER(156);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:groupByCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:asMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Func_0(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Func_0 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Func_0);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:asSet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)SM_arc_struct_ObjectSet_with_arc_struct_Seq_R_arc_struct_ObjectSet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_copy_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_arc_struct_Seq(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_list_R_java_util_ArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:list", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_Seq_sumf_arc_func_Floatf_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sumf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(191);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(192);
	jfloat temp0 = frame[2].f;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	frame[2].f = (temp0 + temp1);
	LINE_NUMBER(191);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_sum_arc_func_Intf_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sum", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	frame[2].i = (jint(0));
	LINE_NUMBER(199);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(200);
	jint temp0 = frame[2].i;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(199);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(206);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	}
label_4:;
	{
	LINE_NUMBER(206);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Seq_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:each", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	LINE_NUMBER(213);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Seq_replace_arc_func_Func(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(220);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(223);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_flatten_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:flatten", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(228);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_arc_struct_Seq, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))))));
	LINE_NUMBER(228);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:flatMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_Iterable, sp[1].o)));
	LINE_NUMBER(237);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:map", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(246);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:mapInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(255);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(255);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:mapInt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(263);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_6:;
	{
	LINE_NUMBER(264);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:mapFloat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(276);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(276);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:reduce", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(283);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(284);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_func_Func2_get_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func2, INDEX_arc_func_Func2_get_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(284);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:allMatch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(291);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(300);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(300);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:min", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(310);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(312);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[4].o));
	if (temp0 <= 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(313);
	frame[2].o = (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(310);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:max", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(321);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(323);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[4].o));
	if (temp0 >= 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(324);
	frame[2].o = (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(321);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:min", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(331);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(332);
	frame[4].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(333);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(335);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(336);
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o));
	frame[7].f = temp0;
	LINE_NUMBER(337);
	if ((floatCompare((frame[7].f), (frame[4].f), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(338);
	frame[3].o = (frame[6].o);
	LINE_NUMBER(339);
	frame[4].f = (frame[7].f);
	}
label_8:;
	{
	LINE_NUMBER(333);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:min", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(346);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(347);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_7;
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	if (temp0 <= 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(350);
	frame[3].o = (frame[5].o);
	}
label_6:;
	{
	LINE_NUMBER(347);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:min", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(357);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(358);
	frame[3].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(359);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(361);
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	frame[6].f = temp0;
	LINE_NUMBER(362);
	if ((floatCompare((frame[6].f), (frame[3].f), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(363);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(364);
	frame[3].f = (frame[6].f);
	}
label_8:;
	{
	LINE_NUMBER(359);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:max", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(372);
	frame[3].f = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(373);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(375);
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	frame[6].f = temp0;
	LINE_NUMBER(376);
	if ((floatCompare((frame[6].f), (frame[3].f), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(377);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(378);
	frame[3].f = (frame[6].f);
	}
label_8:;
	{
	LINE_NUMBER(373);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:find", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(385);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_4:;
	{
	LINE_NUMBER(385);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(394);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addUnique", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(412);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(413);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size;
	((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(419);
	if ((((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(420);
	ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(421);
	ARRAY_ACCESS(jobject, (frame[3].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(428);
	if ((((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(429);
	ARRAY_ACCESS(jobject, (frame[4].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(430);
	ARRAY_ACCESS(jobject, (frame[4].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(431);
	ARRAY_ACCESS(jobject, (frame[4].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].o);
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(438);
	if ((((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(439);
	ARRAY_ACCESS(jobject, (frame[5].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].o);
	LINE_NUMBER(440);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(441);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].o);
	LINE_NUMBER(442);
	ARRAY_ACCESS(jobject, (frame[5].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].o);
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(463);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(464);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start + count must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(476);
	frame[5].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(477);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat((frame[5].i))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(478);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(479);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(489);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_set_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(496);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_set_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_getFrac_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:getFrac", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(509);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((frame[1].f) * (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)))))), (jint(0)), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(514);
	if ((frame[1].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(519);
	if ((frame[1].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(524);
	if ((frame[1].i) <= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(526);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(527);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(528);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(530);
	ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(532);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(536);
	if ((frame[1].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"first can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(537);
	if ((frame[2].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"second can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(539);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(540);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(541);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(550);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:containsAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(559);
	jint temp0 = (jint)((func_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:containsAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(566);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(567);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[2].i));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(566);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(586);
	frame[4].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(587);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(588);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(589);
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
	LINE_NUMBER(591);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(592);
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
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:indexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(609);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(610);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(611);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(610);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(613);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(614);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(613);
	INST_IINC(4, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:indexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(621);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(622);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(621);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:lastIndexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(635);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(636);
	frame[4].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_4:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(637);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_7;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(636);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	goto label_8;
label_3:;
	{
	LINE_NUMBER(639);
	frame[4].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_9:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(640);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_11;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(639);
	INST_IINC(4, -1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(647);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(653);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(654);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(653);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(670);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(671);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(672);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(671);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_11;
label_3:;
	{
	LINE_NUMBER(678);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(679);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(678);
	INST_IINC(4, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(690);
	if ((frame[1].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(692);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(694);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(695);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(697);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(698);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(704);
	if ((frame[2].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(705);
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start can't be > end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(707);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(708);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(709);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (frame[4].i)), (frame[3].o), (frame[1].i), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(711);
	frame[5].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(712);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(713);
	ARRAY_ACCESS(jobject, (frame[3].o), ((frame[1].i) + (frame[6].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[5].i) - (frame[6].i))));
	LINE_NUMBER(712);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(715);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (frame[4].i));
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:removeAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(721);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(723);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:removeAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:removeAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(739);
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(740);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(741);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(742);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(743);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(745);
	frame[9].i = (jint(0));
	}
label_11:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(746);
	if ((frame[8].o) != ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)))) goto label_14;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(748);
	INST_IINC(3, -1);
	LINE_NUMBER(749);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(745);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(743);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	goto label_18;
label_4:;
	{
	LINE_NUMBER(754);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_20:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(756);
	frame[9].i = (jint(0));
	}
label_23:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_24;
	}
	{
	LINE_NUMBER(757);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[8].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(759);
	INST_IINC(3, -1);
	LINE_NUMBER(760);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(756);
	INST_IINC(9, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(754);
	INST_IINC(6, 1);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(765);
	if ((frame[3].i) == (frame[4].i)) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:pop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(771);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(779);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(780);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(781);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(786);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(792);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_firstOpt_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:firstOpt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(799);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(805);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

jbool M_arc_struct_Seq_any_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:any", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(809);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jobject M_arc_struct_Seq_clear_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(814);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(815);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(814);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(816);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, (frame[0].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(836);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(837);
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
	LINE_NUMBER(838);
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(839);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(848);
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(849);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(850);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(851);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	if (sp[0].o != (((jobject) getArrayClass(&class_java_lang_Object, 1)))) goto label_2;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(859);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = frame[3].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(860);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[3].o);
	LINE_NUMBER(861);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_sort_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)SM_arc_struct_Sort_instance_R_arc_struct_Sort(ctx);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_struct_Sort_sort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)SM_arc_struct_Sort_instance_R_arc_struct_Sort(ctx);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, (frame[1].o), (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(876);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)SM_arc_struct_Sort_instance_R_arc_struct_Sort(ctx);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[2].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, (frame[1].o));
	((func_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:sortComparing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(885);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:selectFrom", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	LINE_NUMBER(891);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(896);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_distinct_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:distinct", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((func_arc_struct_Seq_asSet_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_asSet_R_arc_struct_ObjectSet])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(902);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	LINE_NUMBER(903);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_as_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:select", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(913);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(914);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(915);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(916);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	}
label_5:;
	{
	LINE_NUMBER(914);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(924);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Boolf_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_count_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:count", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(928);
	frame[2].i = (jint(0));
	LINE_NUMBER(929);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(930);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_5;
	}
	LINE_NUMBER(931);
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(929);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:selectRanked", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(947);
	if ((frame[2].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(948);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nth_lowest must be greater than 0, 1 = first, 2 = second..."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)SM_arc_util_Select_instance_R_arc_util_Select(ctx);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:selectRankedIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(961);
	if ((frame[2].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(962);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nth_lowest must be greater than 0, 1 = first, 2 = second..."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)SM_arc_util_Select_instance_R_arc_util_Select(ctx);
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_reverse_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(969);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(970);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(971);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(972);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(973);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(969);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_shuffle_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(981);
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(982);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(983);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(984);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(985);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(981);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(988);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:truncate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(996);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(997);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) > (frame[1].i)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(998);
	frame[2].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(998);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1000);
	((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(1001);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:random", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1004);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (jint(0)), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_random_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:random", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1010);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	sp[0].o = (jobject)((func_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:random", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1016);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1017);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(1018);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != (jint(1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1020);
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1022);
	if ((frame[2].i) != (jint(-1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1025);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(2))));
	frame[3].i = temp0;
	LINE_NUMBER(1026);
	if ((frame[3].i) < (frame[2].i)) goto label_7;
	}
	LINE_NUMBER(1027);
	INST_IINC(3, 1);
label_7:;
	{
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:toArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1037);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[1].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(1043);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Seq_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1048);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1050);
	frame[2].i = (jint(1));
	LINE_NUMBER(1051);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(1052);
	frame[2].i = ((frame[2].i) * (31));
	LINE_NUMBER(1053);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1054);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[2].i = (temp0 + temp1);
	}
label_10:;
	{
	LINE_NUMBER(1051);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1061);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1062);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1063);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1064);
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	LINE_NUMBER(1065);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1066);
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1067);
	if ((frame[3].i) == ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1070);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(1071);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1072);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(1073);
	if ((frame[7].o) != nullptr) goto label_15;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_16;
	goto label_17;
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[8].o));
	if (temp0 != 0) goto label_17;
	}
label_16:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(1070);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1080);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1082);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(1085);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(1085);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1094);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1096);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1097);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(1098);
	frame[5].i = (jint(1));
	}
label_5:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(1100);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(1098);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1102);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1106);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_struct_Seq_invoke_arc_func_Func_1(ctx);
		auto proxy = (arc_struct_Seq_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_arc_struct_Seq_invoke_arc_func_Func_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_iterable;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq$SeqIterable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq$SeqIterable);
	init_arc_struct_Seq$SeqIterable_arc_struct_Seq(ctx, sp[1].o, (frame[0].o));
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_iterable = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[0].o = (jobject)((func_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_struct_Seq_lambda$retainAll$0_arc_func_Boolf_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:lambda$retainAll$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(924);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
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

void M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:lambda$selectFrom$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(892);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(895);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_struct_Seq_lambda$asMap$0_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:lambda$asMap$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void clinit_arc_struct_Seq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq(ctx);
	{
	LINE_NUMBER(17);
	clinit_arc_struct_Seq(ctx);
	SF_arc_struct_Seq_iteratorsAllocated = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_Seq;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[7])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[8])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method find
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getFrac
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method firstOpt
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[74]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_Seq[] {
	(void *) M_arc_struct_Seq_hashCode_R_int,
	(void *) M_arc_struct_Seq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_Seq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_Seq_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_Seq_each_arc_func_Cons,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_Seq_copy_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_list_R_java_util_ArrayList,
	(void *) M_arc_struct_Seq_sumf_arc_func_Floatf_R_float,
	(void *) M_arc_struct_Seq_sum_arc_func_Intf_R_int,
	(void *) M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons,
	(void *) M_arc_struct_Seq_replace_arc_func_Func,
	(void *) M_arc_struct_Seq_flatten_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq,
	(void *) M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object,
	(void *) M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_getFrac_float_R_java_lang_Object,
	(void *) M_arc_struct_Seq_get_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_set_int_java_lang_Object,
	(void *) M_arc_struct_Seq_insert_int_java_lang_Object,
	(void *) M_arc_struct_Seq_swap_int_int,
	(void *) M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_R_int,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Seq_remove_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_removeRange_int_int,
	(void *) M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_Seq_pop_R_java_lang_Object,
	(void *) M_arc_struct_Seq_peek_R_java_lang_Object,
	(void *) M_arc_struct_Seq_first_R_java_lang_Object,
	(void *) M_arc_struct_Seq_firstOpt_R_java_lang_Object,
	(void *) M_arc_struct_Seq_isEmpty_R_boolean,
	(void *) M_arc_struct_Seq_any_R_boolean,
	(void *) M_arc_struct_Seq_clear_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shrink_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_sort_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_distinct_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_as_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_count_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_arc_struct_Seq_reverse_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shuffle_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_truncate_int,
	(void *) M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String,
	(void *) M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object,
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
	{ "asMap", "(Larc/func/Func;Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupBy", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupByCount", "(Larc/func/Func;)Larc/struct/ObjectIntMap;" },
	{ "asMap", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "asSet", "()Larc/struct/ObjectSet;" },
	{ "copy", "()Larc/struct/Seq;" },
	{ "list", "()Ljava/util/ArrayList;" },
	{ "sumf", "(Larc/func/Floatf;)F" },
	{ "sum", "(Larc/func/Intf;)I" },
	{ "each", "(Larc/func/Boolf;Larc/func/Cons;)V" },
	{ "replace", "(Larc/func/Func;)V" },
	{ "flatten", "()Larc/struct/Seq;" },
	{ "flatMap", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "map", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "mapInt", "(Larc/func/Intf;)Larc/struct/IntSeq;" },
	{ "mapInt", "(Larc/func/Intf;Larc/func/Boolf;)Larc/struct/IntSeq;" },
	{ "mapFloat", "(Larc/func/Floatf;)Larc/struct/FloatSeq;" },
	{ "reduce", "(Ljava/lang/Object;Larc/func/Func2;)Ljava/lang/Object;" },
	{ "allMatch", "(Larc/func/Boolf;)Z" },
	{ "contains", "(Larc/func/Boolf;)Z" },
	{ "min", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "max", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "max", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
	{ "with", "(Larc/func/Cons;)Larc/struct/Seq;" },
	{ "addUnique", "(Ljava/lang/Object;)Z" },
	{ "add", "(Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "add", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;II)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;II)Larc/struct/Seq;" },
	{ "addAll", "(Ljava/lang/Iterable;)Larc/struct/Seq;" },
	{ "set", "(Larc/struct/Seq;)V" },
	{ "set", "([Ljava/lang/Object;)V" },
	{ "getFrac", "(F)Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;)V" },
	{ "swap", "(II)V" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "containsAll", "(Larc/struct/Seq;)Z" },
	{ "containsAll", "(Larc/struct/Seq;Z)Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "indexOf", "(Larc/func/Boolf;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;Z)I" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "remove", "(Larc/func/Boolf;)Z" },
	{ "remove", "(Ljava/lang/Object;Z)Z" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "removeAll", "(Larc/struct/Seq;)Z" },
	{ "removeAll", "(Larc/struct/Seq;Z)Z" },
	{ "pop", "(Larc/func/Prov;)Ljava/lang/Object;" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "firstOpt", "()Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "any", "()Z" },
	{ "clear", "()Larc/struct/Seq;" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
	{ "setSize", "(I)[Ljava/lang/Object;" },
	{ "resize", "(I)[Ljava/lang/Object;" },
	{ "sort", "()Larc/struct/Seq;" },
	{ "sort", "(Ljava/util/Comparator;)Larc/struct/Seq;" },
	{ "sort", "(Larc/func/Floatf;)Larc/struct/Seq;" },
	{ "sortComparing", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "selectFrom", "(Larc/struct/Seq;Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "distinct", "()Larc/struct/Seq;" },
	{ "as", "()Larc/struct/Seq;" },
	{ "select", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "retainAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "count", "(Larc/func/Boolf;)I" },
	{ "selectRanked", "(Ljava/util/Comparator;I)Ljava/lang/Object;" },
	{ "selectRankedIndex", "(Ljava/util/Comparator;I)I" },
	{ "reverse", "()Larc/struct/Seq;" },
	{ "shuffle", "()Larc/struct/Seq;" },
	{ "truncate", "(I)V" },
	{ "random", "(Larc/math/Rand;)Ljava/lang/Object;" },
	{ "random", "()Ljava/lang/Object;" },
	{ "random", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "toString", "(Ljava/lang/String;Larc/func/Func;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "lambda$selectFrom$0", "(Larc/func/Boolf;Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_arc_util_Eachable, };

static jclass innerClasses[] {
	&class_arc_struct_Seq$SeqIterable,
};

static FieldMetadata fields[] {
	{ "iteratorsAllocated", &class_int, (intptr_t) &SF_arc_struct_Seq_iteratorsAllocated, "I", 9 },
	{ "items", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_Seq, F_items), "[Ljava/lang/Object;", 1 },
	{ "size", &class_int, offsetof(arc_struct_Seq, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(arc_struct_Seq, F_ordered), "Z", 1 },
	{ "iterable", &class_arc_struct_Seq$SeqIterable, offsetof(arc_struct_Seq, F_iterable), "Larc/struct/Seq$SeqIterable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Seq, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_boolean_int_java_lang_Class, 0, "(ZILjava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int, 0, "(Z[Ljava/lang/Object;II)V", 1 },
	{ "withArrays", (intptr_t) SM_arc_struct_Seq_withArrays_Array1_java_lang_Object_R_arc_struct_Seq, 0, "([Ljava/lang/Object;)Larc/struct/Seq;", 137 },
	{ "with", (intptr_t) SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq, 0, "([Ljava/lang/Object;)Larc/struct/Seq;", 137 },
	{ "with", (intptr_t) SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq, 0, "(Ljava/lang/Iterable;)Larc/struct/Seq;", 9 },
	{ "map", (intptr_t) SM_arc_struct_Seq_map_Array1_java_lang_Object_arc_func_Func_R_arc_struct_Seq, 0, "([Ljava/lang/Object;Larc/func/Func;)Larc/struct/Seq;", 9 },
	{ "select", (intptr_t) SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq, 0, "([Ljava/lang/Object;Larc/func/Boolf;)Larc/struct/Seq;", 9 },
	{ "asMap", (intptr_t) M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap, VTABLE_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap, "(Larc/func/Func;Larc/func/Func;)Larc/struct/ObjectMap;", 1 },
	{ "groupBy", (intptr_t) M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap, VTABLE_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap, "(Larc/func/Func;)Larc/struct/ObjectMap;", 1 },
	{ "groupByCount", (intptr_t) M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap, VTABLE_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap, "(Larc/func/Func;)Larc/struct/ObjectIntMap;", 1 },
	{ "asMap", (intptr_t) M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap, VTABLE_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap, "(Larc/func/Func;)Larc/struct/ObjectMap;", 1 },
	{ "asSet", (intptr_t) M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet, VTABLE_arc_struct_Seq_asSet_R_arc_struct_ObjectSet, "()Larc/struct/ObjectSet;", 1 },
	{ "copy", (intptr_t) M_arc_struct_Seq_copy_R_arc_struct_Seq, VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "list", (intptr_t) M_arc_struct_Seq_list_R_java_util_ArrayList, VTABLE_arc_struct_Seq_list_R_java_util_ArrayList, "()Ljava/util/ArrayList;", 1 },
	{ "sumf", (intptr_t) M_arc_struct_Seq_sumf_arc_func_Floatf_R_float, VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float, "(Larc/func/Floatf;)F", 1 },
	{ "sum", (intptr_t) M_arc_struct_Seq_sum_arc_func_Intf_R_int, VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int, "(Larc/func/Intf;)I", 1 },
	{ "each", (intptr_t) M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons, VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons, "(Larc/func/Boolf;Larc/func/Cons;)V", 1 },
	{ "each", (intptr_t) M_arc_struct_Seq_each_arc_func_Cons, VTABLE_arc_struct_Seq_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "replace", (intptr_t) M_arc_struct_Seq_replace_arc_func_Func, VTABLE_arc_struct_Seq_replace_arc_func_Func, "(Larc/func/Func;)V", 1 },
	{ "flatten", (intptr_t) M_arc_struct_Seq_flatten_R_arc_struct_Seq, VTABLE_arc_struct_Seq_flatten_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "flatMap", (intptr_t) M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq, VTABLE_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq, "(Larc/func/Func;)Larc/struct/Seq;", 1 },
	{ "map", (intptr_t) M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq, VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq, "(Larc/func/Func;)Larc/struct/Seq;", 1 },
	{ "mapInt", (intptr_t) M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq, VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq, "(Larc/func/Intf;)Larc/struct/IntSeq;", 1 },
	{ "mapInt", (intptr_t) M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq, VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq, "(Larc/func/Intf;Larc/func/Boolf;)Larc/struct/IntSeq;", 1 },
	{ "mapFloat", (intptr_t) M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq, VTABLE_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq, "(Larc/func/Floatf;)Larc/struct/FloatSeq;", 1 },
	{ "reduce", (intptr_t) M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object, VTABLE_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object, "(Ljava/lang/Object;Larc/func/Func2;)Ljava/lang/Object;", 1 },
	{ "allMatch", (intptr_t) M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean, VTABLE_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "contains", (intptr_t) M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean, VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "min", (intptr_t) M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object, VTABLE_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object, "(Ljava/util/Comparator;)Ljava/lang/Object;", 1 },
	{ "max", (intptr_t) M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object, VTABLE_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object, "(Ljava/util/Comparator;)Ljava/lang/Object;", 1 },
	{ "min", (intptr_t) M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object, VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object, "(Larc/func/Boolf;Larc/func/Floatf;)Ljava/lang/Object;", 1 },
	{ "min", (intptr_t) M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object, VTABLE_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object, "(Larc/func/Boolf;Ljava/util/Comparator;)Ljava/lang/Object;", 1 },
	{ "min", (intptr_t) M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object, VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object, "(Larc/func/Floatf;)Ljava/lang/Object;", 1 },
	{ "max", (intptr_t) M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object, VTABLE_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object, "(Larc/func/Floatf;)Ljava/lang/Object;", 1 },
	{ "find", (intptr_t) M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object, VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object, "(Larc/func/Boolf;)Ljava/lang/Object;", 1 },
	{ "with", (intptr_t) M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq, VTABLE_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq, "(Larc/func/Cons;)Larc/struct/Seq;", 1 },
	{ "addUnique", (intptr_t) M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean, VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq, "(Ljava/lang/Object;)Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq, "(Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "add", (intptr_t) M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq, "([Ljava/lang/Object;)Larc/struct/Seq;", 1 },
	{ "addAll", (intptr_t) M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "addAll", (intptr_t) M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq, VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq, "(Larc/struct/Seq;II)Larc/struct/Seq;", 1 },
	{ "addAll", (intptr_t) M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq, VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq, "([Ljava/lang/Object;)Larc/struct/Seq;", 129 },
	{ "addAll", (intptr_t) M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq, VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq, "([Ljava/lang/Object;II)Larc/struct/Seq;", 1 },
	{ "addAll", (intptr_t) M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq, VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq, "(Ljava/lang/Iterable;)Larc/struct/Seq;", 1 },
	{ "set", (intptr_t) M_arc_struct_Seq_set_arc_struct_Seq, VTABLE_arc_struct_Seq_set_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "set", (intptr_t) M_arc_struct_Seq_set_Array1_java_lang_Object, VTABLE_arc_struct_Seq_set_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 1 },
	{ "getFrac", (intptr_t) M_arc_struct_Seq_getFrac_float_R_java_lang_Object, VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object, "(F)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_Seq_get_int_R_java_lang_Object, VTABLE_arc_struct_Seq_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_arc_struct_Seq_set_int_java_lang_Object, VTABLE_arc_struct_Seq_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "insert", (intptr_t) M_arc_struct_Seq_insert_int_java_lang_Object, VTABLE_arc_struct_Seq_insert_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "swap", (intptr_t) M_arc_struct_Seq_swap_int_int, VTABLE_arc_struct_Seq_swap_int_int, "(II)V", 1 },
	{ "replace", (intptr_t) M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean, VTABLE_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean, VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean, "(Larc/struct/Seq;)Z", 1 },
	{ "containsAll", (intptr_t) M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean, VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean, "(Larc/struct/Seq;Z)Z", 1 },
	{ "contains", (intptr_t) M_arc_struct_Seq_contains_java_lang_Object_R_boolean, VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "contains", (intptr_t) M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_Seq_indexOf_java_lang_Object_R_int, VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int, VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "indexOf", (intptr_t) M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int, VTABLE_arc_struct_Seq_indexOf_arc_func_Boolf_R_int, "(Larc/func/Boolf;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int, VTABLE_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int, "(Ljava/lang/Object;Z)I", 1 },
	{ "remove", (intptr_t) M_arc_struct_Seq_remove_java_lang_Object_R_boolean, VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean, VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean, VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "remove", (intptr_t) M_arc_struct_Seq_remove_int_R_java_lang_Object, VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_arc_struct_Seq_removeRange_int_int, VTABLE_arc_struct_Seq_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq, VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq, "(Larc/func/Boolf;)Larc/struct/Seq;", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean, VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean, "(Larc/struct/Seq;)Z", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean, VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean, "(Larc/struct/Seq;Z)Z", 1 },
	{ "pop", (intptr_t) M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object, VTABLE_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object, "(Larc/func/Prov;)Ljava/lang/Object;", 1 },
	{ "pop", (intptr_t) M_arc_struct_Seq_pop_R_java_lang_Object, VTABLE_arc_struct_Seq_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_arc_struct_Seq_peek_R_java_lang_Object, VTABLE_arc_struct_Seq_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "first", (intptr_t) M_arc_struct_Seq_first_R_java_lang_Object, VTABLE_arc_struct_Seq_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "firstOpt", (intptr_t) M_arc_struct_Seq_firstOpt_R_java_lang_Object, VTABLE_arc_struct_Seq_firstOpt_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_Seq_isEmpty_R_boolean, VTABLE_arc_struct_Seq_isEmpty_R_boolean, "()Z", 1 },
	{ "any", (intptr_t) M_arc_struct_Seq_any_R_boolean, VTABLE_arc_struct_Seq_any_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_struct_Seq_clear_R_arc_struct_Seq, VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "shrink", (intptr_t) M_arc_struct_Seq_shrink_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_shrink_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "setSize", (intptr_t) M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 1 },
	{ "resize", (intptr_t) M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 4 },
	{ "sort", (intptr_t) M_arc_struct_Seq_sort_R_arc_struct_Seq, VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq, VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq, "(Ljava/util/Comparator;)Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq, VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq, "(Larc/func/Floatf;)Larc/struct/Seq;", 1 },
	{ "sortComparing", (intptr_t) M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq, VTABLE_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq, "(Larc/func/Func;)Larc/struct/Seq;", 1 },
	{ "selectFrom", (intptr_t) M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq, VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq, "(Larc/struct/Seq;Larc/func/Boolf;)Larc/struct/Seq;", 1 },
	{ "distinct", (intptr_t) M_arc_struct_Seq_distinct_R_arc_struct_Seq, VTABLE_arc_struct_Seq_distinct_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "as", (intptr_t) M_arc_struct_Seq_as_R_arc_struct_Seq, VTABLE_arc_struct_Seq_as_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "select", (intptr_t) M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq, VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq, "(Larc/func/Boolf;)Larc/struct/Seq;", 1 },
	{ "retainAll", (intptr_t) M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq, VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq, "(Larc/func/Boolf;)Larc/struct/Seq;", 1 },
	{ "count", (intptr_t) M_arc_struct_Seq_count_arc_func_Boolf_R_int, VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int, "(Larc/func/Boolf;)I", 1 },
	{ "selectRanked", (intptr_t) M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object, VTABLE_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object, "(Ljava/util/Comparator;I)Ljava/lang/Object;", 1 },
	{ "selectRankedIndex", (intptr_t) M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int, VTABLE_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int, "(Ljava/util/Comparator;I)I", 1 },
	{ "reverse", (intptr_t) M_arc_struct_Seq_reverse_R_arc_struct_Seq, VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "shuffle", (intptr_t) M_arc_struct_Seq_shuffle_R_arc_struct_Seq, VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "truncate", (intptr_t) M_arc_struct_Seq_truncate_int, VTABLE_arc_struct_Seq_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object, VTABLE_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object, "(Larc/math/Rand;)Ljava/lang/Object;", 1 },
	{ "random", (intptr_t) M_arc_struct_Seq_random_R_java_lang_Object, VTABLE_arc_struct_Seq_random_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "random", (intptr_t) M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_arc_struct_Seq_toArray_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object, VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object, "(Ljava/lang/Class;)[Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_Seq_hashCode_R_int, VTABLE_arc_struct_Seq_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_Seq_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_Seq_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_Seq_toString_R_java_lang_String, VTABLE_arc_struct_Seq_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String, VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String, "(Ljava/lang/String;Larc/func/Func;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_Seq_iterator_R_java_util_Iterator, VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "lambda$retainAll$0", (intptr_t) SM_arc_struct_Seq_lambda$retainAll$0_arc_func_Boolf_java_lang_Object_R_boolean, 0, "(Larc/func/Boolf;Ljava/lang/Object;)Z", 4106 },
	{ "lambda$selectFrom$0", (intptr_t) M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object, VTABLE_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object, "(Larc/func/Boolf;Ljava/lang/Object;)V", 4098 },
	{ "lambda$asMap$0", (intptr_t) SM_arc_struct_Seq_lambda$asMap$0_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_struct_Seq, 0, "()V", 8 },
};

Class class_arc_struct_Seq{
		.nativeName = (intptr_t) "arc/struct/Seq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Seq),
		.classVtable = (intptr_t) vtable_arc_struct_Seq,
		.staticInitializer = (intptr_t) clinit_arc_struct_Seq,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_Seq,
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
		.methodCount = 121,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Seq = registerClass(&class_arc_struct_Seq);

}
