#include "java/util/LinkedList_ReverseLinkIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedList_Link.h"
#include "java/util/LinkedList.h"
#include "java/util/LinkedList_ReverseLinkIterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IllegalStateException.h"

extern "C" {


void mark_java_util_LinkedList$ReverseLinkIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_LinkedList$ReverseLinkIterator *) object;
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_link)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_link)->clazz)->markFunction)((jobject) self->F_link, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_LinkedList$ReverseLinkIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_LinkedList$ReverseLinkIterator_java_util_LinkedList_java_util_LinkedList(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$ReverseLinkIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedList$ReverseLinkIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(183);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(184);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(185);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list = (jref) (frame[2].o);
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(188);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$ReverseLinkIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	sp[1].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK(sp[1].o))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_1;
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

jobject M_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$ReverseLinkIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[1].o))->F_previous;
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK(sp[0].o))->F_link = (jref) sp[1].o;
	LINE_NUMBER(199);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(1));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(202);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(204);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList$ReverseLinkIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$ReverseLinkIterator:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(210);
	if (((jint)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_canRemove) == 0) goto label_3;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[1].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(213);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(214);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous = (jref) (frame[1].o);
	LINE_NUMBER(215);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_link = (jref) (frame[2].o);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_list;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(219);
	((java_util_LinkedList$ReverseLinkIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(222);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(224);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedList$ReverseLinkIterator[] {
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
	(void *) M_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean,
	(void *) M_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object,
	(void *) M_java_util_LinkedList$ReverseLinkIterator_remove,
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
	{ "expectedModCount", &class_int, offsetof(java_util_LinkedList$ReverseLinkIterator, F_expectedModCount), "I", 2 },
	{ "list", &class_java_util_LinkedList, offsetof(java_util_LinkedList$ReverseLinkIterator, F_list), "Ljava/util/LinkedList;", 18 },
	{ "link", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList$ReverseLinkIterator, F_link), "Ljava/util/LinkedList$Link;", 2 },
	{ "canRemove", &class_boolean, offsetof(java_util_LinkedList$ReverseLinkIterator, F_canRemove), "Z", 2 },
	{ "this$0", &class_java_util_LinkedList, offsetof(java_util_LinkedList$ReverseLinkIterator, F_this$0), "Ljava/util/LinkedList;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedList$ReverseLinkIterator_java_util_LinkedList_java_util_LinkedList, 0, "(Ljava/util/LinkedList;Ljava/util/LinkedList;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean, VTABLE_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object, VTABLE_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedList$ReverseLinkIterator_remove, VTABLE_java_util_LinkedList$ReverseLinkIterator_remove, "()V", 1 },
};

Class class_java_util_LinkedList$ReverseLinkIterator{
		.nativeName = (intptr_t) "java/util/LinkedList$ReverseLinkIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_LinkedList$ReverseLinkIterator),
		.classVtable = (intptr_t) vtable_java_util_LinkedList$ReverseLinkIterator,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedList$ReverseLinkIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedList$ReverseLinkIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedList$ReverseLinkIterator = registerClass(&class_java_util_LinkedList$ReverseLinkIterator);

}

