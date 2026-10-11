#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/lang/StringBuilder.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/ArrayList.h"
#include "java/io/ObjectOutputStream.h"
#include "java/util/RandomAccess.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWIterator.h"
#include "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_0.h"
#include "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_1.h"
#include "java/util/Collection.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/function/Predicate.h"
#include "java/lang/Throwable.h"
#include "java/io/ObjectInputStream.h"
#include "java/lang/InternalError.h"
#include "java/lang/Math.h"
#include "java/util/Iterator.h"
#include "java/util/function/Function.h"
#include "java/lang/Cloneable.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/function/Consumer.h"
#include "java/util/function/UnaryOperator.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubList.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/ListIterator.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubListIterator.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_java_util_concurrent_CopyOnWriteArrayList_serialVersionUID;

void mark_java_util_concurrent_CopyOnWriteArrayList(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CopyOnWriteArrayList *) object;
	if (self->F_lock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lock)->clazz)->markFunction)((jobject) self->F_lock, mark, depth + 1);
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_java_util_concurrent_CopyOnWriteArrayList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_CopyOnWriteArrayList_serialVersionUID = jlong(8673264195747942595ll);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:getArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:setArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CopyOnWriteArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CopyOnWriteArrayList_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o != (((jobject) &class_java_util_concurrent_CopyOnWriteArrayList))) goto label_3;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_concurrent_CopyOnWriteArrayList, (frame[1].o))))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (checkCast(ctx, &class_java_util_concurrent_CopyOnWriteArrayList, (frame[1].o))));
	frame[2].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == (((jobject) &class_java_util_ArrayList))) goto label_6;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, (frame[2].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(69);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_size_R_int])(ctx, (frame[0].o));
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

jint SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:indexOfRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(86);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(87);
	frame[4].i = (frame[2].i);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(88);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_6:;
	{
	LINE_NUMBER(87);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(93);
	frame[4].i = (frame[2].i);
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_10:;
	{
	LINE_NUMBER(93);
	INST_IINC(4, 1);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_CopyOnWriteArrayList_lastIndexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:lastIndexOfRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(105);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(106);
	frame[4].i = ((frame[3].i) - (jint(1)));
	}
label_3:;
	{
	if ((frame[4].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(107);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_6:;
	{
	LINE_NUMBER(106);
	INST_IINC(4, -1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(112);
	frame[4].i = ((frame[3].i) - (jint(1)));
	}
label_8:;
	{
	if ((frame[4].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_10:;
	{
	LINE_NUMBER(112);
	INST_IINC(4, -1);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jint M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:indexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(133);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[3].o), (frame[2].i), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:lastIndexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_lastIndexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:lastIndexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_lastIndexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[3].o), (jint(0)), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_util_concurrent_CopyOnWriteArrayList, sp[0].o));
	LINE_NUMBER(149);
	sp[0].o = frame[1].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(151);
	frame[1].o = sp[0].o;
	LINE_NUMBER(152);
	clinit_java_lang_InternalError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InternalError);
	init_java_lang_InternalError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:toArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(163);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(166);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[1].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(167);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(168);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:elementAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:outOfBounds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(180);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Index: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", Size: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(191);
	if ((frame[5].o) == (frame[2].o)) goto label_9;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[4].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(193);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[1].i)) = (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(196);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(197);
	sp[0].o = frame[5].o;
	monitorExit(ctx, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(198);
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(204);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(206);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(207);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(208);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(209);
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:add", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(215);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(216);
	if ((frame[1].i) > (frame[5].i)) goto label_9;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(217);
	frame[6].i = ((frame[5].i) - (frame[1].i));
	LINE_NUMBER(219);
	if ((frame[6].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), ((frame[5].i) + (jint(1))));
	frame[7].o = sp[0].o;
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[5].i) + (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(223);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[7].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(224);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (frame[1].i), (frame[7].o), ((frame[1].i) + (jint(1))), (frame[6].i));
	}
label_15:;
	{
	LINE_NUMBER(227);
	ARRAY_ACCESS(jobject, (frame[7].o), (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(228);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(229);
	goto label_20;
	}
label_9:;
	{
	LINE_NUMBER(230);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(ctx, (frame[1].i), (frame[5].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(232);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_21;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_21:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[3].o), (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(240);
	frame[6].i = (((frame[4].i) - (frame[1].i)) - (jint(1)));
	LINE_NUMBER(242);
	if ((frame[6].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[3].o), ((frame[4].i) - (jint(1))));
	frame[7].o = sp[0].o;
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[4].i) - (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(246);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[7].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(247);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), ((frame[1].i) + (jint(1))), (frame[7].o), (frame[1].i), (frame[6].i));
	}
label_14:;
	{
	LINE_NUMBER(250);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(251);
	sp[0].o = frame[5].o;
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(252);
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(257);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[3].i = temp0;
	LINE_NUMBER(258);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_Array1_java_lang_Object_int_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_Array1_java_lang_Object_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:remove", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_18; }
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(264);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(265);
	if ((frame[2].o) == (frame[5].o)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_15
	}
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(267);
	frame[8].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(270);
	if ((frame[8].i) < (frame[7].i)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(271);
	if ((frame[3].i) < (frame[6].i)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(272);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(275);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[3].i))) == (frame[1].o)) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_15
	}
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[5].o), (frame[3].i), (frame[6].i));
	frame[3].i = temp0;
	LINE_NUMBER(277);
	if ((frame[3].i) >= 0) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_9; } // goto label_15
	}
	{
	LINE_NUMBER(278);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	if (bypasses[1]) { bypasses[1] = false; goto label_15; }
	if (bypasses[2]) { bypasses[2] = false; goto label_15; }
	{
	LINE_NUMBER(284);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))) == ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i)))) goto label_24;
	}
	{
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(285);
	frame[3].i = (frame[8].i);
	LINE_NUMBER(286);
	goto label_15;
	}
