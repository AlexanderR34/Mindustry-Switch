#include "java/util/Collections_UnmodifiableSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/util/Collections.h"
#include "java/lang/Iterable.h"
#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/Collections_UnmodifiableSet.h"

extern "C" {

jlong SF_java_util_Collections$UnmodifiableSet_serialVersionUID;

void mark_java_util_Collections$UnmodifiableSet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$UnmodifiableCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$UnmodifiableSet *) object;
}

void clinit_java_util_Collections$UnmodifiableSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$UnmodifiableCollection(ctx);
	SF_java_util_Collections$UnmodifiableSet_serialVersionUID = jlong(-9215047833775013803ll);
}

void init_java_util_Collections$UnmodifiableSet_java_util_Set(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1324);
	init_java_util_Collections$UnmodifiableCollection_java_util_Collection(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableSet:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1329);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$UnmodifiableSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableSet:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1334);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableSet[] {
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

static jclass interfaces[] { &class_java_util_Set, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$UnmodifiableSet_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableSet_java_util_Set, 0, "(Ljava/util/Set;)V", 0 },
	{ "equals", (intptr_t) M_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean, VTABLE_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_Collections$UnmodifiableSet_hashCode_R_int, VTABLE_java_util_Collections$UnmodifiableSet_hashCode_R_int, "()I", 1 },
};

Class class_java_util_Collections$UnmodifiableSet{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableSet",
		.parentClass = (intptr_t) &class_java_util_Collections$UnmodifiableCollection,
		.size = sizeof(java_util_Collections$UnmodifiableSet),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableSet,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableSet,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$UnmodifiableSet = registerClass(&class_java_util_Collections$UnmodifiableSet);

}

