#include "java/util/LinkedHashMap_2.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/LinkedHashMap_2.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/LinkedHashMap_ValueIterator.h"

extern "C" {


void mark_java_util_LinkedHashMap$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedHashMap$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_LinkedHashMap$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
}

void init_java_util_LinkedHashMap$2_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(551);
	((java_util_LinkedHashMap$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedHashMap$2_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$2:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((java_util_LinkedHashMap$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedHashMap$2_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$2:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((java_util_LinkedHashMap$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedHashMap$2_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$2:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((java_util_LinkedHashMap$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_LinkedHashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap$2_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$2:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	clinit_java_util_LinkedHashMap$ValueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$ValueIterator);
	sp[1].o = (jobject)((java_util_LinkedHashMap$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_LinkedHashMap$ValueIterator_java_util_LinkedHashMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap$2[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_LinkedHashMap$2_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_LinkedHashMap$2_clear,
	(void *) M_java_util_LinkedHashMap$2_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_LinkedHashMap$2_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_LinkedHashMap, offsetof(java_util_LinkedHashMap$2, F_this$0), "Ljava/util/LinkedHashMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$2_java_util_LinkedHashMap, 0, "(Ljava/util/LinkedHashMap;)V", 0 },
	{ "contains", (intptr_t) M_java_util_LinkedHashMap$2_contains_java_lang_Object_R_boolean, VTABLE_java_util_LinkedHashMap$2_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_LinkedHashMap$2_size_R_int, VTABLE_java_util_LinkedHashMap$2_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_java_util_LinkedHashMap$2_clear, VTABLE_java_util_LinkedHashMap$2_clear, "()V", 1 },
	{ "iterator", (intptr_t) M_java_util_LinkedHashMap$2_iterator_R_java_util_Iterator, VTABLE_java_util_LinkedHashMap$2_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_java_util_LinkedHashMap$2{
		.nativeName = (intptr_t) "java/util/LinkedHashMap$2",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_LinkedHashMap$2),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap$2,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap$2 = registerClass(&class_java_util_LinkedHashMap$2);

}

