#include "java/util/HashSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/lang/Cloneable.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_HashSet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_HashSet *) object;
	if (self->F_backingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backingMap)->clazz)->markFunction)((jobject) self->F_backingMap, mark, depth + 1);
}

void clinit_java_util_HashSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_HashSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	init_java_util_HashSet_java_util_HashMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_HashSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_int(ctx, sp[1].o, (frame[1].i));
	init_java_util_HashSet_java_util_HashMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_HashSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_int_float(ctx, sp[1].o, (frame[1].i), (frame[2].f));
	init_java_util_HashSet_java_util_HashMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_HashSet_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = sp[1].o;
	sp += 3;
	if (temp0 >= (6)) goto label_2;
	}
	INST_BIPUSH(11);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = temp0 * (jint(2));
	sp[0].i = temp1;
	sp += 1;
	}
label_3:;
	{
	sp -= 4;
	init_java_util_HashMap_int(ctx, sp[1].o, sp[3].i);
	LINE_NUMBER(66);
	init_java_util_HashSet_java_util_HashMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_HashSet_java_util_HashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[1].o);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
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

void M_java_util_HashSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_HashMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_HashMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_keySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
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

jint M_java_util_HashSet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_HashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:createBackingMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(162);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_int_float(ctx, sp[0].o, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashSet_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashSet:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_util_HashSet, sp[0].o));
	LINE_NUMBER(168);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_HashSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((func_java_util_HashMap_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_HashMap_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_util_HashSet *) NULL_CHECK(sp[0].o))->F_backingMap = (jref) (checkCast(ctx, &class_java_util_HashMap, sp[1].o));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_HashSet[] {
	(void *) M_java_util_AbstractSet_hashCode_R_int,
	(void *) M_java_util_AbstractSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_HashSet_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_HashSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_HashSet_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_HashSet_clear,
	(void *) M_java_util_HashSet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_HashSet_isEmpty_R_boolean,
	(void *) M_java_util_HashSet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_HashSet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap,
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
	{ "createBackingMap", "(IF)Ljava/util/HashMap;" },
};

static jclass interfaces[] { &class_java_util_Set, &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "backingMap", &class_java_util_HashMap, offsetof(java_util_HashSet, F_backingMap), "Ljava/util/HashMap;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_HashSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashSet_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashSet_java_util_HashMap, 0, "(Ljava/util/HashMap;)V", 0 },
	{ "add", (intptr_t) M_java_util_HashSet_add_java_lang_Object_R_boolean, VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_HashSet_clear, VTABLE_java_util_HashSet_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_HashSet_contains_java_lang_Object_R_boolean, VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_HashSet_isEmpty_R_boolean, VTABLE_java_util_HashSet_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_HashSet_iterator_R_java_util_Iterator, VTABLE_java_util_HashSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_java_util_HashSet_remove_java_lang_Object_R_boolean, VTABLE_java_util_HashSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_HashSet_size_R_int, VTABLE_java_util_HashSet_size_R_int, "()I", 1 },
	{ "createBackingMap", (intptr_t) M_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap, VTABLE_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap, "(IF)Ljava/util/HashMap;", 0 },
	{ "clone", (intptr_t) M_java_util_HashSet_clone_R_java_lang_Object, VTABLE_java_util_HashSet_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_HashSet{
		.nativeName = (intptr_t) "java/util/HashSet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_HashSet),
		.classVtable = (intptr_t) vtable_java_util_HashSet,
		.staticInitializer = (intptr_t) clinit_java_util_HashSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_HashSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_HashSet = registerClass(&class_java_util_HashSet);

}
