#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/lang/Object.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap.h"

extern "C" {


void mark_java_util_WeakHashMap$WeakHashMapSpliterator(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (java_util_WeakHashMap$WeakHashMapSpliterator *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
}

void clinit_java_util_WeakHashMap$WeakHashMapSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_WeakHashMap$WeakHashMapSpliterator_java_util_WeakHashMap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$WeakHashMapSpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$WeakHashMapSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1031);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1032);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(1033);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(1034);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (frame[3].i);
	LINE_NUMBER(1035);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (frame[4].i);
	LINE_NUMBER(1036);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = (frame[5].i);
	LINE_NUMBER(1037);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$WeakHashMapSpliterator:getFence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1041);
	jint temp0 = (jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[1].i = temp0;
	if (temp0 >= 0) goto label_2;
	}
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_map;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1043);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_WeakHashMap_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_WeakHashMap_size_R_int])(ctx, (frame[2].o));
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_est = temp0;
	LINE_NUMBER(1044);
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_WeakHashMap *) NULL_CHECK((frame[2].o)))->F_modCount);
	LINE_NUMBER(1045);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_WeakHashMap *) NULL_CHECK((frame[2].o)))->F_table;
	jint temp1 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK(sp[0].o))->F_fence = temp1;
	frame[1].i = temp1;
	}
label_2:;
	{
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jlong M_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$WeakHashMapSpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1051);
	jint temp0 = (jint)((func_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int])(ctx, (frame[0].o));
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return (jlong(((jint)((java_util_WeakHashMap$WeakHashMapSpliterator *) NULL_CHECK((frame[0].o)))->F_est)));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$WeakHashMapSpliterator[] {
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
	(void *) M_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int,
	(void *) M_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long,
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
	{ "getFence", "()I" },
	{ "estimateSize", "()J" },
};

static FieldMetadata fields[] {
	{ "map", &class_java_util_WeakHashMap, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_map), "Ljava/util/WeakHashMap;", 16 },
	{ "current", &class_java_util_WeakHashMap$Entry, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_current), "Ljava/util/WeakHashMap$Entry;", 0 },
	{ "index", &class_int, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_index), "I", 0 },
	{ "fence", &class_int, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_fence), "I", 0 },
	{ "est", &class_int, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_est), "I", 0 },
	{ "expectedModCount", &class_int, offsetof(java_util_WeakHashMap$WeakHashMapSpliterator, F_expectedModCount), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$WeakHashMapSpliterator_java_util_WeakHashMap_int_int_int_int, 0, "(Ljava/util/WeakHashMap;IIII)V", 0 },
	{ "getFence", (intptr_t) M_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int, VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int, "()I", 16 },
	{ "estimateSize", (intptr_t) M_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long, VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long, "()J", 17 },
};

Class class_java_util_WeakHashMap$WeakHashMapSpliterator{
		.nativeName = (intptr_t) "java/util/WeakHashMap$WeakHashMapSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_WeakHashMap$WeakHashMapSpliterator),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$WeakHashMapSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$WeakHashMapSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$WeakHashMapSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$WeakHashMapSpliterator = registerClass(&class_java_util_WeakHashMap$WeakHashMapSpliterator);

}

