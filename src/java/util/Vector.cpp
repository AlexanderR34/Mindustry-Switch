#include "java/util/Vector.h"
#include "java/util/Iterator.h"
#include "java/util/Vector.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/Vector_1.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/RandomAccess.h"
#include "java/util/Collections_SynchronizedRandomAccessList.h"
#include "java/lang/Iterable.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/lang/System.h"
#include "java/util/AbstractCollection.h"

extern "C" {

jint SF_java_util_Vector_DEFAULT_SIZE;

void mark_java_util_Vector(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Vector *) object;
	if (self->F_elementData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementData)->clazz)->markFunction)((jobject) self->F_elementData, mark, depth + 1);
}

void clinit_java_util_Vector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList(ctx);
	SF_java_util_Vector_DEFAULT_SIZE = jint(10);
}

void init_java_util_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Vector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(62);
	init_java_util_Vector_int_int(ctx, (frame[0].o), (10), (jint(0)));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Vector_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Vector(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	init_java_util_Vector_int_int(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Vector_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Vector(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(88);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(89);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(90);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	LINE_NUMBER(93);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(94);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement = (frame[2].i);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Vector_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Vector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_Vector_int_int(ctx, sp[0].o, temp0, (jint(0)));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount;
	((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount = (temp0 + (jint(1)));
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_2;
	}
label_3:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(135);
	((func_java_util_Vector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_insertElementAt_java_lang_Object_int])(ctx, (frame[0].o), (frame[2].o), (frame[1].i));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount;
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(148);
	M_java_util_Vector_growByOne(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount;
	((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(152);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:addAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(173);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) > ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(175);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(176);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(178);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].i = (temp0 - ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)));
	LINE_NUMBER(179);
	if ((frame[4].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(180);
	M_java_util_Vector_growBy_int(ctx, (frame[0].o), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(182);
	frame[5].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (frame[1].i));
	LINE_NUMBER(183);
	if ((frame[5].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[3].i)), (frame[5].i));
	}
label_10:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount) + (frame[3].i));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(193);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(195);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:addAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_java_util_Vector_addAll_int_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_addAll_int_java_util_Collection_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_addElement_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:addElement", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount;
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(218);
	M_java_util_Vector_growByOne(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount;
	((java_util_Vector *) NULL_CHECK(sp[1].o))->F_elementCount = (temp0 + (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[1].o);
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(222);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_capacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:capacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	popStackFrame(ctx, self);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, (frame[0].o));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_java_util_Vector_indexOf_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_indexOf_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
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

jbool M_java_util_Vector_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_copyInto_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:copyInto", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(288);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_elementAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:elementAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(302);
	if ((frame[1].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	popStackFrame(ctx, self);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}
label_1:;
	{
	LINE_NUMBER(305);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_elements_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:elements", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	clinit_java_util_Vector$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector$1);
	init_java_util_Vector$1_java_util_Vector(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:ensureCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(347);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement) > 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement;
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].i = (sp[0].i + (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) <= (frame[2].i)) goto label_6;
	}
	INST_ILOAD(1);
	goto label_7;
label_6:;
	INST_ILOAD(2);
label_7:;
	POP_N(2); // Pop method args
	M_java_util_Vector_grow_int(ctx, sp[0].o, sp[1].i);
label_1:;
	LINE_NUMBER(352);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Vector_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(367);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(368);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(370);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_List)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(371);
	frame[2].o = (checkCast(ctx, &class_java_util_List, (frame[1].o)));
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_6;
	}
	{
	LINE_NUMBER(373);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(376);
	frame[3].i = (jint(0));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(378);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(380);
	if ((frame[5].o) != nullptr) goto label_14;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_15;
	goto label_16;
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_16:;
	LINE_NUMBER(383);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_firstElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:firstElement", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	popStackFrame(ctx, self);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_1:;
	{
	LINE_NUMBER(404);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_grow_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:grow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(425);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(426);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[2].o);
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_growByOne(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:growByOne", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	frame[1].i = (jint(0));
	LINE_NUMBER(434);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement) > 0) goto label_2;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	frame[1].i = temp0;
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(436);
	frame[1].i = (jint(1));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(439);
	frame[1].i = ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement);
	}
