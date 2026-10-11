#include "java/util/TreeMap_SubMapValuesCollection.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/util/TreeMap_SubMap.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_SubMapValuesCollection.h"
#include "java/util/TreeMap_UnboundedValueIterator.h"
#include "java/util/TreeMap_BoundedValueIterator.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeMap$SubMapValuesCollection(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$SubMapValuesCollection *) object;
	if (self->F_subMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subMap)->clazz)->markFunction)((jobject) self->F_subMap, mark, depth + 1);
}

void clinit_java_util_TreeMap$SubMapValuesCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
}

void init_java_util_TreeMap$SubMapValuesCollection_java_util_TreeMap$SubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMapValuesCollection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMapValuesCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(989);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(990);
	((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap = (jref) (frame[1].o);
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMapValuesCollection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMapValuesCollection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((func_java_util_TreeMap$SubMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$SubMap_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMapValuesCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMapValuesCollection:iterator", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_hasStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	SM_java_util_TreeMap$SubMap_access$300_java_util_TreeMap$SubMap(ctx, sp[0].o);
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_firstKeyNode;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	frame[2].i = ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_firstKeyIndex);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(ctx, sp[0].o);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1008);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx;
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ICONST(0);
label_9:;
	INST_ISTORE(2);
label_6:;
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_hasEnd) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1011);
	clinit_java_util_TreeMap$UnboundedValueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$UnboundedValueIterator);
	sp[1].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(1012);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp[3].o = temp1;
	sp += 4;
	if ((frame[1].o) != nullptr) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	INST_ILOAD(2);
label_14:;
	{
	sp -= 5;
	init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[2].o, sp[3].o, sp[4].i);
	LINE_NUMBER(1011);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	SM_java_util_TreeMap$SubMap_access$500_java_util_TreeMap$SubMap(ctx, sp[0].o);
	LINE_NUMBER(1015);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_lastKeyNode;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_lastKeyIndex;
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_lastKeyNode;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_lastKeyNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	sp[1].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[1].o))->F_lastKeyIndex));
	sp[1].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK(sp[1].o))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	LINE_NUMBER(1019);
	INST_ICONST(0);
label_20:;
	{
	sp -= 2;
	frame[4].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1020);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	if ((frame[4].i) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx)) goto label_22;
	}
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1023);
	if ((frame[3].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx;
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1024);
	if ((frame[3].o) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(1026);
	clinit_java_util_TreeMap$UnboundedValueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$UnboundedValueIterator);
	sp[1].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(1027);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp[3].o = temp1;
	sp += 4;
	if ((frame[1].o) != nullptr) goto label_30;
	}
	INST_ICONST(0);
	goto label_31;
label_30:;
	INST_ILOAD(2);
label_31:;
	{
	sp -= 5;
	init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[2].o, sp[3].o, sp[4].i);
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(1030);
	clinit_java_util_TreeMap$BoundedValueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$BoundedValueIterator);
	sp[1].o = frame[1].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[1].o) != nullptr) goto label_33;
	}
	INST_ICONST(0);
	goto label_34;
label_33:;
	LINE_NUMBER(1031);
	INST_ILOAD(2);
label_34:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(ctx, sp[0].o);
	sp[1].o = frame[3].o;
	LINE_NUMBER(1032);
	sp += 2;
	if ((frame[3].o) != nullptr) goto label_36;
	}
	INST_ICONST(0);
	goto label_37;
label_36:;
	INST_ILOAD(4);
label_37:;
	{
	sp -= 7;
	init_java_util_TreeMap$BoundedValueIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o, sp[6].i);
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$SubMapValuesCollection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMapValuesCollection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((java_util_TreeMap$SubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((func_java_util_TreeMap$SubMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$SubMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$SubMapValuesCollection[] {
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
	(void *) M_java_util_TreeMap$SubMapValuesCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$SubMapValuesCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$SubMapValuesCollection_size_R_int,
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
	{ "subMap", &class_java_util_TreeMap$SubMap, offsetof(java_util_TreeMap$SubMapValuesCollection, F_subMap), "Ljava/util/TreeMap$SubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$SubMapValuesCollection_java_util_TreeMap$SubMap, 0, "(Ljava/util/TreeMap$SubMap;)V", 1 },
	{ "isEmpty", (intptr_t) M_java_util_TreeMap$SubMapValuesCollection_isEmpty_R_boolean, VTABLE_java_util_TreeMap$SubMapValuesCollection_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$SubMapValuesCollection_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$SubMapValuesCollection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "size", (intptr_t) M_java_util_TreeMap$SubMapValuesCollection_size_R_int, VTABLE_java_util_TreeMap$SubMapValuesCollection_size_R_int, "()I", 1 },
};

Class class_java_util_TreeMap$SubMapValuesCollection{
		.nativeName = (intptr_t) "java/util/TreeMap$SubMapValuesCollection",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_TreeMap$SubMapValuesCollection),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$SubMapValuesCollection,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$SubMapValuesCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$SubMapValuesCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$SubMapValuesCollection = registerClass(&class_java_util_TreeMap$SubMapValuesCollection);

}

