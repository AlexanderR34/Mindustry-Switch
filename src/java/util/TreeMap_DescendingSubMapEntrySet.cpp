#include "java/util/TreeMap_DescendingSubMapEntrySet.h"
#include "java/util/TreeMap_DescendingSubMapEntryIterator.h"
#include "java/util/Iterator.h"
#include "java/util/SortedSet.h"
#include "java/util/AbstractSet.h"
#include "java/util/TreeMap_AscendingSubMapEntrySet.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/lang/Iterable.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Comparator.h"
#include "java/util/MapEntry.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_DescendingSubMapEntrySet.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeMap$DescendingSubMapEntrySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$DescendingSubMapEntrySet *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_java_util_TreeMap$DescendingSubMapEntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1592);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(1593);
	((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(1594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1598);
	clinit_java_util_TreeMap$DescendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$DescendingSubMapEntrySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1603);
	frame[1].i = (jint(0));
	LINE_NUMBER(1604);
	clinit_java_util_TreeMap$DescendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1605);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1606);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(1607);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1609);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:ceiling", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1613);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1614);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$700_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1618);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(1620);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1622);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_12;
	}
	{
	LINE_NUMBER(1623);
	frame[2].o = (frame[4].o);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(1625);
	frame[2].o = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(1628);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:descendingIterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1632);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:descendingSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1636);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1637);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_lo;
	sp[5].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1641);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1642);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_lo;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1646);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1647);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1651);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[1].o, sp[2].o);
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:floor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1656);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1657);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1658);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$700_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1661);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1662);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(1663);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1664);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1665);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_12;
	}
	{
	LINE_NUMBER(1666);
	frame[2].o = (frame[4].o);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(1668);
	frame[2].o = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(1671);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$DescendingSubMapEntrySet_checkInRange_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:checkInRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1675);
	frame[3].i = (jint(1));
	LINE_NUMBER(1676);
	frame[4].i = (jint(0));
	LINE_NUMBER(1677);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1678);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1679);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1680);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_9;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(1681);
	if ((frame[4].i) > 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_10;
label_11:;
	INST_ICONST(0);
label_10:;
	INST_ISTORE(3);
label_3:;
	{
	LINE_NUMBER(1683);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1684);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1685);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1686);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_18;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_18;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_17;
	goto label_19;
label_18:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_17;
label_19:;
	INST_ICONST(1);
	goto label_20;
label_17:;
	INST_ICONST(0);
label_20:;
	INST_ISTORE(3);
label_12:;
	{
	LINE_NUMBER(1690);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(1691);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	LINE_NUMBER(1693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:headSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1697);
	frame[3].i = (jint(1));
	LINE_NUMBER(1698);
	frame[4].i = (jint(0));
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1700);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	LINE_NUMBER(1701);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	LINE_NUMBER(1700);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1701);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1702);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_10;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_11;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
	goto label_12;
label_10:;
	{
	LINE_NUMBER(1703);
	if ((frame[4].i) <= 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_12;
label_13:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1704);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1705);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1708);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1709);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(1710);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1711);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_21;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_21;
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_22;
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
	goto label_23;
label_21:;
	{
	LINE_NUMBER(1712);
	if ((frame[4].i) >= 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_23;
label_24:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1713);
	if ((frame[3].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1714);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(1718);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1719);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_loInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = frame[1].o;
	LINE_NUMBER(1720);
	sp[4].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[4].o))(ctx, sp[4].o);
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, (frame[2].i));
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1719);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(1722);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	sp[3].o = frame[1].o;
	LINE_NUMBER(1723);
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[3].o))(ctx, sp[3].o);
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[2].i));
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1722);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:higher", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1728);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1729);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1730);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$900_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1000_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(1732);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(1733);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1734);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1735);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(1737);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1738);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1739);
	if ((frame[4].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_16;
	}
	{
	LINE_NUMBER(1740);
	frame[2].o = (frame[4].o);
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(1742);
	frame[2].o = (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(1745);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:lower", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1749);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1750);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1751);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1100_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(1753);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(1754);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1755);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(1756);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(1758);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1759);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1760);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_14;
	}
	{
	LINE_NUMBER(1761);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$000_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(1763);
	frame[2].o = (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(1766);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:pollFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1770);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1771);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1772);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1774);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1775);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:pollLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1779);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1780);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1781);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1783);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1784);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:subSet", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1790);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(1791);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1790);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_1:;
	LINE_NUMBER(1792);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1793);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1794);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1793);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_6:;
	LINE_NUMBER(1795);
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1796);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_12;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_12;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[5].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(1798);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_lo;
	LINE_NUMBER(1797);
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_11;
	}
	goto label_15;
