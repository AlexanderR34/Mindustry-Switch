#include "java/util/concurrent/LinkedBlockingQueue_Itr.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/LinkedBlockingQueue_Node.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/concurrent/LinkedBlockingQueue_Itr.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_concurrent_LinkedBlockingQueue$Itr(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_LinkedBlockingQueue$Itr *) object;
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_lastRet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastRet)->clazz)->markFunction)((jobject) self->F_lastRet, mark, depth + 1);
	if (self->F_currentElement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentElement)->clazz)->markFunction)((jobject) self->F_currentElement, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_LinkedBlockingQueue$Itr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_LinkedBlockingQueue$Itr_java_util_concurrent_LinkedBlockingQueue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Itr:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_LinkedBlockingQueue$Itr(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(789);
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(790);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(792);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[1].o)))->F_head;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(793);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[1].o))->F_item;
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK(sp[0].o))->F_currentElement = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(796);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[1].o));
	LINE_NUMBER(797);
	goto label_9;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(796);
	frame[2].o = sp[0].o;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[1].o));
	LINE_NUMBER(797);
	throwException(ctx, (frame[2].o));	}
label_9:;
	LINE_NUMBER(798);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Itr:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Itr:nextNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(814);
	if ((frame[2].o) != (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(816);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_item;
	if (sp[0].o == nullptr) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(818);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(819);
	goto label_0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Itr:next", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(826);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_currentElement;
	frame[1].o = sp[0].o;
	LINE_NUMBER(828);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK(sp[0].o))->F_lastRet = (jref) sp[1].o;
	LINE_NUMBER(829);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)M_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node(ctx, sp[1].o, sp[2].o);
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(830);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	sp += 1;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ACONST_NULL();
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_item;
	sp += 1;
	}
label_11:;
	{
	sp -= 2;
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK(sp[0].o))->F_currentElement = (jref) sp[1].o;
	LINE_NUMBER(831);
	frame[2].o = (frame[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, sp[0].o);
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(833);
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, sp[0].o);
	LINE_NUMBER(834);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue$Itr_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Itr:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(839);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet;
	frame[1].o = sp[0].o;
	LINE_NUMBER(843);
	((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_lastRet = (jref) (jobject(nullptr));
	LINE_NUMBER(844);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_head;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(845);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(847);
	if ((frame[3].o) != (frame[1].o)) goto label_14;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node])(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	LINE_NUMBER(849);
	goto label_1;
	}
label_14:;
	{
	LINE_NUMBER(846);
	frame[2].o = (frame[3].o);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_12;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, sp[0].o);
	LINE_NUMBER(854);
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(853);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, sp[0].o);
	LINE_NUMBER(854);
	throwException(ctx, (frame[4].o));	}
label_18:;
	LINE_NUMBER(855);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_LinkedBlockingQueue$Itr[] {
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
	(void *) M_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue$Itr_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node,
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
	{ "nextNode", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)Ljava/util/concurrent/LinkedBlockingQueue$Node;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "current", &class_java_util_concurrent_LinkedBlockingQueue$Node, offsetof(java_util_concurrent_LinkedBlockingQueue$Itr, F_current), "Ljava/util/concurrent/LinkedBlockingQueue$Node;", 2 },
	{ "lastRet", &class_java_util_concurrent_LinkedBlockingQueue$Node, offsetof(java_util_concurrent_LinkedBlockingQueue$Itr, F_lastRet), "Ljava/util/concurrent/LinkedBlockingQueue$Node;", 2 },
	{ "currentElement", &class_java_lang_Object, offsetof(java_util_concurrent_LinkedBlockingQueue$Itr, F_currentElement), "Ljava/lang/Object;", 2 },
	{ "this$0", &class_java_util_concurrent_LinkedBlockingQueue, offsetof(java_util_concurrent_LinkedBlockingQueue$Itr, F_this$0), "Ljava/util/concurrent/LinkedBlockingQueue;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_LinkedBlockingQueue$Itr_java_util_concurrent_LinkedBlockingQueue, 0, "(Ljava/util/concurrent/LinkedBlockingQueue;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean, VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean, "()Z", 1 },
	{ "nextNode", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node, VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node, "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)Ljava/util/concurrent/LinkedBlockingQueue$Node;", 2 },
	{ "next", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue$Itr_remove, VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_remove, "()V", 1 },
};

Class class_java_util_concurrent_LinkedBlockingQueue$Itr{
		.nativeName = (intptr_t) "java/util/concurrent/LinkedBlockingQueue$Itr",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_LinkedBlockingQueue$Itr),
		.classVtable = (intptr_t) vtable_java_util_concurrent_LinkedBlockingQueue$Itr,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_LinkedBlockingQueue$Itr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_LinkedBlockingQueue$Itr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_LinkedBlockingQueue,
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
static bool registered_java_util_concurrent_LinkedBlockingQueue$Itr = registerClass(&class_java_util_concurrent_LinkedBlockingQueue$Itr);

}

