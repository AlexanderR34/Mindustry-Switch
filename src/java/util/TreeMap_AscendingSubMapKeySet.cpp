#include "java/util/TreeMap_AscendingSubMapKeySet.h"
#include "java/util/Iterator.h"
#include "java/util/SortedSet.h"
#include "java/util/AbstractSet.h"
#include "java/util/NavigableSet.h"
#include "java/util/TreeMap_AscendingSubMapEntryIterator.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
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


void mark_java_util_TreeMap$AscendingSubMapKeySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$AscendingSubMapKeySet *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_java_util_TreeMap$AscendingSubMapKeySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1869);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(1870);
	((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(1871);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1875);
	clinit_java_util_TreeMap$AscendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeyIterator);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:descendingIterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1879);
	clinit_java_util_TreeMap$DescendingSubMapKeyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeyIterator);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap])(ctx, sp[1].o);
	init_java_util_TreeMap$DescendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$AscendingSubMapKeySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1884);
	frame[1].i = (jint(0));
	LINE_NUMBER(1885);
	clinit_java_util_TreeMap$AscendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1886);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(1888);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1890);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:ceiling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1894);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1200_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1895);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1898);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:descendingSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1903);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap])(ctx, sp[1].o);
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:floor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1907);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1200_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1908);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1909);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1911);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:headSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1916);
	frame[3].i = (jint(1));
	LINE_NUMBER(1918);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1919);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1920);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1921);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_8;
label_7:;
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_9;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(1922);
	if ((frame[4].i) >= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_10;
label_11:;
	INST_ICONST(0);
label_10:;
	INST_ISTORE(3);
label_2:;
	{
	LINE_NUMBER(1924);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1925);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1927);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_18;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_19;
label_18:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_17;
	goto label_20;
label_19:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_17;
label_20:;
	INST_ICONST(1);
	goto label_21;
label_17:;
	INST_ICONST(0);
label_21:;
	INST_ISTORE(3);
label_12:;
	{
	LINE_NUMBER(1931);
	if ((frame[3].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1932);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_24;
	}
	{
	LINE_NUMBER(1933);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	sp[3].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_loInclusive;
	sp[3].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1937);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, (frame[1].o), (frame[2].i));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(1941);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:higher", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1946);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1947);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1949);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:lower", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1954);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1955);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1956);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1958);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:pollFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1963);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1964);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1965);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1967);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1968);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:pollLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1972);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1973);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1974);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1976);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1977);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:subSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1981);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	LINE_NUMBER(1982);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_1;
	}
	goto label_4;
label_2:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	LINE_NUMBER(1983);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_4;
	}
label_1:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_7;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_8;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_7;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(1984);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_6;
	}
	goto label_4;
label_7:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	LINE_NUMBER(1986);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1987);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1989);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1990);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(1992);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[3].o), (frame[4].i));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:tailSet", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1997);
	frame[3].i = (jint(1));
	LINE_NUMBER(1999);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2000);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2001);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2002);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_8;
label_7:;
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_9;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(2003);
	if ((frame[4].i) >= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_10;
label_11:;
	INST_ICONST(0);
label_10:;
	INST_ISTORE(3);
label_2:;
	{
	LINE_NUMBER(2005);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2006);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(2007);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2008);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_18;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_19;
label_18:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_17;
	goto label_20;
label_19:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_17;
label_20:;
	INST_ICONST(1);
	goto label_21;
label_17:;
	INST_ICONST(0);
label_21:;
	INST_ISTORE(3);
label_12:;
	{
	LINE_NUMBER(2013);
	if ((frame[3].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(2014);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_24;
	}
	{
	LINE_NUMBER(2015);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	sp[4].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[4].o))->F_hi;
	sp[5].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[5].o))->F_hiInclusive));
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(2019);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[3].o))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(2024);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2028);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2032);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:headSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2036);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2040);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:subSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2044);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:tailSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2048);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$AscendingSubMapKeySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2053);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$AscendingSubMapKeySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapKeySet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2058);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapKeySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
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

void *vtable_java_util_TreeMap$AscendingSubMapKeySet[] {
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
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_clear,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_first_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_last_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_pollFirst_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_pollLast_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_descendingSet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet,
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
	{ "map", &class_java_util_TreeMap$NavigableSubMap, offsetof(java_util_TreeMap$AscendingSubMapKeySet, F_map), "Ljava/util/TreeMap$NavigableSubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "descendingIterator", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_descendingIterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "size", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_size_R_int, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_size_R_int, "()I", 1 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "descendingSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_descendingSet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "floor", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "higher", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "lower", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_pollFirst_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_pollLast_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "first", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_first_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "last", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_last_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "contains", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_contains_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_TreeMap$AscendingSubMapKeySet_remove_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$AscendingSubMapKeySet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_java_util_TreeMap$AscendingSubMapKeySet{
		.nativeName = (intptr_t) "java/util/TreeMap$AscendingSubMapKeySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_TreeMap$AscendingSubMapKeySet),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AscendingSubMapKeySet,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AscendingSubMapKeySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AscendingSubMapKeySet,
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
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AscendingSubMapKeySet = registerClass(&class_java_util_TreeMap$AscendingSubMapKeySet);

}

