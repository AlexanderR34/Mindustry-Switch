#include "java/util/Collections.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Random.h"
#include "java/util/Collections_ReverseComparator.h"
#include "java/lang/Comparable.h"
#include "java/util/Deque.h"
#include "java/util/Collections_CheckedCollection.h"
#include "java/util/ArrayList.h"
#include "java/util/Collections_CheckedListIterator.h"
#include "java/util/Collection.h"
#include "java/util/Arrays.h"
#include "java/util/Collections_SingletonMap.h"
#include "java/util/Collections_SetFromMap.h"
#include "java/util/Collections_SingletonSet.h"
#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/Collections_ReverseComparatorWithComparator.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Collections_EmptyMap.h"
#include "java/util/Queue.h"
#include "java/util/Collections.h"
#include "java/util/Collections_SynchronizedMap.h"
#include "java/util/Enumeration.h"
#include "java/util/SortedMap.h"
#include "java/util/Collections_3.h"
#include "java/util/Collections_AsLIFOQueue.h"
#include "java/util/Collections_1.h"
#include "java/util/List.h"
#include "java/util/Collections_2.h"
#include "java/util/Collections_SynchronizedSet.h"
#include "java/util/Collections_SynchronizedSortedMap.h"
#include "java/util/Collections_EmptyList.h"
#include "java/util/SortedSet.h"
#include "java/util/Collections_UnmodifiableSortedSet.h"
#include "java/util/RandomAccess.h"
#include "java/util/Collections_SingletonList.h"
#include "java/util/Collections_SynchronizedRandomAccessList.h"
#include "java/util/Collections_UnmodifiableSortedMap.h"
#include "java/util/Collections_EmptySet.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "java/util/Collections_UnmodifiableMap.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Collections_UnmodifiableSet.h"
#include "java/util/Collections_SynchronizedCollection.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Collections_CopiesList.h"
#include "java/util/Collections_UnmodifiableList.h"
#include "java/util/Collections_UnmodifiableRandomAccessList.h"
#include "java/util/ListIterator.h"
#include "java/util/Collections_SynchronizedSortedSet.h"
#include "java/lang/Class.h"
#include "java/util/Collections_SynchronizedList.h"

extern "C" {

jobject SF_java_util_Collections_EMPTY_ITERATOR;
jobject SF_java_util_Collections_EMPTY_ENUMERATION;
jobject SF_java_util_Collections_EMPTY_LIST;
jobject SF_java_util_Collections_EMPTY_SET;
jobject SF_java_util_Collections_EMPTY_MAP;

void mark_java_util_Collections(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Collections_EMPTY_ITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections_EMPTY_ITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Collections_EMPTY_ITERATOR, mark, depth + 1);
		if (SF_java_util_Collections_EMPTY_ENUMERATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections_EMPTY_ENUMERATION)->clazz)->markFunction)((jobject) SF_java_util_Collections_EMPTY_ENUMERATION, mark, depth + 1);
		if (SF_java_util_Collections_EMPTY_LIST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections_EMPTY_LIST)->clazz)->markFunction)((jobject) SF_java_util_Collections_EMPTY_LIST, mark, depth + 1);
		if (SF_java_util_Collections_EMPTY_SET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections_EMPTY_SET)->clazz)->markFunction)((jobject) SF_java_util_Collections_EMPTY_SET, mark, depth + 1);
		if (SF_java_util_Collections_EMPTY_MAP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections_EMPTY_MAP)->clazz)->markFunction)((jobject) SF_java_util_Collections_EMPTY_MAP, mark, depth + 1);
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
	auto self = (java_util_Collections *) object;
}

void init_java_util_Collections(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1410);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Collections_binarySearch_java_util_List_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:binarySearch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1434);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1435);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1437);
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1438);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(1441);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1443);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1445);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, sp[0].o)), (frame[1].o));
	jint temp1 = -temp0;
	frame[3].i = temp1;
	if (temp1 > 0) goto label_11;
	}
	{
	LINE_NUMBER(1446);
	if ((frame[3].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1447);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_13:;
	{
	LINE_NUMBER(1449);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return ((-temp0) - (jint(1)));
	}
label_11:;
	LINE_NUMBER(1451);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(1452);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((-temp0) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(1455);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	frame[4].i = ((frame[3].i) - (jint(1)));
	frame[5].i = (jint(-1));
	}
label_18:;
	{
	LINE_NUMBER(1456);
	if ((frame[2].i) > (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(1457);
	frame[3].i = (((frame[2].i) + (frame[4].i)) >> (jint(1)));
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[3].i));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, sp[0].o)), (frame[1].o));
	jint temp1 = -temp0;
	frame[5].i = temp1;
	if (temp1 <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1459);
	frame[2].i = ((frame[3].i) + (jint(1)));
	goto label_18;
	}
