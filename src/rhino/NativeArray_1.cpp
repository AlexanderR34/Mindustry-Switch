#include "rhino/NativeArray_1.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/NoSuchElementException.h"
#include "rhino/NativeArray_1.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "rhino/NativeArray.h"

extern "C" {


void mark_rhino_NativeArray$1(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeArray$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_NativeArray$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeArray$1_rhino_NativeArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2200);
	((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_val$start = (frame[2].i);
	((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_val$len = (frame[3].i);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2202);
	((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor = ((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_val$start);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2206);
	if (((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor) >= ((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_val$len)) goto label_1;
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

jobject M_rhino_NativeArray$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2211);
	if (((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor) != ((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_val$len)) goto label_1;
	}
	{
	LINE_NUMBER(2212);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2214);
	sp[0].o = (jobject)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_NativeArray$1 *) NULL_CHECK(sp[1].o))->F_cursor;
	((rhino_NativeArray$1 *) NULL_CHECK(sp[1].o))->F_cursor = (temp0 + (jint(1)));
	sp[0].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeArray$1_hasPrevious_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:hasPrevious", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2219);
	if (((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor) <= 0) goto label_1;
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

jobject M_rhino_NativeArray$1_previous_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:previous", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2224);
	if (((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2225);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((rhino_NativeArray$1 *) NULL_CHECK(sp[1].o))->F_cursor) - (jint(1));
	((rhino_NativeArray$1 *) NULL_CHECK(sp[1].o))->F_cursor = temp0;
	sp[0].o = (jobject)((func_rhino_NativeArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeArray_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray$1_nextIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:nextIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2232);
	popStackFrame(ctx);
	return ((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor);
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray$1_previousIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:previousIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2237);
	popStackFrame(ctx);
	return (((jint)((rhino_NativeArray$1 *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray$1_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2242);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray$1_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2247);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeArray$1_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$1:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2252);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeArray$1[] {
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
	(void *) M_rhino_NativeArray$1_hasNext_R_boolean,
	(void *) M_rhino_NativeArray$1_next_R_java_lang_Object,
	(void *) M_rhino_NativeArray$1_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_rhino_NativeArray$1_add_java_lang_Object,
	(void *) M_rhino_NativeArray$1_hasPrevious_R_boolean,
	(void *) M_rhino_NativeArray$1_nextIndex_R_int,
	(void *) M_rhino_NativeArray$1_previous_R_java_lang_Object,
	(void *) M_rhino_NativeArray$1_previousIndex_R_int,
	(void *) M_rhino_NativeArray$1_set_java_lang_Object,
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
	{ "cursor", &class_int, offsetof(rhino_NativeArray$1, F_cursor), "I", 0 },
	{ "val$start", &class_int, offsetof(rhino_NativeArray$1, F_val$start), "I", 4112 },
	{ "val$len", &class_int, offsetof(rhino_NativeArray$1, F_val$len), "I", 4112 },
	{ "this$0", &class_rhino_NativeArray, offsetof(rhino_NativeArray$1, F_this$0), "Lrhino/NativeArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeArray$1_rhino_NativeArray_int_int, 0, "(Lrhino/NativeArray;II)V", 0 },
	{ "hasNext", (intptr_t) M_rhino_NativeArray$1_hasNext_R_boolean, VTABLE_rhino_NativeArray$1_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_NativeArray$1_next_R_java_lang_Object, VTABLE_rhino_NativeArray$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hasPrevious", (intptr_t) M_rhino_NativeArray$1_hasPrevious_R_boolean, VTABLE_rhino_NativeArray$1_hasPrevious_R_boolean, "()Z", 1 },
	{ "previous", (intptr_t) M_rhino_NativeArray$1_previous_R_java_lang_Object, VTABLE_rhino_NativeArray$1_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextIndex", (intptr_t) M_rhino_NativeArray$1_nextIndex_R_int, VTABLE_rhino_NativeArray$1_nextIndex_R_int, "()I", 1 },
	{ "previousIndex", (intptr_t) M_rhino_NativeArray$1_previousIndex_R_int, VTABLE_rhino_NativeArray$1_previousIndex_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_rhino_NativeArray$1_remove, VTABLE_rhino_NativeArray$1_remove, "()V", 1 },
	{ "add", (intptr_t) M_rhino_NativeArray$1_add_java_lang_Object, VTABLE_rhino_NativeArray$1_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "set", (intptr_t) M_rhino_NativeArray$1_set_java_lang_Object, VTABLE_rhino_NativeArray$1_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_rhino_NativeArray$1{
		.nativeName = (intptr_t) "rhino/NativeArray$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeArray$1),
		.classVtable = (intptr_t) vtable_rhino_NativeArray$1,
		.staticInitializer = (intptr_t) clinit_rhino_NativeArray$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeArray$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_rhino_NativeArray$1 = registerClass(&class_rhino_NativeArray$1);

}

