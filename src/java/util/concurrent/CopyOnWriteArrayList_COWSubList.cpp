#include "java/util/concurrent/CopyOnWriteArrayList_COWSubList.h"
#include "java/util/Spliterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/RandomAccess.h"
#include "java/util/Collection.h"
#include "java/lang/String.h"
#include "java/util/Spliterators.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/function/Predicate.h"
#include "java/lang/Throwable.h"
#include "java/util/Iterator.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/function/Consumer.h"
#include "java/util/function/UnaryOperator.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubList.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubListIterator.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubList_invoke_java_util_function_Predicate_1.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubList_invoke_java_util_function_Predicate_0.h"

extern "C" {


void mark_java_util_concurrent_CopyOnWriteArrayList$COWSubList(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CopyOnWriteArrayList$COWSubList *) object;
	if (self->F_expectedArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expectedArray)->clazz)->markFunction)((jobject) self->F_expectedArray, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CopyOnWriteArrayList$COWSubList_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(748);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(749);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_expectedArray = (jref) (frame[2].o);
	LINE_NUMBER(750);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	LINE_NUMBER(751);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:checkForComodification", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_expectedArray;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(756);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(758);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:getArrayChecked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(762);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_expectedArray;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(763);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:rangeCheck", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(770);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(771);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(ctx, (frame[1].i), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(773);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:rangeCheckForAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(776);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(777);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_outOfBounds_int_int_R_java_lang_String(ctx, (frame[1].i), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size));
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(779);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:toArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(787);
	frame[2].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(788);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(789);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:toArray", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(800);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(801);
	frame[4].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(802);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(804);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(805);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (frame[3].i) + (frame[4].i);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(807);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[1].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(808);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(809);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:indexOf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(822);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(823);
	frame[4].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(824);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(826);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_access$000_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (frame[3].i), ((frame[3].i) + (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(827);
	if ((frame[5].i) != (jint(-1))) goto label_12;
	}
	INST_ICONST(-1);
	goto label_13;
label_12:;
	{
	jint temp0 = (frame[5].i) - (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:lastIndexOf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(836);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(837);
	frame[4].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(838);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(840);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_access$100_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].o), (frame[3].i), ((frame[3].i) + (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(841);
	if ((frame[5].i) != (jint(-1))) goto label_12;
	}
	INST_ICONST(-1);
	goto label_13;
label_12:;
	{
	jint temp0 = (frame[5].i) - (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(845);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:containsAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(854);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(855);
	frame[4].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(856);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(862);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(866);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(867);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_access$000_java_lang_Object_Array1_java_lang_Object_int_int_R_int(ctx, (frame[6].o), (frame[2].o), (frame[3].i), ((frame[3].i) + (frame[4].i)));
	if (temp0 >= 0) goto label_11;
	}
	{
	LINE_NUMBER(869);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(873);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int])(ctx, (frame[0].o));
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

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(886);
	frame[2].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(887);
	frame[3].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(888);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)SM_java_util_concurrent_CopyOnWriteArrayList_access$200_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[3].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(894);
	if ((frame[1].o) != (frame[0].o)) goto label_7;
	}
	{
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(896);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_List)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(897);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_List, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_List, (frame[1].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(903);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(905);
	frame[4].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(906);
	frame[5].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(907);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_15:;
	{
	LINE_NUMBER(909);
	frame[6].i = (frame[4].i);
	LINE_NUMBER(911);
	frame[7].i = ((frame[4].i) + (frame[5].i));
	}
label_17:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i));
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(913);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(911);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(917);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(923);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(924);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(925);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_set_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(926);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(927);
	sp[0].o = frame[4].o;
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
	LINE_NUMBER(928);
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(933);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(934);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(935);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)));
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
	LINE_NUMBER(936);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(941);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(942);
	jint temp0 = (jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size;
	monitorExit(ctx, (frame[1].o));
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
	LINE_NUMBER(943);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(948);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(949);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)), (frame[1].o));
	LINE_NUMBER(950);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(951);
	sp[0].o = frame[0].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(952);
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
	LINE_NUMBER(953);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(958);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(959);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(960);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_int_java_lang_Object])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)), (frame[2].o));
	LINE_NUMBER(961);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(962);
	sp[0].o = frame[0].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(963);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_12:;
	LINE_NUMBER(964);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(969);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(970);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[2].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[1].o))->F_expectedArray = (jref) sp[2].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (temp1 + ((((jarray) nullCheck(ctx, sp[2].o))->length) - (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	LINE_NUMBER(971);
	jint temp2 = frame[4].i;
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp2;
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
	LINE_NUMBER(972);
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:addAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(976);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(977);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(978);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(979);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_addAll_int_java_util_Collection_R_boolean])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)), (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(980);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[2].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[1].o))->F_expectedArray = (jref) sp[2].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (temp1 + ((((jarray) nullCheck(ctx, sp[2].o))->length) - (((jarray) nullCheck(ctx, (frame[4].o)))->length)));
	LINE_NUMBER(981);
	jint temp2 = frame[5].i;
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp2;
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
	LINE_NUMBER(982);
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(987);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(988);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_removeRange_int_int])(ctx, sp[0].o, ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(989);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(990);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(991);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
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
	label_11:;
	LINE_NUMBER(992);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(996);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(997);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(998);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(999);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(1000);
	sp[0].o = frame[0].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(1001);
	sp[0].o = frame[3].o;
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
	LINE_NUMBER(1002);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1007);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(1008);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1009);
	if ((frame[3].i) != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1010);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[2].o));
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
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(1013);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1015);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:iterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:listIterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:listIterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1028);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(1029);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1030);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator);
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_java_util_List_int_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size));
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
	LINE_NUMBER(1031);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:subList", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	{
	LINE_NUMBER(1036);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(1037);
	if ((frame[1].i) < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	if ((frame[2].i) > ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	if ((frame[1].i) > (frame[2].i)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1038);
	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWSubList);
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_expectedArray;
	init_java_util_concurrent_CopyOnWriteArrayList$COWSubList_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[1].i) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset)), ((frame[2].i) - (frame[1].i)));
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
	LINE_NUMBER(1040);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1042);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_forEach_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:forEach", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1046);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1052);
	frame[2].i = ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(1053);
	frame[3].i = ((frame[2].i) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(1054);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(1056);
	if ((frame[2].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(1057);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CopyOnWriteArrayList_elementAt_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[2].i));
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1058);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_replaceAll_java_util_function_UnaryOperator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:replaceAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1065);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_replaceAllRange_java_util_function_UnaryOperator_int_int])(ctx, sp[0].o, (frame[1].o), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(1067);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(1068);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
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
	label_10:;
	LINE_NUMBER(1069);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:sort", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1073);
	M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification(ctx, (frame[0].o));
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_sortRange_java_util_Comparator_int_int])(ctx, sp[0].o, (frame[1].o), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(1075);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_expectedArray = (jref) sp[1].o;
	LINE_NUMBER(1076);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
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
	label_10:;
	LINE_NUMBER(1077);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(1081);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_0(ctx);
		auto proxy = (java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_0 *) gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1087);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(1088);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_1(ctx);
		auto proxy = (java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_1 *) gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList$COWSubList_invoke_java_util_function_Predicate_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeIf_java_util_function_Predicate_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:removeIf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(1095);
	jint temp0 = (jint)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:bulkRemove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1100);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_bulkRemove_java_util_function_Predicate_int_int_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)));
	frame[4].i = temp0;
	LINE_NUMBER(1102);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_getArray_R_Array1_java_lang_Object])(ctx, sp[2].o);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[1].o))->F_expectedArray = (jref) sp[2].o;
	((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK(sp[0].o))->F_size = (temp1 + ((((jarray) nullCheck(ctx, sp[2].o))->length) - (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	LINE_NUMBER(1103);
	jint temp2 = frame[4].i;
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp2;
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
	LINE_NUMBER(1104);
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:spliterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList *) NULL_CHECK(sp[0].o))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_int_int_R_java_util_Spliterator(ctx, sp[0].o, ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubList *) NULL_CHECK((frame[0].o)))->F_size)), (1040));
	monitorExit(ctx, (frame[1].o));
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
	LINE_NUMBER(1110);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lambda$retainAll$1_java_util_Collection_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:lambda$retainAll$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1089);
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

