#include "java/util/AbstractList_RandomAccessSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/function/Consumer.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/util/AbstractList_RandomAccessSpliterator.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {

jbool SF_java_util_AbstractList$RandomAccessSpliterator_$assertionsDisabled;

void mark_java_util_AbstractList$RandomAccessSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractList$RandomAccessSpliterator *) object;
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_alist)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alist)->clazz)->markFunction)((jobject) self->F_alist, mark, depth + 1);
}

void init_java_util_AbstractList$RandomAccessSpliterator_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(791);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(792);
	if ((clinit_java_util_AbstractList$RandomAccessSpliterator(ctx), (jint)SF_java_util_AbstractList$RandomAccessSpliterator_$assertionsDisabled) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_util_RandomAccess)) != 0) goto label_2;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(794);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[1].o);
	LINE_NUMBER(795);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(796);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (jint(-1));
	LINE_NUMBER(797);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_java_util_AbstractList)) == 0) goto label_6;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_AbstractList, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 2;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_alist = (jref) sp[1].o;
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	sp += 1;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount;
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = sp[1].i;
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_AbstractList$RandomAccessSpliterator_java_util_AbstractList$RandomAccessSpliterator_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(801);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(802);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[1].o)))->F_list;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_list = (jref) sp[1].o;
	LINE_NUMBER(803);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(804);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (frame[3].i);
	LINE_NUMBER(805);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[1].o)))->F_alist;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_alist = (jref) sp[1].o;
	LINE_NUMBER(806);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[1].o)))->F_expectedModCount);
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:getFence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_list;
	frame[1].o = sp[0].o;
	LINE_NUMBER(812);
	jint temp0 = (jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[2].i = temp0;
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(814);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	}
label_5:;
	{
	LINE_NUMBER(817);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[0].o))->F_fence = temp0;
	frame[2].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(820);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:trySplit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(824);
	jint temp0 = (jint)M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(825);
	frame[2].i = ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(826);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) + (frame[1].i))) >> (jint(1))));
	LINE_NUMBER(827);
	if ((frame[2].i) < (frame[3].i)) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$RandomAccessSpliterator);
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[2].o = frame[0].o;
	jint temp1 = frame[3].i;
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK(sp[2].o))->F_index = temp1;
	init_java_util_AbstractList$RandomAccessSpliterator_java_util_AbstractList$RandomAccessSpliterator_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:tryAdvance", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(831);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(832);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(834);
	jint temp0 = (jint)M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(835);
	frame[3].i = ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(836);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(837);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(838);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)SM_java_util_AbstractList$RandomAccessSpliterator_get_java_util_List_int_R_java_lang_Object(ctx, sp[1].o, (frame[3].i));
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(839);
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	SM_java_util_AbstractList$RandomAccessSpliterator_checkAbstractListModCount_java_util_AbstractList_int(ctx, sp[0].o, ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount));
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:forEachRemaining", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(849);
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_list;
	frame[2].o = sp[0].o;
	LINE_NUMBER(850);
	jint temp0 = (jint)M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(851);
	frame[4].i = ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(853);
	((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_AbstractList$RandomAccessSpliterator_get_java_util_List_int_R_java_lang_Object(ctx, (frame[2].o), (frame[4].i));
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(853);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(857);
	sp[0].o = (jobject)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_alist;
	SM_java_util_AbstractList$RandomAccessSpliterator_checkAbstractListModCount_java_util_AbstractList_int(ctx, sp[0].o, ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount));
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(861);
	jint temp0 = (jint)M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jlong((temp0 - ((jint)((java_util_AbstractList$RandomAccessSpliterator *) NULL_CHECK((frame[0].o)))->F_index))));
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return (16464);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_AbstractList$RandomAccessSpliterator_get_java_util_List_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(871);
	frame[2].o = sp[0].o;
	LINE_NUMBER(872);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_java_util_AbstractList$RandomAccessSpliterator_checkAbstractListModCount_java_util_AbstractList_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:checkAbstractListModCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(877);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(878);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(880);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_util_AbstractList$RandomAccessSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$RandomAccessSpliterator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	{
	LINE_NUMBER(784);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_AbstractList)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_util_AbstractList)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	SF_java_util_AbstractList$RandomAccessSpliterator_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$RandomAccessSpliterator[] {
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
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int,
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
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "estimateSize", "()J" },
	{ "getExactSizeIfKnown", "()J" },
	{ "characteristics", "()I" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
	{ "getFence", "()I" },
};

static jclass interfaces[] { &class_java_util_Spliterator, };

static FieldMetadata fields[] {
	{ "list", &class_java_util_List, offsetof(java_util_AbstractList$RandomAccessSpliterator, F_list), "Ljava/util/List;", 18 },
	{ "index", &class_int, offsetof(java_util_AbstractList$RandomAccessSpliterator, F_index), "I", 2 },
	{ "fence", &class_int, offsetof(java_util_AbstractList$RandomAccessSpliterator, F_fence), "I", 2 },
	{ "alist", &class_java_util_AbstractList, offsetof(java_util_AbstractList$RandomAccessSpliterator, F_alist), "Ljava/util/AbstractList;", 18 },
	{ "expectedModCount", &class_int, offsetof(java_util_AbstractList$RandomAccessSpliterator, F_expectedModCount), "I", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_util_AbstractList$RandomAccessSpliterator_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$RandomAccessSpliterator_java_util_List, 0, "(Ljava/util/List;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_AbstractList$RandomAccessSpliterator_java_util_AbstractList$RandomAccessSpliterator_int_int, 0, "(Ljava/util/AbstractList$RandomAccessSpliterator;II)V", 2 },
	{ "getFence", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int, VTABLE_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int, "()I", 2 },
	{ "trySplit", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer, VTABLE_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "estimateSize", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long, VTABLE_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int, VTABLE_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int, "()I", 1 },
	{ "get", (intptr_t) SM_java_util_AbstractList$RandomAccessSpliterator_get_java_util_List_int_R_java_lang_Object, 0, "(Ljava/util/List;I)Ljava/lang/Object;", 10 },
	{ "checkAbstractListModCount", (intptr_t) SM_java_util_AbstractList$RandomAccessSpliterator_checkAbstractListModCount_java_util_AbstractList_int, 0, "(Ljava/util/AbstractList;I)V", 8 },
	{ "<clinit>", (intptr_t) clinit_java_util_AbstractList$RandomAccessSpliterator, 0, "()V", 8 },
};

Class class_java_util_AbstractList$RandomAccessSpliterator{
		.nativeName = (intptr_t) "java/util/AbstractList$RandomAccessSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_AbstractList$RandomAccessSpliterator),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$RandomAccessSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$RandomAccessSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$RandomAccessSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$RandomAccessSpliterator = registerClass(&class_java_util_AbstractList$RandomAccessSpliterator);

}

