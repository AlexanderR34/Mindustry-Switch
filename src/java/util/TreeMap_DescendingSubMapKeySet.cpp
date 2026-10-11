#include "java/util/TreeMap_DescendingSubMapKeySet.h"
#include "java/util/TreeMap_DescendingSubMapEntryIterator.h"
#include "java/util/Iterator.h"
#include "java/util/SortedSet.h"
#include "java/util/AbstractSet.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/lang/Iterable.h"
#include "java/util/TreeMap_DescendingSubMapKeySet.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/TreeMap_AscendingSubMapKeySet.h"
#include "java/util/Comparator.h"
#include "java/util/TreeMap_DescendingSubMapKeyIterator.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_AscendingSubMapKeyIterator.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeMap$DescendingSubMapKeySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$DescendingSubMapKeySet *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_java_util_TreeMap$DescendingSubMapKeySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2065);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(2066);
	((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(2067);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2071);
	clinit_java_util_TreeMap$DescendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeyIterator);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:descendingIterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2075);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2076);
	clinit_java_util_TreeMap$AscendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeyIterator);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_lo;
	sp[5].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2080);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2081);
	clinit_java_util_TreeMap$AscendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeyIterator);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2085);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2086);
	clinit_java_util_TreeMap$AscendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeyIterator);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_lo;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2090);
	clinit_java_util_TreeMap$AscendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeyIterator);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[1].o, sp[2].o);
	init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$DescendingSubMapKeySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2096);
	frame[1].i = (jint(0));
	LINE_NUMBER(2097);
	clinit_java_util_TreeMap$DescendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2098);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2099);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(2100);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2102);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:descendingSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2106);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2107);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_lo;
	sp[5].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2111);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2112);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_hiInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2116);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2117);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_lo;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_loInclusive));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2121);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[1].o, sp[2].o);
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:ceiling", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2126);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2127);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2129);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(2130);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(2133);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2134);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2135);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[2].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(2136);
	frame[3].o = (frame[4].o);
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(2138);
	frame[3].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(2141);
	if ((frame[3].o) != nullptr) goto label_14;
	}
	INST_ACONST_NULL();
	goto label_15;
label_14:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((java_util_MapEntry *) NULL_CHECK(sp[-1].o))->F_key;
label_15:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:floor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2145);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2146);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(2147);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(2150);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2151);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	LINE_NUMBER(2152);
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2154);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2155);
	frame[2].o = (frame[4].o);
	goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(2157);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2160);
	if ((frame[2].o) != nullptr) goto label_16;
	}
	INST_ACONST_NULL();
	goto label_17;
label_16:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((java_util_MapEntry *) NULL_CHECK(sp[-1].o))->F_key;
label_17:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:headSet", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2164);
	((func_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2165);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2166);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_loInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2170);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:higher", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2177);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2178);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2179);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(2180);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(2183);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2184);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2185);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[2].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(2186);
	frame[3].o = (frame[4].o);
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(2188);
	frame[3].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(2191);
	if ((frame[3].o) != nullptr) goto label_14;
	}
	INST_ACONST_NULL();
	goto label_15;
label_14:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((java_util_MapEntry *) NULL_CHECK(sp[-1].o))->F_key;
label_15:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:lower", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2195);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2196);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(2197);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(2200);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2201);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	LINE_NUMBER(2202);
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2203);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2204);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2205);
	frame[2].o = (frame[4].o);
	goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(2207);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2210);
	if ((frame[2].o) != nullptr) goto label_16;
	}
	INST_ACONST_NULL();
	goto label_17;
label_16:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((java_util_MapEntry *) NULL_CHECK(sp[-1].o))->F_key;
label_17:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:pollFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2214);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2215);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2216);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2218);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2219);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:pollLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2223);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2224);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2228);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:subSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2232);
	((func_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2233);
	((func_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(2234);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	if (temp0 <= 0) goto label_4;
	}
	goto label_5;
label_3:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(2235);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	if (temp0 <= 0) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2236);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2238);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[3].o), (frame[4].i));
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:tailSet", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2243);
	((func_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2245);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_hi;
	sp[5].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_hiInclusive));
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2249);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:checkInRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2255);
	frame[3].i = (jint(1));
	LINE_NUMBER(2256);
	frame[4].i = (jint(0));
	LINE_NUMBER(2257);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2258);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2259);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2260);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(2261);
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
	LINE_NUMBER(2263);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2264);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(2265);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2266);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(2270);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(2271);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	LINE_NUMBER(2273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2276);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2280);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:headSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2284);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2288);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:subSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2292);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapKeySet:tailSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2296);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$DescendingSubMapKeySet[] {
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
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_iterator_R_java_util_Iterator,
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
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_first_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_last_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_pollFirst_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_pollLast_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_descendingSet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean,
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
	{ "checkInRange", "(Ljava/lang/Object;Z)V" },
};

static jclass interfaces[] { &class_java_util_NavigableSet, };

static FieldMetadata fields[] {
	{ "map", &class_java_util_TreeMap$NavigableSubMap, offsetof(java_util_TreeMap$DescendingSubMapKeySet, F_map), "Ljava/util/TreeMap$NavigableSubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "descendingIterator", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_descendingIterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "size", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_size_R_int, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_size_R_int, "()I", 1 },
	{ "descendingSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_descendingSet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "floor", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "higher", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "lower", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_pollFirst_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_pollLast_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "checkInRange", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_checkInRange_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 0 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "first", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_first_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "last", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_last_R_java_lang_Object, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$DescendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
};

Class class_java_util_TreeMap$DescendingSubMapKeySet{
		.nativeName = (intptr_t) "java/util/TreeMap$DescendingSubMapKeySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_TreeMap$DescendingSubMapKeySet),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$DescendingSubMapKeySet,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$DescendingSubMapKeySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$DescendingSubMapKeySet,
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
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$DescendingSubMapKeySet = registerClass(&class_java_util_TreeMap$DescendingSubMapKeySet);

}

