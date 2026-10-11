#include "java/util/Collections_CheckedListIterator.h"
#include "java/util/Collections_CheckedListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Iterator.h"
#include "java/util/Collections.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_util_Collections$CheckedListIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$CheckedListIterator *) object;
	if (self->F_i)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_i)->clazz)->markFunction)((jobject) self->F_i, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_java_util_Collections$CheckedListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$CheckedListIterator_java_util_ListIterator_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$CheckedListIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2930);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2931);
	((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i = (jref) (frame[1].o);
	LINE_NUMBER(2932);
	((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(2933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedListIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2939);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedListIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2946);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$CheckedListIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2953);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	((func_java_util_ListIterator_remove) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_remove, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(2954);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:hasPrevious", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2960);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:previous", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2967);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$CheckedListIterator_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:nextIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2974);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$CheckedListIterator_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:previousIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2981);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$CheckedListIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2988);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2989);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$CheckedListIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedListIterator:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2995);
	sp[0].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_Collections$CheckedListIterator *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((func_java_util_ListIterator_add_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_add_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2996);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$CheckedListIterator[] {
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
	(void *) M_java_util_Collections$CheckedListIterator_hasNext_R_boolean,
	(void *) M_java_util_Collections$CheckedListIterator_next_R_java_lang_Object,
	(void *) M_java_util_Collections$CheckedListIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Collections$CheckedListIterator_add_java_lang_Object,
	(void *) M_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean,
	(void *) M_java_util_Collections$CheckedListIterator_nextIndex_R_int,
	(void *) M_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object,
	(void *) M_java_util_Collections$CheckedListIterator_previousIndex_R_int,
	(void *) M_java_util_Collections$CheckedListIterator_set_java_lang_Object,
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
	{ "i", &class_java_util_ListIterator, offsetof(java_util_Collections$CheckedListIterator, F_i), "Ljava/util/ListIterator;", 2 },
	{ "type", &class_java_lang_Class, offsetof(java_util_Collections$CheckedListIterator, F_type), "Ljava/lang/Class;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$CheckedListIterator_java_util_ListIterator_java_lang_Class, 0, "(Ljava/util/ListIterator;Ljava/lang/Class;)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Collections$CheckedListIterator_hasNext_R_boolean, VTABLE_java_util_Collections$CheckedListIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Collections$CheckedListIterator_next_R_java_lang_Object, VTABLE_java_util_Collections$CheckedListIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$CheckedListIterator_remove, VTABLE_java_util_Collections$CheckedListIterator_remove, "()V", 1 },
	{ "hasPrevious", (intptr_t) M_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean, VTABLE_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean, "()Z", 1 },
	{ "previous", (intptr_t) M_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object, VTABLE_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_java_util_Collections$CheckedListIterator_nextIndex_R_int, VTABLE_java_util_Collections$CheckedListIterator_nextIndex_R_int, "()I", 1 },
	{ "previousIndex", (intptr_t) M_java_util_Collections$CheckedListIterator_previousIndex_R_int, VTABLE_java_util_Collections$CheckedListIterator_previousIndex_R_int, "()I", 1 },
	{ "set", (intptr_t) M_java_util_Collections$CheckedListIterator_set_java_lang_Object, VTABLE_java_util_Collections$CheckedListIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_Collections$CheckedListIterator_add_java_lang_Object, VTABLE_java_util_Collections$CheckedListIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_Collections$CheckedListIterator{
		.nativeName = (intptr_t) "java/util/Collections$CheckedListIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$CheckedListIterator),
		.classVtable = (intptr_t) vtable_java_util_Collections$CheckedListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$CheckedListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$CheckedListIterator,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$CheckedListIterator = registerClass(&class_java_util_Collections$CheckedListIterator);

}