label_22:;
	{
	LINE_NUMBER(1460);
	if ((frame[5].i) != 0) goto label_24;
	}
	{
	LINE_NUMBER(1461);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_24:;
	{
	LINE_NUMBER(1463);
	frame[4].i = ((frame[3].i) - (jint(1)));
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(1466);
	jint temp0 = -(frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) >= 0) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(2);
label_27:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Collections_binarySearch_java_util_List_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:binarySearch", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1493);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1494);
	jint temp0 = (jint)SM_java_util_Collections_binarySearch_java_util_List_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1497);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1498);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1499);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1501);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	jint temp1 = -temp0;
	frame[4].i = temp1;
	if (temp1 > 0) goto label_9;
	}
	{
	LINE_NUMBER(1502);
	if ((frame[4].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1503);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_11:;
	{
	LINE_NUMBER(1505);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return ((-temp0) - (jint(1)));
	}
label_9:;
	LINE_NUMBER(1507);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(1508);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((-temp0) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1511);
	frame[3].i = (jint(0));
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].i = temp0;
	frame[5].i = ((frame[4].i) - (jint(1)));
	frame[6].i = (jint(-1));
	}
label_16:;
	{
	LINE_NUMBER(1512);
	if ((frame[3].i) > (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(1513);
	frame[4].i = (((frame[3].i) + (frame[5].i)) >> (jint(1)));
	LINE_NUMBER(1514);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[4].i));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	jint temp1 = -temp0;
	frame[6].i = temp1;
	if (temp1 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(1515);
	frame[3].i = ((frame[4].i) + (jint(1)));
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(1516);
	if ((frame[6].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(1517);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_22:;
	{
	LINE_NUMBER(1519);
	frame[5].i = ((frame[4].i) - (jint(1)));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1522);
	jint temp0 = -(frame[4].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[6].i) >= 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(2);
label_25:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_java_util_Collections_copy_java_util_List_java_util_List(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1543);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(1545);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1548);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1549);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_NoSuchElementException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1555);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1552);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1554);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(1556);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(1558);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_enumeration_java_util_Collection_R_java_util_Enumeration(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:enumeration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1568);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(1569);
	clinit_java_util_Collections$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$3);
	init_java_util_Collections$3_java_util_Collection(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_fill_java_util_List_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1594);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1595);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(1596);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1598);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_max_java_util_Collection_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:max", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1614);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1616);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1617);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1618);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o))), (frame[3].o));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1619);
	frame[2].o = (frame[3].o);
	}
label_6:;
	LINE_NUMBER(1621);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(1622);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_max_java_util_Collection_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:max", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1640);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1642);
	sp[0].o = (jobject)SM_java_util_Collections_max_java_util_Collection_R_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1643);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(1646);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1647);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1648);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1649);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1650);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o), (frame[4].o));
	if (temp0 >= 0) goto label_9;
	}
	{
	LINE_NUMBER(1651);
	frame[3].o = (frame[4].o);
	}
label_9:;
	LINE_NUMBER(1653);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(1654);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_min_java_util_Collection_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:min", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1670);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1672);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1673);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1674);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o))), (frame[3].o));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1675);
	frame[2].o = (frame[3].o);
	}
label_6:;
	LINE_NUMBER(1677);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(1678);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_min_java_util_Collection_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:min", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1696);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1698);
	sp[0].o = (jobject)SM_java_util_Collections_min_java_util_Collection_R_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1699);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(1702);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1703);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1704);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1705);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1706);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o), (frame[4].o));
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1707);
	frame[3].o = (frame[4].o);
	}
