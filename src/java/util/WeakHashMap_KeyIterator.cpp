#include "java/util/WeakHashMap_KeyIterator.h"
#include "java/util/WeakHashMap_HashIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap.h"
#include "java/util/WeakHashMap_KeyIterator.h"
#include "java/util/WeakHashMap_1.h"

extern "C" {


void mark_java_util_WeakHashMap$KeyIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_WeakHashMap$HashIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_WeakHashMap$KeyIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_WeakHashMap$KeyIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_WeakHashMap$HashIterator(ctx);
}

void init_java_util_WeakHashMap$KeyIterator_java_util_WeakHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$KeyIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$KeyIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(796);
	((java_util_WeakHashMap$KeyIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_WeakHashMap$HashIterator_java_util_WeakHashMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$KeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$KeyIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$KeyIterator_nextEntry_R_java_util_WeakHashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$KeyIterator_nextEntry_R_java_util_WeakHashMap$Entry])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_WeakHashMap$KeyIterator_java_util_WeakHashMap_java_util_WeakHashMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$KeyIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$KeyIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(796);
	init_java_util_WeakHashMap$KeyIterator_java_util_WeakHashMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$KeyIterator[] {
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
	(void *) M_java_util_WeakHashMap$HashIterator_hasNext_R_boolean,
	(void *) M_java_util_WeakHashMap$KeyIterator_next_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap$HashIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_WeakHashMap$HashIterator_nextEntry_R_java_util_WeakHashMap$Entry,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "nextEntry", "()Ljava/util/WeakHashMap$Entry;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_WeakHashMap, offsetof(java_util_WeakHashMap$KeyIterator, F_this$0), "Ljava/util/WeakHashMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$KeyIterator_java_util_WeakHashMap, 0, "(Ljava/util/WeakHashMap;)V", 2 },
	{ "next", (intptr_t) M_java_util_WeakHashMap$KeyIterator_next_R_java_lang_Object, VTABLE_java_util_WeakHashMap$KeyIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$KeyIterator_java_util_WeakHashMap_java_util_WeakHashMap$1, 0, "(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V", 4096 },
};

Class class_java_util_WeakHashMap$KeyIterator{
		.nativeName = (intptr_t) "java/util/WeakHashMap$KeyIterator",
		.parentClass = (intptr_t) &class_java_util_WeakHashMap$HashIterator,
		.size = sizeof(java_util_WeakHashMap$KeyIterator),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$KeyIterator,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$KeyIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$KeyIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$KeyIterator = registerClass(&class_java_util_WeakHashMap$KeyIterator);

}

