#include "java/util/TreeSet.h"
#include "java/util/NavigableMap.h"
#include "java/util/SortedSet.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Boolean.h"
#include "java/lang/Comparable.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeSet.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/util/Comparator.h"
#include "java/util/SortedMap.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeSet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeSet *) object;
	if (self->F_backingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backingMap)->clazz)->markFunction)((jobject) self->F_backingMap, mark, depth + 1);
	if (self->F_descendingSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_descendingSet)->clazz)->markFunction)((jobject) self->F_descendingSet, mark, depth + 1);
}

void clinit_java_util_TreeSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_TreeSet_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap);
	init_java_util_TreeMap(ctx, sp[1].o);
	((java_util_TreeSet *) NULL_CHECK(sp[0].o))->F_backingMap = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeSet_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	init_java_util_TreeSet(ctx, (frame[0].o));
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_java_util_TreeSet_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeSet_addAll_java_util_Collection_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeSet_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap);
	init_java_util_TreeMap_java_util_Comparator(ctx, sp[1].o, (frame[1].o));
	((java_util_TreeSet *) NULL_CHECK(sp[0].o))->F_backingMap = (jref) sp[1].o;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeSet_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_SortedSet_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_comparator_R_java_util_Comparator, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_TreeSet_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_TreeSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[2].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
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

jbool M_java_util_TreeSet_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:addAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	((func_java_util_Map_clear) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:descendingIterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_java_util_TreeSet_descendingSet_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeSet_descendingSet_R_java_util_NavigableSet])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
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

jint M_java_util_TreeSet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_firstKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_firstKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_lastKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_lastKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:pollFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_pollFirstEntry_R_java_util_Map$Entry) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_pollFirstEntry_R_java_util_Map$Entry, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(259);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:pollLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_pollLastEntry_R_java_util_Map$Entry) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_pollLastEntry_R_java_util_Map$Entry, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(270);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:higher", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_higherKey_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_higherKey_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:lower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_lowerKey_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_lowerKey_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:ceiling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_ceilingKey_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_ceilingKey_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:floor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_NavigableMap_floorKey_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_floorKey_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:descendingSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_descendingSet;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_descendingSet;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeSet);
	sp[2].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[2].o = (jobject)((func_java_util_NavigableMap_descendingMap_R_java_util_NavigableMap) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_descendingMap_R_java_util_NavigableMap, sp[2].o))(ctx, sp[2].o);
	init_java_util_TreeSet_java_util_NavigableMap(ctx, sp[1].o, sp[2].o);
	((java_util_TreeSet *) NULL_CHECK(sp[0].o))->F_descendingSet = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:subSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(334);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o))), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(336);
	if ((frame[6].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(337);
	clinit_java_util_TreeSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeSet);
	sp[1].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((func_java_util_NavigableMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	init_java_util_TreeSet_java_util_NavigableMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(340);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:headSet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(353);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(354);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o))), (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(358);
	clinit_java_util_TreeSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeSet);
	sp[1].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((func_java_util_NavigableMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeSet_java_util_NavigableMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:tailSet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(371);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o))), (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(376);
	clinit_java_util_TreeSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeSet);
	sp[1].o = (jobject)((java_util_TreeSet *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = (jobject)((func_java_util_NavigableMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeSet_java_util_NavigableMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:subSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:headSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeSet:tailSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeSet[] {
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
	(void *) M_java_util_TreeSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_TreeSet_add_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeSet_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeSet_clear,
	(void *) M_java_util_TreeSet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeSet_isEmpty_R_boolean,
	(void *) M_java_util_TreeSet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeSet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_TreeSet_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeSet_first_R_java_lang_Object,
	(void *) M_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeSet_last_R_java_lang_Object,
	(void *) M_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeSet_pollFirst_R_java_lang_Object,
	(void *) M_java_util_TreeSet_pollLast_R_java_lang_Object,
	(void *) M_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeSet_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_TreeSet_descendingSet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet,
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
	{ "comparator", "()Ljava/util/Comparator;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "last", "()Ljava/lang/Object;" },
	{ "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "pollFirst", "()Ljava/lang/Object;" },
	{ "pollLast", "()Ljava/lang/Object;" },
	{ "higher", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lower", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "floor", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "descendingIterator", "()Ljava/util/Iterator;" },
	{ "descendingSet", "()Ljava/util/NavigableSet;" },
	{ "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;" },
	{ "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;" },
	{ "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;" },
};

static jclass interfaces[] { &class_java_util_NavigableSet, };

static FieldMetadata fields[] {
	{ "backingMap", &class_java_util_NavigableMap, offsetof(java_util_TreeSet, F_backingMap), "Ljava/util/NavigableMap;", 130 },
	{ "descendingSet", &class_java_util_NavigableSet, offsetof(java_util_TreeSet, F_descendingSet), "Ljava/util/NavigableSet;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeSet_java_util_NavigableMap, 0, "(Ljava/util/NavigableMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeSet_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeSet_java_util_Comparator, 0, "(Ljava/util/Comparator;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeSet_java_util_SortedSet, 0, "(Ljava/util/SortedSet;)V", 1 },
	{ "add", (intptr_t) M_java_util_TreeSet_add_java_lang_Object_R_boolean, VTABLE_java_util_TreeSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_TreeSet_addAll_java_util_Collection_R_boolean, VTABLE_java_util_TreeSet_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_TreeSet_clear, VTABLE_java_util_TreeSet_clear, "()V", 1 },
	{ "comparator", (intptr_t) M_java_util_TreeSet_comparator_R_java_util_Comparator, VTABLE_java_util_TreeSet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "contains", (intptr_t) M_java_util_TreeSet_contains_java_lang_Object_R_boolean, VTABLE_java_util_TreeSet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_TreeSet_isEmpty_R_boolean, VTABLE_java_util_TreeSet_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_TreeSet_iterator_R_java_util_Iterator, VTABLE_java_util_TreeSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "descendingIterator", (intptr_t) M_java_util_TreeSet_descendingIterator_R_java_util_Iterator, VTABLE_java_util_TreeSet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_java_util_TreeSet_remove_java_lang_Object_R_boolean, VTABLE_java_util_TreeSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_TreeSet_size_R_int, VTABLE_java_util_TreeSet_size_R_int, "()I", 1 },
	{ "first", (intptr_t) M_java_util_TreeSet_first_R_java_lang_Object, VTABLE_java_util_TreeSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "last", (intptr_t) M_java_util_TreeSet_last_R_java_lang_Object, VTABLE_java_util_TreeSet_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_TreeSet_pollFirst_R_java_lang_Object, VTABLE_java_util_TreeSet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollLast", (intptr_t) M_java_util_TreeSet_pollLast_R_java_lang_Object, VTABLE_java_util_TreeSet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "higher", (intptr_t) M_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "lower", (intptr_t) M_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "ceiling", (intptr_t) M_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "floor", (intptr_t) M_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "descendingSet", (intptr_t) M_java_util_TreeSet_descendingSet_R_java_util_NavigableSet, VTABLE_java_util_TreeSet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
};

Class class_java_util_TreeSet{
		.nativeName = (intptr_t) "java/util/TreeSet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_TreeSet),
		.classVtable = (intptr_t) vtable_java_util_TreeSet,
		.staticInitializer = (intptr_t) clinit_java_util_TreeSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeSet = registerClass(&class_java_util_TreeSet);

}
