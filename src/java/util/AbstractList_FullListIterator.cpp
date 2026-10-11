#include "java/util/AbstractList_FullListIterator.h"
#include "java/util/ListIterator.h"
#include "java/util/AbstractList_FullListIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/AbstractList_1.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/AbstractList_SimpleListIterator.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {


void mark_java_util_AbstractList$FullListIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList$SimpleListIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_AbstractList$FullListIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_AbstractList$FullListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList$SimpleListIterator(ctx);
}

void init_java_util_AbstractList$FullListIterator_java_util_AbstractList_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$FullListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(90);
	((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList_java_util_AbstractList$1(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(91);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	if ((frame[2].i) <= ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(92);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft = (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft) - (frame[2].i));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$FullListIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_0;
	}
	{
	LINE_NUMBER(99);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[1].o);
	((func_java_util_AbstractList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_add_int_java_lang_Object])(ctx, sp[0].o, (temp0 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft)), (frame[1].o));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(105);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (jint(-1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[2].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$FullListIterator_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:hasPrevious", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft;
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
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

jint M_java_util_AbstractList$FullListIterator_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:nextIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft));
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$FullListIterator_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:previous", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_0;
	}
	{
	LINE_NUMBER(121);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	frame[1].i = ((temp0 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft)) - (jint(1)));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_AbstractList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft = (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft) + (jint(1)));
	LINE_NUMBER(128);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (frame[1].i);
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(130);
	frame[1].o = sp[0].o;
	LINE_NUMBER(131);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$FullListIterator_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:previousIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft)) - (jint(1)));
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$FullListIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$FullListIterator:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_0;
	}
	{
	LINE_NUMBER(141);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_util_AbstractList$FullListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(148);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(146);
	frame[2].o = sp[0].o;
	LINE_NUMBER(147);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$FullListIterator[] {
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
	(void *) M_java_util_AbstractList$SimpleListIterator_hasNext_R_boolean,
	(void *) M_java_util_AbstractList$SimpleListIterator_next_R_java_lang_Object,
	(void *) M_java_util_AbstractList$SimpleListIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_AbstractList$FullListIterator_add_java_lang_Object,
	(void *) M_java_util_AbstractList$FullListIterator_hasPrevious_R_boolean,
	(void *) M_java_util_AbstractList$FullListIterator_nextIndex_R_int,
	(void *) M_java_util_AbstractList$FullListIterator_previous_R_java_lang_Object,
	(void *) M_java_util_AbstractList$FullListIterator_previousIndex_R_int,
	(void *) M_java_util_AbstractList$FullListIterator_set_java_lang_Object,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "hasPrevious", "()Z" },
	{ "nextIndex", "()I" },
	{ "previous", "()Ljava/lang/Object;" },
	{ "previousIndex", "()I" },
	{ "set", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_ListIterator, };

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_AbstractList, offsetof(java_util_AbstractList$FullListIterator, F_this$0), "Ljava/util/AbstractList;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$FullListIterator_java_util_AbstractList_int, 0, "(Ljava/util/AbstractList;I)V", 0 },
	{ "add", (intptr_t) M_java_util_AbstractList$FullListIterator_add_java_lang_Object, VTABLE_java_util_AbstractList$FullListIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_AbstractList$FullListIterator_hasPrevious_R_boolean, VTABLE_java_util_AbstractList$FullListIterator_hasPrevious_R_boolean, "()Z", 1 },
	{ "nextIndex", (intptr_t) M_java_util_AbstractList$FullListIterator_nextIndex_R_int, VTABLE_java_util_AbstractList$FullListIterator_nextIndex_R_int, "()I", 1 },
	{ "previous", (intptr_t) M_java_util_AbstractList$FullListIterator_previous_R_java_lang_Object, VTABLE_java_util_AbstractList$FullListIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "previousIndex", (intptr_t) M_java_util_AbstractList$FullListIterator_previousIndex_R_int, VTABLE_java_util_AbstractList$FullListIterator_previousIndex_R_int, "()I", 1 },
	{ "set", (intptr_t) M_java_util_AbstractList$FullListIterator_set_java_lang_Object, VTABLE_java_util_AbstractList$FullListIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_AbstractList$FullListIterator{
		.nativeName = (intptr_t) "java/util/AbstractList$FullListIterator",
		.parentClass = (intptr_t) &class_java_util_AbstractList$SimpleListIterator,
		.size = sizeof(java_util_AbstractList$FullListIterator),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$FullListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$FullListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$FullListIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$FullListIterator = registerClass(&class_java_util_AbstractList$FullListIterator);

}

