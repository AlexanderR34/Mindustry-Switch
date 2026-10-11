#include "arc/struct/ObjectSet.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Eachable.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/System.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_arc_struct_ObjectSet(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ObjectSet *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_arc_struct_ObjectSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(53);
	init_arc_struct_ObjectSet_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	init_arc_struct_ObjectSet_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
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
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(75);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(76);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ObjectSet_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_arc_struct_ObjectSet_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(86);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(91);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_ObjectSet_with_arc_struct_Seq_R_arc_struct_ObjectSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(98);
	((func_arc_struct_ObjectSet_addAll_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:select", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
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
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(113);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:toSeq", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectSet$ObjectSetIterator_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:each", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
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
	LINE_NUMBER(124);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(125);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:find", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
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
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
	LINE_NUMBER(133);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectSet_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!((arc_struct_ObjectSet *)self)->F_keyTable) {
		init_arc_struct_ObjectSet(ctx, self);
	}
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(165);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(166);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(164);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_any_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:any", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(182);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(183);
	frame[2].i = (-((frame[2].i) + (jint(1))));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_arc_struct_ObjectSet_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_addAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(194);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(195);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(204);
	((func_arc_struct_ObjectSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_ensureCapacity_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(205);
	frame[4].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(206);
	frame[5].i = (frame[2].i);
	frame[6].i = ((frame[5].i) + (frame[3].i));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(207);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(208);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	}
label_8:;
	{
	LINE_NUMBER(206);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(210);
	if ((frame[4].i) == ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(214);
	((func_arc_struct_ObjectSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(215);
	frame[2].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(217);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(218);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(219);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(217);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_addResize_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:addResize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(226);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(227);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(228);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(226);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:removeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(235);
	frame[4].i = (frame[2].i);
	frame[5].i = ((frame[4].i) + (frame[3].i));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(235);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:removeAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
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
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(240);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_removeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:removeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(253);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(255);
	frame[4].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[5].i = (((frame[2].i) + (jint(1))) & (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(258);
	if ((((frame[5].i) - (frame[6].i)) & (frame[4].i)) <= (((frame[2].i) - (frame[6].i)) & (frame[4].i))) goto label_9;
	}
	{
	LINE_NUMBER(259);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(260);
	frame[2].i = (frame[5].i);
	}
label_9:;
	{
	LINE_NUMBER(262);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(263);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(264);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_arc_struct_ObjectSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_arc_struct_ObjectSet_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:shrink", 7 };
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
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	frame[1].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_4;
	}
	{
	M_arc_struct_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(299);
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, (frame[0].o));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(302);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(303);
	M_arc_struct_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(312);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(322);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:first", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(327);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(328);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))) == nullptr) goto label_6;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(327);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(329);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ObjectSet is empty."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_arc_struct_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(338);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_arc_struct_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ObjectSet_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:resize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(343);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(344);
	((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(350);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(351);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(352);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(353);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	M_arc_struct_ObjectSet_addResize_java_lang_Object(ctx, (frame[0].o), (frame[5].o));
	}
label_12:;
	{
	LINE_NUMBER(351);
	INST_IINC(4, 1);
	goto label_9;
	}
label_7:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	frame[1].i = ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(361);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(362);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(363);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[1].i = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(361);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectSet)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(370);
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[1].o)));
	LINE_NUMBER(371);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(373);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(374);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 != 0) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(373);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	sp[1].o = (jobject)((func_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(383);
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(384);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(386);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_4:;
	{
	LINE_NUMBER(387);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(388);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(389);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	goto label_4;
label_8:;
	{
	LINE_NUMBER(390);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[5].o) != (frame[0].o)) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_10;
label_9:;
	INST_ALOAD(5);
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(391);
	goto label_5;
	}
label_5:;
	{
	LINE_NUMBER(393);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_12;
	}
	{
	LINE_NUMBER(394);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(395);
	if ((frame[5].o) != nullptr) goto label_15;
	}
	goto label_5;
label_15:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(397);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[5].o) != (frame[0].o)) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_18;
label_17:;
	INST_ALOAD(5);
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(398);
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet$ObjectSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet$ObjectSetIterator);
	init_arc_struct_ObjectSet$ObjectSetIterator_arc_struct_ObjectSet(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet$ObjectSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet$ObjectSetIterator);
	init_arc_struct_ObjectSet$ObjectSetIterator_arc_struct_ObjectSet(ctx, sp[1].o, (frame[0].o));
	((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_4;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((func_arc_struct_ObjectSet$ObjectSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(414);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((func_arc_struct_ObjectSet$ObjectSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(419);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((arc_struct_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_struct_ObjectSet_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:tableSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectSet(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(425);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
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
	LINE_NUMBER(426);
	jint temp0 = jint(2);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat((frame[0].i))) / (frame[1].f)))));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(temp1)));
	jint temp3 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, temp2);
	frame[2].i = temp3;
	LINE_NUMBER(427);
	if ((frame[2].i) <= (jint(1073741824))) goto label_3;
	}
	{
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
label_3:;
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_ObjectSet;
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

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[27]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

void *vtable_arc_struct_ObjectSet[] {
	(void *) M_arc_struct_ObjectSet_hashCode_R_int,
	(void *) M_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectSet_each_arc_func_Cons,
	(void *) M_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq,
	(void *) M_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectSet_any_R_boolean,
	(void *) M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_Seq,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int,
	(void *) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean,
	(void *) M_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet,
	(void *) M_arc_struct_ObjectSet_addResize_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int,
	(void *) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_removeAll_arc_struct_Seq,
	(void *) M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectSet_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectSet_shrink_int,
	(void *) M_arc_struct_ObjectSet_clear_int,
	(void *) M_arc_struct_ObjectSet_clear,
	(void *) M_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_first_R_java_lang_Object,
	(void *) M_arc_struct_ObjectSet_ensureCapacity_int,
	(void *) M_arc_struct_ObjectSet_resize_int,
	(void *) M_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator,
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
	{ "copy", "()Larc/struct/ObjectSet;" },
	{ "select", "(Larc/func/Boolf;)Larc/struct/ObjectSet;" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "any", "()Z" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Larc/struct/Seq;)V" },
	{ "addAll", "(Larc/struct/Seq;II)V" },
	{ "addAll", "([Ljava/lang/Object;)Z" },
	{ "addAll", "([Ljava/lang/Object;II)Z" },
	{ "addAll", "(Larc/struct/ObjectSet;)V" },
	{ "addResize", "(Ljava/lang/Object;)V" },
	{ "removeAll", "([Ljava/lang/Object;II)V" },
	{ "removeAll", "([Ljava/lang/Object;)V" },
	{ "removeAll", "(Larc/struct/Seq;)V" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectSet$ObjectSetIterator;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_arc_util_Eachable, };

static jclass innerClasses[] {
	&class_arc_struct_ObjectSet$ObjectSetIterator,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(arc_struct_ObjectSet, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ObjectSet, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "loadFactor", &class_float, offsetof(arc_struct_ObjectSet, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(arc_struct_ObjectSet, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(arc_struct_ObjectSet, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(arc_struct_ObjectSet, F_mask), "I", 4 },
	{ "iterator1", &class_arc_struct_ObjectSet$ObjectSetIterator, offsetof(arc_struct_ObjectSet, F_iterator1), "Larc/struct/ObjectSet$ObjectSetIterator;", 130 },
	{ "iterator2", &class_arc_struct_ObjectSet$ObjectSetIterator, offsetof(arc_struct_ObjectSet, F_iterator2), "Larc/struct/ObjectSet$ObjectSetIterator;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_ObjectSet_arc_struct_ObjectSet, 0, "(Larc/struct/ObjectSet;)V", 1 },
	{ "with", (intptr_t) SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet, 0, "([Ljava/lang/Object;)Larc/struct/ObjectSet;", 137 },
	{ "with", (intptr_t) SM_arc_struct_ObjectSet_with_arc_struct_Seq_R_arc_struct_ObjectSet, 0, "(Larc/struct/Seq;)Larc/struct/ObjectSet;", 9 },
	{ "copy", (intptr_t) M_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet, VTABLE_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet, "()Larc/struct/ObjectSet;", 1 },
	{ "select", (intptr_t) M_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet, VTABLE_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet, "(Larc/func/Boolf;)Larc/struct/ObjectSet;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "each", (intptr_t) M_arc_struct_ObjectSet_each_arc_func_Cons, VTABLE_arc_struct_ObjectSet_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "find", (intptr_t) M_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object, VTABLE_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object, "(Larc/func/Boolf;)Ljava/lang/Object;", 1 },
	{ "place", (intptr_t) M_arc_struct_ObjectSet_place_java_lang_Object_R_int, VTABLE_arc_struct_ObjectSet_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int, VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "any", (intptr_t) M_arc_struct_ObjectSet_any_R_boolean, VTABLE_arc_struct_ObjectSet_any_R_boolean, "()Z", 1 },
	{ "add", (intptr_t) M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ObjectSet_addAll_arc_struct_Seq, VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int, VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int, "(Larc/struct/Seq;II)V", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean, "([Ljava/lang/Object;)Z", 129 },
	{ "addAll", (intptr_t) M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean, VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean, "([Ljava/lang/Object;II)Z", 1 },
	{ "addAll", (intptr_t) M_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet, VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet, "(Larc/struct/ObjectSet;)V", 1 },
	{ "addResize", (intptr_t) M_arc_struct_ObjectSet_addResize_java_lang_Object, VTABLE_arc_struct_ObjectSet_addResize_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "removeAll", (intptr_t) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int, VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object, VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 1 },
	{ "removeAll", (intptr_t) M_arc_struct_ObjectSet_removeAll_arc_struct_Seq, VTABLE_arc_struct_ObjectSet_removeAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "notEmpty", (intptr_t) M_arc_struct_ObjectSet_notEmpty_R_boolean, VTABLE_arc_struct_ObjectSet_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_ObjectSet_isEmpty_R_boolean, VTABLE_arc_struct_ObjectSet_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_arc_struct_ObjectSet_shrink_int, VTABLE_arc_struct_ObjectSet_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectSet_clear_int, VTABLE_arc_struct_ObjectSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_ObjectSet_clear, VTABLE_arc_struct_ObjectSet_clear, "()V", 1 },
	{ "contains", (intptr_t) M_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "first", (intptr_t) M_arc_struct_ObjectSet_first_R_java_lang_Object, VTABLE_arc_struct_ObjectSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ObjectSet_ensureCapacity_int, VTABLE_arc_struct_ObjectSet_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_arc_struct_ObjectSet_resize_int, VTABLE_arc_struct_ObjectSet_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_arc_struct_ObjectSet_hashCode_R_int, VTABLE_arc_struct_ObjectSet_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectSet_toString_R_java_lang_String, VTABLE_arc_struct_ObjectSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String, VTABLE_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator, VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator, "()Larc/struct/ObjectSet$ObjectSetIterator;", 1 },
	{ "tableSize", (intptr_t) SM_arc_struct_ObjectSet_tableSize_int_float_R_int, 0, "(IF)I", 8 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectSet_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_ObjectSet{
		.nativeName = (intptr_t) "arc/struct/ObjectSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ObjectSet),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectSet,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectSet,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_ObjectSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectSet = registerClass(&class_arc_struct_ObjectSet);

}
