#include "java/util/TreeMap.h"
#include "java/util/TreeMap_AscendingSubMapEntryIterator.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_AbstractSubMapIterator.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/util/TreeMap_UnboundedKeyIterator.h"
#include "java/util/TreeMap_UnboundedEntryIterator.h"
#include "java/util/TreeMap_DescendingSubMapKeySet.h"
#include "java/util/Collection.h"
#include "java/util/TreeMap_NullSubMapValuesCollection.h"
#include "java/util/TreeMap_SubMapValuesCollection.h"
#include "java/util/TreeMap_UnboundedValueIterator.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/TreeMap_1.h"
#include "java/util/TreeMap_BoundedKeyIterator.h"
#include "java/util/TreeMap_3.h"
#include "java/util/TreeMap_2.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_AscendingSubMapEntrySet.h"
#include "java/util/AbstractMap_SimpleImmutableEntry.h"
#include "java/util/TreeMap_TreeMapEntry.h"
#include "java/util/TreeMap_BoundedValueIterator.h"
#include "java/util/Map.h"
#include "java/util/TreeMap_AbstractMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/SortedMap.h"
#include "java/util/TreeMap_DescendingSubMapKeyIterator.h"
#include "java/util/AbstractMap.h"
#include "java/lang/System.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/TreeMap_BoundedEntryIterator.h"
#include "java/util/TreeMap_SubMap.h"
#include "java/util/Set.h"
#include "java/util/TreeMap_AscendingSubMapKeySet.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/util/TreeMap_SubMapEntrySet.h"
#include "java/util/TreeMap_SubMapKeySet.h"
#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_DescendingSubMapEntrySet.h"
#include "java/util/TreeMap_DescendingSubMapEntryIterator.h"
#include "java/util/NavigableMap.h"
#include "java/util/NavigableSet.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeMap_DescendingSubMapIterator.h"
#include "java/util/TreeMap_AscendingSubMapKeyIterator.h"
#include "java/util/TreeMap_AscendingSubMapIterator.h"

extern "C" {

jlong SF_java_util_TreeMap_serialVersionUID;

void mark_java_util_TreeMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap *) object;
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
	if (self->F_entrySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entrySet)->clazz)->markFunction)((jobject) self->F_entrySet, mark, depth + 1);
	if (self->F_descendingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_descendingMap)->clazz)->markFunction)((jobject) self->F_descendingMap, mark, depth + 1);
	if (self->F_navigableKeySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_navigableKeySet)->clazz)->markFunction)((jobject) self->F_navigableKeySet, mark, depth + 1);
}

void clinit_java_util_TreeMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
	SF_java_util_TreeMap_serialVersionUID = jlong(919286545866124006ll);
}

void init_java_util_TreeMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3682);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(3683);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3692);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(3693);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator = (jref) (frame[1].o);
	LINE_NUMBER(3694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3708);
	init_java_util_TreeMap(ctx, (frame[0].o));
	LINE_NUMBER(3709);
	((func_java_util_TreeMap_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3710);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3720);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_TreeMap_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3721);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(3722);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(3723);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(3724);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3725);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(3726);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[3].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3727);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(3728);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:addToLast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(3731);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3732);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[1].o = sp[1].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(3733);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(1));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(3734);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size) != (64)) goto label_5;
	}
	{
	LINE_NUMBER(3735);
	sp[0].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3736);
	M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(3737);
	((func_java_util_TreeMap_balance_java_util_TreeMap$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_balance_java_util_TreeMap$Node])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(3738);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(3739);
	frame[1].o = (frame[4].o);
	LINE_NUMBER(3740);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3741);
	M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(3742);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(3744);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3755);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root = (jref) (jobject(nullptr));
	LINE_NUMBER(3756);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(3757);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(3758);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3766);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:containsKey", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3786);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(3787);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3788);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(3789);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3790);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3791);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(3792);
	frame[6].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(3793);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(3794);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (frame[3].o));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(3795);
	if ((frame[7].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(3796);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(3797);
	if ((frame[7].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(3798);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(3800);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(3801);
	if ((frame[6].i) == (frame[8].i)) goto label_19;
	}
	{
	LINE_NUMBER(3802);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[7].i = temp0;
	}
label_19:;
	{
	LINE_NUMBER(3804);
	if ((frame[7].i) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(3805);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_21:;
	{
	LINE_NUMBER(3806);
	if ((frame[7].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(3807);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(3809);
	frame[9].i = ((frame[6].i) + (jint(1)));
	frame[10].i = (jint(0));
	frame[11].i = ((frame[8].i) - (jint(1)));
	}
label_27:;
	{
	LINE_NUMBER(3810);
	if ((frame[9].i) > (frame[11].i)) goto label_28;
	}
	{
	LINE_NUMBER(3811);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[9].i) + (frame[11].i))) >> (jint(1))));
	LINE_NUMBER(3812);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[10].i))));
	frame[7].i = temp0;
	LINE_NUMBER(3813);
	if ((frame[7].i) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(3814);
	frame[9].i = ((frame[10].i) + (jint(1)));
	goto label_27;
	}
label_32:;
	{
	LINE_NUMBER(3815);
	if ((frame[7].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(3816);
	popStackFrame(ctx);
	return (jint(1));
	}
label_34:;
	{
	LINE_NUMBER(3818);
	frame[11].i = ((frame[10].i) - (jint(1)));
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3821);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	LINE_NUMBER(3824);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(3825);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:containsValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3838);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3839);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(3841);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3842);
	if ((frame[1].o) == nullptr) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3843);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3844);
	frame[3].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right_idx);
	LINE_NUMBER(3845);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3846);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left_idx);
	}
label_10:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(3847);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(3848);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(3846);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(3851);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3852);
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(3854);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3855);
	frame[3].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right_idx);
	LINE_NUMBER(3856);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_values;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3857);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left_idx);
	}
label_19:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_20;
	}
	{
	LINE_NUMBER(3858);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(3859);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(3857);
	INST_IINC(5, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(3862);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3863);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(3865);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:containsValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3869);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_value;
	if (sp[0].o != nullptr) goto label_2;
	}
	goto label_3;
label_1:;
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3870);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(3872);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_left;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(3873);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_left;
	jint temp0 = (jint)M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(3874);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(3877);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_right;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(3878);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_right;
	jint temp0 = (jint)M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(3879);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(3882);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:find", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3887);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(3888);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3889);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(3890);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3891);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3892);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(3893);
	frame[6].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(3894);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	frame[7].i = temp0;
	LINE_NUMBER(3895);
	if ((frame[7].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(3896);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(3897);
	if ((frame[7].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(3898);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[4].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(3900);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(3901);
	if ((frame[6].i) == (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(3902);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[7].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(3904);
	if ((frame[7].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(3905);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_19:;
	{
	LINE_NUMBER(3906);
	if ((frame[7].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(3907);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[4].o), (frame[8].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(3909);
	frame[9].i = ((frame[6].i) + (jint(1)));
	frame[10].i = (jint(0));
	frame[11].i = ((frame[8].i) - (jint(1)));
	}
label_25:;
	{
	LINE_NUMBER(3910);
	if ((frame[9].i) > (frame[11].i)) goto label_26;
	}
	{
	LINE_NUMBER(3911);
	frame[10].i = (((frame[9].i) + (frame[11].i)) >> (jint(1)));
	LINE_NUMBER(3912);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[10].i))));
	frame[7].i = temp0;
	LINE_NUMBER(3913);
	if ((frame[7].i) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(3914);
	frame[9].i = ((frame[10].i) + (jint(1)));
	goto label_25;
	}
label_30:;
	{
	LINE_NUMBER(3915);
	if ((frame[7].i) != 0) goto label_32;
	}
	{
	LINE_NUMBER(3916);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[4].o), (frame[10].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(3918);
	frame[11].i = ((frame[10].i) - (jint(1)));
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(3921);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	LINE_NUMBER(3924);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(3925);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:createEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3929);
	clinit_java_util_TreeMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Entry);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3930);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(3931);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index = (frame[2].i);
	LINE_NUMBER(3932);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findSmallestEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3936);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(3937);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3938);
	clinit_java_util_TreeMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Entry);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx));
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3939);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(3940);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_index = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(3941);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(3943);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findBiggestEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3947);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(3948);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3949);
	clinit_java_util_TreeMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Entry);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx));
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3950);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(3951);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_index = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx);
	LINE_NUMBER(3952);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(3954);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findCeilingEntry", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3958);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3959);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(3961);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(3962);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3963);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(3964);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3965);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(3966);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(3967);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(3968);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(3969);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(3970);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(3971);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[10].i = temp0;
	LINE_NUMBER(3972);
	if ((frame[10].i) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(3973);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(3974);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(3975);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(3976);
	if ((frame[10].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(3977);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(3978);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(3979);
	goto label_10;
	}
label_21:;
	{
	LINE_NUMBER(3981);
	if ((frame[8].i) == (frame[9].i)) goto label_25;
	}
	{
	LINE_NUMBER(3982);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i))));
	frame[10].i = temp0;
	}