label_12:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[5].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(1799);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_lo;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_15;
	}
label_11:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_18;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_18;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[6].o;
	sp[2].o = frame[3].o;
	LINE_NUMBER(1801);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hi;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_17;
	}
	goto label_15;
label_18:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[6].o;
	sp[2].o = frame[3].o;
	LINE_NUMBER(1802);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hi;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1803);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(1805);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_21;
	}
	{
	LINE_NUMBER(1806);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(1809);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	LINE_NUMBER(1810);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = frame[3].o;
	LINE_NUMBER(1811);
	sp[4].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[4].o))(ctx, sp[4].o);
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, (frame[4].i));
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1809);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:tailSet", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1816);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1817);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	LINE_NUMBER(1818);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_hi;
	sp[5].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_hiInclusive));
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1817);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1821);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	LINE_NUMBER(1822);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1821);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1828);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1832);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1833);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1834);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1836);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:headSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1840);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:last", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1844);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1845);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1846);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1848);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:subSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1853);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$DescendingSubMapEntrySet_keyCompare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:keyCompare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1857);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1858);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1857);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:tailSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1862);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:tailSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:headSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:subSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i), (checkCast(ctx, &class_java_util_Map$Entry, (frame[3].o))), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:floor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:lower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:ceiling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:higher", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:pollLast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:pollFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:tailSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:subSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (checkCast(ctx, &class_java_util_Map$Entry, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:headSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapEntrySet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$DescendingSubMapEntrySet[] {
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
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_checkInRange_java_lang_Object_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_keyCompare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet,
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
	{ "ceiling", "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;" },
	{ "floor", "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;" },
	{ "checkInRange", "(Ljava/lang/Object;Z)V" },
	{ "headSet", "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;" },
	{ "higher", "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;" },
	{ "lower", "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;" },
	{ "pollFirst", "()Ljava/util/Map$Entry;" },
	{ "pollLast", "()Ljava/util/Map$Entry;" },
	{ "subSet", "(Ljava/util/Map$Entry;ZLjava/util/Map$Entry;Z)Ljava/util/NavigableSet;" },
	{ "tailSet", "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;" },
	{ "first", "()Ljava/util/Map$Entry;" },
	{ "headSet", "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;" },
	{ "last", "()Ljava/util/Map$Entry;" },
	{ "subSet", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)Ljava/util/SortedSet;" },
	{ "keyCompare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "tailSet", "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;" },
};

static jclass interfaces[] { &class_java_util_NavigableSet, };

static FieldMetadata fields[] {
	{ "map", &class_java_util_TreeMap$NavigableSubMap, offsetof(java_util_TreeMap$DescendingSubMapEntrySet, F_map), "Ljava/util/TreeMap$NavigableSubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "size", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_size_R_int, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_size_R_int, "()I", 1 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "descendingIterator", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_descendingIterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "descendingSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "floor", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "checkInRange", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_checkInRange_java_lang_Object_boolean, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_checkInRange_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 0 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "higher", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "lower", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;ZLjava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "first", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "last", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "keyCompare", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_keyCompare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_keyCompare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 0 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "floor", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "lower", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "higher", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "last", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_last_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "first", (intptr_t) M_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_first_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_TreeMap$DescendingSubMapEntrySet{
		.nativeName = (intptr_t) "java/util/TreeMap$DescendingSubMapEntrySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_TreeMap$DescendingSubMapEntrySet),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$DescendingSubMapEntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$DescendingSubMapEntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$DescendingSubMapEntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$DescendingSubMapEntrySet = registerClass(&class_java_util_TreeMap$DescendingSubMapEntrySet);

}