label_4:;
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) + (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(444);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[2].o);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_growBy_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:growBy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(448);
	frame[2].i = (jint(0));
	LINE_NUMBER(449);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement) > 0) goto label_2;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	frame[2].i = temp0;
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(451);
	frame[2].i = (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(453);
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(454);
	frame[2].i = ((frame[2].i) + (frame[2].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(457);
	frame[2].i = (((frame[1].i) / ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement)) * ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement));
	LINE_NUMBER(458);
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(459);
	frame[2].i = ((frame[2].i) + ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_capacityIncrement));
	}
label_6:;
	{
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) + (frame[2].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(463);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(464);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[3].o);
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:hashCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	frame[1].i = (jint(1));
	LINE_NUMBER(477);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_3;
	}
	{
	LINE_NUMBER(478);
	jint temp0 = (31) * (frame[1].i);
	LINE_NUMBER(479);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (((jobject)ARRAY_ACCESS(jobject, temp1, (frame[2].i))) != nullptr) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(477);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)((func_java_util_Vector_indexOf_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_indexOf_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_indexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(520);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(521);
	frame[3].i = (frame[2].i);
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_4;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(523);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(521);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(527);
	frame[3].i = (frame[2].i);
	}
label_9:;
	{
	if ((frame[3].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_8;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(529);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(527);
	INST_IINC(3, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx, self);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_insertElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:insertElementAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(553);
	if ((jint(0)) > (frame[2].i)) goto label_1;
	}
	{
	if ((frame[2].i) > ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount;
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(555);
	M_java_util_Vector_growByOne(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(557);
	frame[3].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (frame[2].i));
	LINE_NUMBER(558);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[2].i) + (jint(1))), (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1)));
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(565);
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(566);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(568);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Vector_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Vector_lastElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:lastElement", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (jint(1))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(596);
	frame[1].o = sp[0].o;
	LINE_NUMBER(597);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(616);
	jint temp0 = (jint)((func_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (jint(1))));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:lastIndexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(637);
	if ((frame[2].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(638);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(639);
	frame[3].i = (frame[2].i);
	}
label_5:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(640);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(641);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}
label_8:;
	{
	LINE_NUMBER(639);
	INST_IINC(3, -1);
	goto label_5;
	}
label_6:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(645);
	frame[3].i = (frame[2].i);
	}
