#include "java/util/IdentityHashMap_IdentityHashMapEntrySet.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/IdentityHashMap_IdentityHashMapIterator.h"
#include "java/util/Map_Entry.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntrySet.h"
#include "java/lang/Iterable.h"
#include "java/util/IdentityHashMap.h"
#include "java/util/MapEntry_Type.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntry.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntrySet_1.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_IdentityHashMap$IdentityHashMapEntrySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_IdentityHashMap$IdentityHashMapEntrySet *) object;
	if (self->F_associatedMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedMap)->clazz)->markFunction)((jobject) self->F_associatedMap, mark, depth + 1);
}

void clinit_java_util_IdentityHashMap$IdentityHashMapEntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_IdentityHashMap$IdentityHashMapEntrySet_java_util_IdentityHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap$IdentityHashMapEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(179);
	((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap = (jref) (frame[1].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap$IdentityHashMapEntrySet_hashMap_R_java_util_IdentityHashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:hashMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap$IdentityHashMapEntrySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	popStackFrame(ctx);
	return ((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap$IdentityHashMapEntrySet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	((func_java_util_IdentityHashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_IdentityHashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap$IdentityHashMapEntrySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	sp[0].o = (jobject)((func_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o));
	LINE_NUMBER(209);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_IdentityHashMap_access$100_java_util_IdentityHashMap_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(211);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap$IdentityHashMapEntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntrySet:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	clinit_java_util_IdentityHashMap$IdentityHashMapIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$IdentityHashMapIterator);
	clinit_java_util_IdentityHashMap$IdentityHashMapEntrySet$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_IdentityHashMap$IdentityHashMapEntrySet$1);
	init_java_util_IdentityHashMap$IdentityHashMapEntrySet$1_java_util_IdentityHashMap$IdentityHashMapEntrySet(ctx, sp[1].o, (frame[0].o));
	sp[2].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapEntrySet *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	init_java_util_IdentityHashMap$IdentityHashMapIterator_java_util_MapEntry$Type_java_util_IdentityHashMap(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_IdentityHashMap$IdentityHashMapEntrySet[] {
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
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_clear,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_hashMap_R_java_util_IdentityHashMap,
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
	{ "hashMap", "()Ljava/util/IdentityHashMap;" },
};

static FieldMetadata fields[] {
	{ "associatedMap", &class_java_util_IdentityHashMap, offsetof(java_util_IdentityHashMap$IdentityHashMapEntrySet, F_associatedMap), "Ljava/util/IdentityHashMap;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap$IdentityHashMapEntrySet_java_util_IdentityHashMap, 0, "(Ljava/util/IdentityHashMap;)V", 1 },
	{ "hashMap", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_hashMap_R_java_util_IdentityHashMap, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_hashMap_R_java_util_IdentityHashMap, "()Ljava/util/IdentityHashMap;", 0 },
	{ "size", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_size_R_int, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_clear, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_clear, "()V", 1 },
	{ "remove", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_remove_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "contains", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_java_util_IdentityHashMap$IdentityHashMapEntrySet{
		.nativeName = (intptr_t) "java/util/IdentityHashMap$IdentityHashMapEntrySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_IdentityHashMap$IdentityHashMapEntrySet),
		.classVtable = (intptr_t) vtable_java_util_IdentityHashMap$IdentityHashMapEntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_IdentityHashMap$IdentityHashMapEntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_IdentityHashMap$IdentityHashMapEntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_IdentityHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_IdentityHashMap$IdentityHashMapEntrySet = registerClass(&class_java_util_IdentityHashMap$IdentityHashMapEntrySet);

}

