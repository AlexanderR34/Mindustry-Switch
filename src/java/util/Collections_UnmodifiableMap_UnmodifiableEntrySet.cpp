#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_1.h"
#include "java/lang/Object.h"
#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet.h"
#include "java/util/Iterator.h"
#include "java/util/Collections_UnmodifiableMap.h"
#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableMapEntry.h"
#include "java/lang/Iterable.h"
#include "java/util/Collections_UnmodifiableSet.h"
#include "java/util/Collections_UnmodifiableCollection.h"

extern "C" {

jlong SF_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_serialVersionUID;

void mark_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$UnmodifiableSet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet *) object;
}

void clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$UnmodifiableSet(ctx);
	SF_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_serialVersionUID = jlong(7854390611657943733ll);
}

void init_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_java_util_Set(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1199);
	init_java_util_Collections$UnmodifiableSet_java_util_Set(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1204);
	clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$1);
	init_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(1224);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1225);
	sp[0].o = (jobject)((func_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1226);
	frame[4].i = (frame[1].i);
	}
label_4:;
	{
	INST_IINC(4, -1);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(1227);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1229);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet:toArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1235);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[2].i = temp0;
	frame[3].i = (jint(0));
	LINE_NUMBER(1236);
	sp[0].o = (jobject)((func_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1237);
	frame[5].o = (frame[1].o);
	LINE_NUMBER(1238);
	if ((frame[2].i) <= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1239);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1241);
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(1242);
	sp[0].o = frame[5].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(1244);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(1245);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[3].i)) = (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(1247);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet[] {
	(void *) M_java_util_Collections$UnmodifiableSet_hashCode_R_int,
	(void *) M_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator,
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
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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

static jclass innerClasses[] {
	&class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_java_util_Set, 0, "(Ljava/util/Set;)V", 0 },
	{ "iterator", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
};

Class class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet",
		.parentClass = (intptr_t) &class_java_util_Collections$UnmodifiableSet,
		.size = sizeof(java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections$UnmodifiableMap,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
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
static bool registered_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet = registerClass(&class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet);

}