label_24:;
	{
	LINE_NUMBER(289);
	INST_IINC(8, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_3; } // goto label_18
	}
label_15:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[6].i) - (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(294);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[7].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(295);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[3].i) + (jint(1))), (frame[7].o), (frame[3].i), (((frame[6].i) - (frame[3].i)) - (jint(1))));
	LINE_NUMBER(296);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(297);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(298);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:removeRange", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(304);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(305);
	if ((frame[1].i) < 0) goto label_9;
	}
	{
	if ((frame[2].i) > (frame[5].i)) goto label_9;
	}
	{
	if ((frame[2].i) < (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(306);
	frame[6].i = ((frame[5].i) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(307);
	frame[7].i = ((frame[5].i) - (frame[2].i));
	LINE_NUMBER(308);
	if ((frame[7].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), (frame[6].i));
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(312);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[8].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(313);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (frame[2].i), (frame[8].o), (frame[1].i), (frame[7].i));
	LINE_NUMBER(314);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[8].o));
	}
label_15:;
	LINE_NUMBER(317);
	goto label_19;
label_9:;
	{
	LINE_NUMBER(318);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(320);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_20:;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:addIfAbsent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(325);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	if (temp0 >= 0) goto label_2;
	}
	{
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
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

jbool M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:addIfAbsent", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_17; }
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(331);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(332);
	if ((frame[2].o) == (frame[4].o)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(333);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(335);
	frame[7].i = (jint(0));
	}
label_17:;
	{
	if ((frame[7].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_18
	}
	{
	LINE_NUMBER(336);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i))) == ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(337);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_18; }
	{
	LINE_NUMBER(335);
	INST_IINC(7, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_17
	}
label_18:;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[4].o), (frame[6].i), (frame[5].i));
	if (temp0 < 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(342);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), ((frame[5].i) + (jint(1))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(347);
	ARRAY_ACCESS(jobject, (frame[6].o), (frame[5].i)) = (frame[1].o);
	LINE_NUMBER(348);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(349);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(350);
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:containsAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(355);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(365);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[5].o), (frame[2].o), (jint(0)), (frame[3].i));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0(ctx);
		auto proxy = (java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0 *) gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_1(ctx);
		auto proxy = (java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_1 *) gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_addAllAbsent_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:addAllAbsent", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(386);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == (((jobject) &class_java_util_ArrayList))) goto label_8;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[2].o));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_8:;
	{
	LINE_NUMBER(390);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_10;
	}
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(395);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(396);
	frame[6].i = (jint(0));
	LINE_NUMBER(398);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(399);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(400);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[8].o), (frame[4].o), (jint(0)), (frame[5].i));
	if (temp0 >= 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[8].o), (frame[2].o), (jint(0)), (frame[6].i));
	if (temp0 >= 0) goto label_19;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = frame[2].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	}