label_9:;
	LINE_NUMBER(1709);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(1710);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_nCopies_int_java_lang_Object_R_java_util_List(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:nCopies", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1726);
	clinit_java_util_Collections$CopiesList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$CopiesList);
	init_java_util_Collections$CopiesList_int_java_lang_Object(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_reverse_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:reverse", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1740);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1741);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1742);
	sp[0].o = frame[0].o;
	jint temp1 = frame[1].i;
	LINE_NUMBER(1743);
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, sp[0].o))(ctx, sp[0].o, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1744);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= ((frame[1].i) / (jint(2)))) goto label_6;
	}
	{
	LINE_NUMBER(1745);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1746);
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1747);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(1748);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(1744);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_reverseOrder_R_java_util_Comparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:reverseOrder", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(1763);
	sp[0].o = (jobject)SM_java_util_Collections$ReverseComparator_access$300_R_java_util_Collections$ReverseComparator(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:reverseOrder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1781);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1782);
	sp[0].o = (jobject)SM_java_util_Collections_reverseOrder_R_java_util_Comparator(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1784);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_Collections$ReverseComparatorWithComparator)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1785);
	sp[0].o = (jobject)SM_java_util_Collections$ReverseComparatorWithComparator_access$400_java_util_Collections$ReverseComparatorWithComparator_R_java_util_Comparator(ctx, (checkCast(ctx, &class_java_util_Collections$ReverseComparatorWithComparator, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1787);
	clinit_java_util_Collections$ReverseComparatorWithComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$ReverseComparatorWithComparator);
	init_java_util_Collections$ReverseComparatorWithComparator_java_util_Comparator(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_shuffle_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:shuffle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1800);
	sp[0].o = frame[0].o;
	clinit_java_util_Random(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[1].o);
	SM_java_util_Collections_shuffle_java_util_List_java_util_Random(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_shuffle_java_util_List_java_util_Random(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:shuffle", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1816);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(1818);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1819);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = (temp0 - (jint(1)));
	}
label_4:;
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_5;
	{
	LINE_NUMBER(1820);
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(1821);
	sp[0].o = frame[2].o;
	jint temp1 = frame[4].i;
	sp[1].o = frame[2].o;
	jint temp2 = frame[3].i;
	sp[2].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i));
	sp[1].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, temp2, sp[2].o);
	sp[0].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(1819);
	INST_IINC(3, -1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(1824);
	sp[0].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1825);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_11:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_12;
	{
	LINE_NUMBER(1826);
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(1827);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(1828);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1829);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(1825);
	INST_IINC(4, -1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1832);
	frame[4].i = (jint(0));
	LINE_NUMBER(1833);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1834);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1835);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	LINE_NUMBER(1836);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	goto label_19;
	}
label_9:;
	LINE_NUMBER(1839);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_singleton_java_lang_Object_R_java_util_Set(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:singleton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1850);
	clinit_java_util_Collections$SingletonSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SingletonSet);
	init_java_util_Collections$SingletonSet_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_singletonList_java_lang_Object_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:singletonList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1862);
	clinit_java_util_Collections$SingletonList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SingletonList);
	init_java_util_Collections$SingletonList_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_singletonMap_java_lang_Object_java_lang_Object_R_java_util_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:singletonMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1876);
	clinit_java_util_Collections$SingletonMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SingletonMap);
	init_java_util_Collections$SingletonMap_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_sort_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:sort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1891);
	sp[0].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1892);
	SM_java_util_Arrays_sort_Array1_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(1893);
	frame[2].i = (jint(0));
	LINE_NUMBER(1894);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1895);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(1897);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)))));
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1899);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Collections_sort_java_util_List_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1915);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, temp0);
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1916);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(1917);
	frame[3].i = (jint(0));
	LINE_NUMBER(1918);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1919);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1920);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(1921);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1923);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Collections_swap_java_util_List_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:swap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1943);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1944);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1946);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1947);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) >= (frame[3].i)) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	if ((frame[2].i) < (frame[3].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1948);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1950);
	if ((frame[1].i) != (frame[2].i)) goto label_6;
	}
	LINE_NUMBER(1951);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1953);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(1954);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	sp[1].o = frame[4].o;
	jint temp1 = frame[1].i;
	sp[2].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[2].i));
	sp[1].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, temp1, sp[2].o);
	sp[0].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1955);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Collections_replaceAll_java_util_List_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:replaceAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1976);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1978);
	jint temp0 = (jint)((func_java_util_List_indexOf_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_indexOf_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	if (temp0 <= (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(1979);
	frame[4].i = (jint(1));
	LINE_NUMBER(1980);
	sp[0].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[3].i), (frame[2].o));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(1982);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void SM_java_util_Collections_rotate_java_util_List_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:rotate", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2000);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(2001);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(2004);
	if ((frame[3].i) != 0) goto label_3;
	}
	LINE_NUMBER(2005);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2010);
	if ((frame[1].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(2011);
	frame[4].i = ((frame[1].i) % (frame[3].i));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(2013);
	frame[4].i = ((frame[3].i) - (((frame[1].i) % (frame[3].i)) * (jint(-1))));
	}
label_8:;
	{
	LINE_NUMBER(2016);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	if ((frame[4].i) != (frame[3].i)) goto label_10;
	}
label_9:;
	LINE_NUMBER(2017);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(2020);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_RandomAccess)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2023);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2024);
	frame[6].i = (jint(0));
	frame[7].i = (jint(0));
	LINE_NUMBER(2025);
	frame[8].i = (jint(0));
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(2026);
	frame[6].i = (((frame[6].i) + (frame[4].i)) % (frame[3].i));
	LINE_NUMBER(2027);
	sp[0].o = (jobject)((func_java_util_List_set_int_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[6].i), (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2028);
	if ((frame[6].i) != (frame[7].i)) goto label_21;
	}
	{
	LINE_NUMBER(2029);
	INST_IINC(7, 1);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(2030);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[7].i));
	frame[5].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(2025);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(2033);
	goto label_24;
