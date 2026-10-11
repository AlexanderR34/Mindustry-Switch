#include "java/util/Collections_SingletonMap_1_1.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Map_Entry.h"
#include "java/util/Collections_SingletonMap_1_1.h"
#include "java/util/Collections_SingletonMap.h"
#include "java/util/Collections_SingletonMap_1.h"
#include "java/util/Collections_SingletonMap_1_1_1.h"

extern "C" {


void mark_java_util_Collections$SingletonMap$1$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$SingletonMap$1$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_java_util_Collections$SingletonMap$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$SingletonMap$1$1_java_util_Collections$SingletonMap$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SingletonMap$1$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SingletonMap$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(367);
	((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SingletonMap$1$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SingletonMap$1$1:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return ((jint)((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SingletonMap$1$1:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	if (((jint)((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	LINE_NUMBER(375);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(378);
	((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(379);
	clinit_java_util_Collections$SingletonMap$1$1$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SingletonMap$1$1$1);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[2].o = (jobject)((java_util_Collections$SingletonMap$1 *) NULL_CHECK(sp[2].o))->F_this$0;
	sp[2].o = (jobject)((java_util_Collections$SingletonMap *) NULL_CHECK(sp[2].o))->F_k;
	sp[3].o = (jobject)((java_util_Collections$SingletonMap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[3].o = (jobject)((java_util_Collections$SingletonMap$1 *) NULL_CHECK(sp[3].o))->F_this$0;
	sp[3].o = (jobject)((java_util_Collections$SingletonMap *) NULL_CHECK(sp[3].o))->F_v;
	init_java_util_Collections$SingletonMap$1$1$1_java_util_Collections$SingletonMap$1$1_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$SingletonMap$1$1_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SingletonMap$1$1:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SingletonMap$1$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SingletonMap$1$1:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SingletonMap$1$1[] {
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
	(void *) M_java_util_Collections$SingletonMap$1$1_hasNext_R_boolean,
	(void *) M_java_util_Collections$SingletonMap$1$1_next_R_java_lang_Object,
	(void *) M_java_util_Collections$SingletonMap$1$1_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry,
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
	{ "next", "()Ljava/util/Map$Entry;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "hasNext", &class_boolean, offsetof(java_util_Collections$SingletonMap$1$1, F_hasNext), "Z", 0 },
	{ "this$1", &class_java_util_Collections$SingletonMap$1, offsetof(java_util_Collections$SingletonMap$1$1, F_this$1), "Ljava/util/Collections$SingletonMap$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SingletonMap$1$1_java_util_Collections$SingletonMap$1, 0, "(Ljava/util/Collections$SingletonMap$1;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_Collections$SingletonMap$1$1_hasNext_R_boolean, VTABLE_java_util_Collections$SingletonMap$1$1_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry, VTABLE_java_util_Collections$SingletonMap$1$1_next_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$SingletonMap$1$1_remove, VTABLE_java_util_Collections$SingletonMap$1$1_remove, "()V", 1 },
	{ "next", (intptr_t) M_java_util_Collections$SingletonMap$1$1_next_R_java_lang_Object, VTABLE_java_util_Collections$SingletonMap$1$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_Collections$SingletonMap$1$1{
		.nativeName = (intptr_t) "java/util/Collections$SingletonMap$1$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$SingletonMap$1$1),
		.classVtable = (intptr_t) vtable_java_util_Collections$SingletonMap$1$1,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SingletonMap$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SingletonMap$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_Collections$SingletonMap$1$1 = registerClass(&class_java_util_Collections$SingletonMap$1$1);

}

