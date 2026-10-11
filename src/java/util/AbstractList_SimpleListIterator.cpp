#include "java/util/AbstractList_SimpleListIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/AbstractList_1.h"
#include "java/util/AbstractList_SimpleListIterator.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {


void mark_java_util_AbstractList$SimpleListIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractList$SimpleListIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_AbstractList$SimpleListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SimpleListIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$SimpleListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[1].o);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft = temp0;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(44);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$SimpleListIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SimpleListIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	if (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft) <= 0) goto label_1;
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

jobject M_java_util_AbstractList$SimpleListIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SimpleListIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_0;
	}
	{
	LINE_NUMBER(52);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_AbstractList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (frame[1].i);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft = (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft) - (jint(1)));
	LINE_NUMBER(60);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[1].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SimpleListIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SimpleListIterator:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	if (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition) != (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(68);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_0;
	}
	{
	LINE_NUMBER(71);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition;
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, sp[0].o);
	if (temp0 != (temp1 - ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_numLeft))) goto label_8;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft = (((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_numLeft) - (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_AbstractList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_remove_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(81);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(79);
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(84);
	((java_util_AbstractList$SimpleListIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (jint(-1));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList_java_util_AbstractList$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SimpleListIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$SimpleListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$SimpleListIterator[] {
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
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "numLeft", &class_int, offsetof(java_util_AbstractList$SimpleListIterator, F_numLeft), "I", 0 },
	{ "expectedModCount", &class_int, offsetof(java_util_AbstractList$SimpleListIterator, F_expectedModCount), "I", 0 },
	{ "lastPosition", &class_int, offsetof(java_util_AbstractList$SimpleListIterator, F_lastPosition), "I", 0 },
	{ "this$0", &class_java_util_AbstractList, offsetof(java_util_AbstractList$SimpleListIterator, F_this$0), "Ljava/util/AbstractList;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList, 0, "(Ljava/util/AbstractList;)V", 2 },
	{ "hasNext", (intptr_t) M_java_util_AbstractList$SimpleListIterator_hasNext_R_boolean, VTABLE_java_util_AbstractList$SimpleListIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_AbstractList$SimpleListIterator_next_R_java_lang_Object, VTABLE_java_util_AbstractList$SimpleListIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractList$SimpleListIterator_remove, VTABLE_java_util_AbstractList$SimpleListIterator_remove, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList_java_util_AbstractList$1, 0, "(Ljava/util/AbstractList;Ljava/util/AbstractList$1;)V", 4096 },
};

Class class_java_util_AbstractList$SimpleListIterator{
		.nativeName = (intptr_t) "java/util/AbstractList$SimpleListIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_AbstractList$SimpleListIterator),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$SimpleListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$SimpleListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$SimpleListIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$SimpleListIterator = registerClass(&class_java_util_AbstractList$SimpleListIterator);

}

