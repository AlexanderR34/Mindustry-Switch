#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/HashMap_Entry.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntry.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/HashMap.h"
#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/LinkedHashMap.h"
#include "java/lang/IllegalStateException.h"

extern "C" {


void mark_java_util_LinkedHashMap$AbstractMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_LinkedHashMap$AbstractMapIterator *) object;
	if (self->F_futureEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_futureEntry)->clazz)->markFunction)((jobject) self->F_futureEntry, mark, depth + 1);
	if (self->F_currentEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentEntry)->clazz)->markFunction)((jobject) self->F_currentEntry, mark, depth + 1);
	if (self->F_associatedMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedMap)->clazz)->markFunction)((jobject) self->F_associatedMap, mark, depth + 1);
}

void clinit_java_util_LinkedHashMap$AbstractMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_LinkedHashMap$AbstractMapIterator_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$AbstractMapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$AbstractMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(147);
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_HashMap *) NULL_CHECK((frame[1].o)))->F_modCount);
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_LinkedHashMap_access$000_java_util_LinkedHashMap_R_java_util_LinkedHashMap$LinkedHashMapEntry(ctx, (frame[1].o));
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_futureEntry = (jref) sp[1].o;
	LINE_NUMBER(149);
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap = (jref) (frame[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$AbstractMapIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
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

void M_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$AbstractMapIterator:checkConcurrentMod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	if (temp0 == ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(158);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_LinkedHashMap$AbstractMapIterator_makeNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$AbstractMapIterator:makeNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	((func_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(165);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_currentEntry = (jref) sp[1].o;
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_futureEntry;
	sp[1].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[1].o))->F_chainForward;
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_futureEntry = (jref) sp[1].o;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedHashMap$AbstractMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$AbstractMapIterator:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	((func_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod])(ctx, (frame[0].o));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(174);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	sp[1].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	((func_java_util_LinkedHashMap_removeEntry_java_util_HashMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_removeEntry_java_util_HashMap$Entry])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	frame[1].o = sp[0].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainBackward;
	frame[2].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward;
	frame[3].o = sp[0].o;
	LINE_NUMBER(180);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_associatedMap;
	frame[4].o = sp[0].o;
	LINE_NUMBER(181);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(182);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward = (jref) (frame[3].o);
	LINE_NUMBER(183);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(184);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainBackward = (jref) (frame[2].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_java_util_LinkedHashMap_access$102_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(ctx, (frame[4].o), (frame[2].o));
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_java_util_LinkedHashMap_access$002_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(190);
	if ((frame[3].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(191);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainBackward = (jref) (jobject(nullptr));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_java_util_LinkedHashMap_access$102_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(ctx, (frame[4].o), (jobject(nullptr)));
	}
label_14:;
	{
	LINE_NUMBER(196);
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry = (jref) (jobject(nullptr));
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap$AbstractMapIterator[] {
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
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_remove,
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
	{ "expectedModCount", &class_int, offsetof(java_util_LinkedHashMap$AbstractMapIterator, F_expectedModCount), "I", 0 },
	{ "futureEntry", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap$AbstractMapIterator, F_futureEntry), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 0 },
	{ "currentEntry", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap$AbstractMapIterator, F_currentEntry), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 0 },
	{ "associatedMap", &class_java_util_LinkedHashMap, offsetof(java_util_LinkedHashMap$AbstractMapIterator, F_associatedMap), "Ljava/util/LinkedHashMap;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$AbstractMapIterator_java_util_LinkedHashMap, 0, "(Ljava/util/LinkedHashMap;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean, VTABLE_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean, "()Z", 1 },
	{ "checkConcurrentMod", (intptr_t) M_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod, VTABLE_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod, "()V", 16 },
	{ "makeNext", (intptr_t) M_java_util_LinkedHashMap$AbstractMapIterator_makeNext, VTABLE_java_util_LinkedHashMap$AbstractMapIterator_makeNext, "()V", 16 },
	{ "remove", (intptr_t) M_java_util_LinkedHashMap$AbstractMapIterator_remove, VTABLE_java_util_LinkedHashMap$AbstractMapIterator_remove, "()V", 1 },
};

Class class_java_util_LinkedHashMap$AbstractMapIterator{
		.nativeName = (intptr_t) "java/util/LinkedHashMap$AbstractMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_LinkedHashMap$AbstractMapIterator),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap$AbstractMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap$AbstractMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap$AbstractMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap$AbstractMapIterator = registerClass(&class_java_util_LinkedHashMap$AbstractMapIterator);

}