jbool SM_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lambda$removeAll$0_java_util_Collection_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubList:lambda$removeAll$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1082);
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CopyOnWriteArrayList$COWSubList[] {
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_hashCode_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_iterator_R_java_util_Iterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_forEach_java_util_function_Consumer,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_clear,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_int_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_get_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_sort_java_util_Comparator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_subList_int_int_R_java_util_List,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_replaceAll_java_util_function_UnaryOperator,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeIf_java_util_function_Predicate_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean,
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
	{ "checkForComodification", "()V" },
	{ "getArrayChecked", "()[Ljava/lang/Object;" },
	{ "rangeCheck", "(I)V" },
	{ "rangeCheckForAdd", "(I)V" },
	{ "replaceAll", "(Ljava/util/function/UnaryOperator;)V" },
	{ "removeIf", "(Ljava/util/function/Predicate;)Z" },
	{ "bulkRemove", "(Ljava/util/function/Predicate;)Z" },
};

static jclass interfaces[] { &class_java_util_List, &class_java_util_RandomAccess, };

static FieldMetadata fields[] {
	{ "offset", &class_int, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubList, F_offset), "I", 18 },
	{ "size", &class_int, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubList, F_size), "I", 2 },
	{ "expectedArray", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubList, F_expectedArray), "[Ljava/lang/Object;", 2 },
	{ "this$0", &class_java_util_concurrent_CopyOnWriteArrayList, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubList, F_this$0), "Ljava/util/concurrent/CopyOnWriteArrayList;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CopyOnWriteArrayList$COWSubList_java_util_concurrent_CopyOnWriteArrayList_Array1_java_lang_Object_int_int, 0, "(Ljava/util/concurrent/CopyOnWriteArrayList;[Ljava/lang/Object;II)V", 0 },
	{ "checkForComodification", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_checkForComodification, "()V", 2 },
	{ "getArrayChecked", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_getArrayChecked_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 2 },
	{ "rangeCheck", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheck_int, "(I)V", 2 },
	{ "rangeCheckForAdd", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_rangeCheckForAdd_int, "(I)V", 2 },
	{ "toArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "indexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "contains", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_isEmpty_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_isEmpty_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toString_R_java_lang_String, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_hashCode_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_equals_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "set", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_get_int_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_size_R_int, "()I", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_int_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_clear, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_clear, "()V", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_R_java_util_ListIterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "subList", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_subList_int_int_R_java_util_List, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "forEach", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_forEach_java_util_function_Consumer, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_forEach_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "replaceAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_replaceAll_java_util_function_UnaryOperator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_replaceAll_java_util_function_UnaryOperator, "(Ljava/util/function/UnaryOperator;)V", 1 },
	{ "sort", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_sort_java_util_Comparator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "removeAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "removeIf", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeIf_java_util_function_Predicate_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_removeIf_java_util_function_Predicate_R_boolean, "(Ljava/util/function/Predicate;)Z", 1 },
	{ "bulkRemove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_bulkRemove_java_util_function_Predicate_R_boolean, "(Ljava/util/function/Predicate;)Z", 2 },
	{ "spliterator", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubList_spliterator_R_java_util_Spliterator, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubList_spliterator_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "lambda$retainAll$1", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lambda$retainAll$1_java_util_Collection_java_lang_Object_R_boolean, 0, "(Ljava/util/Collection;Ljava/lang/Object;)Z", 4106 },
	{ "lambda$removeAll$0", (intptr_t) SM_java_util_concurrent_CopyOnWriteArrayList$COWSubList_lambda$removeAll$0_java_util_Collection_java_lang_Object_R_boolean, 0, "(Ljava/util/Collection;Ljava/lang/Object;)Z", 4106 },
};

Class class_java_util_concurrent_CopyOnWriteArrayList$COWSubList{
		.nativeName = (intptr_t) "java/util/concurrent/CopyOnWriteArrayList$COWSubList",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CopyOnWriteArrayList$COWSubList),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CopyOnWriteArrayList$COWSubList,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CopyOnWriteArrayList$COWSubList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CopyOnWriteArrayList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CopyOnWriteArrayList$COWSubList = registerClass(&class_java_util_concurrent_CopyOnWriteArrayList$COWSubList);

}

