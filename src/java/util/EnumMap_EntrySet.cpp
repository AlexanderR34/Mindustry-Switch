#include "java/util/EnumMap_EntrySet.h"
#include "java/util/EnumMap_EntrySet.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/AbstractMap_SimpleEntry.h"
#include "java/util/Map_Entry.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/Iterable.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/EnumMap_EntryIterator.h"
#include "java/util/EnumMap.h"
#include "java/util/EnumMap_1.h"
#include "java/lang/Class.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_EnumMap$EntrySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_EnumMap$EntrySet *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_EnumMap$EntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_EnumMap$EntrySet_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(472);
	((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	clinit_java_util_EnumMap$EntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EnumMap$EntryIterator);
	sp[1].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_EnumMap$EntryIterator_java_util_EnumMap_java_util_EnumMap$1(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(480);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_util_EnumMap_access$900_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(486);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_util_EnumMap_access$1000_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_EnumMap$EntrySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_EnumMap$EntrySet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_EnumMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:toArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, temp0);
	sp[0].o = (jobject)M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(500);
	jint temp0 = (jint)((func_java_util_EnumMap$EntrySet_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap$EntrySet_size_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(501);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = frame[1].o;
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[2].i));
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(504);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(505);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:fillEntryArray", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	frame[2].i = (jint(0));
	LINE_NUMBER(510);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	clinit_java_util_AbstractMap$SimpleEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$SimpleEntry);
	sp[2].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(513);
	sp[2].o = (jobject)SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(ctx, sp[2].o);
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i));
	sp[3].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)((java_util_EnumMap$EntrySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[4].o);
	sp[3].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[3].o, ((jobject)ARRAY_ACCESS(jobject, sp[4].o, (frame[3].i))));
	init_java_util_AbstractMap$SimpleEntry_java_lang_Object_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(510);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap$EntrySet_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntrySet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(472);
	init_java_util_EnumMap$EntrySet_java_util_EnumMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$EntrySet[] {
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
	(void *) M_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_EnumMap$EntrySet_clear,
	(void *) M_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_EnumMap$EntrySet_size_R_int,
	(void *) M_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
	{ "fillEntryArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_EnumMap, offsetof(java_util_EnumMap$EntrySet, F_this$0), "Ljava/util/EnumMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntrySet_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 2 },
	{ "iterator", (intptr_t) M_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "contains", (intptr_t) M_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_EnumMap$EntrySet_size_R_int, VTABLE_java_util_EnumMap$EntrySet_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_java_util_EnumMap$EntrySet_clear, VTABLE_java_util_EnumMap$EntrySet_clear, "()V", 1 },
	{ "toArray", (intptr_t) M_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object, VTABLE_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "fillEntryArray", (intptr_t) M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntrySet_java_util_EnumMap_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap;Ljava/util/EnumMap$1;)V", 4096 },
};

Class class_java_util_EnumMap$EntrySet{
		.nativeName = (intptr_t) "java/util/EnumMap$EntrySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_EnumMap$EntrySet),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$EntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$EntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$EntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_EnumMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$EntrySet = registerClass(&class_java_util_EnumMap$EntrySet);

}

