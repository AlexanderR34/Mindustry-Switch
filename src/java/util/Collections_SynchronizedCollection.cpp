#include "java/util/Collections_SynchronizedCollection.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Collections_SynchronizedCollection.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "java/util/Collections.h"
#include "java/lang/Iterable.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_java_util_Collections$SynchronizedCollection_serialVersionUID;

void mark_java_util_Collections$SynchronizedCollection(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$SynchronizedCollection *) object;
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_mutex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mutex)->clazz)->markFunction)((jobject) self->F_mutex, mark, depth + 1);
}

void clinit_java_util_Collections$SynchronizedCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Collections$SynchronizedCollection_serialVersionUID = jlong(3053995032091335093ll);
}

void init_java_util_Collections$SynchronizedCollection_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(404);
	((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(405);
	((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex = (jref) (frame[0].o);
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Collections$SynchronizedCollection_java_util_Collection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(408);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(409);
	((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(410);
	((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex = (jref) (frame[2].o);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(416);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_addAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_addAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(422);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_util_Collections$SynchronizedCollection_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	((func_java_util_Collection_clear) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(428);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(434);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:containsAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_containsAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(440);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:isEmpty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(446);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
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
	LINE_NUMBER(452);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(458);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:removeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_removeAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_removeAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(464);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:retainAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_retainAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_retainAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(470);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_util_Collections$SynchronizedCollection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(476);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:toArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
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
	LINE_NUMBER(482);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
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
	LINE_NUMBER(489);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedCollection:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
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
	LINE_NUMBER(495);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SynchronizedCollection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_clear,
	(void *) M_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_size_R_int,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Collection, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$SynchronizedCollection_serialVersionUID, "J", 26 },
	{ "c", &class_java_util_Collection, offsetof(java_util_Collections$SynchronizedCollection, F_c), "Ljava/util/Collection;", 16 },
	{ "mutex", &class_java_lang_Object, offsetof(java_util_Collections$SynchronizedCollection, F_mutex), "Ljava/lang/Object;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedCollection_java_util_Collection, 0, "(Ljava/util/Collection;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedCollection_java_util_Collection_java_lang_Object, 0, "(Ljava/util/Collection;Ljava/lang/Object;)V", 0 },
	{ "add", (intptr_t) M_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_Collections$SynchronizedCollection_clear, VTABLE_java_util_Collections$SynchronizedCollection_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "size", (intptr_t) M_java_util_Collections$SynchronizedCollection_size_R_int, VTABLE_java_util_Collections$SynchronizedCollection_size_R_int, "()I", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String, VTABLE_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
};

Class class_java_util_Collections$SynchronizedCollection{
		.nativeName = (intptr_t) "java/util/Collections$SynchronizedCollection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$SynchronizedCollection),
		.classVtable = (intptr_t) vtable_java_util_Collections$SynchronizedCollection,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SynchronizedCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SynchronizedCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$SynchronizedCollection = registerClass(&class_java_util_Collections$SynchronizedCollection);

}

