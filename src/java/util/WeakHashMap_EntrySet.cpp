#include "java/util/WeakHashMap_EntrySet.h"
#include "java/util/Spliterator.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/AbstractMap_SimpleEntry.h"
#include "java/util/Map_Entry.h"
#include "java/util/WeakHashMap_1.h"
#include "java/util/ArrayList.h"
#include "java/util/WeakHashMap_EntrySpliterator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Object.h"
#include "java/util/WeakHashMap.h"
#include "java/util/WeakHashMap_EntryIterator.h"
#include "java/util/WeakHashMap_EntrySet.h"
#include "java/util/List.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_WeakHashMap$EntrySet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractSet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_WeakHashMap$EntrySet *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_WeakHashMap$EntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$EntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(928);
	((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(930);
	clinit_java_util_WeakHashMap$EntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_WeakHashMap$EntryIterator);
	sp[1].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_WeakHashMap$EntryIterator_java_util_WeakHashMap_java_util_WeakHashMap$1(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(934);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(935);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(936);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(937);
	sp[0].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(938);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_WeakHashMap$EntrySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_WeakHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap$EntrySet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_WeakHashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(951);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:deepCopy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(954);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	jint temp0 = (jint)((func_java_util_WeakHashMap$EntrySet_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$EntrySet_size_R_int])(ctx, (frame[0].o));
	init_java_util_ArrayList_int(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(956);
	sp[0].o = frame[1].o;
	clinit_java_util_AbstractMap$SimpleEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$SimpleEntry);
	init_java_util_AbstractMap$SimpleEntry_java_util_Map$Entry(ctx, sp[1].o, (frame[3].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(957);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:spliterator", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(969);
	clinit_java_util_WeakHashMap$EntrySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_WeakHashMap$EntrySpliterator);
	sp[1].o = (jobject)((java_util_WeakHashMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_WeakHashMap$EntrySpliterator_java_util_WeakHashMap_int_int_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(-1)), (jint(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap_java_util_WeakHashMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$EntrySet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$EntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(928);
	init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$EntrySet[] {
	(void *) M_java_util_AbstractSet_hashCode_R_int,
	(void *) M_java_util_AbstractSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_WeakHashMap$EntrySet_clear,
	(void *) M_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_WeakHashMap$EntrySet_size_R_int,
	(void *) M_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List,
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
	{ "deepCopy", "()Ljava/util/List;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_WeakHashMap, offsetof(java_util_WeakHashMap$EntrySet, F_this$0), "Ljava/util/WeakHashMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap, 0, "(Ljava/util/WeakHashMap;)V", 2 },
	{ "iterator", (intptr_t) M_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "contains", (intptr_t) M_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_WeakHashMap$EntrySet_size_R_int, VTABLE_java_util_WeakHashMap$EntrySet_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_java_util_WeakHashMap$EntrySet_clear, VTABLE_java_util_WeakHashMap$EntrySet_clear, "()V", 1 },
	{ "deepCopy", (intptr_t) M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List, VTABLE_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List, "()Ljava/util/List;", 2 },
	{ "toArray", (intptr_t) M_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object, VTABLE_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "spliterator", (intptr_t) M_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator, VTABLE_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap_java_util_WeakHashMap$1, 0, "(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V", 4096 },
};

Class class_java_util_WeakHashMap$EntrySet{
		.nativeName = (intptr_t) "java/util/WeakHashMap$EntrySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_WeakHashMap$EntrySet),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$EntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$EntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$EntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$EntrySet = registerClass(&class_java_util_WeakHashMap$EntrySet);

}

