#include "java/util/Collections_SynchronizedList.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Collections_SynchronizedCollection.h"
#include "java/util/Collections.h"
#include "java/util/RandomAccess.h"
#include "java/util/Collections_SynchronizedRandomAccessList.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collections_SynchronizedList.h"

extern "C" {

jlong SF_java_util_Collections$SynchronizedList_serialVersionUID;

void mark_java_util_Collections$SynchronizedList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$SynchronizedCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$SynchronizedList *) object;
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
}

void clinit_java_util_Collections$SynchronizedList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$SynchronizedCollection(ctx);
	SF_java_util_Collections$SynchronizedList_serialVersionUID = jlong(-7754090372962971524ll);
}

void init_java_util_Collections$SynchronizedList_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(542);
	init_java_util_Collections$SynchronizedCollection_java_util_Collection(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(543);
	((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[1].o);
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Collections$SynchronizedList_java_util_List_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(547);
	init_java_util_Collections$SynchronizedCollection_java_util_Collection_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(548);
	((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[1].o);
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$SynchronizedList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(554);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(555);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_java_util_List_addAll_int_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_addAll_int_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
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
	LINE_NUMBER(560);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedList_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
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
	LINE_NUMBER(567);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
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
	LINE_NUMBER(573);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_util_Collections$SynchronizedList_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
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
	LINE_NUMBER(580);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_util_Collections$SynchronizedList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:indexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(588);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(589);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(590);
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
	LINE_NUMBER(591);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_11;
	}
	{
	LINE_NUMBER(592);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_16:;
	{
	LINE_NUMBER(592);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	goto label_18;
label_11:;
	{
	LINE_NUMBER(598);
	frame[4].i = (jint(0));
	}
label_19:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_18;
	}
	{
	LINE_NUMBER(599);
	if ((jobject(nullptr)) != ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))) goto label_21;
	}
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_21:;
	{
	LINE_NUMBER(598);
	INST_IINC(4, 1);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$SynchronizedList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:lastIndexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(612);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(613);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(614);
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
	LINE_NUMBER(615);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_11;
	}
	{
	LINE_NUMBER(616);
	frame[4].i = ((frame[2].i) - (jint(1)));
	}
label_13:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_14;
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_16:;
	{
	LINE_NUMBER(616);
	INST_IINC(4, -1);
	goto label_13;
	}
label_14:;
	goto label_18;
label_11:;
	{
	LINE_NUMBER(622);
	frame[4].i = ((frame[2].i) - (jint(1)));
	}
label_19:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_18;
	{
	LINE_NUMBER(623);
	if ((jobject(nullptr)) != ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))) goto label_21;
	}
	{
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_21:;
	{
	LINE_NUMBER(622);
	INST_IINC(4, -1);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:listIterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, sp[0].o))(ctx, sp[0].o);
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
	LINE_NUMBER(634);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:listIterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, sp[0].o))(ctx, sp[0].o, (frame[1].i));
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
	LINE_NUMBER(640);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
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
	LINE_NUMBER(646);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
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
	LINE_NUMBER(652);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:subList", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(657);
	clinit_java_util_Collections$SynchronizedList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedList);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((func_java_util_List_subList_int_int_R_java_util_List) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_subList_int_int_R_java_util_List, sp[1].o))(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedList_java_util_List_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
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
	LINE_NUMBER(658);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedList_readResolve_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedList:readResolve", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	if ((isInstance(ctx, sp[0].o, &class_java_util_RandomAccess)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(677);
	clinit_java_util_Collections$SynchronizedRandomAccessList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedRandomAccessList);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[2].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedRandomAccessList_java_util_List_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SynchronizedList[] {
	(void *) M_java_util_Collections$SynchronizedList_hashCode_R_int,
	(void *) M_java_util_Collections$SynchronizedList_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_clear,
	(void *) M_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_size_R_int,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedList_add_int_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedList_get_int_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Collections$SynchronizedList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_Collections$SynchronizedList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_Collections$SynchronizedList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_Collections$SynchronizedList_remove_int_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedList_subList_int_int_R_java_util_List,
	(void *) M_java_util_Collections$SynchronizedList_readResolve_R_java_lang_Object,
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
	{ "readResolve", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_List, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$SynchronizedList_serialVersionUID, "J", 26 },
	{ "list", &class_java_util_List, offsetof(java_util_Collections$SynchronizedList, F_list), "Ljava/util/List;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedList_java_util_List, 0, "(Ljava/util/List;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedList_java_util_List_java_lang_Object, 0, "(Ljava/util/List;Ljava/lang/Object;)V", 0 },
	{ "add", (intptr_t) M_java_util_Collections$SynchronizedList_add_int_java_lang_Object, VTABLE_java_util_Collections$SynchronizedList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_java_util_Collections$SynchronizedList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SynchronizedList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "equals", (intptr_t) M_java_util_Collections$SynchronizedList_equals_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SynchronizedList_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_Collections$SynchronizedList_get_int_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_java_util_Collections$SynchronizedList_hashCode_R_int, VTABLE_java_util_Collections$SynchronizedList_hashCode_R_int, "()I", 1 },
	{ "indexOf", (intptr_t) M_java_util_Collections$SynchronizedList_indexOf_java_lang_Object_R_int, VTABLE_java_util_Collections$SynchronizedList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_Collections$SynchronizedList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_Collections$SynchronizedList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "listIterator", (intptr_t) M_java_util_Collections$SynchronizedList_listIterator_R_java_util_ListIterator, VTABLE_java_util_Collections$SynchronizedList_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_Collections$SynchronizedList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_Collections$SynchronizedList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$SynchronizedList_remove_int_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_java_util_Collections$SynchronizedList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "subList", (intptr_t) M_java_util_Collections$SynchronizedList_subList_int_int_R_java_util_List, VTABLE_java_util_Collections$SynchronizedList_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "readResolve", (intptr_t) M_java_util_Collections$SynchronizedList_readResolve_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedList_readResolve_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
};

Class class_java_util_Collections$SynchronizedList{
		.nativeName = (intptr_t) "java/util/Collections$SynchronizedList",
		.parentClass = (intptr_t) &class_java_util_Collections$SynchronizedCollection,
		.size = sizeof(java_util_Collections$SynchronizedList),
		.classVtable = (intptr_t) vtable_java_util_Collections$SynchronizedList,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SynchronizedList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SynchronizedList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$SynchronizedList = registerClass(&class_java_util_Collections$SynchronizedList);

}

