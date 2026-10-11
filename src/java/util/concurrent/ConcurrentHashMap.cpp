#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/HashMap.h"
#include "java/util/concurrent/ConcurrentMap.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/util/Map.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_concurrent_ConcurrentHashMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_HashMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ConcurrentHashMap *) object;
}

void clinit_java_util_concurrent_ConcurrentHashMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_HashMap(ctx);
}

void init_java_util_concurrent_ConcurrentHashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ConcurrentHashMap_int_float_int(jcontext ctx, jobject self, jint param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(16);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ConcurrentHashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(19);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ConcurrentHashMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ConcurrentHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((func_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ConcurrentHashMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)M_java_util_HashMap_isEmpty_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ConcurrentHashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)M_java_util_HashMap_containsKey_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:putAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	M_java_util_HashMap_putAll_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(52);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ConcurrentHashMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	M_java_util_HashMap_clear(ctx, (frame[0].o));
	LINE_NUMBER(62);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ConcurrentHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:containsValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)M_java_util_HashMap_containsValue_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:keySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_java_util_HashMap(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_HashMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_keySet_R_java_util_Set])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_java_util_HashMap(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_java_util_HashMap(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_HashMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_entrySet_R_java_util_Set])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:putIfAbsent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ConcurrentHashMap_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ConcurrentHashMap:clone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)M_java_util_HashMap_clone_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ConcurrentHashMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ConcurrentHashMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ConcurrentHashMap_clear,
	(void *) M_java_util_concurrent_ConcurrentHashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ConcurrentHashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ConcurrentHashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_ConcurrentHashMap_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_ConcurrentHashMap_keySet_R_java_util_Set,
	(void *) M_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map,
	(void *) M_java_util_concurrent_ConcurrentHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_HashMap_size_R_int,
	(void *) M_java_util_concurrent_ConcurrentHashMap_values_R_java_util_Collection,
	(void *) M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_computeThreshold,
	(void *) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putAllImpl_java_util_Map,
	(void *) M_java_util_HashMap_rehash_int,
	(void *) M_java_util_HashMap_rehash,
	(void *) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry,
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
	{ "newElementArray", "(I)[Ljava/util/HashMap$Entry;" },
	{ "computeThreshold", "()V" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "findNonNullKeyEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "findNullKeyEntry", "()Ljava/util/HashMap$Entry;" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "createEntry", "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "createHashedEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
	{ "rehash", "(I)V" },
	{ "rehash", "()V" },
	{ "removeEntry", "(Ljava/util/HashMap$Entry;)V" },
	{ "removeEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
};

static jclass interfaces[] { &class_java_util_concurrent_ConcurrentMap, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ConcurrentHashMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ConcurrentHashMap_int_float_int, 0, "(IFI)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ConcurrentHashMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ConcurrentHashMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ConcurrentHashMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_isEmpty_R_boolean, VTABLE_java_util_concurrent_ConcurrentHashMap_isEmpty_R_boolean, "()Z", 33 },
	{ "get", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "containsKey", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ConcurrentHashMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "put", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "putAll", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map, VTABLE_java_util_concurrent_ConcurrentHashMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 33 },
	{ "remove", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "clear", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_clear, VTABLE_java_util_concurrent_ConcurrentHashMap_clear, "()V", 33 },
	{ "containsValue", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ConcurrentHashMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "keySet", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_keySet_R_java_util_Set, VTABLE_java_util_concurrent_ConcurrentHashMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 33 },
	{ "values", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_values_R_java_util_Collection, VTABLE_java_util_concurrent_ConcurrentHashMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 33 },
	{ "entrySet", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_entrySet_R_java_util_Set, VTABLE_java_util_concurrent_ConcurrentHashMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 33 },
	{ "putIfAbsent", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "remove", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ConcurrentHashMap_remove_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 33 },
	{ "replace", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 33 },
	{ "replace", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "clone", (intptr_t) M_java_util_concurrent_ConcurrentHashMap_clone_R_java_lang_Object, VTABLE_java_util_concurrent_ConcurrentHashMap_clone_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
};

Class class_java_util_concurrent_ConcurrentHashMap{
		.nativeName = (intptr_t) "java/util/concurrent/ConcurrentHashMap",
		.parentClass = (intptr_t) &class_java_util_HashMap,
		.size = sizeof(java_util_concurrent_ConcurrentHashMap),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ConcurrentHashMap,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ConcurrentHashMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ConcurrentHashMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ConcurrentHashMap = registerClass(&class_java_util_concurrent_ConcurrentHashMap);

}