label_11:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(647);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}
label_13:;
	{
	LINE_NUMBER(645);
	INST_IINC(3, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(651);
	popStackFrame(ctx, self);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(653);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(670);
	if ((frame[1].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(672);
	sp[0].o = frame[0].o;
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(673);
	frame[3].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (frame[1].i));
	LINE_NUMBER(674);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) = (jobject(nullptr));
	LINE_NUMBER(679);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(680);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(682);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(701);
	jint temp0 = (jint)((func_java_util_Vector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_removeElement_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_removeAllElements(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:removeAllElements", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(727);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_2;
	}
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(727);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(730);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(731);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(732);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector_removeElement_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:removeElement", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(750);
	jint temp0 = (jint)((func_java_util_Vector_indexOf_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_indexOf_java_lang_Object_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[2].i = temp0;
	if (temp0 != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(751);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(753);
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(754);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_removeElementAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:removeElementAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(771);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = frame[0].o;
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(773);
	frame[2].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (frame[1].i));
	LINE_NUMBER(774);
	if ((frame[2].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) = (jobject(nullptr));
	LINE_NUMBER(779);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(780);
	goto label_9;
	}
label_1:;
	{
	LINE_NUMBER(781);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(783);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Vector_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:removeRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(800);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	if ((frame[2].i) > ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(801);
	if ((frame[1].i) != (frame[2].i)) goto label_3;
	}
	LINE_NUMBER(802);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(804);
	if ((frame[2].i) == ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_5;
	}
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (frame[2].i)));
	LINE_NUMBER(807);
	frame[3].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(808);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (frame[3].i), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount), (jobject(nullptr)));
	LINE_NUMBER(809);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount = (frame[3].i);
	LINE_NUMBER(810);
	goto label_11;
	}
label_5:;
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (frame[1].i), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount), (jobject(nullptr)));
	LINE_NUMBER(812);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(814);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(816);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(818);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Vector_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(831);
	jint temp0 = (jint)M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(850);
	if ((frame[1].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(852);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(853);
	popStackFrame(ctx, self);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(855);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Vector_setElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:setElementAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(871);
	if ((frame[2].i) >= ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(874);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(876);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Vector_setSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(889);
	if ((frame[1].i) != ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	LINE_NUMBER(890);
	popStackFrame(ctx, self);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(892);
	((func_java_util_Vector_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Vector_ensureCapacity_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(893);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) <= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(ctx, sp[0].o, (frame[1].i), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount), (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(896);
	((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount = (frame[1].i);
	LINE_NUMBER(897);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(898);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Vector_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(909);
	popStackFrame(ctx, self);
	return ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:subList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(929);
	clinit_java_util_Collections$SynchronizedRandomAccessList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedRandomAccessList);
	sp[1].o = (jobject)M_java_util_AbstractList_subList_int_int_R_java_util_List(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	init_java_util_Collections$SynchronizedRandomAccessList_java_util_List_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	frame[1].o = sp[0].o;
	LINE_NUMBER(941);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(942);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(962);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	LINE_NUMBER(966);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(967);
	ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(969);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Vector_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(980);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(981);
	popStackFrame(ctx, self);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_1:;
	{
	LINE_NUMBER(983);
	frame[1].i = (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (jint(1)));
	LINE_NUMBER(984);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) * (16)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(985);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (91));
	LINE_NUMBER(986);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(988);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"(this Collection)"_j))));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(990);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	}
label_11:;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(986);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) != (frame[0].o)) goto label_13;
	}
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"(this Collection)"_j))));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(997);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))));
	}
label_15:;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (93));
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Vector_trimToSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector:trimToSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount)) goto label_1;
	}
	{
	LINE_NUMBER(1012);
	M_java_util_Vector_grow_int(ctx, (frame[0].o), ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount));
	}
label_1:;
	LINE_NUMBER(1014);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_Vector[] {
	(void *) M_java_util_Vector_hashCode_R_int,
	(void *) M_java_util_Vector_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Vector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Vector_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_clear,
	(void *) M_java_util_Vector_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_isEmpty_R_boolean,
	(void *) M_java_util_Vector_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_size_R_int,
	(void *) M_java_util_Vector_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_add_int_java_lang_Object,
	(void *) M_java_util_Vector_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_get_int_R_java_lang_Object,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_Vector_remove_int_R_java_lang_Object,
	(void *) M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Vector_subList_int_int_R_java_util_List,
	(void *) M_java_util_Vector_removeRange_int_int,
	(void *) M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_addElement_java_lang_Object,
	(void *) M_java_util_Vector_capacity_R_int,
	(void *) M_java_util_Vector_copyInto_Array1_java_lang_Object,
	(void *) M_java_util_Vector_elementAt_int_R_java_lang_Object,
	(void *) M_java_util_Vector_elements_R_java_util_Enumeration,
	(void *) M_java_util_Vector_ensureCapacity_int,
	(void *) M_java_util_Vector_firstElement_R_java_lang_Object,
	(void *) M_java_util_Vector_grow_int,
	(void *) M_java_util_Vector_growByOne,
	(void *) M_java_util_Vector_growBy_int,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_Vector_insertElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_lastElement_R_java_lang_Object,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_Vector_removeAllElements,
	(void *) M_java_util_Vector_removeElement_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_removeElementAt_int,
	(void *) M_java_util_Vector_setElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_setSize_int,
	(void *) M_java_util_Vector_trimToSize,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "add", "(ILjava/lang/Object;)V" },
	{ "addAll", "(ILjava/util/Collection;)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "listIterator", "()Ljava/util/ListIterator;" },
	{ "listIterator", "(I)Ljava/util/ListIterator;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "subList", "(II)Ljava/util/List;" },
	{ "removeRange", "(II)V" },
	{ "newElementArray", "(I)[Ljava/lang/Object;" },
	{ "addElement", "(Ljava/lang/Object;)V" },
	{ "capacity", "()I" },
	{ "copyInto", "([Ljava/lang/Object;)V" },
	{ "elementAt", "(I)Ljava/lang/Object;" },
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "ensureCapacity", "(I)V" },
	{ "firstElement", "()Ljava/lang/Object;" },
	{ "grow", "(I)V" },
	{ "growByOne", "()V" },
	{ "growBy", "(I)V" },
	{ "indexOf", "(Ljava/lang/Object;I)I" },
	{ "insertElementAt", "(Ljava/lang/Object;I)V" },
	{ "lastElement", "()Ljava/lang/Object;" },
	{ "lastIndexOf", "(Ljava/lang/Object;I)I" },
	{ "removeAllElements", "()V" },
	{ "removeElement", "(Ljava/lang/Object;)Z" },
	{ "removeElementAt", "(I)V" },
	{ "setElementAt", "(Ljava/lang/Object;I)V" },
	{ "setSize", "(I)V" },
	{ "trimToSize", "()V" },
};