label_11:;
	{
	LINE_NUMBER(2034);
	frame[5].i = (((frame[3].i) - (frame[4].i)) % (frame[3].i));
	LINE_NUMBER(2035);
	sp[0].o = (jobject)((func_java_util_List_subList_int_int_R_java_util_List) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_subList_int_int_R_java_util_List, (frame[2].o)))(ctx, (frame[2].o), (jint(0)), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2036);
	sp[0].o = (jobject)((func_java_util_List_subList_int_int_R_java_util_List) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_subList_int_int_R_java_util_List, (frame[2].o)))(ctx, (frame[2].o), (frame[5].i), (frame[3].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2037);
	SM_java_util_Collections_reverse_java_util_List(ctx, (frame[6].o));
	LINE_NUMBER(2038);
	SM_java_util_Collections_reverse_java_util_List(ctx, (frame[7].o));
	LINE_NUMBER(2039);
	SM_java_util_Collections_reverse_java_util_List(ctx, (frame[2].o));
	}
label_24:;
	LINE_NUMBER(2041);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Collections_indexOfSubList_java_util_List_java_util_List_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:indexOfSubList", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2057);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(2058);
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(2060);
	if ((frame[3].i) <= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(2061);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(2064);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(2065);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(2069);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2070);
	jint temp0 = (jint)((func_java_util_List_indexOf_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_indexOf_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(2071);
	if ((frame[5].i) != (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(2072);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(2075);
	if ((frame[5].i) >= (frame[2].i)) goto label_11;
	}
	{
	if (((frame[2].i) - (frame[5].i)) < (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(2076);
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2078);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	if (sp[0].o != nullptr) goto label_15;
	}
	goto label_16;
label_14:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(2079);
	sp[1].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(2083);
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, (frame[1].o)))(ctx, (frame[1].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2084);
	frame[8].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(2085);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(2086);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2087);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_23:;
	{
	LINE_NUMBER(2090);
	if ((frame[9].o) != nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_26;
	}
	goto label_27;
label_25:;
	{
	sp[0].o = frame[9].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(2091);
	sp[1].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(2092);
	frame[8].i = (jint(1));
	LINE_NUMBER(2093);
	goto label_20;
	}
label_26:;
	LINE_NUMBER(2095);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(2098);
	if ((frame[8].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(2099);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_15:;
	{
	LINE_NUMBER(2105);
	INST_IINC(5, 1);
	LINE_NUMBER(2106);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(2107);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_java_util_Collections_lastIndexOfSubList_java_util_List_java_util_List_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:lastIndexOfSubList", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2124);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(2125);
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(2127);
	if ((frame[2].i) <= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(2128);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(2131);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(2136);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((frame[2].i) - (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2137);
	jint temp0 = (jint)((func_java_util_List_lastIndexOf_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_lastIndexOf_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	frame[5].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(2139);
	if ((frame[5].i) <= (jint(-1))) goto label_9;
	}
	{
	if (((frame[5].i) + (jint(1))) < (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(2140);
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o), ((frame[5].i) + (jint(1))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2142);
	if ((frame[4].o) != nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	if (sp[0].o != nullptr) goto label_13;
	}
	goto label_14;
label_12:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(2143);
	sp[1].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(2146);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) - (jint(1));
	LINE_NUMBER(2147);
	sp[0].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, sp[0].o))(ctx, sp[0].o, temp0);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2148);
	frame[8].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(2149);
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2151);
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(2152);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_22:;
	{
	LINE_NUMBER(2154);
	if ((frame[9].o) != nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_25;
	}
	goto label_26;
label_24:;
	{
	sp[0].o = frame[9].o;
	sp[1].o = frame[6].o;
	LINE_NUMBER(2155);
	sp[1].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(2156);
	frame[8].i = (jint(1));
	LINE_NUMBER(2157);
	goto label_19;
	}
label_25:;
	LINE_NUMBER(2159);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(2162);
	if ((frame[8].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(2163);
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, (frame[6].o)))(ctx, (frame[6].o));
	popStackFrame(ctx);
	return temp0;
	}
label_13:;
	{
	LINE_NUMBER(2169);
	INST_IINC(5, -1);
	LINE_NUMBER(2170);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2171);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_list_java_util_Enumeration_R_java_util_ArrayList(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:list", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2184);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2185);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2186);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2188);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedCollection_java_util_Collection_R_java_util_Collection(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedCollection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2201);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2202);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2204);
	clinit_java_util_Collections$SynchronizedCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedCollection);
	init_java_util_Collections$SynchronizedCollection_java_util_Collection(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedList_java_util_List_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2216);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2217);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2219);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2220);
	clinit_java_util_Collections$SynchronizedRandomAccessList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedRandomAccessList);
	init_java_util_Collections$SynchronizedRandomAccessList_java_util_List(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2222);
	clinit_java_util_Collections$SynchronizedList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedList);
	init_java_util_Collections$SynchronizedList_java_util_List(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedMap_java_util_Map_R_java_util_Map(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2234);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2235);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2237);
	clinit_java_util_Collections$SynchronizedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedMap);
	init_java_util_Collections$SynchronizedMap_java_util_Map(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedSet_java_util_Set_R_java_util_Set(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2249);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2250);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2252);
	clinit_java_util_Collections$SynchronizedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSet);
	init_java_util_Collections$SynchronizedSet_java_util_Set(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedSortedMap_java_util_SortedMap_R_java_util_SortedMap(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedSortedMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2265);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2266);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2268);
	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedMap);
	init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_synchronizedSortedSet_java_util_SortedSet_R_java_util_SortedSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:synchronizedSortedSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2280);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2281);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2283);
	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedSet);
	init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableCollection_java_util_Collection_R_java_util_Collection(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableCollection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2298);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2299);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2301);
	clinit_java_util_Collections$UnmodifiableCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableCollection);
	init_java_util_Collections$UnmodifiableCollection_java_util_Collection(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableList_java_util_List_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2315);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2316);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2318);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2319);
	clinit_java_util_Collections$UnmodifiableRandomAccessList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableRandomAccessList);
	init_java_util_Collections$UnmodifiableRandomAccessList_java_util_List(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2321);
	clinit_java_util_Collections$UnmodifiableList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableList);
	init_java_util_Collections$UnmodifiableList_java_util_List(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableMap_java_util_Map_R_java_util_Map(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2336);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2337);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2339);
	clinit_java_util_Collections$UnmodifiableMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableMap);
	init_java_util_Collections$UnmodifiableMap_java_util_Map(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableSet_java_util_Set_R_java_util_Set(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2353);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2354);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2356);
	clinit_java_util_Collections$UnmodifiableSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableSet);
	init_java_util_Collections$UnmodifiableSet_java_util_Set(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableSortedMap_java_util_SortedMap_R_java_util_SortedMap(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableSortedMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2371);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2372);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2374);
	clinit_java_util_Collections$UnmodifiableSortedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableSortedMap);
	init_java_util_Collections$UnmodifiableSortedMap_java_util_SortedMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_unmodifiableSortedSet_java_util_SortedSet_R_java_util_SortedSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:unmodifiableSortedSet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2387);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2388);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2390);
	clinit_java_util_Collections$UnmodifiableSortedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableSortedSet);
	init_java_util_Collections$UnmodifiableSortedSet_java_util_SortedSet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Collections_frequency_java_util_Collection_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:frequency", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2408);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2409);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2411);
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2412);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2414);
	frame[2].i = (jint(0));
	LINE_NUMBER(2415);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2416);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2417);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2418);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_11;
	goto label_12;
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
label_12:;
	LINE_NUMBER(2419);
	INST_IINC(2, 1);
