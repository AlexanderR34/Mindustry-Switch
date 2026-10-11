#include "java/util/Hashtable_HashIterator.h"
#include "java/util/MapEntry_Type.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/Hashtable.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Hashtable_Entry.h"
#include "java/util/MapEntry.h"
#include "java/util/Hashtable_HashIterator.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_Hashtable$HashIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Hashtable$HashIterator *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_lastEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastEntry)->clazz)->markFunction)((jobject) self->F_lastEntry, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Hashtable$HashIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Hashtable$HashIterator_java_util_Hashtable_java_util_MapEntry$Type(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable$HashIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(122);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(125);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(126);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_Hashtable *) NULL_CHECK((frame[1].o)))->F_lastSlot);
	LINE_NUMBER(127);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount = ((jint)((java_util_Hashtable *) NULL_CHECK((frame[1].o)))->F_modCount);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable$HashIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_firstSlot)) goto label_3;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position))) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position) - (jint(1)));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$HashIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashIterator:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_lastEntry = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o != nullptr) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_firstSlot)) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[1].o))->F_elementData;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position));
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_lastEntry = (jref) sp[1].o;
	if (sp[1].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position) - (jint(1)));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(155);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition = ((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_position) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(162);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(1));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	sp[0].o = (jobject)((func_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_MapEntry$Type, INDEX_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(165);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(167);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Hashtable$HashIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashIterator:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_10;
	}
	{
	LINE_NUMBER(172);
	if (((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_canRemove) == 0) goto label_12;
	}
	{
	LINE_NUMBER(173);
	((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(175);
	frame[2].i = (jint(0));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition)));
	LINE_NUMBER(177);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData;
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastPosition;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(179);
	frame[2].i = (jint(1));
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(181);
	if ((frame[3].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(184);
	if ((frame[3].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_lastEntry;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(186);
	frame[2].i = (jint(1));
	}
label_20:;
	{
	LINE_NUMBER(189);
	if ((frame[2].i) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_Hashtable$HashIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(193);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(201);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_29;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_29:;
	goto label_10;
label_12:;
	{
	LINE_NUMBER(203);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(206);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Hashtable$HashIterator[] {
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
	(void *) M_java_util_Hashtable$HashIterator_hasNext_R_boolean,
	(void *) M_java_util_Hashtable$HashIterator_next_R_java_lang_Object,
	(void *) M_java_util_Hashtable$HashIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "position", &class_int, offsetof(java_util_Hashtable$HashIterator, F_position), "I", 0 },
	{ "expectedModCount", &class_int, offsetof(java_util_Hashtable$HashIterator, F_expectedModCount), "I", 0 },
	{ "type", &class_java_util_MapEntry$Type, offsetof(java_util_Hashtable$HashIterator, F_type), "Ljava/util/MapEntry$Type;", 16 },
	{ "lastEntry", &class_java_util_Hashtable$Entry, offsetof(java_util_Hashtable$HashIterator, F_lastEntry), "Ljava/util/Hashtable$Entry;", 0 },
	{ "lastPosition", &class_int, offsetof(java_util_Hashtable$HashIterator, F_lastPosition), "I", 0 },
	{ "canRemove", &class_boolean, offsetof(java_util_Hashtable$HashIterator, F_canRemove), "Z", 0 },
	{ "this$0", &class_java_util_Hashtable, offsetof(java_util_Hashtable$HashIterator, F_this$0), "Ljava/util/Hashtable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Hashtable$HashIterator_java_util_Hashtable_java_util_MapEntry$Type, 0, "(Ljava/util/Hashtable;Ljava/util/MapEntry$Type;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_Hashtable$HashIterator_hasNext_R_boolean, VTABLE_java_util_Hashtable$HashIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Hashtable$HashIterator_next_R_java_lang_Object, VTABLE_java_util_Hashtable$HashIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_Hashtable$HashIterator_remove, VTABLE_java_util_Hashtable$HashIterator_remove, "()V", 1 },
};

Class class_java_util_Hashtable$HashIterator{
		.nativeName = (intptr_t) "java/util/Hashtable$HashIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Hashtable$HashIterator),
		.classVtable = (intptr_t) vtable_java_util_Hashtable$HashIterator,
		.staticInitializer = (intptr_t) clinit_java_util_Hashtable$HashIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Hashtable$HashIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Hashtable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Hashtable$HashIterator = registerClass(&class_java_util_Hashtable$HashIterator);

}

