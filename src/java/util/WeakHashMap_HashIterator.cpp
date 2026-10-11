#include "java/util/WeakHashMap_HashIterator.h"
#include "java/util/WeakHashMap_HashIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/ref/WeakReference.h"

extern "C" {


void mark_java_util_WeakHashMap$HashIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_WeakHashMap$HashIterator *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
	if (self->F_lastReturned)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastReturned)->clazz)->markFunction)((jobject) self->F_lastReturned, mark, depth + 1);
	if (self->F_nextKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextKey)->clazz)->markFunction)((jobject) self->F_nextKey, mark, depth + 1);
	if (self->F_currentKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentKey)->clazz)->markFunction)((jobject) self->F_currentKey, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_WeakHashMap$HashIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_WeakHashMap$HashIterator_java_util_WeakHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$HashIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$HashIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(737);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(738);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_WeakHashMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_WeakHashMap_isEmpty_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[1].o)))->F_table;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_index = sp[1].i;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap$HashIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$HashIterator:hasNext", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_table;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_nextKey;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	frame[2].o = sp[0].o;
	LINE_NUMBER(746);
	frame[3].i = ((jint)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_index);
	}
label_5:;
	{
	LINE_NUMBER(747);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_6;
	{
	LINE_NUMBER(748);
	sp[0].o = frame[1].o;
	INST_IINC(3, -1);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(749);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_entry = (jref) (frame[2].o);
	LINE_NUMBER(750);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	LINE_NUMBER(751);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(752);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_currentKey = (jref) (jobject(nullptr));
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(755);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[2].o));
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_nextKey = (jref) sp[1].o;
	LINE_NUMBER(756);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_nextKey;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(757);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	}
label_14:;
	LINE_NUMBER(758);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$HashIterator_nextEntry_R_java_util_WeakHashMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$HashIterator:nextEntry", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) == ((jint)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount)) goto label_1;
	}
	{
	LINE_NUMBER(765);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_nextKey;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_WeakHashMap$HashIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$HashIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(767);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(769);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_lastReturned = (jref) sp[1].o;
	LINE_NUMBER(770);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(771);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_nextKey;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_currentKey = (jref) sp[1].o;
	LINE_NUMBER(772);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_nextKey = (jref) (jobject(nullptr));
	LINE_NUMBER(773);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastReturned;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_WeakHashMap$HashIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$HashIterator:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastReturned;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(778);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[0].o))->F_modCount) == ((jint)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount)) goto label_3;
	}
	{
	LINE_NUMBER(780);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_currentKey;
	sp[0].o = (jobject)((func_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_WeakHashMap *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(784);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastReturned = (jref) (jobject(nullptr));
	LINE_NUMBER(785);
	((java_util_WeakHashMap$HashIterator *) NULL_CHECK((frame[0].o)))->F_currentKey = (jref) (jobject(nullptr));
	LINE_NUMBER(786);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$HashIterator[] {
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
	(void *) M_java_util_WeakHashMap$HashIterator_hasNext_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_WeakHashMap$HashIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_WeakHashMap$HashIterator_nextEntry_R_java_util_WeakHashMap$Entry,
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
	{ "nextEntry", "()Ljava/util/WeakHashMap$Entry;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(java_util_WeakHashMap$HashIterator, F_index), "I", 2 },
	{ "entry", &class_java_util_WeakHashMap$Entry, offsetof(java_util_WeakHashMap$HashIterator, F_entry), "Ljava/util/WeakHashMap$Entry;", 2 },
	{ "lastReturned", &class_java_util_WeakHashMap$Entry, offsetof(java_util_WeakHashMap$HashIterator, F_lastReturned), "Ljava/util/WeakHashMap$Entry;", 2 },
	{ "expectedModCount", &class_int, offsetof(java_util_WeakHashMap$HashIterator, F_expectedModCount), "I", 2 },
	{ "nextKey", &class_java_lang_Object, offsetof(java_util_WeakHashMap$HashIterator, F_nextKey), "Ljava/lang/Object;", 2 },
	{ "currentKey", &class_java_lang_Object, offsetof(java_util_WeakHashMap$HashIterator, F_currentKey), "Ljava/lang/Object;", 2 },
	{ "this$0", &class_java_util_WeakHashMap, offsetof(java_util_WeakHashMap$HashIterator, F_this$0), "Ljava/util/WeakHashMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$HashIterator_java_util_WeakHashMap, 0, "(Ljava/util/WeakHashMap;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_WeakHashMap$HashIterator_hasNext_R_boolean, VTABLE_java_util_WeakHashMap$HashIterator_hasNext_R_boolean, "()Z", 1 },
	{ "nextEntry", (intptr_t) M_java_util_WeakHashMap$HashIterator_nextEntry_R_java_util_WeakHashMap$Entry, VTABLE_java_util_WeakHashMap$HashIterator_nextEntry_R_java_util_WeakHashMap$Entry, "()Ljava/util/WeakHashMap$Entry;", 4 },
	{ "remove", (intptr_t) M_java_util_WeakHashMap$HashIterator_remove, VTABLE_java_util_WeakHashMap$HashIterator_remove, "()V", 1 },
};

Class class_java_util_WeakHashMap$HashIterator{
		.nativeName = (intptr_t) "java/util/WeakHashMap$HashIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_WeakHashMap$HashIterator),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$HashIterator,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$HashIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$HashIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$HashIterator = registerClass(&class_java_util_WeakHashMap$HashIterator);

}