label_11:;
	LINE_NUMBER(2421);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(2422);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_emptyList_R_java_util_List(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:emptyList", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(2434);
	clinit_java_util_Collections(ctx);
	sp[0].o = (jobject)SF_java_util_Collections_EMPTY_LIST;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_emptySet_R_java_util_Set(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:emptySet", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(2446);
	clinit_java_util_Collections(ctx);
	sp[0].o = (jobject)SF_java_util_Collections_EMPTY_SET;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_emptyMap_R_java_util_Map(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:emptyMap", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(2458);
	clinit_java_util_Collections(ctx);
	sp[0].o = (jobject)SF_java_util_Collections_EMPTY_MAP;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_emptyEnumeration_R_java_util_Enumeration(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:emptyEnumeration", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(2462);
	clinit_java_util_Collections(ctx);
	sp[0].o = (jobject)SF_java_util_Collections_EMPTY_ENUMERATION;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_emptyIterator_R_java_util_Iterator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:emptyIterator", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(2466);
	clinit_java_util_Collections(ctx);
	sp[0].o = (jobject)SF_java_util_Collections_EMPTY_ITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_checkedCollection_java_util_Collection_java_lang_Class_R_java_util_Collection(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:checkedCollection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2483);
	clinit_java_util_Collections$CheckedCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$CheckedCollection);
	init_java_util_Collections$CheckedCollection_java_util_Collection_java_lang_Class(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Collections_addAll_java_util_Collection_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2506);
	frame[2].i = (jint(0));
	LINE_NUMBER(2507);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2508);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(2507);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2510);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Collections_disjoint_java_util_Collection_java_util_Collection_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:disjoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2526);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_Set)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Set)) == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(2527);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2528);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(2529);
	frame[0].o = (frame[1].o);
	LINE_NUMBER(2530);
	frame[1].o = (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(2532);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2533);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2534);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2535);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2538);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:checkType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2552);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2555);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2557);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_newSetFromMap_java_util_Map_R_java_util_Set(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:newSetFromMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2574);
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2575);
	clinit_java_util_Collections$SetFromMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SetFromMap);
	init_java_util_Collections$SetFromMap_java_util_Map(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2577);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections_asLifoQueue_java_util_Deque_R_java_util_Queue(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:asLifoQueue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2592);
	clinit_java_util_Collections$AsLIFOQueue(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$AsLIFOQueue);
	init_java_util_Collections$AsLIFOQueue_java_util_Deque(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Collections(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections(ctx);
	{
	LINE_NUMBER(29);
	clinit_java_util_Collections$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$1);
	init_java_util_Collections$1(ctx, sp[0].o);
	clinit_java_util_Collections(ctx);
	SF_java_util_Collections_EMPTY_ITERATOR = sp[0].o;
	LINE_NUMBER(43);
	clinit_java_util_Collections$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$2);
	init_java_util_Collections$2(ctx, sp[0].o);
	clinit_java_util_Collections(ctx);
	SF_java_util_Collections_EMPTY_ENUMERATION = sp[0].o;
	LINE_NUMBER(189);
	clinit_java_util_Collections$EmptyList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$EmptyList);
	init_java_util_Collections$EmptyList_java_util_Collections$1(ctx, sp[0].o, (jobject(nullptr)));
	clinit_java_util_Collections(ctx);
	SF_java_util_Collections_EMPTY_LIST = sp[0].o;
	LINE_NUMBER(195);
	clinit_java_util_Collections$EmptySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$EmptySet);
	init_java_util_Collections$EmptySet_java_util_Collections$1(ctx, sp[0].o, (jobject(nullptr)));
	clinit_java_util_Collections(ctx);
	SF_java_util_Collections_EMPTY_SET = sp[0].o;
	LINE_NUMBER(201);
	clinit_java_util_Collections$EmptyMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$EmptyMap);
	init_java_util_Collections$EmptyMap_java_util_Collections$1(ctx, sp[0].o, (jobject(nullptr)));
	clinit_java_util_Collections(ctx);
	SF_java_util_Collections_EMPTY_MAP = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections[] {
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
};