label_19:;
	{
	LINE_NUMBER(398);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(405);
	if ((frame[6].i) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), ((frame[5].i) + (frame[6].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(407);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[7].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(408);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[7].o));
	}
label_21:;
	{
	LINE_NUMBER(411);
	jint temp0 = frame[6].i;
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(412);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(419);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:addAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o != (((jobject) &class_java_util_concurrent_CopyOnWriteArrayList))) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_concurrent_CopyOnWriteArrayList, (frame[1].o))))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (checkCast(ctx, &class_java_util_concurrent_CopyOnWriteArrayList, (frame[1].o))));
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(424);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_10;
	}
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(429);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(431);
	if ((frame[5].i) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == (((jobject) &class_java_util_concurrent_CopyOnWriteArrayList))) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == (((jobject) &class_java_util_ArrayList))) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), ((frame[5].i) + (((jarray) nullCheck(ctx, (frame[2].o)))->length)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(433);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[6].o), (frame[5].i), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(435);
	frame[6].o = (frame[2].o);
	}
label_17:;
	{
	LINE_NUMBER(438);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(439);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(440);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:addAll", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(446);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(448);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(449);
	if ((frame[1].i) > (frame[6].i)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	{
	LINE_NUMBER(450);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(451);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(453);
	frame[7].i = ((frame[6].i) - (frame[1].i));
	LINE_NUMBER(455);
	if ((frame[7].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[5].o), ((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	frame[8].o = sp[0].o;
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[6].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(459);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[8].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(460);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[1].i), (frame[8].o), ((frame[1].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)), (frame[7].i));
	}
label_20:;
	{
	LINE_NUMBER(463);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[8].o), (frame[1].i), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(464);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(465);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(468);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(ctx, (frame[1].i), (frame[6].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(470);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_forEach_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:forEach", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(476);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(478);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(479);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(480);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(481);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(478);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_removeIf_java_util_function_Predicate_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:removeIf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(488);
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CopyOnWriteArrayList_nBits_int_R_Array1_long(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:nBits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((((frame[0].i) - (jint(1))) >> (6)) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_CopyOnWriteArrayList_setBit_Array1_long_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:setBit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[1].i) >> (6);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | ((jlong(1)) << (frame[1].i)));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_CopyOnWriteArrayList_isClear_Array1_long_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:isClear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(500);
	if ((longCompare((((jlong)ARRAY_ACCESS(jlong, (frame[0].o), ((frame[1].i) >> (6)))) & ((jlong(1)) << (frame[1].i))), (jlong(0)))) != 0) goto label_1;
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

jbool M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:bulkRemove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(506);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:bulkRemove", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[2].i));
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	INST_IINC(2, 1);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(514);
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(515);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(516);
	sp[0].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_nBits_int_R_Array1_long(ctx, ((frame[3].i) - (frame[5].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(517);
	frame[7].i = (jint(1));
	LINE_NUMBER(518);
	ARRAY_ACCESS(jlong, (frame[6].o), (jint(0))) = (jlong(1));
	LINE_NUMBER(520);
	frame[2].i = ((frame[5].i) + (jint(1)));
	}
label_9:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[2].i));
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(522);
	SM_java_util_concurrent_CopyOnWriteArrayList_setBit_Array1_long_int(ctx, (frame[6].o), ((frame[2].i) - (frame[5].i)));
	LINE_NUMBER(523);
	INST_IINC(7, 1);
	}
label_12:;
	{
	LINE_NUMBER(520);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(527);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(528);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[4].o), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(531);
	frame[9].i = (frame[5].i);
	LINE_NUMBER(533);
	frame[2].i = (frame[5].i);
	}
label_19:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_20;
	}
	{
	LINE_NUMBER(534);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_isClear_Array1_long_int_R_boolean(ctx, (frame[6].o), ((frame[2].i) - (frame[5].i)));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)));
	}
