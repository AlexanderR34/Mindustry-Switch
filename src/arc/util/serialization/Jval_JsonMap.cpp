#include "arc/util/serialization/Jval_JsonMap.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_JsonMap.h"
#include "arc/struct/ArrayMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_util_serialization_Jval$JsonMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ArrayMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_serialization_Jval$JsonMap *) object;
}

void clinit_arc_util_serialization_Jval$JsonMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ArrayMap(ctx);
}

void init_arc_util_serialization_Jval$JsonMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$JsonMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$JsonMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(350);
	init_arc_struct_ArrayMap(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$JsonMap:putAdd", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	((func_arc_util_serialization_Jval$JsonMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_resize_int])(ctx, sp[0].o, temp0);
	}
label_1:;
	{
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size;
	((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size = (temp0 + (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(357);
	sp[0].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$JsonMap[] {
	(void *) M_arc_struct_ArrayMap_hashCode_R_int,
	(void *) M_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ArrayMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ArrayMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int,
	(void *) M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int,
	(void *) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap,
	(void *) M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int,
	(void *) M_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_firstKey_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_firstValue_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_setKey_int_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_setValue_int_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int,
	(void *) M_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ArrayMap_removeIndex_int,
	(void *) M_arc_struct_ArrayMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ArrayMap_peekKey_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_peekValue_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap_clear_int,
	(void *) M_arc_struct_ArrayMap_clear,
	(void *) M_arc_struct_ArrayMap_shrink,
	(void *) M_arc_struct_ArrayMap_ensureCapacity_int,
	(void *) M_arc_struct_ArrayMap_resize_int,
	(void *) M_arc_struct_ArrayMap_reverse,
	(void *) M_arc_struct_ArrayMap_shuffle,
	(void *) M_arc_struct_ArrayMap_truncate_int,
	(void *) M_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries,
	(void *) M_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values,
	(void *) M_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys,
	(void *) M_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval,
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
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;I)I" },
	{ "putAll", "(Larc/struct/ArrayMap;)V" },
	{ "putAll", "(Larc/struct/ArrayMap;II)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "getKeyAt", "(I)Ljava/lang/Object;" },
	{ "getValueAt", "(I)Ljava/lang/Object;" },
	{ "firstKey", "()Ljava/lang/Object;" },
	{ "firstValue", "()Ljava/lang/Object;" },
	{ "setKey", "(ILjava/lang/Object;)V" },
	{ "setValue", "(ILjava/lang/Object;)V" },
	{ "insert", "(ILjava/lang/Object;Ljava/lang/Object;)V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "indexOfKey", "(Ljava/lang/Object;)I" },
	{ "indexOfValue", "(Ljava/lang/Object;Z)I" },
	{ "removeKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "removeValue", "(Ljava/lang/Object;Z)Z" },
	{ "removeIndex", "(I)V" },
	{ "isEmpty", "()Z" },
	{ "peekKey", "()Ljava/lang/Object;" },
	{ "peekValue", "()Ljava/lang/Object;" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "shrink", "()V" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "entries", "()Larc/struct/ArrayMap$Entries;" },
	{ "values", "()Larc/struct/ArrayMap$Values;" },
	{ "keys", "()Larc/struct/ArrayMap$Keys;" },
	{ "putAdd", "(Ljava/lang/String;Larc/util/serialization/Jval;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$JsonMap, 0, "()V", 1 },
	{ "putAdd", (intptr_t) M_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval, VTABLE_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval, "(Ljava/lang/String;Larc/util/serialization/Jval;)V", 4 },
};

Class class_arc_util_serialization_Jval$JsonMap{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$JsonMap",
		.parentClass = (intptr_t) &class_arc_struct_ArrayMap,
		.size = sizeof(arc_util_serialization_Jval$JsonMap),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$JsonMap,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$JsonMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$JsonMap,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$JsonMap = registerClass(&class_arc_util_serialization_Jval$JsonMap);

}