label_25:;
	{
	LINE_NUMBER(3984);
	if ((frame[10].i) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(3985);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_20;
	}
label_27:;
	{
	LINE_NUMBER(3987);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(3988);
	frame[6].i = (frame[9].i);
	LINE_NUMBER(3989);
	if ((frame[10].i) != 0) goto label_31;
	}
	LINE_NUMBER(3990);
	goto label_10;
label_31:;
	{
	LINE_NUMBER(3992);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[9].i) - (jint(1)));
	}
label_35:;
	{
	LINE_NUMBER(3993);
	if ((frame[11].i) > (frame[13].i)) goto label_10;
	}
	INST_ILOAD(10);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(3994);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(3995);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[10].i = temp0;
	LINE_NUMBER(3996);
	if ((frame[10].i) > 0) goto label_39;
	}
	{
	LINE_NUMBER(3997);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(3998);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(3999);
	frame[13].i = ((frame[12].i) - (jint(1)));
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(4001);
	frame[11].i = ((frame[12].i) + (jint(1)));
	}
label_43:;
	{
	LINE_NUMBER(4003);
	if ((frame[10].i) == 0) goto label_10;
	}
	{
	if ((frame[11].i) != (frame[13].i)) goto label_35;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_35;
	}
	LINE_NUMBER(4004);
	goto label_10;
label_20:;
	LINE_NUMBER(4010);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(4011);
	if ((frame[5].o) == nullptr) goto label_45;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(4012);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_45;
	}
	{
	LINE_NUMBER(4013);
	frame[5].o = (jobject(nullptr));
	}
label_45:;
	{
	LINE_NUMBER(4015);
	if ((frame[5].o) == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(4016);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(4018);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findFloorEntry", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4022);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4023);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(4025);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(4026);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4027);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4028);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4029);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(4030);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(4031);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(4032);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(4033);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4034);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4035);
	if ((frame[9].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(4036);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(4038);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4039);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(4040);
	if ((frame[9].i) != 0) goto label_20;
	}
	LINE_NUMBER(4041);
	goto label_10;
label_20:;
	{
	LINE_NUMBER(4043);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4044);
	if ((frame[8].i) == (frame[10].i)) goto label_23;
	}
	{
	LINE_NUMBER(4045);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_23:;
	{
	LINE_NUMBER(4047);
	if ((frame[9].i) < 0) goto label_25;
	}
	{
	LINE_NUMBER(4048);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4049);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(4050);
	if ((frame[9].i) != 0) goto label_29;
	}
	LINE_NUMBER(4051);
	goto label_10;
label_29:;
	{
	LINE_NUMBER(4053);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_25:;
	{
	LINE_NUMBER(4055);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[10].i) - (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(4056);
	if ((frame[11].i) > (frame[13].i)) goto label_10;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(4057);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(4058);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4059);
	if ((frame[9].i) < 0) goto label_37;
	}
	{
	LINE_NUMBER(4060);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4061);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(4062);
	frame[11].i = ((frame[12].i) + (jint(1)));
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(4064);
	frame[13].i = (frame[12].i);
	}
label_41:;
	{
	LINE_NUMBER(4066);
	if ((frame[9].i) == 0) goto label_10;
	}
	{
	if ((frame[11].i) != (frame[13].i)) goto label_33;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_33;
	}
	LINE_NUMBER(4067);
	goto label_10;
label_17:;
	LINE_NUMBER(4073);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(4074);
	if ((frame[5].o) == nullptr) goto label_43;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(4075);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_43;
	}
	{
	LINE_NUMBER(4076);
	frame[5].o = (jobject(nullptr));
	}
label_43:;
	{
	LINE_NUMBER(4078);
	if ((frame[5].o) == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(4079);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(4081);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findLowerEntry", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4085);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4086);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(4088);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(4089);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4090);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4091);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4092);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(4093);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(4094);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(4095);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(4096);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4097);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4098);
	if ((frame[9].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(4099);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(4101);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4102);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(4103);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4104);
	if ((frame[8].i) == (frame[10].i)) goto label_21;
	}
	{
	LINE_NUMBER(4105);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(4107);
	if ((frame[9].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(4108);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4109);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(4110);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_23:;
	{
	LINE_NUMBER(4112);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[10].i) - (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(4113);
	if ((frame[11].i) > (frame[13].i)) goto label_10;
	}
	{
	LINE_NUMBER(4114);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(4115);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4116);
	if ((frame[9].i) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(4117);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4118);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(4119);
	frame[11].i = ((frame[12].i) + (jint(1)));
	goto label_37;
	}
label_33:;
	{
	LINE_NUMBER(4121);
	frame[13].i = (frame[12].i);
	}
label_37:;
	{
	LINE_NUMBER(4123);
	if ((frame[11].i) != (frame[13].i)) goto label_29;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_29;
	}
	LINE_NUMBER(4124);
	goto label_10;
label_17:;
	LINE_NUMBER(4130);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(4131);
	if ((frame[5].o) == nullptr) goto label_39;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(4132);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_39;
	}
	{
	LINE_NUMBER(4133);
	frame[5].o = (jobject(nullptr));
	}
label_39:;
	{
	LINE_NUMBER(4135);
	if ((frame[5].o) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(4136);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(4138);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findHigherEntry", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4142);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4143);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(4145);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(4146);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4147);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4148);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4149);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(4150);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(4151);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(4152);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(4153);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4154);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4155);
	if ((frame[9].i) < 0) goto label_15;
	}
	{
	LINE_NUMBER(4156);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(4158);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4159);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(4160);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4161);
	if ((frame[10].i) == (frame[8].i)) goto label_21;
	}
	{
	LINE_NUMBER(4162);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(4164);
	if ((frame[9].i) >= 0) goto label_23;
	}
	{
	LINE_NUMBER(4165);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4166);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(4167);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_23:;
	{
	LINE_NUMBER(4169);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4170);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(4171);
	frame[11].i = ((frame[10].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[8].i) - (jint(1)));
	}
label_31:;
	{
	LINE_NUMBER(4172);
	if ((frame[11].i) > (frame[13].i)) goto label_10;
	}
	{
	LINE_NUMBER(4173);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(4174);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(4175);
	if ((frame[9].i) >= 0) goto label_35;
	}
	{
	LINE_NUMBER(4176);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(4177);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(4178);
	frame[13].i = ((frame[12].i) - (jint(1)));
	goto label_39;
	}
