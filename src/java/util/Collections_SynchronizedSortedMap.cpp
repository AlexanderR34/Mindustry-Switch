#include "java/util/Collections_SynchronizedSortedMap.h"
#include "java/util/Collections_SynchronizedSortedMap.h"
#include "java/lang/Object.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Collections_SynchronizedMap.h"
#include "java/util/SortedMap.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_java_util_Collections$SynchronizedSortedMap_serialVersionUID;

void mark_java_util_Collections$SynchronizedSortedMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$SynchronizedMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$SynchronizedSortedMap *) object;
	if (self->F_sm)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sm)->clazz)->markFunction)((jobject) self->F_sm, mark, depth + 1);
}

void clinit_java_util_Collections$SynchronizedSortedMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$SynchronizedMap(ctx);
	SF_java_util_Collections$SynchronizedSortedMap_serialVersionUID = jlong(-8798146769416483793ll);
}

void init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(826);
	init_java_util_Collections$SynchronizedMap_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(827);
	((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm = (jref) (frame[1].o);
	LINE_NUMBER(828);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(831);
	init_java_util_Collections$SynchronizedMap_java_util_Map_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(832);
	((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm = (jref) (frame[1].o);
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:comparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[0].o = (jobject)((func_java_util_SortedMap_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(838);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:firstKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[0].o = (jobject)((func_java_util_SortedMap_firstKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_firstKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(844);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:headMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(849);
	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedMap);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[1].o = (jobject)((func_java_util_SortedMap_headMap_java_lang_Object_R_java_util_SortedMap) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_headMap_java_lang_Object_R_java_util_SortedMap, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(851);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:lastKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[0].o = (jobject)((func_java_util_SortedMap_lastKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_lastKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(857);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:subMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(862);
	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedMap);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[1].o = (jobject)((func_java_util_SortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(864);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedMap:tailMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(869);
	clinit_java_util_Collections$SynchronizedSortedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedMap);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedMap *) NULL_CHECK((frame[0].o)))->F_sm;
	sp[1].o = (jobject)((func_java_util_SortedMap_tailMap_java_lang_Object_R_java_util_SortedMap) resolveInterfaceMethod(ctx, &class_java_util_SortedMap, INDEX_java_util_SortedMap_tailMap_java_lang_Object_R_java_util_SortedMap, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedMap *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(871);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SynchronizedSortedMap[] {
	(void *) M_java_util_Collections$SynchronizedMap_hashCode_R_int,
	(void *) M_java_util_Collections$SynchronizedMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$SynchronizedMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$SynchronizedMap_clear,
	(void *) M_java_util_Collections$SynchronizedMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedMap_entrySet_R_java_util_Set,
	(void *) M_java_util_Collections$SynchronizedMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedMap_isEmpty_R_boolean,
	(void *) M_java_util_Collections$SynchronizedMap_keySet_R_java_util_Set,
	(void *) M_java_util_Collections$SynchronizedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_Collections$SynchronizedMap_size_R_int,
	(void *) M_java_util_Collections$SynchronizedMap_values_R_java_util_Collection,
	(void *) M_java_util_Collections$SynchronizedSortedMap_comparator_R_java_util_Comparator,
	(void *) M_java_util_Collections$SynchronizedSortedMap_firstKey_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedSortedMap_headMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_Collections$SynchronizedSortedMap_lastKey_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedSortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_Collections$SynchronizedSortedMap_tailMap_java_lang_Object_R_java_util_SortedMap,
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
};

static jclass interfaces[] { &class_java_util_SortedMap, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$SynchronizedSortedMap_serialVersionUID, "J", 26 },
	{ "sm", &class_java_util_SortedMap, offsetof(java_util_Collections$SynchronizedSortedMap, F_sm), "Ljava/util/SortedMap;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap, 0, "(Ljava/util/SortedMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedSortedMap_java_util_SortedMap_java_lang_Object, 0, "(Ljava/util/SortedMap;Ljava/lang/Object;)V", 0 },
	{ "comparator", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_comparator_R_java_util_Comparator, VTABLE_java_util_Collections$SynchronizedSortedMap_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "firstKey", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_firstKey_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedSortedMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "headMap", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_headMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_Collections$SynchronizedSortedMap_headMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "lastKey", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_lastKey_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedSortedMap_lastKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subMap", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_Collections$SynchronizedSortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_Collections$SynchronizedSortedMap_tailMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_Collections$SynchronizedSortedMap_tailMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
};

Class class_java_util_Collections$SynchronizedSortedMap{
		.nativeName = (intptr_t) "java/util/Collections$SynchronizedSortedMap",
		.parentClass = (intptr_t) &class_java_util_Collections$SynchronizedMap,
		.size = sizeof(java_util_Collections$SynchronizedSortedMap),
		.classVtable = (intptr_t) vtable_java_util_Collections$SynchronizedSortedMap,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SynchronizedSortedMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SynchronizedSortedMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$SynchronizedSortedMap = registerClass(&class_java_util_Collections$SynchronizedSortedMap);

}

