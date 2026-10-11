#include "java/util/Collections_SetFromMap.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/lang/Boolean.h"
#include "java/util/Collections.h"
#include "java/util/Collections_SetFromMap.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {

jlong SF_java_util_Collections$SetFromMap_serialVersionUID;

void mark_java_util_Collections$SetFromMap(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$SetFromMap *) object;
	if (self->F_m)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_m)->clazz)->markFunction)((jobject) self->F_m, mark, depth + 1);
	if (self->F_backingSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backingSet)->clazz)->markFunction)((jobject) self->F_backingSet, mark, depth + 1);
}

void clinit_java_util_Collections$SetFromMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
	SF_java_util_Collections$SetFromMap_serialVersionUID = jlong(2454657854757543876ll);
}

void init_java_util_Collections$SetFromMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SetFromMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2604);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(2605);
	((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[1].o);
	LINE_NUMBER(2606);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	((java_util_Collections$SetFromMap *) NULL_CHECK(sp[0].o))->F_backingSet = (jref) sp[1].o;
	LINE_NUMBER(2607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2611);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$SetFromMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2616);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2621);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[2].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (sp[0].o != nullptr) goto label_1;
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

void M_java_util_Collections$SetFromMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2626);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m;
	((func_java_util_Map_clear) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(2627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SetFromMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2631);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2636);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2641);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	jint temp0 = (jint)((func_java_util_Set_containsAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_containsAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2646);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2651);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2656);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	jint temp0 = (jint)((func_java_util_Set_retainAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_retainAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2661);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	sp[0].o = (jobject)((func_java_util_Set_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2666);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	sp[0].o = (jobject)((func_java_util_Set_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2671);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_backingSet;
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$SetFromMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SetFromMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2676);
	sp[0].o = (jobject)((java_util_Collections$SetFromMap *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SetFromMap[] {
	(void *) M_java_util_Collections$SetFromMap_hashCode_R_int,
	(void *) M_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$SetFromMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_clear,
	(void *) M_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_isEmpty_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SetFromMap_size_R_int,
	(void *) M_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$SetFromMap_serialVersionUID, "J", 26 },
	{ "m", &class_java_util_Map, offsetof(java_util_Collections$SetFromMap, F_m), "Ljava/util/Map;", 2 },
	{ "backingSet", &class_java_util_Set, offsetof(java_util_Collections$SetFromMap, F_backingSet), "Ljava/util/Set;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SetFromMap_java_util_Map, 0, "(Ljava/util/Map;)V", 0 },
	{ "equals", (intptr_t) M_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_Collections$SetFromMap_hashCode_R_int, VTABLE_java_util_Collections$SetFromMap_hashCode_R_int, "()I", 1 },
	{ "add", (intptr_t) M_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_Collections$SetFromMap_clear, VTABLE_java_util_Collections$SetFromMap_clear, "()V", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$SetFromMap_toString_R_java_lang_String, VTABLE_java_util_Collections$SetFromMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "contains", (intptr_t) M_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_Collections$SetFromMap_isEmpty_R_boolean, VTABLE_java_util_Collections$SetFromMap_isEmpty_R_boolean, "()Z", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "size", (intptr_t) M_java_util_Collections$SetFromMap_size_R_int, VTABLE_java_util_Collections$SetFromMap_size_R_int, "()I", 1 },
};

Class class_java_util_Collections$SetFromMap{
		.nativeName = (intptr_t) "java/util/Collections$SetFromMap",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_Collections$SetFromMap),
		.classVtable = (intptr_t) vtable_java_util_Collections$SetFromMap,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SetFromMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SetFromMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$SetFromMap = registerClass(&class_java_util_Collections$SetFromMap);

}

