#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Comparable.h"
#include "java/util/NavigableSet.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/AbstractMap_SimpleImmutableEntry.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/util/Map.h"
#include "java/util/TreeMap_DescendingSubMapKeySet.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/util/TreeMap_DescendingSubMap_DescendingSubMapValuesCollection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/SortedMap.h"
#include "java/util/MapEntry.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_DescendingSubMapEntrySet.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_TreeMap$DescendingSubMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$NavigableSubMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$DescendingSubMap *) object;
	if (self->F_reverseComparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reverseComparator)->clazz)->markFunction)((jobject) self->F_reverseComparator, mark, depth + 1);
}

void clinit_java_util_TreeMap$DescendingSubMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$NavigableSubMap(ctx);
}

void init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(3295);
	init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (frame[5].i));
	LINE_NUMBER(3291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_comparator;
	sp[1].o = (jobject)SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o);
	((java_util_TreeMap$DescendingSubMap *) NULL_CHECK(sp[0].o))->F_reverseComparator = (jref) sp[1].o;
	LINE_NUMBER(3296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(3299);
	init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(3291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_comparator;
	sp[1].o = (jobject)SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o);
	((java_util_TreeMap$DescendingSubMap *) NULL_CHECK(sp[0].o))->F_reverseComparator = (jref) sp[1].o;
	LINE_NUMBER(3300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3303);
	init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(3291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_comparator;
	sp[1].o = (jobject)SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o);
	((java_util_TreeMap$DescendingSubMap *) NULL_CHECK(sp[0].o))->F_reverseComparator = (jref) sp[1].o;
	LINE_NUMBER(3304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3307);
	init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_comparator;
	sp[1].o = (jobject)SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o);
	((java_util_TreeMap$DescendingSubMap *) NULL_CHECK(sp[0].o))->F_reverseComparator = (jref) sp[1].o;
	LINE_NUMBER(3308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3312);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap *) NULL_CHECK((frame[0].o)))->F_reverseComparator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:subMap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3318);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(3319);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3321);
	frame[3].i = (jint(-1));
	LINE_NUMBER(3322);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3323);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(3324);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	INST_ISTORE(3);
label_4:;
	{
	LINE_NUMBER(3326);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_9;
	goto label_10;
label_8:;
	INST_ILOAD(3);
	if ((--sp)->i > 0) goto label_9;
label_10:;
	{
	LINE_NUMBER(3327);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	if (temp0 <= 0) goto label_12;
	}
	goto label_13;
label_11:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(3328);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	if (temp0 <= 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(3329);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(3331);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3334);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_firstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:firstEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3340);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3341);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(3343);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(3344);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(3346);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(3347);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(3349);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_lastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:lastEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3355);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3356);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(3358);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(3359);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(3361);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(3362);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(3364);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_pollFirstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:pollFirstEntry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3369);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(3370);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3371);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(3372);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(1);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(3374);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(3376);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_7;
	}
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(3377);
	frame[1].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(3379);
	if ((frame[1].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_10;
	}
	goto label_12;
label_11:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(3380);
	frame[1].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(3382);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(3383);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3384);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_15;
	}
	{
	LINE_NUMBER(3385);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(3387);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_pollLastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:pollLastEntry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3392);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(3393);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3394);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(1);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(3396);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(3398);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_7;
	}
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(3399);
	frame[1].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(3401);
	if ((frame[1].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_10;
	}
	goto label_12;
label_11:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(3402);
	frame[1].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(3404);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(3405);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3406);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_15;
	}
	{
	LINE_NUMBER(3407);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(3409);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:higherEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3414);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3415);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(3416);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(3418);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(3419);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(3421);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:lowerEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3426);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3427);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(3428);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(3430);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(3431);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(3433);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:ceilingEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3438);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(3439);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3440);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(3441);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[2].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_5;
	}
	{
	LINE_NUMBER(3442);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_8:;
	INST_ASTORE(3);
	goto label_9;
label_5:;
	{
	LINE_NUMBER(3444);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3446);
	if ((jobject(nullptr)) == (frame[3].o)) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(3447);
	frame[3].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(3449);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:floorEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3454);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(3455);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3456);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(3457);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[2].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_5;
	}
	{
	LINE_NUMBER(3458);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_8:;
	INST_ASTORE(3);
	goto label_9;
label_5:;
	{
	LINE_NUMBER(3460);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3462);
	if ((jobject(nullptr)) == (frame[3].o)) goto label_10;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(3463);
	frame[3].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(3465);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3470);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_navigableKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:navigableKeySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3476);
	clinit_java_util_TreeMap$DescendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapKeySet);
	init_java_util_TreeMap$DescendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_descendingMap_R_java_util_NavigableMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:descendingMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3480);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3481);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3484);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3485);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3487);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3488);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3491);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:keyCompare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3495);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMap *) NULL_CHECK((frame[0].o)))->F_reverseComparator;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap *) NULL_CHECK((frame[0].o)))->F_reverseComparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(3496);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(3495);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:subMap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(3503);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(3504);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3506);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_5;
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_4;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(3507);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_5:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_3;
	}
	goto label_7;
