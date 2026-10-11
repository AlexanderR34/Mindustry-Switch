#include "java/util/HashMap_AbstractMapIterator.h"
#include "java/util/HashMap_Entry.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/HashMap.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/HashMap_AbstractMapIterator.h"

extern "C" {


void mark_java_util_HashMap$AbstractMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_HashMap$AbstractMapIterator *) object;
	if (self->F_futureEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_futureEntry)->clazz)->markFunction)((jobject) self->F_futureEntry, mark, depth + 1);
	if (self->F_currentEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentEntry)->clazz)->markFunction)((jobject) self->F_currentEntry, mark, depth + 1);
	if (self->F_prevEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevEntry)->clazz)->markFunction)((jobject) self->F_prevEntry, mark, depth + 1);
	if (self->F_associatedMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedMap)->clazz)->markFunction)((jobject) self->F_associatedMap, mark, depth + 1);
}

void clinit_java_util_HashMap$AbstractMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_HashMap$AbstractMapIterator_java_util_HashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap$AbstractMapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap$AbstractMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(79);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(88);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap = (jref) (frame[1].o);
	LINE_NUMBER(89);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_HashMap *) NULL_CHECK((frame[1].o)))->F_modCount);
	LINE_NUMBER(90);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry = (jref) (jobject(nullptr));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap$AbstractMapIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_position))) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_position) + (jint(1)));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_HashMap$AbstractMapIterator_checkConcurrentMod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap$AbstractMapIterator:checkConcurrentMod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	if (temp0 == ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(109);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_HashMap$AbstractMapIterator_makeNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap$AbstractMapIterator:makeNext", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	((func_java_util_HashMap$AbstractMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap$AbstractMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(116);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[1].o))->F_elementData;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[2].o))->F_position;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[2].o))->F_position = (temp0 + (jint(1)));
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_currentEntry = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_futureEntry = (jref) sp[1].o;
	LINE_NUMBER(121);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_prevEntry = (jref) (jobject(nullptr));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_prevEntry = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_currentEntry = (jref) sp[1].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_futureEntry = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_HashMap$AbstractMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap$AbstractMapIterator:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	((func_java_util_HashMap$AbstractMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap$AbstractMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(134);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_prevEntry;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	jint temp0 = (jint)((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_origKeyHash;
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	frame[1].i = (temp0 & ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK(sp[1].o))->F_elementData;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(139);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_prevEntry;
	sp[1].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(142);
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry = (jref) (jobject(nullptr));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_util_HashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_HashMap$AbstractMapIterator[] {
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
	(void *) M_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean,
	(void *) M_java_util_HashMap$AbstractMapIterator_checkConcurrentMod,
	(void *) M_java_util_HashMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_HashMap$AbstractMapIterator_remove,
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
	{ "checkConcurrentMod", "()V" },
	{ "makeNext", "()V" },
	{ "remove", "()V" },
};

static FieldMetadata fields[] {
	{ "position", &class_int, offsetof(java_util_HashMap$AbstractMapIterator, F_position), "I", 2 },
	{ "expectedModCount", &class_int, offsetof(java_util_HashMap$AbstractMapIterator, F_expectedModCount), "I", 0 },
	{ "futureEntry", &class_java_util_HashMap$Entry, offsetof(java_util_HashMap$AbstractMapIterator, F_futureEntry), "Ljava/util/HashMap$Entry;", 0 },
	{ "currentEntry", &class_java_util_HashMap$Entry, offsetof(java_util_HashMap$AbstractMapIterator, F_currentEntry), "Ljava/util/HashMap$Entry;", 0 },
	{ "prevEntry", &class_java_util_HashMap$Entry, offsetof(java_util_HashMap$AbstractMapIterator, F_prevEntry), "Ljava/util/HashMap$Entry;", 0 },
	{ "associatedMap", &class_java_util_HashMap, offsetof(java_util_HashMap$AbstractMapIterator, F_associatedMap), "Ljava/util/HashMap;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_HashMap$AbstractMapIterator_java_util_HashMap, 0, "(Ljava/util/HashMap;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean, VTABLE_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean, "()Z", 1 },
	{ "checkConcurrentMod", (intptr_t) M_java_util_HashMap$AbstractMapIterator_checkConcurrentMod, VTABLE_java_util_HashMap$AbstractMapIterator_checkConcurrentMod, "()V", 16 },
	{ "makeNext", (intptr_t) M_java_util_HashMap$AbstractMapIterator_makeNext, VTABLE_java_util_HashMap$AbstractMapIterator_makeNext, "()V", 16 },
	{ "remove", (intptr_t) M_java_util_HashMap$AbstractMapIterator_remove, VTABLE_java_util_HashMap$AbstractMapIterator_remove, "()V", 17 },
};

Class class_java_util_HashMap$AbstractMapIterator{
		.nativeName = (intptr_t) "java/util/HashMap$AbstractMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_HashMap$AbstractMapIterator),
		.classVtable = (intptr_t) vtable_java_util_HashMap$AbstractMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_HashMap$AbstractMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_HashMap$AbstractMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_HashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_HashMap$AbstractMapIterator = registerClass(&class_java_util_HashMap$AbstractMapIterator);

}

