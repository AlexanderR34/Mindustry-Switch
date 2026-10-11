#include "java/util/AbstractList_SubAbstractList_SubAbstractListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractList_SubAbstractList_SubAbstractListIterator.h"
#include "java/util/AbstractList_SubAbstractList.h"

extern "C" {


void mark_java_util_AbstractList$SubAbstractList$SubAbstractListIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) object;
	if (self->F_subList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subList)->clazz)->markFunction)((jobject) self->F_subList, mark, depth + 1);
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
}

void clinit_java_util_AbstractList$SubAbstractList$SubAbstractListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_java_util_ListIterator_java_util_AbstractList$SubAbstractList_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$SubAbstractList$SubAbstractListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(178);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(179);
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator = (jref) (frame[1].o);
	LINE_NUMBER(180);
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_subList = (jref) (frame[2].o);
	LINE_NUMBER(181);
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start = (frame[3].i);
	LINE_NUMBER(182);
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_end = (((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start) + (frame[4].i));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	((func_java_util_ListIterator_add_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_add_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_subList;
	((func_java_util_AbstractList$SubAbstractList_sizeChanged_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList$SubAbstractList_sizeChanged_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK(sp[0].o))->F_end = (((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK(sp[0].o))->F_end) + (jint(1)));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_end)) goto label_1;
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

jbool M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:hasPrevious", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 < ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start)) goto label_1;
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

jobject M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_end)) goto label_1;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(203);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:nextIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start));
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:previous", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 < ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start)) goto label_1;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(214);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:previousIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(219);
	if ((frame[1].i) < ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start)) goto label_2;
	}
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return ((frame[1].i) - ((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_start));
	}
label_2:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	((func_java_util_ListIterator_remove) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_remove, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_subList;
	((func_java_util_AbstractList$SubAbstractList_sizeChanged_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList$SubAbstractList_sizeChanged_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK(sp[0].o))->F_end = (((jint)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK(sp[0].o))->F_end) - (jint(1)));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList$SubAbstractListIterator:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList$SubAbstractListIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$SubAbstractList$SubAbstractListIterator[] {
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
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasNext_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_next_R_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_add_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasPrevious_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_nextIndex_R_int,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previous_R_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previousIndex_R_int,
	(void *) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_set_java_lang_Object,
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
	{ "subList", &class_java_util_AbstractList$SubAbstractList, offsetof(java_util_AbstractList$SubAbstractList$SubAbstractListIterator, F_subList), "Ljava/util/AbstractList$SubAbstractList;", 18 },
	{ "iterator", &class_java_util_ListIterator, offsetof(java_util_AbstractList$SubAbstractList$SubAbstractListIterator, F_iterator), "Ljava/util/ListIterator;", 18 },
	{ "start", &class_int, offsetof(java_util_AbstractList$SubAbstractList$SubAbstractListIterator, F_start), "I", 2 },
	{ "end", &class_int, offsetof(java_util_AbstractList$SubAbstractList$SubAbstractListIterator, F_end), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_java_util_ListIterator_java_util_AbstractList$SubAbstractList_int_int, 0, "(Ljava/util/ListIterator;Ljava/util/AbstractList$SubAbstractList;II)V", 0 },
	{ "add", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_add_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasNext_R_boolean, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasNext_R_boolean, "()Z", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasPrevious_R_boolean, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_hasPrevious_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_next_R_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_nextIndex_R_int, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_nextIndex_R_int, "()I", 1 },
	{ "previous", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previous_R_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "previousIndex", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previousIndex_R_int, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_previousIndex_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_remove, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_remove, "()V", 1 },
	{ "set", (intptr_t) M_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_set_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_AbstractList$SubAbstractList$SubAbstractListIterator{
		.nativeName = (intptr_t) "java/util/AbstractList$SubAbstractList$SubAbstractListIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_AbstractList$SubAbstractList$SubAbstractListIterator),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$SubAbstractList$SubAbstractListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$SubAbstractList$SubAbstractListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$SubAbstractList$SubAbstractListIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList$SubAbstractList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$SubAbstractList$SubAbstractListIterator = registerClass(&class_java_util_AbstractList$SubAbstractList$SubAbstractListIterator);

}

