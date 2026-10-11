#include "arc/util/Structs.h"
#include "java/lang/Integer.h"
#include "arc/math/Rand.h"
#include "java/lang/Boolean.h"
#include "java/lang/Comparable.h"
#include "java/lang/Float.h"
#include "java/lang/Iterable.h"
#include "arc/util/Structs_invoke_java_util_Comparator_3.h"
#include "arc/util/Structs_invoke_java_util_Comparator_4.h"
#include "arc/util/Structs_invoke_java_util_Comparator_5.h"
#include "arc/util/Structs_invoke_java_util_Comparator_6.h"
#include "arc/func/Cons.h"
#include "java/util/Comparator.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Longf.h"
#include "arc/func/Floatf.h"
#include "arc/func/Func.h"
#include "java/util/Iterator.h"
#include "arc/util/Structs.h"
#include "java/lang/Long.h"
#include "arc/util/Reflect.h"
#include "arc/util/Structs_invoke_java_util_Comparator_0.h"
#include "java/lang/Object.h"
#include "arc/util/Structs_invoke_java_util_Comparator_1.h"
#include "arc/util/Structs_invoke_java_util_Comparator_2.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_util_Structs(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Structs *) object;
}

void clinit_arc_util_Structs(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Structs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:eq", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(13);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_2;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_arr_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:arr", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_arc_util_Structs_filter_java_lang_Iterable_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:filter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	SM_arc_util_Structs_filter_java_util_Iterator_arc_func_Boolf(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Structs_filter_java_util_Iterator_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:filter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(29);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[0].o)))(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:random", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(35);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(40);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_count_Array1_java_lang_Object_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:count", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	frame[2].i = (jint(0));
	LINE_NUMBER(46);
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
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	if (temp0 == 0) goto label_5;
	}
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(46);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(54);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(55);
	if ((frame[5].o) == (frame[1].o)) goto label_4;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(54);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:find", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(65);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(65);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_indexOf_java_lang_Iterable_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(77);
	INST_IINC(2, 1);
	LINE_NUMBER(78);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_indexOf_Array1_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(83);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(84);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(83);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_indexOf_Array1_java_lang_Object_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(92);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(92);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_remove_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_util_Structs_indexOf_Array1_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Structs_remove_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_remove_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(105);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)SM_arc_util_Reflect_newArray_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(110);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[2].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(111);
	if ((frame[1].i) >= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(112);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))) - (frame[1].i)));
	}
label_5:;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_add_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_arc_util_Reflect_newArray_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) + (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(120);
	ARRAY_ACCESS(jobject, (frame[2].o), (((jarray) nullCheck(ctx, (frame[0].o)))->length)) = (frame[1].o);
	LINE_NUMBER(121);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_arc_util_Structs_swap_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:swap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(126);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(127);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(128);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:filter", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(132);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[0].o, (jint(1)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(133);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_3;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[7].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[7].o));
	}