label_35:;
	{
	LINE_NUMBER(4180);
	frame[11].i = ((frame[12].i) + (jint(1)));
	}
label_39:;
	{
	LINE_NUMBER(4182);
	if ((frame[11].i) != (frame[13].i)) goto label_31;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_31;
	}
	LINE_NUMBER(4183);
	goto label_10;
label_17:;
	LINE_NUMBER(4189);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(4190);
	if ((frame[5].o) == nullptr) goto label_41;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(4191);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_41;
	}
	{
	LINE_NUMBER(4192);
	frame[5].o = (jobject(nullptr));
	}
label_41:;
	{
	LINE_NUMBER(4194);
	if ((frame[5].o) == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(4195);
	sp[0].o = (jobject)((func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(4197);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:firstKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4208);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4209);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(4210);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx)));
	}
label_1:;
	{
	LINE_NUMBER(4212);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:findNode", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4216);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(4217);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4218);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4219);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(4220);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4221);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(4222);
	frame[6].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4223);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4224);
	if ((frame[7].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(4225);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(4226);
	if ((frame[7].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(4227);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_14:;
	{
	LINE_NUMBER(4229);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4230);
	if ((frame[6].i) == (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(4231);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[7].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(4233);
	if ((frame[7].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(4234);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_19:;
	{
	LINE_NUMBER(4236);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_13:;
	LINE_NUMBER(4239);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(4240);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:get", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4258);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(4259);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4260);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4261);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(4262);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4263);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(4264);
	frame[6].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4265);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4266);
	if ((frame[7].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(4267);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(4268);
	if ((frame[7].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(4269);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	}
label_14:;
	{
	LINE_NUMBER(4271);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4272);
	if ((frame[6].i) == (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(4273);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[7].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(4275);
	if ((frame[7].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(4276);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_13;
	}
label_19:;
	{
	LINE_NUMBER(4277);
	if ((frame[7].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(4278);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	}
label_21:;
	{
	LINE_NUMBER(4280);
	frame[9].i = ((frame[6].i) + (jint(1)));
	frame[10].i = (jint(0));
	frame[11].i = ((frame[8].i) - (jint(1)));
	}
label_25:;
	{
	LINE_NUMBER(4281);
	if ((frame[9].i) > (frame[11].i)) goto label_26;
	}
	{
	LINE_NUMBER(4282);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[9].i) + (frame[11].i))) >> (jint(1))));
	LINE_NUMBER(4283);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[10].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4284);
	if ((frame[7].i) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(4285);
	frame[9].i = ((frame[10].i) + (jint(1)));
	goto label_25;
	}
label_30:;
	{
	LINE_NUMBER(4286);
	if ((frame[7].i) != 0) goto label_32;
	}
	{
	LINE_NUMBER(4287);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	}
label_32:;
	{
	LINE_NUMBER(4289);
	frame[11].i = ((frame[10].i) - (jint(1)));
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(4292);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	LINE_NUMBER(4295);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(4296);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4308);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4309);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$1);
	init_java_util_TreeMap$1_java_util_TreeMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(4331);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:lastKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4342);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4343);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(4344);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)));
	}
label_1:;
	{
	LINE_NUMBER(4346);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_maximum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:maximum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(4350);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4351);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_right;
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(4353);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_minimum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:minimum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(4357);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4358);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_left;
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(4360);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_predecessor_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:predecessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4364);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4365);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_left;
	sp[0].o = (jobject)SM_java_util_TreeMap_maximum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4367);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4368);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_left;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(4369);
	frame[0].o = (frame[1].o);
	LINE_NUMBER(4370);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(4372);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_successor_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:successor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4376);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4377);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_right;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4379);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4380);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(4381);
	frame[0].o = (frame[1].o);
	LINE_NUMBER(4382);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(4384);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:cmp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4388);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4410);
	sp[0].o = (jobject)M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:putImpl", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4414);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(4416);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(1));
	LINE_NUMBER(4417);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(4418);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(4420);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(4421);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(4422);
	frame[4].o = (frame[1].o);
	LINE_NUMBER(4423);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[5].o = sp[0].o;
	LINE_NUMBER(4424);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(4425);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(4426);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(4427);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(4428);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	frame[8].o = sp[0].o;
	LINE_NUMBER(4429);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_left_idx);
	LINE_NUMBER(4430);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[3].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4431);
	if ((frame[7].i) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(4432);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_left;
	frame[5].o = sp[0].o;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(4433);
	if ((frame[7].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(4434);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(4435);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)) = (frame[2].o);
	LINE_NUMBER(4436);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_22:;
	{
	LINE_NUMBER(4438);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_right_idx);
	LINE_NUMBER(4439);
	if ((frame[9].i) == (frame[10].i)) goto label_27;
	}
	{
	LINE_NUMBER(4440);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[3].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i))));
	frame[7].i = temp0;
	}
label_27:;
	{
	LINE_NUMBER(4442);
	if ((frame[7].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(4443);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_right;
	frame[5].o = sp[0].o;
	goto label_21;
	}
label_29:;
	{
	LINE_NUMBER(4444);
	if ((frame[7].i) != 0) goto label_31;
	}
	{
	LINE_NUMBER(4445);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(4446);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)) = (frame[2].o);
	LINE_NUMBER(4447);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_31:;
	{
	LINE_NUMBER(4449);
	frame[11].i = ((frame[9].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[10].i) - (jint(1)));
	}
label_37:;
	{
	LINE_NUMBER(4450);
	if ((frame[11].i) > (frame[13].i)) goto label_38;
	}
	{
	LINE_NUMBER(4451);
	frame[12].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[11].i) + (frame[13].i))) >> (jint(1))));
	LINE_NUMBER(4452);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[3].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[12].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4453);
	if ((frame[7].i) <= 0) goto label_42;
	}
	{
	LINE_NUMBER(4454);
	frame[11].i = ((frame[12].i) + (jint(1)));
	goto label_37;
	}
label_42:;
	{
	LINE_NUMBER(4455);
	if ((frame[7].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(4456);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(4457);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)) = (frame[2].o);
	LINE_NUMBER(4458);
	popStackFrame(ctx);
	return (frame[14].o);
	}
label_44:;
	{
	LINE_NUMBER(4460);
	frame[13].i = ((frame[12].i) - (jint(1)));
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(4463);
	frame[7].i = (frame[11].i);
	LINE_NUMBER(4464);
	goto label_13;
	}
label_21:;
	LINE_NUMBER(4467);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(4474);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4475);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(4476);
	if ((frame[5].o) != nullptr) goto label_51;
	}
	{
	LINE_NUMBER(4477);
	if ((frame[6].o) != nullptr) goto label_53;
	}
	{
	LINE_NUMBER(4479);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(4480);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[6].o)))->F_size) >= (64)) goto label_56;
	}
	{
	LINE_NUMBER(4482);
	if ((frame[7].i) >= 0) goto label_58;
	}
	{
	LINE_NUMBER(4483);
	M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[6].o), (frame[1].o), (frame[2].o));
	goto label_55;
	}
label_58:;
	{
	LINE_NUMBER(4485);
	M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[6].o), (frame[1].o), (frame[2].o));
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(4489);
	sp[0].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(4490);
	if ((frame[7].i) >= 0) goto label_61;
	}
	{
	LINE_NUMBER(4491);
	M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[6].o), (frame[8].o));
	goto label_63;
	}
label_61:;
	{
	LINE_NUMBER(4493);
	M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[6].o), (frame[8].o));
	}
label_63:;
	{
	LINE_NUMBER(4495);
	((func_java_util_TreeMap_balance_java_util_TreeMap$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_balance_java_util_TreeMap$Node])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(4496);
	goto label_55;
	}