label_4:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	LINE_NUMBER(3508);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_7;
	}
label_3:;
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_9;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_10;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_10;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	LINE_NUMBER(3509);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	goto label_7;
label_10:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	LINE_NUMBER(3511);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(3512);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(3514);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(3515);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(3517);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:headMap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3524);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(3525);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(3526);
	frame[4].i = (jint(1));
	LINE_NUMBER(3527);
	if ((jobject(nullptr)) == (frame[3].o)) goto label_4;
	}
	{
	LINE_NUMBER(3529);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_6;
	}
	{
	LINE_NUMBER(3530);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(3532);
	sp[0].o = frame[3].o;
	LINE_NUMBER(3531);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	LINE_NUMBER(3532);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3533);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_13;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_14;
label_13:;
	INST_ILOAD(5);
	if ((--sp)->i > 0) goto label_15;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
	goto label_16;
label_14:;
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_17;
	INST_ICONST(1);
	goto label_16;
label_17:;
	INST_ICONST(0);
label_16:;
	INST_ISTORE(4);
label_6:;
	{
	LINE_NUMBER(3535);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3536);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(3538);
	sp[0].o = frame[3].o;
	LINE_NUMBER(3537);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	LINE_NUMBER(3538);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3539);
	if ((frame[4].i) == 0) goto label_24;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_25;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_26;
label_25:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_24;
	goto label_27;
label_26:;
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_24;
label_27:;
	INST_ICONST(1);
	goto label_28;
label_24:;
	INST_ICONST(0);
label_28:;
	INST_ISTORE(4);
label_4:;
	{
	LINE_NUMBER(3543);
	if ((frame[4].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(3544);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_31;
	}
	{
	LINE_NUMBER(3545);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(3548);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(3550);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:tailMap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3556);
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(3557);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(3558);
	frame[4].i = (jint(1));
	LINE_NUMBER(3560);
	if ((jobject(nullptr)) == (frame[3].o)) goto label_4;
	}
	{
	LINE_NUMBER(3561);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_6;
	}
	{
	LINE_NUMBER(3562);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(3564);
	sp[0].o = frame[3].o;
	LINE_NUMBER(3563);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	LINE_NUMBER(3564);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3565);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_13;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_14;
label_13:;
	INST_ILOAD(5);
	if ((--sp)->i > 0) goto label_15;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
	goto label_16;
label_14:;
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_17;
	INST_ICONST(1);
	goto label_16;
label_17:;
	INST_ICONST(0);
label_16:;
	INST_ISTORE(4);
label_6:;
	{
	LINE_NUMBER(3567);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3568);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(3570);
	sp[0].o = frame[3].o;
	LINE_NUMBER(3569);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	LINE_NUMBER(3570);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3571);
	if ((frame[4].i) == 0) goto label_24;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_25;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_26;
label_25:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_24;
	goto label_27;
label_26:;
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_24;
label_27:;
	INST_ICONST(1);
	goto label_28;
label_24:;
	INST_ICONST(0);
label_28:;
	INST_ISTORE(4);
