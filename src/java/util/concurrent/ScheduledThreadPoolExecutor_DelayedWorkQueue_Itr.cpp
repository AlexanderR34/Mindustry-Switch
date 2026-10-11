#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue_Itr.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue_Itr.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue.h"
#include "java/util/concurrent/RunnableScheduledFuture.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_Array1_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1298);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1296);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet = (jint(-1));
	LINE_NUMBER(1299);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[2].o);
	LINE_NUMBER(1300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1303);
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr:next", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1307);
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1308);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK(sp[2].o))->F_cursor;
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK(sp[2].o))->F_cursor = (temp0 + (jint(1)));
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK(sp[1].o))->F_lastRet = temp0;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1313);
	if (((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1314);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet))));
	LINE_NUMBER(1316);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet = (jint(-1));
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr[] {
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_hasNext_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable,
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
	{ "next", "()Ljava/lang/Runnable;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_java_util_concurrent_RunnableScheduledFuture, 1), offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, F_array), "[Ljava/util/concurrent/RunnableScheduledFuture;", 16 },
	{ "cursor", &class_int, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, F_cursor), "I", 0 },
	{ "lastRet", &class_int, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, F_lastRet), "I", 0 },
	{ "this$0", &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, F_this$0), "Ljava/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_Array1_java_util_concurrent_RunnableScheduledFuture, 0, "(Ljava/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue;[Ljava/util/concurrent/RunnableScheduledFuture;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_hasNext_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Runnable, "()Ljava/lang/Runnable;", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_remove, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_remove, "()V", 1 },
	{ "next", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr{
		.nativeName = (intptr_t) "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr = registerClass(&class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr);

}

