#include "java/util/TreeMap_AscendingSubMapEntrySet.h"
#include "java/util/NavigableMap.h"
#include "java/util/Iterator.h"
#include "java/util/SortedSet.h"
#include "java/util/AbstractSet.h"
#include "java/util/TreeMap_AscendingSubMapEntrySet.h"
#include "java/util/NavigableSet.h"
#include "java/util/TreeMap_AscendingSubMapEntryIterator.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Comparator.h"
#include "java/util/TreeMap_DescendingSubMapEntrySet.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeMap$AscendingSubMapEntrySet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$AscendingSubMapEntrySet *) object;
	if (self->F_startEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_startEntry)->clazz)->markFunction)((jobject) self->F_startEntry, mark, depth + 1);
	if (self->F_lastentry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastentry)->clazz)->markFunction)((jobject) self->F_lastentry, mark, depth + 1);
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_java_util_TreeMap$AscendingSubMapEntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSet(ctx);
}

void init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1327);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(1328);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(1329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1333);
	init_java_util_AbstractSet(ctx, (frame[0].o));
	LINE_NUMBER(1334);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1335);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart = (jint(1));
	LINE_NUMBER(1336);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry = (jref) (frame[2].o);
	LINE_NUMBER(1337);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startInclusive = (frame[3].i);
	}
label_2:;
	{
	LINE_NUMBER(1339);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1340);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd = (jint(1));
	LINE_NUMBER(1341);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry = (jref) (frame[4].o);
	LINE_NUMBER(1342);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_endInclusive = (frame[5].i);
	}
label_6:;
	{
	LINE_NUMBER(1344);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(1345);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(1346);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[3].i;
	sp[3].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	jint temp1 = frame[5].i;
	LINE_NUMBER(1345);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, temp1);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK(sp[0].o))->F_map = (jref) (checkCast(ctx, &class_java_util_TreeMap$NavigableSubMap, sp[1].o));
	LINE_NUMBER(1348);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(1350);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1351);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(1352);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[3].i;
	LINE_NUMBER(1351);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, sp[1].o, sp[2].o, temp0);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK(sp[0].o))->F_map = (jref) (checkCast(ctx, &class_java_util_TreeMap$NavigableSubMap, sp[1].o));
	LINE_NUMBER(1353);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(1355);
	if ((frame[4].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1356);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	LINE_NUMBER(1357);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = frame[5].i;
	LINE_NUMBER(1356);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, sp[1].o, sp[2].o, temp0);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK(sp[0].o))->F_map = (jref) (checkCast(ctx, &class_java_util_TreeMap$NavigableSubMap, sp[1].o));
	LINE_NUMBER(1358);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(1360);
	((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(1361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1365);
	clinit_java_util_TreeMap$AscendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$AscendingSubMapEntrySet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1370);
	frame[1].i = (jint(0));
	LINE_NUMBER(1371);
	clinit_java_util_TreeMap$AscendingSubMapEntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntryIterator);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1372);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(1374);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1376);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:ceiling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1380);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1381);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1382);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1384);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:descendingIterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1389);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap])(ctx, sp[1].o);
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapEntrySet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:descendingSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1393);
	clinit_java_util_TreeMap$DescendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap])(ctx, sp[1].o);
	init_java_util_TreeMap$DescendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:floor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1397);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1398);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1401);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:headSet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1407);
	frame[3].i = (jint(1));
	LINE_NUMBER(1409);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1410);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1411);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1412);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[5].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1413);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(1414);
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
	LINE_NUMBER(1416);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1417);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1418);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[5].o));
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1419);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(1423);
	if ((frame[3].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1424);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(0)), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(1427);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:higher", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1431);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1432);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1434);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(1435);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1437);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(1438);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	LINE_NUMBER(1440);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(1441);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1444);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:lower", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1452);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1453);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1455);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(1456);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(1458);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(1459);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	LINE_NUMBER(1461);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(1462);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(1463);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1465);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[2].o))(ctx, sp[2].o);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(1466);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(1469);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:pollFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1474);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1475);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1477);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1478);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:pollLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1483);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1484);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1486);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:subSet", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1492);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) != 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_4;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[3].o;
	LINE_NUMBER(1495);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_3;
	}
	goto label_6;
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[3].o;
	LINE_NUMBER(1496);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(1497);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1499);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) != 0) goto label_9;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_9;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1500);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_8;
	}
	goto label_11;