label_4:;
	{
	LINE_NUMBER(3575);
	if ((frame[4].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(3576);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_31;
	}
	{
	LINE_NUMBER(3577);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(3579);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(3582);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3586);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3587);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) != 0) goto label_3;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(3588);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection);
	init_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_java_util_TreeMap$DescendingSubMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(3590);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_TreeMap$NavigableSubMap_values_R_java_util_Collection(ctx, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(3592);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap:descendingSubMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3663);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3664);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3667);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3668);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3670);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3671);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3674);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$DescendingSubMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractMap_clear,
	(void *) M_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMap_entrySet_R_java_util_Set,
	(void *) M_java_util_TreeMap$NavigableSubMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_isEmpty_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set,
	(void *) M_java_util_TreeMap$NavigableSubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_size_R_int,
	(void *) M_java_util_TreeMap$DescendingSubMap_values_R_java_util_Collection,
	(void *) M_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$DescendingSubMap_firstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMap_lastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMap_pollFirstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMap_pollLastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_navigableKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMap_descendingMap_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$DescendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$DescendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object,
	(void *) M_java_util_TreeMap$DescendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "comparator", "()Ljava/util/Comparator;" },
	{ "firstKey", "()Ljava/lang/Object;" },
	{ "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "lastKey", "()Ljava/lang/Object;" },
	{ "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "firstEntry", "()Ljava/util/Map$Entry;" },
	{ "lastEntry", "()Ljava/util/Map$Entry;" },
	{ "pollFirstEntry", "()Ljava/util/Map$Entry;" },
	{ "pollLastEntry", "()Ljava/util/Map$Entry;" },
	{ "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "navigableKeySet", "()Ljava/util/NavigableSet;" },
	{ "descendingMap", "()Ljava/util/NavigableMap;" },
	{ "descendingKeySet", "()Ljava/util/NavigableSet;" },
	{ "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "findNode", "(Ljava/lang/Object;)Ljava/util/TreeMap$Node;" },
	{ "checkNull", "(Ljava/lang/Object;)V" },
	{ "descendingSubMap", "()Ljava/util/TreeMap$NavigableSubMap;" },
	{ "checkUpperBound", "(Ljava/lang/Object;)Z" },
	{ "checkLowerBound", "(Ljava/lang/Object;)Z" },
	{ "isInRange", "(Ljava/lang/Object;)Z" },
	{ "theSmallestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "theBiggestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "smallerOrEqualEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findFloorEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "cmp", "(Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "findFloorEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "createEntry", "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;" },
	{ "biggerOrEqualEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findStartNode", "()Ljava/util/TreeMap$Entry;" },
	{ "findEndNode", "()Ljava/util/TreeMap$Entry;" },
	{ "findCeilingEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findLowerEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findCeilingEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "smallerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findLowerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "biggerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findHigherEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findHigherEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "keyCompare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass innerClasses[] {
	&class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection,
};

static FieldMetadata fields[] {
	{ "reverseComparator", &class_java_util_Comparator, offsetof(java_util_TreeMap$DescendingSubMap, F_reverseComparator), "Ljava/util/Comparator;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$DescendingSubMap_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "subMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "firstEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_firstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_firstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "lastEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_lastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_lastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollFirstEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_pollFirstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_pollFirstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollLastEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_pollLastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_pollLastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "higherEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "lowerEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "ceilingEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "floorEntry", (intptr_t) M_java_util_TreeMap$DescendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$DescendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "entrySet", (intptr_t) M_java_util_TreeMap$DescendingSubMap_entrySet_R_java_util_Set, VTABLE_java_util_TreeMap$DescendingSubMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "navigableKeySet", (intptr_t) M_java_util_TreeMap$DescendingSubMap_navigableKeySet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$DescendingSubMap_navigableKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "descendingMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_descendingMap_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$DescendingSubMap_descendingMap_R_java_util_NavigableMap, "()Ljava/util/NavigableMap;", 1 },
	{ "keyCompare", (intptr_t) M_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_TreeMap$DescendingSubMap_keyCompare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 0 },
	{ "subMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$DescendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$DescendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$DescendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "values", (intptr_t) M_java_util_TreeMap$DescendingSubMap_values_R_java_util_Collection, VTABLE_java_util_TreeMap$DescendingSubMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "descendingSubMap", (intptr_t) M_java_util_TreeMap$DescendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap, VTABLE_java_util_TreeMap$DescendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap, "()Ljava/util/TreeMap$NavigableSubMap;", 0 },
};

Class class_java_util_TreeMap$DescendingSubMap{
		.nativeName = (intptr_t) "java/util/TreeMap$DescendingSubMap",
		.parentClass = (intptr_t) &class_java_util_TreeMap$NavigableSubMap,
		.size = sizeof(java_util_TreeMap$DescendingSubMap),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$DescendingSubMap,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$DescendingSubMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$DescendingSubMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$DescendingSubMap = registerClass(&class_java_util_TreeMap$DescendingSubMap);

}

