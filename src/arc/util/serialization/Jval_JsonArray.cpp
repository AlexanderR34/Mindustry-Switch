#include "arc/util/serialization/Jval_JsonArray.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Jval.h"
#include "arc/struct/Seq.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_util_serialization_Jval$JsonArray(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_Seq(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_serialization_Jval$JsonArray *) object;
}

void clinit_arc_util_serialization_Jval$JsonArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_Seq(ctx);
}

void init_arc_util_serialization_Jval$JsonArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$JsonArray:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$JsonArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(362);
	init_arc_struct_Seq(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$JsonArray[] {
	(void *) M_arc_struct_Seq_hashCode_R_int,
	(void *) M_arc_struct_Seq_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_Seq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_Seq_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_Seq_each_arc_func_Cons,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap,
	(void *) M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet,
	(void *) M_arc_struct_Seq_copy_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_list_R_java_util_ArrayList,
	(void *) M_arc_struct_Seq_sumf_arc_func_Floatf_R_float,
	(void *) M_arc_struct_Seq_sum_arc_func_Intf_R_int,
	(void *) M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons,
	(void *) M_arc_struct_Seq_replace_arc_func_Func,
	(void *) M_arc_struct_Seq_flatten_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq,
	(void *) M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq,
	(void *) M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object,
	(void *) M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object,
	(void *) M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object,
	(void *) M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_arc_struct_Seq,
	(void *) M_arc_struct_Seq_set_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_getFrac_float_R_java_lang_Object,
	(void *) M_arc_struct_Seq_get_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_set_int_java_lang_Object,
	(void *) M_arc_struct_Seq_insert_int_java_lang_Object,
	(void *) M_arc_struct_Seq_swap_int_int,
	(void *) M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_R_int,
	(void *) M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_Seq_remove_java_lang_Object_R_boolean,
	(void *) M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean,
	(void *) M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_Seq_remove_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_removeRange_int_int,
	(void *) M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean,
	(void *) M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean,
	(void *) M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_Seq_pop_R_java_lang_Object,
	(void *) M_arc_struct_Seq_peek_R_java_lang_Object,
	(void *) M_arc_struct_Seq_first_R_java_lang_Object,
	(void *) M_arc_struct_Seq_firstOpt_R_java_lang_Object,
	(void *) M_arc_struct_Seq_isEmpty_R_boolean,
	(void *) M_arc_struct_Seq_any_R_boolean,
	(void *) M_arc_struct_Seq_clear_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shrink_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_sort_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_distinct_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_as_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_count_arc_func_Boolf_R_int,
	(void *) M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object,
	(void *) M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int,
	(void *) M_arc_struct_Seq_reverse_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_shuffle_R_arc_struct_Seq,
	(void *) M_arc_struct_Seq_truncate_int,
	(void *) M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_R_java_lang_Object,
	(void *) M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String,
	(void *) M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object,
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
	{ "each", "(Larc/func/Cons;)V" },
	{ "asMap", "(Larc/func/Func;Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupBy", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "groupByCount", "(Larc/func/Func;)Larc/struct/ObjectIntMap;" },
	{ "asMap", "(Larc/func/Func;)Larc/struct/ObjectMap;" },
	{ "asSet", "()Larc/struct/ObjectSet;" },
	{ "copy", "()Larc/struct/Seq;" },
	{ "list", "()Ljava/util/ArrayList;" },
	{ "sumf", "(Larc/func/Floatf;)F" },
	{ "sum", "(Larc/func/Intf;)I" },
	{ "each", "(Larc/func/Boolf;Larc/func/Cons;)V" },
	{ "replace", "(Larc/func/Func;)V" },
	{ "flatten", "()Larc/struct/Seq;" },
	{ "flatMap", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "map", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "mapInt", "(Larc/func/Intf;)Larc/struct/IntSeq;" },
	{ "mapInt", "(Larc/func/Intf;Larc/func/Boolf;)Larc/struct/IntSeq;" },
	{ "mapFloat", "(Larc/func/Floatf;)Larc/struct/FloatSeq;" },
	{ "reduce", "(Ljava/lang/Object;Larc/func/Func2;)Ljava/lang/Object;" },
	{ "allMatch", "(Larc/func/Boolf;)Z" },
	{ "contains", "(Larc/func/Boolf;)Z" },
	{ "min", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "max", "(Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Boolf;Ljava/util/Comparator;)Ljava/lang/Object;" },
	{ "min", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "max", "(Larc/func/Floatf;)Ljava/lang/Object;" },
	{ "find", "(Larc/func/Boolf;)Ljava/lang/Object;" },
	{ "with", "(Larc/func/Cons;)Larc/struct/Seq;" },
	{ "addUnique", "(Ljava/lang/Object;)Z" },
	{ "add", "(Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "add", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "add", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "addAll", "(Larc/struct/Seq;II)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;)Larc/struct/Seq;" },
	{ "addAll", "([Ljava/lang/Object;II)Larc/struct/Seq;" },
	{ "addAll", "(Ljava/lang/Iterable;)Larc/struct/Seq;" },
	{ "set", "(Larc/struct/Seq;)V" },
	{ "set", "([Ljava/lang/Object;)V" },
	{ "getFrac", "(F)Ljava/lang/Object;" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;)V" },
	{ "swap", "(II)V" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "containsAll", "(Larc/struct/Seq;)Z" },
	{ "containsAll", "(Larc/struct/Seq;Z)Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "contains", "(Ljava/lang/Object;Z)Z" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "indexOf", "(Ljava/lang/Object;Z)I" },
	{ "indexOf", "(Larc/func/Boolf;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;Z)I" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "remove", "(Larc/func/Boolf;)Z" },
	{ "remove", "(Ljava/lang/Object;Z)Z" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "removeAll", "(Larc/struct/Seq;)Z" },
	{ "removeAll", "(Larc/struct/Seq;Z)Z" },
	{ "pop", "(Larc/func/Prov;)Ljava/lang/Object;" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "firstOpt", "()Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "any", "()Z" },
	{ "clear", "()Larc/struct/Seq;" },
	{ "shrink", "()[Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
	{ "setSize", "(I)[Ljava/lang/Object;" },
	{ "resize", "(I)[Ljava/lang/Object;" },
	{ "sort", "()Larc/struct/Seq;" },
	{ "sort", "(Ljava/util/Comparator;)Larc/struct/Seq;" },
	{ "sort", "(Larc/func/Floatf;)Larc/struct/Seq;" },
	{ "sortComparing", "(Larc/func/Func;)Larc/struct/Seq;" },
	{ "selectFrom", "(Larc/struct/Seq;Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "distinct", "()Larc/struct/Seq;" },
	{ "as", "()Larc/struct/Seq;" },
	{ "select", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "retainAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "count", "(Larc/func/Boolf;)I" },
	{ "selectRanked", "(Ljava/util/Comparator;I)Ljava/lang/Object;" },
	{ "selectRankedIndex", "(Ljava/util/Comparator;I)I" },
	{ "reverse", "()Larc/struct/Seq;" },
	{ "shuffle", "()Larc/struct/Seq;" },
	{ "truncate", "(I)V" },
	{ "random", "(Larc/math/Rand;)Ljava/lang/Object;" },
	{ "random", "()Ljava/lang/Object;" },
	{ "random", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "toString", "(Ljava/lang/String;Larc/func/Func;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "lambda$selectFrom$0", "(Larc/func/Boolf;Ljava/lang/Object;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$JsonArray, 0, "()V", 1 },
};

Class class_arc_util_serialization_Jval$JsonArray{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$JsonArray",
		.parentClass = (intptr_t) &class_arc_struct_Seq,
		.size = sizeof(arc_util_serialization_Jval$JsonArray),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$JsonArray,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$JsonArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$JsonArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$JsonArray = registerClass(&class_arc_util_serialization_Jval$JsonArray);

}

