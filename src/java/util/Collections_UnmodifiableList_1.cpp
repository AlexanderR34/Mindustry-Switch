#include "java/util/Collections_UnmodifiableList_1.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Collections_UnmodifiableList.h"
#include "java/util/Collections_UnmodifiableList_1.h"
#include "java/util/List.h"

extern "C" {


void mark_java_util_Collections$UnmodifiableList$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$UnmodifiableList$1 *) object;
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Collections$UnmodifiableList$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$UnmodifiableList$1_java_util_Collections$UnmodifiableList_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableList$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1079);
	((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_val$location = (frame[2].i);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1080);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_Collections$UnmodifiableList *) NULL_CHECK(sp[1].o))->F_list;
	sp[1].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, sp[1].o))(ctx, sp[1].o, ((jint)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_val$location));
	((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK(sp[0].o))->F_iterator = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$UnmodifiableList$1_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1083);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableList$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableList$1_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:hasPrevious", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableList$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$UnmodifiableList$1_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:nextIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableList$1_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:previous", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$UnmodifiableList$1_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:previousIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1107);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableList$1 *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$UnmodifiableList$1_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1111);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Collections$UnmodifiableList$1_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableList$1:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1115);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableList$1[] {
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
	(void *) M_java_util_Collections$UnmodifiableList$1_hasNext_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableList$1_next_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList$1_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Collections$UnmodifiableList$1_add_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList$1_hasPrevious_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableList$1_nextIndex_R_int,
	(void *) M_java_util_Collections$UnmodifiableList$1_previous_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList$1_previousIndex_R_int,
	(void *) M_java_util_Collections$UnmodifiableList$1_set_java_lang_Object,
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
	{ "iterator", &class_java_util_ListIterator, offsetof(java_util_Collections$UnmodifiableList$1, F_iterator), "Ljava/util/ListIterator;", 0 },
	{ "val$location", &class_int, offsetof(java_util_Collections$UnmodifiableList$1, F_val$location), "I", 4112 },
	{ "this$0", &class_java_util_Collections$UnmodifiableList, offsetof(java_util_Collections$UnmodifiableList$1, F_this$0), "Ljava/util/Collections$UnmodifiableList;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableList$1_java_util_Collections$UnmodifiableList_int, 0, "(Ljava/util/Collections$UnmodifiableList;I)V", 0 },
	{ "add", (intptr_t) M_java_util_Collections$UnmodifiableList$1_add_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableList$1_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Collections$UnmodifiableList$1_hasNext_R_boolean, VTABLE_java_util_Collections$UnmodifiableList$1_hasNext_R_boolean, "()Z", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_Collections$UnmodifiableList$1_hasPrevious_R_boolean, VTABLE_java_util_Collections$UnmodifiableList$1_hasPrevious_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Collections$UnmodifiableList$1_next_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableList$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_java_util_Collections$UnmodifiableList$1_nextIndex_R_int, VTABLE_java_util_Collections$UnmodifiableList$1_nextIndex_R_int, "()I", 1 },
	{ "previous", (intptr_t) M_java_util_Collections$UnmodifiableList$1_previous_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableList$1_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "previousIndex", (intptr_t) M_java_util_Collections$UnmodifiableList$1_previousIndex_R_int, VTABLE_java_util_Collections$UnmodifiableList$1_previousIndex_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$UnmodifiableList$1_remove, VTABLE_java_util_Collections$UnmodifiableList$1_remove, "()V", 1 },
	{ "set", (intptr_t) M_java_util_Collections$UnmodifiableList$1_set_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableList$1_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_Collections$UnmodifiableList$1{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableList$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$UnmodifiableList$1),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableList$1,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableList$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableList$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_Collections$UnmodifiableList$1 = registerClass(&class_java_util_Collections$UnmodifiableList$1);

}

