#include "java/util/EnumMap_KeySet.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/EnumMap.h"
#include "java/util/EnumMap_KeyIterator.h"
#include "java/util/EnumMap_KeySet.h"
#include "java/util/EnumMap_1.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_EnumMap$KeySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_EnumMap$KeySet *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_EnumMap$KeySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_EnumMap$KeySet_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$KeySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$KeySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	clinit_java_util_EnumMap$KeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EnumMap$KeyIterator);
	sp[1].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_java_util_EnumMap$KeyIterator_java_util_EnumMap_java_util_EnumMap$1(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_EnumMap$KeySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$KeySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_EnumMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$KeySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(401);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(ctx, sp[0].o);
	if (temp1 == (frame[2].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_EnumMap$KeySet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((java_util_EnumMap$KeySet *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_EnumMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap$KeySet_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$KeySet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$KeySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(389);
	init_java_util_EnumMap$KeySet_java_util_EnumMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$KeySet[] {
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
	(void *) M_java_util_EnumMap$KeySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_EnumMap$KeySet_clear,
	(void *) M_java_util_EnumMap$KeySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_EnumMap$KeySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_EnumMap$KeySet_size_R_int,
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
	{ "this$0", &class_java_util_EnumMap, offsetof(java_util_EnumMap$KeySet, F_this$0), "Ljava/util/EnumMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$KeySet_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 2 },
	{ "iterator", (intptr_t) M_java_util_EnumMap$KeySet_iterator_R_java_util_Iterator, VTABLE_java_util_EnumMap$KeySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "size", (intptr_t) M_java_util_EnumMap$KeySet_size_R_int, VTABLE_java_util_EnumMap$KeySet_size_R_int, "()I", 1 },
	{ "contains", (intptr_t) M_java_util_EnumMap$KeySet_contains_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap$KeySet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_EnumMap$KeySet_remove_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap$KeySet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_EnumMap$KeySet_clear, VTABLE_java_util_EnumMap$KeySet_clear, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$KeySet_java_util_EnumMap_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap;Ljava/util/EnumMap$1;)V", 4096 },
};

Class class_java_util_EnumMap$KeySet{
		.nativeName = (intptr_t) "java/util/EnumMap$KeySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_EnumMap$KeySet),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$KeySet,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$KeySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$KeySet,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$KeySet = registerClass(&class_java_util_EnumMap$KeySet);

}