static jclass innerClasses[] {
	&class_java_util_Collections$CopiesList,
	&class_java_util_Collections$ReverseComparator,
	&class_java_util_Collections$ReverseComparatorWithComparator,
	&class_java_util_Collections$SingletonSet,
	&class_java_util_Collections$SingletonList,
	&class_java_util_Collections$SingletonMap,
	&class_java_util_Collections$SynchronizedCollection,
	&class_java_util_Collections$SynchronizedRandomAccessList,
	&class_java_util_Collections$SynchronizedList,
	&class_java_util_Collections$SynchronizedMap,
	&class_java_util_Collections$SynchronizedSet,
	&class_java_util_Collections$SynchronizedSortedMap,
	&class_java_util_Collections$SynchronizedSortedSet,
	&class_java_util_Collections$UnmodifiableCollection,
	&class_java_util_Collections$UnmodifiableRandomAccessList,
	&class_java_util_Collections$UnmodifiableList,
	&class_java_util_Collections$UnmodifiableMap,
	&class_java_util_Collections$UnmodifiableSet,
	&class_java_util_Collections$UnmodifiableSortedMap,
	&class_java_util_Collections$UnmodifiableSortedSet,
	&class_java_util_Collections$CheckedCollection,
	&class_java_util_Collections$SetFromMap,
	&class_java_util_Collections$AsLIFOQueue,
	&class_java_util_Collections$EmptyList,
	&class_java_util_Collections$EmptySet,
	&class_java_util_Collections$EmptyMap,
	&class_java_util_Collections$CheckedListIterator,
};