label_22:;
	{
	LINE_NUMBER(533);
	INST_IINC(2, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(539);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (frame[2].i), (frame[8].o), (frame[9].i), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (frame[2].i)));
	LINE_NUMBER(540);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(543);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(544);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_replaceAll_java_util_function_UnaryOperator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:replaceAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	((func_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(553);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:replaceAllRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[2].i));
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(560);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(564);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(569);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	((func_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(570);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(571);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:sortRange", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(575);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[4].o), (frame[2].i), (frame[3].i), (frame[1].o));
	LINE_NUMBER(576);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_writeObject_java_io_ObjectOutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:writeObject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(580);
	((func_java_io_ObjectOutputStream_defaultWriteObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectOutputStream_defaultWriteObject])(ctx, (frame[1].o));
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(582);
	((func_java_io_ObjectOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectOutputStream_writeInt_int])(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(583);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(584);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(586);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(587);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(588);
	((func_java_io_ObjectOutputStream_writeObject_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectOutputStream_writeObject_java_lang_Object])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(586);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(591);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList_readObject_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:readObject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	((func_java_io_ObjectInputStream_defaultReadObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_defaultReadObject])(ctx, (frame[1].o));
	LINE_NUMBER(595);
	jint temp0 = (jint)((func_java_io_ObjectInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(596);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(598);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_java_io_ObjectInputStream_readObject_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_readObject_R_java_lang_Object])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(598);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(602);
	((func_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(612);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_List)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(615);
	frame[2].o = (checkCast(ctx, &class_java_util_List, (frame[1].o)));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(618);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(620);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(621);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(622);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(620);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(627);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_CopyOnWriteArrayList_hashCodeOfRange_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:hashCodeOfRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(632);
	frame[3].i = (jint(1));
	LINE_NUMBER(634);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(635);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(636);
	jint temp0 = (31) * (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].o) != nullptr) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp++;
label_7:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(634);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(644);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_hashCodeOfRange_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(648);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWIterator);
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	init_java_util_concurrent_CopyOnWriteArrayList$COWIterator_Array1_java_lang_Object_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:listIterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(652);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWIterator);
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	init_java_util_concurrent_CopyOnWriteArrayList$COWIterator_Array1_java_lang_Object_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:listIterator", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(657);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(658);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) > (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(659);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWIterator);
	init_java_util_concurrent_CopyOnWriteArrayList$COWIterator_Array1_java_lang_Object_int(ctx, sp[0].o, (frame[2].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(661);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(ctx, (frame[1].i), (frame[3].i));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:subList", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(668);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(669);
	frame[6].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(670);
	if ((frame[1].i) < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	if ((frame[2].i) > (frame[5].i)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ILOAD(6);
	if ((--sp)->i < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	{
	LINE_NUMBER(671);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWSubList);
	init_java_util_concurrent_CopyOnWriteArrayList$COWSubList_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object_int_int(ctx, sp[0].o, (frame[0].o), (frame[4].o), (frame[1].i), (frame[6].i));
	monitorExit(ctx, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(673);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(675);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_CopyOnWriteArrayList_lambda$retainAll$1_java_util_Collection_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:lambda$retainAll$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(380);
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
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

jbool SM_java_util_concurrent_CopyOnWriteArrayList_lambda$removeAll$0_java_util_Collection_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:lambda$removeAll$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_CopyOnWriteArrayList_access$000_java_lang_Object_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:access$000", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_CopyOnWriteArrayList_access$100_java_lang_Object_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:access$100", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_lastIndexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_CopyOnWriteArrayList_access$200_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList:access$200", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_hashCodeOfRange_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CopyOnWriteArrayList[] {
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_hashCode_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_forEach_java_util_function_Consumer,
	(void *) M_java_util_List_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_clear,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_size_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_sort_java_util_Comparator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_subList_int_int_R_java_util_List,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_Array1_java_lang_Object_int_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_Array1_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_addAllAbsent_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_removeIf_java_util_function_Predicate_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_replaceAll_java_util_function_UnaryOperator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_readObject_java_io_ObjectInputStream,
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
	{ "getArray", "()[Ljava/lang/Object;" },
	{ "setArray", "([Ljava/lang/Object;)V" },
	{ "indexOf", "(Ljava/lang/Object;I)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;I)I" },
	{ "remove", "(Ljava/lang/Object;[Ljava/lang/Object;I)Z" },
	{ "removeRange", "(II)V" },
	{ "addIfAbsent", "(Ljava/lang/Object;)Z" },
	{ "addIfAbsent", "(Ljava/lang/Object;[Ljava/lang/Object;)Z" },
	{ "addAllAbsent", "(Ljava/util/Collection;)I" },
	{ "removeIf", "(Ljava/util/function/Predicate;)Z" },
	{ "bulkRemove", "(Ljava/util/function/Predicate;)Z" },
	{ "bulkRemove", "(Ljava/util/function/Predicate;II)Z" },
	{ "replaceAll", "(Ljava/util/function/UnaryOperator;)V" },
	{ "replaceAllRange", "(Ljava/util/function/UnaryOperator;II)V" },
	{ "sortRange", "(Ljava/util/Comparator;II)V" },
	{ "writeObject", "(Ljava/io/ObjectOutputStream;)V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
};

static jclass interfaces[] { &class_java_util_List, &class_java_util_RandomAccess, &class_java_lang_Cloneable, &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_CopyOnWriteArrayList$COWIterator,
	&class_java_util_concurrent_CopyOnWriteArrayList$COWSubList,
	&class_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_CopyOnWriteArrayList_serialVersionUID, "J", 26 },
	{ "lock", &class_java_lang_Object, offsetof(java_util_concurrent_CopyOnWriteArrayList, F_lock), "Ljava/lang/Object;", 128 },
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_concurrent_CopyOnWriteArrayList, F_array), "[Ljava/lang/Object;", 194 },
};

static MethodMetadata methods[] {
	{ "getArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 16 },
	{ "setArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_setArray_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 16 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CopyOnWriteArrayList, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CopyOnWriteArrayList_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "size", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_size_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_isEmpty_R_boolean, "()Z", 1 },
	{ "indexOfRange", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_indexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;II)I", 10 },
	{ "lastIndexOfRange", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_lastIndexOfRange_java_lang_Object_Array1_java_lang_Object_int_int_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;II)I", 10 },
	{ "contains", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "indexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "indexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_int_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_indexOf_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_int_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_lastIndexOf_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "clone", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_clone_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "elementAt", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object, 0, "([Ljava/lang/Object;I)Ljava/lang/Object;", 8 },
	{ "outOfBounds", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String, 0, "(II)Ljava/lang/String;", 8 },
	{ "get", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_Array1_java_lang_Object_int_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_Array1_java_lang_Object_int_R_boolean, "(Ljava/lang/Object;[Ljava/lang/Object;I)Z", 2 },
	{ "removeRange", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int, "(II)V", 0 },
	{ "addIfAbsent", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addIfAbsent", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_Array1_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_Array1_java_lang_Object_R_boolean, "(Ljava/lang/Object;[Ljava/lang/Object;)Z", 2 },
	{ "containsAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addAllAbsent", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_addAllAbsent_java_util_Collection_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_addAllAbsent_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 1 },
	{ "clear", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_clear, VTABLE_java_util_concurrent_CopyOnWriteArrayList_clear, "()V", 1 },
	{ "addAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_addAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "forEach", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_forEach_java_util_function_Consumer, VTABLE_java_util_concurrent_CopyOnWriteArrayList_forEach_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "removeIf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_removeIf_java_util_function_Predicate_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_removeIf_java_util_function_Predicate_R_boolean, "(Ljava/util/function/Predicate;)Z", 1 },
	{ "nBits", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_nBits_int_R_Array1_long, 0, "(I)[J", 10 },
	{ "setBit", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_setBit_Array1_long_int, 0, "([JI)V", 10 },
	{ "isClear", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_isClear_Array1_long_int_R_boolean, 0, "([JI)Z", 10 },
	{ "bulkRemove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_R_boolean, "(Ljava/util/function/Predicate;)Z", 2 },
	{ "bulkRemove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean, "(Ljava/util/function/Predicate;II)Z", 0 },
	{ "replaceAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_replaceAll_java_util_function_UnaryOperator, VTABLE_java_util_concurrent_CopyOnWriteArrayList_replaceAll_java_util_function_UnaryOperator, "(Ljava/util/function/UnaryOperator;)V", 1 },
	{ "replaceAllRange", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int, "(Ljava/util/function/UnaryOperator;II)V", 0 },
	{ "sort", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_sort_java_util_Comparator, VTABLE_java_util_concurrent_CopyOnWriteArrayList_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "sortRange", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int, "(Ljava/util/Comparator;II)V", 0 },
	{ "writeObject", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_writeObject_java_io_ObjectOutputStream, VTABLE_java_util_concurrent_CopyOnWriteArrayList_writeObject_java_io_ObjectOutputStream, "(Ljava/io/ObjectOutputStream;)V", 2 },
	{ "readObject", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_readObject_java_io_ObjectInputStream, VTABLE_java_util_concurrent_CopyOnWriteArrayList_readObject_java_io_ObjectInputStream, "(Ljava/io/ObjectInputStream;)V", 2 },
	{ "toString", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_toString_R_java_lang_String, VTABLE_java_util_concurrent_CopyOnWriteArrayList_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_equals_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCodeOfRange", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_hashCodeOfRange_Array1_java_lang_Object_int_int_R_int, 0, "([Ljava/lang/Object;II)I", 10 },
	{ "hashCode", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_hashCode_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList_hashCode_R_int, "()I", 1 },
	{ "iterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_listIterator_R_java_util_ListIterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "subList", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_subList_int_int_R_java_util_List, VTABLE_java_util_concurrent_CopyOnWriteArrayList_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "lambda$retainAll$1", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_lambda$retainAll$1_java_util_Collection_java_lang_Object_R_boolean, 0, "(Ljava/util/Collection;Ljava/lang/Object;)Z", 4106 },
	{ "lambda$removeAll$0", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_lambda$removeAll$0_java_util_Collection_java_lang_Object_R_boolean, 0, "(Ljava/util/Collection;Ljava/lang/Object;)Z", 4106 },
	{ "access$000", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_access$000_java_lang_Object_Array1_java_lang_Object_int_int_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;II)I", 4104 },
	{ "access$100", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_access$100_java_lang_Object_Array1_java_lang_Object_int_int_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;II)I", 4104 },
	{ "access$200", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList_access$200_Array1_java_lang_Object_int_int_R_int, 0, "([Ljava/lang/Object;II)I", 4104 },
};

Class class_java_util_concurrent_CopyOnWriteArrayList{
		.nativeName = (intptr_t) "java/util/concurrent/CopyOnWriteArrayList",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CopyOnWriteArrayList),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CopyOnWriteArrayList,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CopyOnWriteArrayList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CopyOnWriteArrayList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 62,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CopyOnWriteArrayList = registerClass(&class_java_util_concurrent_CopyOnWriteArrayList);

}
