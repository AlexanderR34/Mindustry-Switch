#include "rhino/SlotMapContainer.h"
#include "java/lang/Object.h"
#include "rhino/EmbeddedSlotMap.h"
#include "java/util/Iterator.h"
#include "rhino/SlotMap.h"
#include "rhino/HashSlotMap.h"
#include "rhino/SlotMapContainer.h"
#include "rhino/ScriptableObject_Slot.h"
#include "java/lang/Iterable.h"
#include "rhino/ScriptableObject_SlotAccess.h"

extern "C" {

jint SF_rhino_SlotMapContainer_LARGE_HASH_SIZE;

void mark_rhino_SlotMapContainer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_SlotMapContainer *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_rhino_SlotMapContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_SlotMapContainer_LARGE_HASH_SIZE = jint(2000);
}

void init_rhino_SlotMapContainer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_SlotMapContainer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	if ((frame[1].i) <= (2000)) goto label_2;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_rhino_HashSlotMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_HashSlotMap);
	init_rhino_HashSlotMap(ctx, sp[1].o);
	((rhino_SlotMapContainer *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_rhino_EmbeddedSlotMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_EmbeddedSlotMap);
	init_rhino_EmbeddedSlotMap(ctx, sp[1].o);
	((rhino_SlotMapContainer *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_SlotMapContainer_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_SlotMapContainer_dirtySize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:dirtySize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_SlotMapContainer_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(48);
	((func_rhino_SlotMapContainer_checkMapSize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_SlotMapContainer_checkMapSize])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:query", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:addSlot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((func_rhino_SlotMapContainer_checkMapSize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_SlotMapContainer_checkMapSize])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	((func_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_SlotMapContainer_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	((func_rhino_SlotMap_remove_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_remove_java_lang_Object_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_SlotMapContainer_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_rhino_SlotMapContainer_readLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:readLock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

void M_rhino_SlotMapContainer_unlockRead_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:unlockRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_SlotMapContainer_checkMapSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SlotMapContainer:checkMapSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	if ((isInstance(ctx, sp[0].o, &class_rhino_EmbeddedSlotMap)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 < (2000)) goto label_1;
	}
	{
	LINE_NUMBER(89);
	clinit_rhino_HashSlotMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_HashSlotMap);
	init_rhino_HashSlotMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ScriptableObject$Slot, sp[0].o));
	LINE_NUMBER(91);
	((func_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(92);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(93);
	((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	}
label_1:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_SlotMapContainer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_SlotMapContainer_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_SlotMapContainer_size_R_int,
	(void *) M_rhino_SlotMapContainer_isEmpty_R_boolean,
	(void *) M_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot,
	(void *) M_rhino_SlotMapContainer_remove_java_lang_Object_int,
	(void *) M_rhino_SlotMapContainer_dirtySize_R_int,
	(void *) M_rhino_SlotMapContainer_readLock_R_long,
	(void *) M_rhino_SlotMapContainer_unlockRead_long,
	(void *) M_rhino_SlotMapContainer_checkMapSize,
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
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "query", "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;" },
	{ "addSlot", "(Lrhino/ScriptableObject$Slot;)V" },
	{ "remove", "(Ljava/lang/Object;I)V" },
	{ "dirtySize", "()I" },
	{ "readLock", "()J" },
	{ "unlockRead", "(J)V" },
	{ "checkMapSize", "()V" },
};

static jclass interfaces[] { &class_rhino_SlotMap, };

static FieldMetadata fields[] {
	{ "LARGE_HASH_SIZE", &class_int, (intptr_t) &SF_rhino_SlotMapContainer_LARGE_HASH_SIZE, "I", 26 },
	{ "map", &class_rhino_SlotMap, offsetof(rhino_SlotMapContainer, F_map), "Lrhino/SlotMap;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_SlotMapContainer_int, 0, "(I)V", 0 },
	{ "size", (intptr_t) M_rhino_SlotMapContainer_size_R_int, VTABLE_rhino_SlotMapContainer_size_R_int, "()I", 1 },
	{ "dirtySize", (intptr_t) M_rhino_SlotMapContainer_dirtySize_R_int, VTABLE_rhino_SlotMapContainer_dirtySize_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_SlotMapContainer_isEmpty_R_boolean, VTABLE_rhino_SlotMapContainer_isEmpty_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 1 },
	{ "query", (intptr_t) M_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;", 1 },
	{ "addSlot", (intptr_t) M_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot, VTABLE_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 1 },
	{ "remove", (intptr_t) M_rhino_SlotMapContainer_remove_java_lang_Object_int, VTABLE_rhino_SlotMapContainer_remove_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "iterator", (intptr_t) M_rhino_SlotMapContainer_iterator_R_java_util_Iterator, VTABLE_rhino_SlotMapContainer_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "readLock", (intptr_t) M_rhino_SlotMapContainer_readLock_R_long, VTABLE_rhino_SlotMapContainer_readLock_R_long, "()J", 1 },
	{ "unlockRead", (intptr_t) M_rhino_SlotMapContainer_unlockRead_long, VTABLE_rhino_SlotMapContainer_unlockRead_long, "(J)V", 1 },
	{ "checkMapSize", (intptr_t) M_rhino_SlotMapContainer_checkMapSize, VTABLE_rhino_SlotMapContainer_checkMapSize, "()V", 4 },
};

Class class_rhino_SlotMapContainer{
		.nativeName = (intptr_t) "rhino/SlotMapContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_SlotMapContainer),
		.classVtable = (intptr_t) vtable_rhino_SlotMapContainer,
		.staticInitializer = (intptr_t) clinit_rhino_SlotMapContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_SlotMapContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_SlotMapContainer = registerClass(&class_rhino_SlotMapContainer);

}