label_51:;
	{
	LINE_NUMBER(4500);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_size) >= (64)) goto label_65;
	}
	{
	LINE_NUMBER(4501);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_left_idx);
	LINE_NUMBER(4502);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_right_idx);
	LINE_NUMBER(4503);
	if ((frame[8].i) == 0) goto label_69;
	}
	{
	if ((frame[9].i) == (63)) goto label_70;
	}
	{
	if (((frame[9].i) - (frame[7].i)) > ((frame[7].i) - (frame[8].i))) goto label_70;
	}
label_69:;
	{
	LINE_NUMBER(4506);
	frame[10].i = ((frame[9].i) + (jint(1)));
	LINE_NUMBER(4507);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[7].i) + (jint(1))), ((frame[10].i) - (frame[7].i)));
	LINE_NUMBER(4509);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	jint temp1 = frame[7].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[7].i) + (jint(1))), ((frame[10].i) - (frame[7].i)));
	LINE_NUMBER(4511);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_right_idx = (frame[10].i);
	LINE_NUMBER(4512);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[1].o);
	LINE_NUMBER(4513);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[2].o);
	LINE_NUMBER(4514);
	goto label_77;
	}
label_70:;
	{
	LINE_NUMBER(4515);
	frame[10].i = ((frame[8].i) - (jint(1)));
	LINE_NUMBER(4516);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[10].i), ((frame[7].i) - (frame[8].i)));
	LINE_NUMBER(4518);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	jint temp1 = frame[8].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[10].i), ((frame[7].i) - (frame[8].i)));
	LINE_NUMBER(4520);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_left_idx = (frame[10].i);
	LINE_NUMBER(4521);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[7].i) - (jint(1)))) = (frame[1].o);
	LINE_NUMBER(4522);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[7].i) - (jint(1)))) = (frame[2].o);
	}
label_77:;
	{
	LINE_NUMBER(4524);
	sp[0].o = frame[5].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4525);
	goto label_55;
	}
label_65:;
	{
	LINE_NUMBER(4528);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_prev;
	frame[8].o = sp[0].o;
	LINE_NUMBER(4529);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_next;
	frame[9].o = sp[0].o;
	LINE_NUMBER(4531);
	frame[11].i = (jint(0));
	LINE_NUMBER(4532);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(4533);
	if ((frame[8].o) != nullptr) goto label_88;
	}
	{
	LINE_NUMBER(4534);
	if ((frame[9].o) == nullptr) goto label_90;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[9].o)))->F_size) >= (64)) goto label_90;
	}
	{
	LINE_NUMBER(4536);
	frame[10].i = (jint(0));
	goto label_93;
	}
label_90:;
	{
	LINE_NUMBER(4541);
	frame[10].i = (jint(1));
	LINE_NUMBER(4542);
	frame[11].i = (jint(1));
	LINE_NUMBER(4543);
	frame[12].o = (frame[5].o);
	goto label_93;
	}
label_88:;
	{
	LINE_NUMBER(4545);
	if ((frame[9].o) != nullptr) goto label_96;
	}
	{
	LINE_NUMBER(4546);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[8].o)))->F_size) >= (64)) goto label_98;
	}
	{
	LINE_NUMBER(4548);
	frame[10].i = (jint(1));
	goto label_93;
	}
label_98:;
	{
	LINE_NUMBER(4552);
	frame[10].i = (jint(0));
	LINE_NUMBER(4553);
	frame[11].i = (jint(0));
	LINE_NUMBER(4554);
	frame[12].o = (frame[5].o);
	goto label_93;
	}
label_96:;
	{
	LINE_NUMBER(4557);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[8].o)))->F_size) >= (64)) goto label_103;
	}
	{
	LINE_NUMBER(4558);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[9].o)))->F_size) >= (64)) goto label_105;
	}
	{
	LINE_NUMBER(4560);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[8].o)))->F_size) >= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[9].o)))->F_size)) goto label_107;
	}
	INST_ICONST(1);
	goto label_108;
label_107:;
	INST_ICONST(0);
label_108:;
	INST_ISTORE(10);
	goto label_93;
label_105:;
	{
	LINE_NUMBER(4563);
	frame[10].i = (jint(1));
	goto label_93;
	}
label_103:;
	{
	LINE_NUMBER(4566);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[9].o)))->F_size) >= (64)) goto label_111;
	}
	{
	LINE_NUMBER(4568);
	frame[10].i = (jint(0));
	goto label_93;
	}
label_111:;
	{
	LINE_NUMBER(4573);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_right;
	if (sp[0].o != nullptr) goto label_114;
	}
	{
	LINE_NUMBER(4574);
	frame[12].o = (frame[5].o);
	LINE_NUMBER(4575);
	frame[11].i = (jint(0));
	LINE_NUMBER(4576);
	frame[10].i = (jint(0));
	goto label_93;
	}
label_114:;
	{
	LINE_NUMBER(4578);
	frame[12].o = (frame[9].o);
	LINE_NUMBER(4579);
	frame[11].i = (jint(1));
	LINE_NUMBER(4580);
	frame[10].i = (jint(0));
	}
label_93:;
	{
	LINE_NUMBER(4587);
	if ((frame[10].i) == 0) goto label_121;
	}
	{
	LINE_NUMBER(4589);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(4590);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(4591);
	frame[15].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(4592);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[15].i));
	LINE_NUMBER(4593);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[15].i));
	LINE_NUMBER(4594);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)) = (frame[1].o);
	LINE_NUMBER(4595);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)) = (frame[2].o);
	LINE_NUMBER(4596);
	goto label_130;
	}
label_121:;
	{
	LINE_NUMBER(4598);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (63)));
	LINE_NUMBER(4599);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (63)));
	LINE_NUMBER(4600);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[7].i) + (jint(1))), ((63) - (frame[7].i)));
	LINE_NUMBER(4602);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	jint temp1 = frame[7].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[7].i) + (jint(1))), ((63) - (frame[7].i)));
	LINE_NUMBER(4604);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[1].o);
	LINE_NUMBER(4605);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[2].o);
	}
label_130:;
	{
	LINE_NUMBER(4607);
	if ((frame[12].o) != nullptr) goto label_136;
	}
	{
	LINE_NUMBER(4608);
	if ((frame[10].i) == 0) goto label_138;
	}
	{
	LINE_NUMBER(4609);
	M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[8].o), (frame[13].o), (frame[14].o));
	goto label_55;
	}
label_138:;
	{
	LINE_NUMBER(4611);
	M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[9].o), (frame[13].o), (frame[14].o));
	goto label_55;
	}
label_136:;
	{
	LINE_NUMBER(4614);
	sp[0].o = (jobject)M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[13].o), (frame[14].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(4615);
	if ((frame[11].i) == 0) goto label_141;
	}
	{
	LINE_NUMBER(4616);
	M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[12].o), (frame[15].o));
	goto label_143;
	}
label_141:;
	{
	LINE_NUMBER(4618);
	M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[12].o), (frame[15].o));
	}
label_143:;
	{
	LINE_NUMBER(4620);
	((func_java_util_TreeMap_balance_java_util_TreeMap$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_balance_java_util_TreeMap$Node])(ctx, (frame[0].o), (frame[15].o));
	}
