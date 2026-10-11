#include "java/util/IdentityHashMap_IdentityHashMapIterator.h"
#include "java/util/MapEntry_Type.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntry.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/IdentityHashMap_IdentityHashMapIterator.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/MapEntry.h"
#include "java/util/IdentityHashMap.h"

extern "C" {


void mark_java_util_IdentityHashMap$IdentityHashMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_IdentityHashMap$IdentityHashMapIterator *) object;
	if (self->F_associatedMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedMap)->clazz)->markFunction)((jobject) self->F_associatedMap, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_java_util_IdentityHashMap$IdentityHashMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_IdentityHashMap$IdentityHashMapIterator_java_util_MapEntry$Type_java_util_IdentityHashMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap$IdentityHashMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(122);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(108);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(111);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = (jint(0));
	LINE_NUMBER(119);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(123);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap = (jref) (frame[2].o);
	LINE_NUMBER(124);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(125);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_IdentityHashMap *) NULL_CHECK((frame[2].o)))->F_modCount);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_position) + (jint(2)));
	goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapIterator:checkConcurrentMod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	if (temp0 == ((jint)((java_util_IdentityHashMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(142);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapIterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	((func_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(149);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	jint temp0 = (jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position;
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_java_util_IdentityHashMap_access$000_java_util_IdentityHashMap_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(154);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = ((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_position) + (jint(2)));
	LINE_NUMBER(157);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(1));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_MapEntry$Type, INDEX_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_IdentityHashMap$IdentityHashMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	((func_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(163);
	if (((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_canRemove) != 0) goto label_2;
	}
	{
	LINE_NUMBER(164);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(167);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((java_util_IdentityHashMap *) NULL_CHECK(sp[1].o))->F_elementData;
	sp[0].o = (jobject)((func_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition))));
	LINE_NUMBER(169);
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_IdentityHashMap$IdentityHashMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_IdentityHashMap$IdentityHashMapIterator[] {
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
	(void *) M_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "checkConcurrentMod", "()V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "position", &class_int, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_position), "I", 2 },
	{ "lastPosition", &class_int, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_lastPosition), "I", 2 },
	{ "associatedMap", &class_java_util_IdentityHashMap, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_associatedMap), "Ljava/util/IdentityHashMap;", 16 },
	{ "expectedModCount", &class_int, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_expectedModCount), "I", 0 },
	{ "type", &class_java_util_MapEntry$Type, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_type), "Ljava/util/MapEntry$Type;", 16 },
	{ "canRemove", &class_boolean, offsetof(java_util_IdentityHashMap$IdentityHashMapIterator, F_canRemove), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap$IdentityHashMapIterator_java_util_MapEntry$Type_java_util_IdentityHashMap, 0, "(Ljava/util/MapEntry$Type;Ljava/util/IdentityHashMap;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean, VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean, "()Z", 1 },
	{ "checkConcurrentMod", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod, VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod, "()V", 0 },
	{ "next", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object, VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapIterator_remove, VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_remove, "()V", 1 },
};

Class class_java_util_IdentityHashMap$IdentityHashMapIterator{
		.nativeName = (intptr_t) "java/util/IdentityHashMap$IdentityHashMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_IdentityHashMap$IdentityHashMapIterator),
		.classVtable = (intptr_t) vtable_java_util_IdentityHashMap$IdentityHashMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_IdentityHashMap$IdentityHashMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_IdentityHashMap$IdentityHashMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_IdentityHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_IdentityHashMap$IdentityHashMapIterator = registerClass(&class_java_util_IdentityHashMap$IdentityHashMapIterator);

}

