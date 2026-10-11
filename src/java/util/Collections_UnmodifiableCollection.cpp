#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Collections.h"
#include "java/util/Collections_UnmodifiableCollection_1.h"
#include "java/lang/Iterable.h"
#include "java/util/Collections_UnmodifiableCollection.h"

extern "C" {


void mark_java_util_Collections$UnmodifiableCollection(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$UnmodifiableCollection *) object;
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
}

void clinit_java_util_Collections$UnmodifiableCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$UnmodifiableCollection_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(932);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(933);
	((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(937);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:addAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(941);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Collections$UnmodifiableCollection_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_containsAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(961);
	clinit_java_util_Collections$UnmodifiableCollection$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableCollection$1);
	init_java_util_Collections$UnmodifiableCollection$1_java_util_Collections$UnmodifiableCollection(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(979);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(983);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableCollection_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(987);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$UnmodifiableCollection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableCollection_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableCollection:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableCollection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$UnmodifiableCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$UnmodifiableCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_clear,
	(void *) M_java_util_Collections$UnmodifiableCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_size_R_int,
	(void *) M_java_util_Collections$UnmodifiableCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
};

static jclass interfaces[] { &class_java_util_Collection, };

static FieldMetadata fields[] {
	{ "c", &class_java_util_Collection, offsetof(java_util_Collections$UnmodifiableCollection, F_c), "Ljava/util/Collection;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableCollection_java_util_Collection, 0, "(Ljava/util/Collection;)V", 0 },
	{ "add", (intptr_t) M_java_util_Collections$UnmodifiableCollection_add_java_lang_Object_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_Collections$UnmodifiableCollection_addAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_Collections$UnmodifiableCollection_clear, VTABLE_java_util_Collections$UnmodifiableCollection_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_Collections$UnmodifiableCollection_contains_java_lang_Object_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Collections$UnmodifiableCollection_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_Collections$UnmodifiableCollection_isEmpty_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_Collections$UnmodifiableCollection_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$UnmodifiableCollection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$UnmodifiableCollection_remove_java_lang_Object_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_Collections$UnmodifiableCollection_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_Collections$UnmodifiableCollection_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$UnmodifiableCollection_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "size", (intptr_t) M_java_util_Collections$UnmodifiableCollection_size_R_int, VTABLE_java_util_Collections$UnmodifiableCollection_size_R_int, "()I", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$UnmodifiableCollection_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableCollection_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$UnmodifiableCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String, VTABLE_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_Collections$UnmodifiableCollection{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableCollection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$UnmodifiableCollection),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableCollection,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$UnmodifiableCollection = registerClass(&class_java_util_Collections$UnmodifiableCollection);

}