static jclass interfaces[] { &class_java_util_List, &class_java_util_RandomAccess, };

static FieldMetadata fields[] {
	{ "elementCount", &class_int, offsetof(java_util_Vector, F_elementCount), "I", 4 },
	{ "elementData", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_Vector, F_elementData), "[Ljava/lang/Object;", 4 },
	{ "capacityIncrement", &class_int, offsetof(java_util_Vector, F_capacityIncrement), "I", 4 },
	{ "DEFAULT_SIZE", &class_int, (intptr_t) &SF_java_util_Vector_DEFAULT_SIZE, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Vector, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_Vector_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Vector_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Vector_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "newElementArray", (intptr_t) M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object, VTABLE_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
	{ "add", (intptr_t) M_java_util_Vector_add_int_java_lang_Object, VTABLE_java_util_Vector_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_Vector_add_java_lang_Object_R_boolean, VTABLE_java_util_Vector_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "addAll", (intptr_t) M_java_util_Vector_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_Vector_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 33 },
	{ "addAll", (intptr_t) M_java_util_Vector_addAll_java_util_Collection_R_boolean, VTABLE_java_util_Vector_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 33 },
	{ "addElement", (intptr_t) M_java_util_Vector_addElement_java_lang_Object, VTABLE_java_util_Vector_addElement_java_lang_Object, "(Ljava/lang/Object;)V", 33 },
	{ "capacity", (intptr_t) M_java_util_Vector_capacity_R_int, VTABLE_java_util_Vector_capacity_R_int, "()I", 33 },
	{ "clear", (intptr_t) M_java_util_Vector_clear, VTABLE_java_util_Vector_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_Vector_contains_java_lang_Object_R_boolean, VTABLE_java_util_Vector_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Vector_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Vector_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 33 },
	{ "copyInto", (intptr_t) M_java_util_Vector_copyInto_Array1_java_lang_Object, VTABLE_java_util_Vector_copyInto_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 33 },
	{ "elementAt", (intptr_t) M_java_util_Vector_elementAt_int_R_java_lang_Object, VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 33 },
	{ "elements", (intptr_t) M_java_util_Vector_elements_R_java_util_Enumeration, VTABLE_java_util_Vector_elements_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "ensureCapacity", (intptr_t) M_java_util_Vector_ensureCapacity_int, VTABLE_java_util_Vector_ensureCapacity_int, "(I)V", 33 },
	{ "equals", (intptr_t) M_java_util_Vector_equals_java_lang_Object_R_boolean, VTABLE_java_util_Vector_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "firstElement", (intptr_t) M_java_util_Vector_firstElement_R_java_lang_Object, VTABLE_java_util_Vector_firstElement_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "get", (intptr_t) M_java_util_Vector_get_int_R_java_lang_Object, VTABLE_java_util_Vector_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "grow", (intptr_t) M_java_util_Vector_grow_int, VTABLE_java_util_Vector_grow_int, "(I)V", 2 },
	{ "growByOne", (intptr_t) M_java_util_Vector_growByOne, VTABLE_java_util_Vector_growByOne, "()V", 2 },
	{ "growBy", (intptr_t) M_java_util_Vector_growBy_int, VTABLE_java_util_Vector_growBy_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_java_util_Vector_hashCode_R_int, VTABLE_java_util_Vector_hashCode_R_int, "()I", 33 },
	{ "indexOf", (intptr_t) M_java_util_Vector_indexOf_java_lang_Object_R_int, VTABLE_java_util_Vector_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "indexOf", (intptr_t) M_java_util_Vector_indexOf_java_lang_Object_int_R_int, VTABLE_java_util_Vector_indexOf_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 33 },
	{ "insertElementAt", (intptr_t) M_java_util_Vector_insertElementAt_java_lang_Object_int, VTABLE_java_util_Vector_insertElementAt_java_lang_Object_int, "(Ljava/lang/Object;I)V", 33 },
	{ "isEmpty", (intptr_t) M_java_util_Vector_isEmpty_R_boolean, VTABLE_java_util_Vector_isEmpty_R_boolean, "()Z", 33 },
	{ "lastElement", (intptr_t) M_java_util_Vector_lastElement_R_java_lang_Object, VTABLE_java_util_Vector_lastElement_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "lastIndexOf", (intptr_t) M_java_util_Vector_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_Vector_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 33 },
	{ "lastIndexOf", (intptr_t) M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int, VTABLE_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 33 },
	{ "remove", (intptr_t) M_java_util_Vector_remove_int_R_java_lang_Object, VTABLE_java_util_Vector_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 33 },
	{ "remove", (intptr_t) M_java_util_Vector_remove_java_lang_Object_R_boolean, VTABLE_java_util_Vector_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_Vector_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_Vector_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 33 },
	{ "removeAllElements", (intptr_t) M_java_util_Vector_removeAllElements, VTABLE_java_util_Vector_removeAllElements, "()V", 33 },
	{ "removeElement", (intptr_t) M_java_util_Vector_removeElement_java_lang_Object_R_boolean, VTABLE_java_util_Vector_removeElement_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "removeElementAt", (intptr_t) M_java_util_Vector_removeElementAt_int, VTABLE_java_util_Vector_removeElementAt_int, "(I)V", 33 },
	{ "removeRange", (intptr_t) M_java_util_Vector_removeRange_int_int, VTABLE_java_util_Vector_removeRange_int_int, "(II)V", 4 },
	{ "retainAll", (intptr_t) M_java_util_Vector_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Vector_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 33 },
	{ "set", (intptr_t) M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "setElementAt", (intptr_t) M_java_util_Vector_setElementAt_java_lang_Object_int, VTABLE_java_util_Vector_setElementAt_java_lang_Object_int, "(Ljava/lang/Object;I)V", 33 },
	{ "setSize", (intptr_t) M_java_util_Vector_setSize_int, VTABLE_java_util_Vector_setSize_int, "(I)V", 33 },
	{ "size", (intptr_t) M_java_util_Vector_size_R_int, VTABLE_java_util_Vector_size_R_int, "()I", 33 },
	{ "subList", (intptr_t) M_java_util_Vector_subList_int_int_R_java_util_List, VTABLE_java_util_Vector_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 33 },
	{ "toArray", (intptr_t) M_java_util_Vector_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Vector_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 33 },
	{ "toArray", (intptr_t) M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 33 },
	{ "toString", (intptr_t) M_java_util_Vector_toString_R_java_lang_String, VTABLE_java_util_Vector_toString_R_java_lang_String, "()Ljava/lang/String;", 33 },
	{ "trimToSize", (intptr_t) M_java_util_Vector_trimToSize, VTABLE_java_util_Vector_trimToSize, "()V", 33 },
};

Class class_java_util_Vector{
		.nativeName = (intptr_t) "java/util/Vector",
		.parentClass = (intptr_t) &class_java_util_AbstractList,
		.size = sizeof(java_util_Vector),
		.classVtable = (intptr_t) vtable_java_util_Vector,
		.staticInitializer = (intptr_t) clinit_java_util_Vector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Vector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 49,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Vector = registerClass(&class_java_util_Vector);

}
