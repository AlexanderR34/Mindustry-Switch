#include "java/util/concurrent/CopyOnWriteArrayList_COWSubListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/function/Consumer.h"
#include "java/util/concurrent/CopyOnWriteArrayList_COWSubListIterator.h"
#include "java/util/Objects.h"
#include "java/util/List.h"

extern "C" {


void mark_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) object;
	if (self->F_it)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_it)->clazz)->markFunction)((jobject) self->F_it, mark, depth + 1);
}

void clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_java_util_List_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1119);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1120);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	LINE_NUMBER(1121);
	((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(1122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_List_listIterator_int_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, (frame[1].o)))(ctx, (frame[1].o), ((frame[2].i) + (frame[3].i)));
	((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1126);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int])(ctx, (frame[0].o));
	if (temp0 >= ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1130);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_it;
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1133);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:hasPrevious", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1138);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int])(ctx, (frame[0].o));
	if (temp0 < 0) goto label_1;
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

jobject M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:previous", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1142);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_it;
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1145);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:nextIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:previousIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - ((jint)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1158);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1162);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1166);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(1172);
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1173);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator *) NULL_CHECK((frame[0].o)))->F_it;
	sp[1].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator[] {
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
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_next_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_remove,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_add_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previous_R_java_lang_Object,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int,
	(void *) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_set_java_lang_Object,
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
	{ "add", "(Ljava/lang/Object;)V" },
	{ "hasPrevious", "()Z" },
	{ "nextIndex", "()I" },
	{ "previous", "()Ljava/lang/Object;" },
	{ "previousIndex", "()I" },
	{ "set", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_ListIterator, };

static FieldMetadata fields[] {
	{ "it", &class_java_util_ListIterator, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator, F_it), "Ljava/util/ListIterator;", 18 },
	{ "offset", &class_int, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator, F_offset), "I", 18 },
	{ "size", &class_int, offsetof(java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator, F_size), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_java_util_List_int_int_int, 0, "(Ljava/util/List;III)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_next_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_hasPrevious_R_boolean, "()Z", 1 },
	{ "previous", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previous_R_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_nextIndex_R_int, "()I", 1 },
	{ "previousIndex", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_previousIndex_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_remove, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_remove, "()V", 1 },
	{ "set", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_set_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_add_java_lang_Object, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_forEachRemaining_java_util_function_Consumer, VTABLE_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
};

Class class_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator{
		.nativeName = (intptr_t) "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CopyOnWriteArrayList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator = registerClass(&class_java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator);

}