label_55:;
	{
	LINE_NUMBER(4624);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:appendFromLeft", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4628);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4629);
	frame[4].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) + (jint(1)));
	LINE_NUMBER(4630);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(1)), (frame[4].i));
	LINE_NUMBER(4631);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(1)), (frame[4].i));
	LINE_NUMBER(4632);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx = (frame[4].i);
	LINE_NUMBER(4633);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(4634);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(4636);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4637);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx)) = (frame[2].o);
	LINE_NUMBER(4638);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx)) = (frame[3].o);
	LINE_NUMBER(4639);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:attachToLeft", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4642);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(4644);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left = (jref) (frame[2].o);
	LINE_NUMBER(4645);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[3].o = sp[0].o;
	LINE_NUMBER(4646);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_prev = (jref) (frame[3].o);
	LINE_NUMBER(4647);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(4648);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4649);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[2].o);
	}
label_6:;
	{
	LINE_NUMBER(4651);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (frame[2].o);
	LINE_NUMBER(4652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:appendFromRight", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4659);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) != (63)) goto label_1;
	}
	{
	LINE_NUMBER(4660);
	frame[4].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4661);
	frame[5].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(4662);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[5].i), ((64) - (frame[4].i)));
	LINE_NUMBER(4664);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[4].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[5].i), ((64) - (frame[4].i)));
	LINE_NUMBER(4666);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx = (frame[5].i);
	LINE_NUMBER(4667);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(4668);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(4670);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4671);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)) = (frame[2].o);
	LINE_NUMBER(4672);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)) = (frame[3].o);
	LINE_NUMBER(4673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:attachToRight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4676);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(4678);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right = (jref) (frame[2].o);
	LINE_NUMBER(4679);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_prev = (jref) (frame[1].o);
	LINE_NUMBER(4680);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(4681);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(4682);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4683);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_prev = (jref) (frame[2].o);
	}
label_6:;
	{
	LINE_NUMBER(4685);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(4686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:createNode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4689);
	clinit_java_util_TreeMap$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Node);
	init_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(4690);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(4691);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	LINE_NUMBER(4692);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx = (jint(0));
	LINE_NUMBER(4693);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx = (jint(0));
	LINE_NUMBER(4694);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_size = (jint(1));
	LINE_NUMBER(4695);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_balance_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:balance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4700);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(4701);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) == 0) goto label_2;
	}
	{
	LINE_NUMBER(4702);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(4703);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4704);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color) == 0) goto label_7;
	}
	{
	LINE_NUMBER(4705);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(4706);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(0));
	LINE_NUMBER(4707);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(4708);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(4710);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_right;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(4711);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(4712);
	M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(4714);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(4715);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(4716);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_parent;
	M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(4719);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4720);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color) == 0) goto label_18;
	}
	{
	LINE_NUMBER(4721);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(4722);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(0));
	LINE_NUMBER(4723);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(4724);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_18:;
	{
	LINE_NUMBER(4726);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(4727);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(4728);
	M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_23:;
	{
	LINE_NUMBER(4730);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(4731);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(4732);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_parent;
	M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(4736);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(4737);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:rightRotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4740);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4741);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(4742);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(4743);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(4745);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(4746);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4747);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(4749);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_right;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(4750);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right = (jref) (frame[2].o);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(4752);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left = (jref) (frame[2].o);
	}
label_8:;
	{
	LINE_NUMBER(4755);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right = (jref) (frame[1].o);
	LINE_NUMBER(4756);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(4757);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:leftRotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4760);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4761);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(4762);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(4763);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(4765);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(4766);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(4767);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(4769);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(4770);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left = (jref) (frame[2].o);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(4772);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right = (jref) (frame[2].o);
	}
label_8:;
	{
	LINE_NUMBER(4775);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left = (jref) (frame[1].o);
	LINE_NUMBER(4776);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(4777);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:putAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4795);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4796);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(4797);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(4798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(4799);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(4800);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:remove", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4819);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(4820);
	if (((jint)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_4;
	}
	{
	LINE_NUMBER(4821);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(4823);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(4824);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(4825);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(4826);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(4827);
	frame[6].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(4828);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4829);
	if ((frame[7].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(4830);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(4831);
	if ((frame[7].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(4832);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(4833);
	sp[0].o = (jobject)((func_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(4834);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_16:;
	{
	LINE_NUMBER(4836);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(4837);
	if ((frame[6].i) == (frame[8].i)) goto label_21;
	}
	{
	LINE_NUMBER(4838);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))));
	frame[7].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(4840);
	if ((frame[7].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(4841);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_23:;
	{
	LINE_NUMBER(4842);
	if ((frame[7].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(4843);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(4844);
	sp[0].o = (jobject)((func_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(4845);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_25:;
	{
	LINE_NUMBER(4847);
	frame[9].i = ((frame[6].i) + (jint(1)));
	frame[10].i = (jint(0));
	frame[11].i = ((frame[8].i) - (jint(1)));
	}
label_31:;
	{
	LINE_NUMBER(4848);
	if ((frame[9].i) > (frame[11].i)) goto label_32;
	}
	{
	LINE_NUMBER(4849);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[9].i) + (frame[11].i))) >> (jint(1))));
	LINE_NUMBER(4850);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[10].i))));
	frame[7].i = temp0;
	LINE_NUMBER(4851);
	if ((frame[7].i) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(4852);
	frame[9].i = ((frame[10].i) + (jint(1)));
	goto label_31;
	}
label_36:;
	{
	LINE_NUMBER(4853);
	if ((frame[7].i) != 0) goto label_38;
	}
	{
	LINE_NUMBER(4854);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(4855);
	sp[0].o = (jobject)((func_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o), (frame[10].i));
	LINE_NUMBER(4856);
	popStackFrame(ctx);
	return (frame[12].o);
	}
label_38:;
	{
	LINE_NUMBER(4858);
	frame[11].i = ((frame[10].i) - (jint(1)));
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(4861);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	LINE_NUMBER(4864);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(4865);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:removeLeftmost", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4869);
	frame[2].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4871);
	if (((frame[2].i) + (jint(1))) > ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[2].i) + (jint(1))));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(4872);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(4873);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(4874);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	jint temp0 = 63;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if ((temp0 - ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(4876);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4877);
	frame[5].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[2].i));
	LINE_NUMBER(4878);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[5].i));
	LINE_NUMBER(4879);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[5].i));
	LINE_NUMBER(4880);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (frame[5].i));
	LINE_NUMBER(4881);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (frame[5].i));
	LINE_NUMBER(4882);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4883);
	goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(4885);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4886);
	frame[5].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[2].i));
	LINE_NUMBER(4887);
	frame[6].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx) - (frame[5].i));
	LINE_NUMBER(4888);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx = (frame[6].i);
	LINE_NUMBER(4889);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[6].i), (frame[5].i));
	LINE_NUMBER(4890);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[6].i), (frame[5].i));
	LINE_NUMBER(4891);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (frame[5].i));
	LINE_NUMBER(4892);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4893);
	goto label_7;
	}
label_17:;
	{
	LINE_NUMBER(4894);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(4895);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(4896);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) + (jint(1)));
	LINE_NUMBER(4897);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(4898);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4899);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(4900);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_size) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(4901);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4902);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) - (jint(1)));
	LINE_NUMBER(4903);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx)));
	LINE_NUMBER(4904);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx)));
	LINE_NUMBER(4905);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(4908);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(4909);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(4910);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:removeRightmost", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4914);
	frame[2].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx);
	LINE_NUMBER(4916);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left_idx));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(4917);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(4918);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(4919);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	jint temp0 = 63;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if ((temp0 - ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(4921);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4922);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4923);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(4924);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4925);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4926);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (frame[6].i));
	LINE_NUMBER(4927);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (frame[6].i));
	LINE_NUMBER(4928);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4929);
	goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_18;
	}
	{
	LINE_NUMBER(4931);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4932);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4933);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(4934);
	frame[7].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx) - (frame[6].i));
	LINE_NUMBER(4935);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx = (frame[7].i);
	LINE_NUMBER(4936);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[7].i), (frame[6].i));
	LINE_NUMBER(4937);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[7].i), (frame[6].i));
	LINE_NUMBER(4938);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (frame[6].i));
	LINE_NUMBER(4939);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4940);
	goto label_7;
	}