label_5:;
	{
	LINE_NUMBER(133);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_toArray_R_Array1_java_lang_Object])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(141);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_0(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparing_arc_func_Func_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(148);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_1(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_1);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(152);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_2(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_2 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparingFloat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(156);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_3(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_3 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparingInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(160);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_4(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_4 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparingLong", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(164);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_5(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_5 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:comparingBool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(168);
	{ /* InvokeDynamic */
		clinit_arc_util_Structs_invoke_java_util_Comparator_6(ctx);
		auto proxy = (arc_util_Structs_invoke_java_util_Comparator_6 *) gcAlloc(ctx, &class_arc_util_Structs_invoke_java_util_Comparator_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Structs_each_arc_func_Cons_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:each", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(172);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(173);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(172);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Structs_forEach_java_lang_Iterable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:forEach", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(179);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(180);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_findMin_Array1_java_lang_Object_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:findMin", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(184);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(185);
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
	LINE_NUMBER(186);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[6].o));
	if (temp0 >= 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(187);
	frame[2].o = (frame[6].o);
	}
label_6:;
	{
	LINE_NUMBER(185);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_findMin_Array1_java_lang_Object_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:findMin", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(194);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(195);
	frame[3].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(196);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(197);
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(198);
	if ((floatCompare((frame[8].f), (frame[3].f), 1)) > 0) goto label_7;
	}
	{
	LINE_NUMBER(199);
	frame[2].o = (frame[7].o);
	LINE_NUMBER(200);
	frame[3].f = (frame[8].f);
	}
label_7:;
	{
	LINE_NUMBER(196);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_findMin_java_lang_Iterable_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:findMin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(207);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(209);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[4].o));
	if (temp0 >= 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(210);
	frame[2].o = (frame[4].o);
	}
label_6:;
	LINE_NUMBER(212);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Structs_findMin_java_lang_Iterable_arc_func_Boolf_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:findMin", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(217);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_6;
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	if (temp0 >= 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(220);
	frame[3].o = (frame[5].o);
	}
label_5:;
	LINE_NUMBER(222);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Structs_inBounds_int_int_Array2_java_lang_Object_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(227);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_Array2_int_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(231);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_Array2_float_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(235);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_Array2_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(239);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_int_Array3_java_lang_Object_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(243);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))->length)) goto label_1;
	}
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_int_Array3_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(247);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_1;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))->length)) goto label_1;
	}
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(0))))))->length)) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(251);
	if ((frame[0].i) < (frame[4].i)) goto label_1;
	}
	{
	if ((frame[1].i) < (frame[4].i)) goto label_1;
	}
	{
	if ((frame[2].i) < (frame[4].i)) goto label_1;
	}
	{
	if ((frame[0].i) >= ((frame[3].i) - (frame[4].i))) goto label_1;
	}
	{
	if ((frame[1].i) >= ((frame[3].i) - (frame[4].i))) goto label_1;
	}
	{
	if ((frame[2].i) >= ((frame[3].i) - (frame[4].i))) goto label_1;
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

jbool SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:inBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(256);
	if ((frame[0].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[0].i) >= (frame[2].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= (frame[3].i)) goto label_1;
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

jint SM_arc_util_Structs_lambda$comparingBool$0_arc_func_Boolf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparingBool$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comparingLong$0_arc_func_Longf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparingLong$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(164);
	jlong temp0 = (jlong)((func_arc_func_Longf_get_java_lang_Object_R_long) resolveInterfaceMethod(ctx, &class_arc_func_Longf, INDEX_arc_func_Longf_get_java_lang_Object_R_long, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jlong temp1 = (jlong)((func_arc_func_Longf_get_java_lang_Object_R_long) resolveInterfaceMethod(ctx, &class_arc_func_Longf, INDEX_arc_func_Longf_get_java_lang_Object_R_long, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Long_compare_long_long_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comparingInt$0_arc_func_Intf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparingInt$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comparingFloat$0_arc_func_Floatf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparingFloat$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(156);
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comparing$1_arc_func_Func_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparing$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, sp[0].o);
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comparing$0_java_util_Comparator_arc_func_Func_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comparing$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Structs_lambda$comps$0_java_util_Comparator_java_util_Comparator_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Structs:lambda$comps$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Structs(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(143);
	if ((frame[4].i) == 0) goto label_2;
	}
	INST_ILOAD(4);
	goto label_3;
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_Structs[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Structs, 0, "()V", 1 },
	{ "eq", (intptr_t) SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "arr", (intptr_t) SM_arc_util_Structs_arr_Array1_java_lang_Object_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)[Ljava/lang/Object;", 137 },
	{ "filter", (intptr_t) SM_arc_util_Structs_filter_java_lang_Iterable_arc_func_Boolf, 0, "(Ljava/lang/Iterable;Larc/func/Boolf;)V", 9 },
	{ "filter", (intptr_t) SM_arc_util_Structs_filter_java_util_Iterator_arc_func_Boolf, 0, "(Ljava/util/Iterator;Larc/func/Boolf;)V", 9 },
	{ "random", (intptr_t) SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object, 0, "([Ljava/lang/Object;)Ljava/lang/Object;", 137 },
	{ "random", (intptr_t) SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object, 0, "(Larc/math/Rand;[Ljava/lang/Object;)Ljava/lang/Object;", 137 },
	{ "count", (intptr_t) SM_arc_util_Structs_count_Array1_java_lang_Object_arc_func_Boolf_R_int, 0, "([Ljava/lang/Object;Larc/func/Boolf;)I", 9 },
	{ "contains", (intptr_t) SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean, 0, "([Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "contains", (intptr_t) SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean, 0, "([Ljava/lang/Object;Larc/func/Boolf;)Z", 9 },
	{ "find", (intptr_t) SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object, 0, "([Ljava/lang/Object;Larc/func/Boolf;)Ljava/lang/Object;", 9 },
	{ "indexOf", (intptr_t) SM_arc_util_Structs_indexOf_java_lang_Iterable_arc_func_Boolf_R_int, 0, "(Ljava/lang/Iterable;Larc/func/Boolf;)I", 9 },
	{ "indexOf", (intptr_t) SM_arc_util_Structs_indexOf_Array1_java_lang_Object_java_lang_Object_R_int, 0, "([Ljava/lang/Object;Ljava/lang/Object;)I", 9 },
	{ "indexOf", (intptr_t) SM_arc_util_Structs_indexOf_Array1_java_lang_Object_arc_func_Boolf_R_int, 0, "([Ljava/lang/Object;Larc/func/Boolf;)I", 9 },
	{ "remove", (intptr_t) SM_arc_util_Structs_remove_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;Ljava/lang/Object;)[Ljava/lang/Object;", 9 },
	{ "remove", (intptr_t) SM_arc_util_Structs_remove_Array1_java_lang_Object_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;I)[Ljava/lang/Object;", 9 },
	{ "add", (intptr_t) SM_arc_util_Structs_add_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;Ljava/lang/Object;)[Ljava/lang/Object;", 9 },
	{ "swap", (intptr_t) SM_arc_util_Structs_swap_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 9 },
	{ "filter", (intptr_t) SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;[Ljava/lang/Object;Larc/func/Boolf;)[Ljava/lang/Object;", 9 },
	{ "comps", (intptr_t) SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator, 0, "(Ljava/util/Comparator;Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "comparing", (intptr_t) SM_arc_util_Structs_comparing_arc_func_Func_java_util_Comparator_R_java_util_Comparator, 0, "(Larc/func/Func;Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "comparing", (intptr_t) SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator, 0, "(Larc/func/Func;)Ljava/util/Comparator;", 9 },
	{ "comparingFloat", (intptr_t) SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator, 0, "(Larc/func/Floatf;)Ljava/util/Comparator;", 9 },
	{ "comparingInt", (intptr_t) SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator, 0, "(Larc/func/Intf;)Ljava/util/Comparator;", 9 },
	{ "comparingLong", (intptr_t) SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator, 0, "(Larc/func/Longf;)Ljava/util/Comparator;", 9 },
	{ "comparingBool", (intptr_t) SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator, 0, "(Larc/func/Boolf;)Ljava/util/Comparator;", 9 },
	{ "each", (intptr_t) SM_arc_util_Structs_each_arc_func_Cons_Array1_java_lang_Object, 0, "(Larc/func/Cons;[Ljava/lang/Object;)V", 137 },
	{ "forEach", (intptr_t) SM_arc_util_Structs_forEach_java_lang_Iterable_arc_func_Cons, 0, "(Ljava/lang/Iterable;Larc/func/Cons;)V", 9 },
	{ "findMin", (intptr_t) SM_arc_util_Structs_findMin_Array1_java_lang_Object_java_util_Comparator_R_java_lang_Object, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)Ljava/lang/Object;", 9 },
	{ "findMin", (intptr_t) SM_arc_util_Structs_findMin_Array1_java_lang_Object_arc_func_Floatf_R_java_lang_Object, 0, "([Ljava/lang/Object;Larc/func/Floatf;)Ljava/lang/Object;", 9 },
	{ "findMin", (intptr_t) SM_arc_util_Structs_findMin_java_lang_Iterable_java_util_Comparator_R_java_lang_Object, 0, "(Ljava/lang/Iterable;Ljava/util/Comparator;)Ljava/lang/Object;", 9 },
	{ "findMin", (intptr_t) SM_arc_util_Structs_findMin_java_lang_Iterable_arc_func_Boolf_java_util_Comparator_R_java_lang_Object, 0, "(Ljava/lang/Iterable;Larc/func/Boolf;Ljava/util/Comparator;)Ljava/lang/Object;", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_Array2_java_lang_Object_R_boolean, 0, "(II[[Ljava/lang/Object;)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_Array2_int_R_boolean, 0, "(II[[I)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_Array2_float_R_boolean, 0, "(II[[F)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_Array2_boolean_R_boolean, 0, "(II[[Z)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_int_Array3_java_lang_Object_R_boolean, 0, "(III[[[Ljava/lang/Object;)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_int_Array3_int_R_boolean, 0, "(III[[[I)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_int_int_int_R_boolean, 0, "(IIIII)Z", 9 },
	{ "inBounds", (intptr_t) SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean, 0, "(IIII)Z", 9 },
	{ "lambda$comparingBool$0", (intptr_t) SM_arc_util_Structs_lambda$comparingBool$0_arc_func_Boolf_java_lang_Object_java_lang_Object_R_int, 0, "(Larc/func/Boolf;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparingLong$0", (intptr_t) SM_arc_util_Structs_lambda$comparingLong$0_arc_func_Longf_java_lang_Object_java_lang_Object_R_int, 0, "(Larc/func/Longf;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparingInt$0", (intptr_t) SM_arc_util_Structs_lambda$comparingInt$0_arc_func_Intf_java_lang_Object_java_lang_Object_R_int, 0, "(Larc/func/Intf;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparingFloat$0", (intptr_t) SM_arc_util_Structs_lambda$comparingFloat$0_arc_func_Floatf_java_lang_Object_java_lang_Object_R_int, 0, "(Larc/func/Floatf;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparing$1", (intptr_t) SM_arc_util_Structs_lambda$comparing$1_arc_func_Func_java_lang_Object_java_lang_Object_R_int, 0, "(Larc/func/Func;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparing$0", (intptr_t) SM_arc_util_Structs_lambda$comparing$0_java_util_Comparator_arc_func_Func_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/Comparator;Larc/func/Func;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comps$0", (intptr_t) SM_arc_util_Structs_lambda$comps$0_java_util_Comparator_java_util_Comparator_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/Comparator;Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
};

Class class_arc_util_Structs{
		.nativeName = (intptr_t) "arc/util/Structs",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Structs),
		.classVtable = (intptr_t) vtable_arc_util_Structs,
		.staticInitializer = (intptr_t) clinit_arc_util_Structs,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Structs,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 47,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Structs = registerClass(&class_arc_util_Structs);

}