static FieldMetadata fields[] {
	{ "EMPTY_ITERATOR", &class_java_util_Iterator, (intptr_t) &SF_java_util_Collections_EMPTY_ITERATOR, "Ljava/util/Iterator;", 26 },
	{ "EMPTY_ENUMERATION", &class_java_util_Enumeration, (intptr_t) &SF_java_util_Collections_EMPTY_ENUMERATION, "Ljava/util/Enumeration;", 26 },
	{ "EMPTY_LIST", &class_java_util_List, (intptr_t) &SF_java_util_Collections_EMPTY_LIST, "Ljava/util/List;", 25 },
	{ "EMPTY_SET", &class_java_util_Set, (intptr_t) &SF_java_util_Collections_EMPTY_SET, "Ljava/util/Set;", 25 },
	{ "EMPTY_MAP", &class_java_util_Map, (intptr_t) &SF_java_util_Collections_EMPTY_MAP, "Ljava/util/Map;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections, 0, "()V", 2 },
	{ "binarySearch", (intptr_t) SM_java_util_Collections_binarySearch_java_util_List_java_lang_Object_R_int, 0, "(Ljava/util/List;Ljava/lang/Object;)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Collections_binarySearch_java_util_List_java_lang_Object_java_util_Comparator_R_int, 0, "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I", 9 },
	{ "copy", (intptr_t) SM_java_util_Collections_copy_java_util_List_java_util_List, 0, "(Ljava/util/List;Ljava/util/List;)V", 9 },
	{ "enumeration", (intptr_t) SM_java_util_Collections_enumeration_java_util_Collection_R_java_util_Enumeration, 0, "(Ljava/util/Collection;)Ljava/util/Enumeration;", 9 },
	{ "fill", (intptr_t) SM_java_util_Collections_fill_java_util_List_java_lang_Object, 0, "(Ljava/util/List;Ljava/lang/Object;)V", 9 },
	{ "max", (intptr_t) SM_java_util_Collections_max_java_util_Collection_R_java_lang_Object, 0, "(Ljava/util/Collection;)Ljava/lang/Object;", 9 },
	{ "max", (intptr_t) SM_java_util_Collections_max_java_util_Collection_java_util_Comparator_R_java_lang_Object, 0, "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;", 9 },
	{ "min", (intptr_t) SM_java_util_Collections_min_java_util_Collection_R_java_lang_Object, 0, "(Ljava/util/Collection;)Ljava/lang/Object;", 9 },
	{ "min", (intptr_t) SM_java_util_Collections_min_java_util_Collection_java_util_Comparator_R_java_lang_Object, 0, "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;", 9 },
	{ "nCopies", (intptr_t) SM_java_util_Collections_nCopies_int_java_lang_Object_R_java_util_List, 0, "(ILjava/lang/Object;)Ljava/util/List;", 9 },
	{ "reverse", (intptr_t) SM_java_util_Collections_reverse_java_util_List, 0, "(Ljava/util/List;)V", 9 },
	{ "reverseOrder", (intptr_t) SM_java_util_Collections_reverseOrder_R_java_util_Comparator, 0, "()Ljava/util/Comparator;", 9 },
	{ "reverseOrder", (intptr_t) SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator, 0, "(Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "shuffle", (intptr_t) SM_java_util_Collections_shuffle_java_util_List, 0, "(Ljava/util/List;)V", 9 },
	{ "shuffle", (intptr_t) SM_java_util_Collections_shuffle_java_util_List_java_util_Random, 0, "(Ljava/util/List;Ljava/util/Random;)V", 9 },
	{ "singleton", (intptr_t) SM_java_util_Collections_singleton_java_lang_Object_R_java_util_Set, 0, "(Ljava/lang/Object;)Ljava/util/Set;", 9 },
	{ "singletonList", (intptr_t) SM_java_util_Collections_singletonList_java_lang_Object_R_java_util_List, 0, "(Ljava/lang/Object;)Ljava/util/List;", 9 },
	{ "singletonMap", (intptr_t) SM_java_util_Collections_singletonMap_java_lang_Object_java_lang_Object_R_java_util_Map, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", 9 },
	{ "sort", (intptr_t) SM_java_util_Collections_sort_java_util_List, 0, "(Ljava/util/List;)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Collections_sort_java_util_List_java_util_Comparator, 0, "(Ljava/util/List;Ljava/util/Comparator;)V", 9 },
	{ "swap", (intptr_t) SM_java_util_Collections_swap_java_util_List_int_int, 0, "(Ljava/util/List;II)V", 9 },
	{ "replaceAll", (intptr_t) SM_java_util_Collections_replaceAll_java_util_List_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "rotate", (intptr_t) SM_java_util_Collections_rotate_java_util_List_int, 0, "(Ljava/util/List;I)V", 9 },
	{ "indexOfSubList", (intptr_t) SM_java_util_Collections_indexOfSubList_java_util_List_java_util_List_R_int, 0, "(Ljava/util/List;Ljava/util/List;)I", 9 },
	{ "lastIndexOfSubList", (intptr_t) SM_java_util_Collections_lastIndexOfSubList_java_util_List_java_util_List_R_int, 0, "(Ljava/util/List;Ljava/util/List;)I", 9 },
	{ "list", (intptr_t) SM_java_util_Collections_list_java_util_Enumeration_R_java_util_ArrayList, 0, "(Ljava/util/Enumeration;)Ljava/util/ArrayList;", 9 },
	{ "synchronizedCollection", (intptr_t) SM_java_util_Collections_synchronizedCollection_java_util_Collection_R_java_util_Collection, 0, "(Ljava/util/Collection;)Ljava/util/Collection;", 9 },
	{ "synchronizedList", (intptr_t) SM_java_util_Collections_synchronizedList_java_util_List_R_java_util_List, 0, "(Ljava/util/List;)Ljava/util/List;", 9 },
	{ "synchronizedMap", (intptr_t) SM_java_util_Collections_synchronizedMap_java_util_Map_R_java_util_Map, 0, "(Ljava/util/Map;)Ljava/util/Map;", 9 },
	{ "synchronizedSet", (intptr_t) SM_java_util_Collections_synchronizedSet_java_util_Set_R_java_util_Set, 0, "(Ljava/util/Set;)Ljava/util/Set;", 9 },
	{ "synchronizedSortedMap", (intptr_t) SM_java_util_Collections_synchronizedSortedMap_java_util_SortedMap_R_java_util_SortedMap, 0, "(Ljava/util/SortedMap;)Ljava/util/SortedMap;", 9 },
	{ "synchronizedSortedSet", (intptr_t) SM_java_util_Collections_synchronizedSortedSet_java_util_SortedSet_R_java_util_SortedSet, 0, "(Ljava/util/SortedSet;)Ljava/util/SortedSet;", 9 },
	{ "unmodifiableCollection", (intptr_t) SM_java_util_Collections_unmodifiableCollection_java_util_Collection_R_java_util_Collection, 0, "(Ljava/util/Collection;)Ljava/util/Collection;", 9 },
	{ "unmodifiableList", (intptr_t) SM_java_util_Collections_unmodifiableList_java_util_List_R_java_util_List, 0, "(Ljava/util/List;)Ljava/util/List;", 9 },
	{ "unmodifiableMap", (intptr_t) SM_java_util_Collections_unmodifiableMap_java_util_Map_R_java_util_Map, 0, "(Ljava/util/Map;)Ljava/util/Map;", 9 },
	{ "unmodifiableSet", (intptr_t) SM_java_util_Collections_unmodifiableSet_java_util_Set_R_java_util_Set, 0, "(Ljava/util/Set;)Ljava/util/Set;", 9 },
	{ "unmodifiableSortedMap", (intptr_t) SM_java_util_Collections_unmodifiableSortedMap_java_util_SortedMap_R_java_util_SortedMap, 0, "(Ljava/util/SortedMap;)Ljava/util/SortedMap;", 9 },
	{ "unmodifiableSortedSet", (intptr_t) SM_java_util_Collections_unmodifiableSortedSet_java_util_SortedSet_R_java_util_SortedSet, 0, "(Ljava/util/SortedSet;)Ljava/util/SortedSet;", 9 },
	{ "frequency", (intptr_t) SM_java_util_Collections_frequency_java_util_Collection_java_lang_Object_R_int, 0, "(Ljava/util/Collection;Ljava/lang/Object;)I", 9 },
	{ "emptyList", (intptr_t) SM_java_util_Collections_emptyList_R_java_util_List, 0, "()Ljava/util/List;", 25 },
	{ "emptySet", (intptr_t) SM_java_util_Collections_emptySet_R_java_util_Set, 0, "()Ljava/util/Set;", 25 },
	{ "emptyMap", (intptr_t) SM_java_util_Collections_emptyMap_R_java_util_Map, 0, "()Ljava/util/Map;", 25 },
	{ "emptyEnumeration", (intptr_t) SM_java_util_Collections_emptyEnumeration_R_java_util_Enumeration, 0, "()Ljava/util/Enumeration;", 9 },
	{ "emptyIterator", (intptr_t) SM_java_util_Collections_emptyIterator_R_java_util_Iterator, 0, "()Ljava/util/Iterator;", 9 },
	{ "checkedCollection", (intptr_t) SM_java_util_Collections_checkedCollection_java_util_Collection_java_lang_Class_R_java_util_Collection, 0, "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;", 9 },
	{ "addAll", (intptr_t) SM_java_util_Collections_addAll_java_util_Collection_Array1_java_lang_Object_R_boolean, 0, "(Ljava/util/Collection;[Ljava/lang/Object;)Z", 137 },
	{ "disjoint", (intptr_t) SM_java_util_Collections_disjoint_java_util_Collection_java_util_Collection_R_boolean, 0, "(Ljava/util/Collection;Ljava/util/Collection;)Z", 9 },
	{ "checkType", (intptr_t) SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", 8 },
	{ "newSetFromMap", (intptr_t) SM_java_util_Collections_newSetFromMap_java_util_Map_R_java_util_Set, 0, "(Ljava/util/Map;)Ljava/util/Set;", 9 },
	{ "asLifoQueue", (intptr_t) SM_java_util_Collections_asLifoQueue_java_util_Deque_R_java_util_Queue, 0, "(Ljava/util/Deque;)Ljava/util/Queue;", 9 },
	{ "<clinit>", (intptr_t) clinit_java_util_Collections, 0, "()V", 8 },
};

Class class_java_util_Collections{
		.nativeName = (intptr_t) "java/util/Collections",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections),
		.classVtable = (intptr_t) vtable_java_util_Collections,
		.staticInitializer = (intptr_t) clinit_java_util_Collections,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 27,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections = registerClass(&class_java_util_Collections);

}