label_18:;
	{
	LINE_NUMBER(4941);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(4942);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(4943);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) - (jint(1)));
	LINE_NUMBER(4944);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(4945);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4946);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(4947);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_size) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(4948);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(4949);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (jint(1)));
	LINE_NUMBER(4950);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx)));
	LINE_NUMBER(4951);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx)));
	LINE_NUMBER(4952);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(4955);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(4956);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(4957);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:removeMiddleElement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4964);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(4965);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = 63;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if ((temp0 - ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(4967);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4968);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4969);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(4970);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4971);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4972);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (frame[6].i));
	LINE_NUMBER(4973);
	frame[6].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[2].i));
	LINE_NUMBER(4974);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp2 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4975);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp3 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1))), (frame[6].i));
	LINE_NUMBER(4976);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) + (jint(1)))));
	LINE_NUMBER(4977);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) + (frame[6].i));
	LINE_NUMBER(4978);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1))));
	LINE_NUMBER(4979);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4980);
	goto label_17;
	}
label_2:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) goto label_18;
	}
	{
	LINE_NUMBER(4982);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(4983);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4984);
	frame[6].i = ((((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx) - ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size)) + (jint(1)));
	LINE_NUMBER(4985);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx = (frame[6].i);
	LINE_NUMBER(4986);
	frame[7].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(4987);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[6].i), (frame[7].i));
	LINE_NUMBER(4988);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[6].i), (frame[7].i));
	LINE_NUMBER(4989);
	frame[6].i = ((frame[6].i) + (frame[7].i));
	LINE_NUMBER(4990);
	frame[7].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[2].i));
	LINE_NUMBER(4991);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp2 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (frame[6].i), (frame[7].i));
	LINE_NUMBER(4992);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp3 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, (frame[6].i), (frame[7].i));
	LINE_NUMBER(4993);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(4994);
	sp[0].o = frame[4].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) + (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1))));
	LINE_NUMBER(4995);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4996);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(4997);
	frame[4].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[2].i));
	LINE_NUMBER(4998);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	LINE_NUMBER(4999);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(5000);
	if ((frame[4].i) > (frame[6].i)) goto label_37;
	}
	{
	LINE_NUMBER(5001);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[2].i), (frame[4].i));
	LINE_NUMBER(5002);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[2].i), (frame[4].i));
	LINE_NUMBER(5003);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(5004);
	if ((frame[7].o) == nullptr) goto label_42;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_size) != (jint(1))) goto label_42;
	}
	{
	LINE_NUMBER(5005);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_left_idx)));
	LINE_NUMBER(5006);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = (jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_left_idx)));
	LINE_NUMBER(5007);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(5008);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[7].o));
	goto label_47;
	}
label_42:;
	{
	LINE_NUMBER(5010);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)) = (jobject(nullptr));
	LINE_NUMBER(5011);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)) = (jobject(nullptr));
	LINE_NUMBER(5012);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx) - (jint(1)));
	LINE_NUMBER(5013);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_47:;
	LINE_NUMBER(5015);
	goto label_17;
label_37:;
	{
	LINE_NUMBER(5016);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[5].i) + (jint(1))), (frame[6].i));
	LINE_NUMBER(5017);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[5].i) + (jint(1))), (frame[6].i));
	LINE_NUMBER(5018);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[7].o = sp[0].o;
	LINE_NUMBER(5019);
	if ((frame[7].o) == nullptr) goto label_54;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_size) != (jint(1))) goto label_54;
	}
	{
	LINE_NUMBER(5020);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_left_idx)));
	LINE_NUMBER(5021);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[7].o)))->F_left_idx)));
	LINE_NUMBER(5022);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(5023);
	M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[7].o));
	goto label_17;
	}
label_54:;
	{
	LINE_NUMBER(5025);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)) = (jobject(nullptr));
	LINE_NUMBER(5026);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)) = (jobject(nullptr));
	LINE_NUMBER(5027);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx) + (jint(1)));
	LINE_NUMBER(5028);
	sp[0].o = frame[1].o;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(5032);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(5033);
	sp[0].o = frame[0].o;
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(5034);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:deleteNode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5038);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5039);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5040);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(5042);
	M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(5044);
	M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(5045);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(5046);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(5047);
	M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(5054);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5055);
	M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(5056);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(5057);
	M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(5059);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_14:;
	{
	LINE_NUMBER(5062);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(5063);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(5064);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) (frame[2].o);
	}
label_16:;
	{
	LINE_NUMBER(5066);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(5067);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(5068);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_parent = (jref) (frame[2].o);
	}
label_19:;
	{
	LINE_NUMBER(5070);
	M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(5071);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color);
	}
label_6:;
	LINE_NUMBER(5073);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:attachToParentNoFixup", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5077);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(5078);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[3].o);
	LINE_NUMBER(5079);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5080);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(5081);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(5082);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left = (jref) (frame[2].o);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(5084);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right = (jref) (frame[2].o);
	}
label_5:;
	LINE_NUMBER(5086);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:attachToParent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5090);
	M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(5091);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color) != 0) goto label_2;
	}
	{
	LINE_NUMBER(5092);
	M_java_util_TreeMap_fixup_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_2:;
	LINE_NUMBER(5094);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:attachNullToParent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5097);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5098);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(5099);
	((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root = (jref) (jobject(nullptr));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(5101);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(5102);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left = (jref) (jobject(nullptr));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(5104);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right = (jref) (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(5106);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color) != 0) goto label_4;
	}
	{
	LINE_NUMBER(5107);
	M_java_util_TreeMap_fixup_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(5110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:fixNextChain", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5113);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5114);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(5116);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5117);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(5119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap_fixup_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:fixup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(5123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(5125);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5126);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(5127);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(5128);
	goto label_0;
	}
label_6:;
	{
	LINE_NUMBER(5130);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color) == 0) goto label_9;
	}
	{
	LINE_NUMBER(5131);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(0));
	LINE_NUMBER(5132);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(5133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5134);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5135);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(5136);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(5137);
	goto label_0;
	}
label_9:;
	{
	LINE_NUMBER(5140);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_18;
	}
label_17:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(5142);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(1));
	LINE_NUMBER(5143);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_18:;
	{
	LINE_NUMBER(5145);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(5146);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5147);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(1));
	LINE_NUMBER(5148);
	M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(5149);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right;
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(5151);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_color);
	LINE_NUMBER(5152);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5153);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5155);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(5158);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5159);
	if ((frame[2].o) != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(5160);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(5161);
	goto label_0;
	}
label_31:;
	{
	LINE_NUMBER(5163);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color) == 0) goto label_34;
	}
	{
	LINE_NUMBER(5164);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(0));
	LINE_NUMBER(5165);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(1));
	LINE_NUMBER(5166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5167);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left;
	frame[2].o = sp[0].o;
	LINE_NUMBER(5168);
	if ((frame[2].o) != nullptr) goto label_34;
	}
	{
	LINE_NUMBER(5169);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(5170);
	goto label_0;
	}
label_34:;
	{
	LINE_NUMBER(5173);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_43;
	}