label_9:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1501);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(1502);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(1504);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:tailSet", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1508);
	frame[3].i = (jint(1));
	LINE_NUMBER(1510);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1511);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1513);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(1514);
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
	LINE_NUMBER(1516);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[2].o))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1518);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1519);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
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
	LINE_NUMBER(1524);
	if ((frame[3].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1525);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(1527);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1536);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1537);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startInclusive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1538);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1540);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_startEntry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1543);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1544);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1545);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1547);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:headSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:last", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1555);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1556);
	if (((jint)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_endInclusive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1557);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_lastentry;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1562);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1563);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1564);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1566);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:subSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1570);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_2;
	}
	goto label_3;
label_1:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(1571);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 <= 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1572);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1574);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1575);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1578);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1580);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	sp[1].o = (jobject)((java_util_TreeMap$AscendingSubMapEntrySet *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (jint(0)), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:tailSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:tailSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:headSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:subSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (frame[2].i), (checkCast(ctx, &class_java_util_Map$Entry, (frame[3].o))), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:floor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:lower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:ceiling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:higher", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:pollLast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:pollFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:tailSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:subSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))), (checkCast(ctx, &class_java_util_Map$Entry, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:last", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:headSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapEntrySet:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$AscendingSubMapEntrySet[] {
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
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_iterator_R_java_util_Iterator,
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
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet,
	(void *) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet,
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
	{ "tailSet", "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;" },
};

static jclass interfaces[] { &class_java_util_NavigableSet, };

static FieldMetadata fields[] {
	{ "hasStart", &class_boolean, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_hasStart), "Z", 0 },
	{ "hasEnd", &class_boolean, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_hasEnd), "Z", 0 },
	{ "startInclusive", &class_boolean, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_startInclusive), "Z", 0 },
	{ "endInclusive", &class_boolean, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_endInclusive), "Z", 0 },
	{ "startEntry", &class_java_util_Map$Entry, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_startEntry), "Ljava/util/Map$Entry;", 0 },
	{ "lastentry", &class_java_util_Map$Entry, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_lastentry), "Ljava/util/Map$Entry;", 0 },
	{ "map", &class_java_util_TreeMap$NavigableSubMap, offsetof(java_util_TreeMap$AscendingSubMapEntrySet, F_map), "Ljava/util/TreeMap$NavigableSubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/Map$Entry;ZLjava/util/Map$Entry;Z)V", 0 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 17 },
	{ "size", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_size_R_int, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_size_R_int, "()I", 1 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "descendingIterator", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_descendingIterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "descendingSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "floor", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "higher", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "lower", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_util_Map$Entry_R_java_util_Map$Entry, "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_boolean_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;ZLjava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_boolean_R_java_util_NavigableSet, "(Ljava/util/Map$Entry;Z)Ljava/util/NavigableSet;", 1 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "first", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "last", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_util_Map$Entry_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_util_Map$Entry_R_java_util_SortedSet, "(Ljava/util/Map$Entry;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 4161 },
	{ "floor", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "lower", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "ceiling", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "higher", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 4161 },
	{ "pollLast", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "pollFirst", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "tailSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "subSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "last", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_last_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "headSet", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 4161 },
	{ "first", (intptr_t) M_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_lang_Object, VTABLE_java_util_TreeMap$AscendingSubMapEntrySet_first_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_TreeMap$AscendingSubMapEntrySet{
		.nativeName = (intptr_t) "java/util/TreeMap$AscendingSubMapEntrySet",
		.parentClass = (intptr_t) &class_java_util_AbstractSet,
		.size = sizeof(java_util_TreeMap$AscendingSubMapEntrySet),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AscendingSubMapEntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AscendingSubMapEntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AscendingSubMapEntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AscendingSubMapEntrySet = registerClass(&class_java_util_TreeMap$AscendingSubMapEntrySet);

}