label_42:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(5175);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(1));
	LINE_NUMBER(5176);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_43:;
	{
	LINE_NUMBER(5178);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color) != 0) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(5179);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5180);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_color = (jint(1));
	LINE_NUMBER(5181);
	M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(5182);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left;
	frame[2].o = sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(5184);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_color);
	LINE_NUMBER(5185);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5186);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_left;
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_color = (jint(0));
	LINE_NUMBER(5187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5188);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_root;
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(5192);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_color = (jint(0));
	LINE_NUMBER(5193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5202);
	popStackFrame(ctx);
	return ((jint)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5226);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5227);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$2);
	init_java_util_TreeMap$2_java_util_TreeMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(5249);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_firstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:firstEntry", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5259);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_lastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:lastEntry", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:pollFirstEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5279);
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(5280);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5281);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(5282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(5284);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:pollLastEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5294);
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(5295);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5296);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(5297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(5299);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:higherEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:higherKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5319);
	sp[0].o = (jobject)((func_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5320);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:lowerEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5330);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:lowerKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5340);
	sp[0].o = (jobject)((func_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5341);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:ceilingEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5351);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:ceilingKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5361);
	sp[0].o = (jobject)((func_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5362);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:floorEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5372);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:floorKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5382);
	sp[0].o = (jobject)((func_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(5383);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:newImmutableEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5388);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_java_util_AbstractMap$SimpleImmutableEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractMap$SimpleImmutableEntry);
	init_java_util_AbstractMap$SimpleImmutableEntry_java_util_Map$Entry(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:toComparable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5393);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5394);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(5396);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Comparable, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:keyCompare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5400);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(5401);
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(5400);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:minimum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5405);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5406);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(5408);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5409);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_left;
	frame[0].o = sp[0].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(5411);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:maximum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5415);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5416);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(5418);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5419);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_right;
	frame[0].o = sp[0].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(5421);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:entrySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5434);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5435);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$3);
	init_java_util_TreeMap$3_java_util_TreeMap(ctx, sp[1].o, (frame[0].o));
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_entrySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(5464);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:navigableKeySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5475);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_navigableKeySet;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_navigableKeySet;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(5476);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(ctx, sp[1].o, (frame[0].o));
	LINE_NUMBER(5477);
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet])(ctx, sp[1].o);
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_navigableKeySet = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(5475);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:descendingKeySet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5487);
	sp[0].o = (jobject)((func_java_util_TreeMap_descendingMap_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_descendingMap_R_java_util_NavigableMap])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_descendingMap_R_java_util_NavigableMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:descendingMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5497);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_descendingMap;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_descendingMap;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(5498);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap(ctx, sp[1].o, (frame[0].o));
	((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_descendingMap = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(5497);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:subMap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(5509);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	if (temp0 > 0) goto label_1;
	}
	{
	LINE_NUMBER(5510);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[0].o), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5513);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:headMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5524);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(5525);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:tailMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5536);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(5537);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:subMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5566);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5567);
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	if (temp0 > 0) goto label_3;
	}
	{
	LINE_NUMBER(5568);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5571);
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	if (temp0 > 0) goto label_3;
	}
	{
	LINE_NUMBER(5572);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(5575);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:headMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5600);
	sp[0].o = (jobject)((func_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:tailMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5626);
	sp[0].o = (jobject)((func_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap:access$200", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap[] {
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
	(void *) M_java_util_TreeMap_clear,
	(void *) M_java_util_TreeMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap_entrySet_R_java_util_Set,
	(void *) M_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_isEmpty_R_boolean,
	(void *) M_java_util_TreeMap_keySet_R_java_util_Set,
	(void *) M_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_TreeMap_size_R_int,
	(void *) M_java_util_TreeMap_values_R_java_util_Collection,
	(void *) M_java_util_TreeMap_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap_firstKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap_lastKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap_firstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_lastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap_descendingMap_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object,
	(void *) M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object,
	(void *) M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_balance_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object,
	(void *) M_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object,
	(void *) M_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object,
	(void *) M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_fixup_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry,
	(void *) M_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int,
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
	{ "addToLast", "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/TreeMap$Node;" },
	{ "containsValue", "(Ljava/util/TreeMap$Entry;Ljava/lang/Object;)Z" },
	{ "find", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "createEntry", "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;" },
	{ "findSmallestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "findBiggestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "findCeilingEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findFloorEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findLowerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findHigherEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findNode", "(Ljava/lang/Object;)Ljava/util/TreeMap$Node;" },
	{ "cmp", "(Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "appendFromLeft", "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "attachToLeft", "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V" },
	{ "appendFromRight", "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "attachToRight", "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V" },
	{ "createNode", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/TreeMap$Node;" },
	{ "balance", "(Ljava/util/TreeMap$Node;)V" },
	{ "rightRotate", "(Ljava/util/TreeMap$Node;)V" },
	{ "leftRotate", "(Ljava/util/TreeMap$Node;)V" },
	{ "removeLeftmost", "(Ljava/util/TreeMap$Node;)Ljava/lang/Object;" },
	{ "removeRightmost", "(Ljava/util/TreeMap$Node;)Ljava/lang/Object;" },
	{ "removeMiddleElement", "(Ljava/util/TreeMap$Node;I)Ljava/lang/Object;" },
	{ "deleteNode", "(Ljava/util/TreeMap$Node;)V" },
	{ "attachToParentNoFixup", "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V" },
	{ "attachToParent", "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V" },
	{ "attachNullToParent", "(Ljava/util/TreeMap$Node;)V" },
	{ "fixNextChain", "(Ljava/util/TreeMap$Node;)V" },
	{ "fixup", "(Ljava/util/TreeMap$Node;)V" },
	{ "newImmutableEntry", "(Ljava/util/TreeMap$Entry;)Ljava/util/AbstractMap$SimpleImmutableEntry;" },
	{ "keyCompare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass interfaces[] { &class_java_util_NavigableMap, };

static jclass innerClasses[] {
	&class_java_util_TreeMap$Node,
	&class_java_util_TreeMap$Entry,
	&class_java_util_TreeMap$AscendingSubMap,
	&class_java_util_TreeMap$DescendingSubMap,
	&class_java_util_TreeMap$SubMap,
	&class_java_util_TreeMap$UnboundedValueIterator,
	&class_java_util_TreeMap$UnboundedKeyIterator,
	&class_java_util_TreeMap$UnboundedEntryIterator,
	&class_java_util_TreeMap$TreeMapEntry,
	&class_java_util_TreeMap$AbstractMapIterator,
	&class_java_util_TreeMap$NullSubMapValuesCollection,
	&class_java_util_TreeMap$NavigableSubMap,
	&class_java_util_TreeMap$DescendingSubMapKeySet,
	&class_java_util_TreeMap$AscendingSubMapKeySet,
	&class_java_util_TreeMap$DescendingSubMapEntrySet,
	&class_java_util_TreeMap$AscendingSubMapEntrySet,
	&class_java_util_TreeMap$SubMapEntrySet,
	&class_java_util_TreeMap$SubMapKeySet,
	&class_java_util_TreeMap$BoundedValueIterator,
	&class_java_util_TreeMap$BoundedKeyIterator,
	&class_java_util_TreeMap$BoundedEntryIterator,
	&class_java_util_TreeMap$BoundedMapIterator,
	&class_java_util_TreeMap$SubMapValuesCollection,
	&class_java_util_TreeMap$DescendingSubMapKeyIterator,
	&class_java_util_TreeMap$DescendingSubMapEntryIterator,
	&class_java_util_TreeMap$DescendingSubMapIterator,
	&class_java_util_TreeMap$AscendingSubMapKeyIterator,
	&class_java_util_TreeMap$AscendingSubMapEntryIterator,
	&class_java_util_TreeMap$AscendingSubMapIterator,
	&class_java_util_TreeMap$AbstractSubMapIterator,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_TreeMap_serialVersionUID, "J", 26 },
	{ "size", &class_int, offsetof(java_util_TreeMap, F_size), "I", 128 },
	{ "root", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap, F_root), "Ljava/util/TreeMap$Node;", 128 },
	{ "comparator", &class_java_util_Comparator, offsetof(java_util_TreeMap, F_comparator), "Ljava/util/Comparator;", 0 },
	{ "modCount", &class_int, offsetof(java_util_TreeMap, F_modCount), "I", 128 },
	{ "entrySet", &class_java_util_Set, offsetof(java_util_TreeMap, F_entrySet), "Ljava/util/Set;", 128 },
	{ "descendingMap", &class_java_util_NavigableMap, offsetof(java_util_TreeMap, F_descendingMap), "Ljava/util/NavigableMap;", 128 },
	{ "navigableKeySet", &class_java_util_NavigableSet, offsetof(java_util_TreeMap, F_navigableKeySet), "Ljava/util/NavigableSet;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeMap_java_util_Comparator, 0, "(Ljava/util/Comparator;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeMap_java_util_SortedMap, 0, "(Ljava/util/SortedMap;)V", 1 },
	{ "addToLast", (intptr_t) M_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/TreeMap$Node;", 0 },
	{ "clear", (intptr_t) M_java_util_TreeMap_clear, VTABLE_java_util_TreeMap_clear, "()V", 1 },
	{ "comparator", (intptr_t) M_java_util_TreeMap_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "containsKey", (intptr_t) M_java_util_TreeMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_TreeMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean, "(Ljava/util/TreeMap$Entry;Ljava/lang/Object;)Z", 2 },
	{ "find", (intptr_t) M_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "createEntry", (intptr_t) M_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;", 0 },
	{ "findSmallestEntry", (intptr_t) M_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 0 },
	{ "findBiggestEntry", (intptr_t) M_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 0 },
	{ "findCeilingEntry", (intptr_t) M_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "findFloorEntry", (intptr_t) M_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "findLowerEntry", (intptr_t) M_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "findHigherEntry", (intptr_t) M_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "firstKey", (intptr_t) M_java_util_TreeMap_firstKey_R_java_lang_Object, VTABLE_java_util_TreeMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "findNode", (intptr_t) M_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node, "(Ljava/lang/Object;)Ljava/util/TreeMap$Node;", 0 },
	{ "get", (intptr_t) M_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "keySet", (intptr_t) M_java_util_TreeMap_keySet_R_java_util_Set, VTABLE_java_util_TreeMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "lastKey", (intptr_t) M_java_util_TreeMap_lastKey_R_java_lang_Object, VTABLE_java_util_TreeMap_lastKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "maximum", (intptr_t) SM_java_util_TreeMap_maximum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", 8 },
	{ "minimum", (intptr_t) SM_java_util_TreeMap_minimum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", 8 },
	{ "predecessor", (intptr_t) SM_java_util_TreeMap_predecessor_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", 8 },
	{ "successor", (intptr_t) SM_java_util_TreeMap_successor_java_util_TreeMap$Node_R_java_util_TreeMap$Node, 0, "(Ljava/util/TreeMap$Node;)Ljava/util/TreeMap$Node;", 10 },
	{ "cmp", (intptr_t) M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I", 2 },
	{ "put", (intptr_t) M_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putImpl", (intptr_t) M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "appendFromLeft", (intptr_t) M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object, VTABLE_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object, "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)V", 2 },
	{ "attachToLeft", (intptr_t) M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V", 2 },
	{ "appendFromRight", (intptr_t) M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object, VTABLE_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object, "(Ljava/util/TreeMap$Node;Ljava/lang/Object;Ljava/lang/Object;)V", 2 },
	{ "attachToRight", (intptr_t) M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V", 2 },
	{ "createNode", (intptr_t) M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/TreeMap$Node;", 2 },
	{ "balance", (intptr_t) M_java_util_TreeMap_balance_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_balance_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 0 },
	{ "rightRotate", (intptr_t) M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_rightRotate_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "leftRotate", (intptr_t) M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_leftRotate_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "putAll", (intptr_t) M_java_util_TreeMap_putAll_java_util_Map, VTABLE_java_util_TreeMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "remove", (intptr_t) M_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeLeftmost", (intptr_t) M_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object, VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object, "(Ljava/util/TreeMap$Node;)Ljava/lang/Object;", 0 },
	{ "removeRightmost", (intptr_t) M_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object, VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object, "(Ljava/util/TreeMap$Node;)Ljava/lang/Object;", 0 },
	{ "removeMiddleElement", (intptr_t) M_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object, VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object, "(Ljava/util/TreeMap$Node;I)Ljava/lang/Object;", 0 },
	{ "deleteNode", (intptr_t) M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_deleteNode_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "attachToParentNoFixup", (intptr_t) M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V", 2 },
	{ "attachToParent", (intptr_t) M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;Ljava/util/TreeMap$Node;)V", 2 },
	{ "attachNullToParent", (intptr_t) M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "fixNextChain", (intptr_t) M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "fixup", (intptr_t) M_java_util_TreeMap_fixup_java_util_TreeMap$Node, VTABLE_java_util_TreeMap_fixup_java_util_TreeMap$Node, "(Ljava/util/TreeMap$Node;)V", 2 },
	{ "size", (intptr_t) M_java_util_TreeMap_size_R_int, VTABLE_java_util_TreeMap_size_R_int, "()I", 1 },
	{ "values", (intptr_t) M_java_util_TreeMap_values_R_java_util_Collection, VTABLE_java_util_TreeMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "firstEntry", (intptr_t) M_java_util_TreeMap_firstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_firstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "lastEntry", (intptr_t) M_java_util_TreeMap_lastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_lastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollFirstEntry", (intptr_t) M_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollLastEntry", (intptr_t) M_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "higherEntry", (intptr_t) M_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "higherKey", (intptr_t) M_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "lowerEntry", (intptr_t) M_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "lowerKey", (intptr_t) M_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "ceilingEntry", (intptr_t) M_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "ceilingKey", (intptr_t) M_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "floorEntry", (intptr_t) M_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "floorKey", (intptr_t) M_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "newImmutableEntry", (intptr_t) M_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry, VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry, "(Ljava/util/TreeMap$Entry;)Ljava/util/AbstractMap$SimpleImmutableEntry;", 16 },
	{ "toComparable", (intptr_t) SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable, 0, "(Ljava/lang/Object;)Ljava/lang/Comparable;", 10 },
	{ "keyCompare", (intptr_t) M_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 0 },
	{ "minimum", (intptr_t) SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node, 0, "(Ljava/util/TreeMap$Node;)Ljava/util/TreeMap$Node;", 8 },
	{ "maximum", (intptr_t) SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node, 0, "(Ljava/util/TreeMap$Node;)Ljava/util/TreeMap$Node;", 8 },
	{ "entrySet", (intptr_t) M_java_util_TreeMap_entrySet_R_java_util_Set, VTABLE_java_util_TreeMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "navigableKeySet", (intptr_t) M_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "descendingKeySet", (intptr_t) M_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "descendingMap", (intptr_t) M_java_util_TreeMap_descendingMap_R_java_util_NavigableMap, VTABLE_java_util_TreeMap_descendingMap_R_java_util_NavigableMap, "()Ljava/util/NavigableMap;", 1 },
	{ "subMap", (intptr_t) M_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "subMap", (intptr_t) M_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "access$100", (intptr_t) SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable, 0, "(Ljava/lang/Object;)Ljava/lang/Comparable;", 4104 },
	{ "access$200", (intptr_t) SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/TreeMap;Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I", 4104 },
};

Class class_java_util_TreeMap{
		.nativeName = (intptr_t) "java/util/TreeMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_TreeMap),
		.classVtable = (intptr_t) vtable_java_util_TreeMap,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 30,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 80,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 90,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap = registerClass(&class_java_util_TreeMap);

}
