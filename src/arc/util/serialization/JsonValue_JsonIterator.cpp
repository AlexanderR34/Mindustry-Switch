#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_util_serialization_JsonValue$JsonIterator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_JsonValue$JsonIterator *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_util_serialization_JsonValue$JsonIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_JsonValue$JsonIterator_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$JsonIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1293);
	((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1294);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[1].o))->F_child;
	((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(1293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1298);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_entry;
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

jobject M_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1302);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(1303);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1304);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[1].o))->F_next;
	((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonValue$JsonIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[1].o))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(1311);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[1].o))->F_next;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_next;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[1].o))->F_prev;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1316);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1320);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$JsonIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonValue$JsonIterator[] {
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
	(void *) M_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean,
	(void *) M_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object,
	(void *) M_arc_util_serialization_JsonValue$JsonIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "next", "()Larc/util/serialization/JsonValue;" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "entry", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue$JsonIterator, F_entry), "Larc/util/serialization/JsonValue;", 0 },
	{ "current", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue$JsonIterator, F_current), "Larc/util/serialization/JsonValue;", 0 },
	{ "this$0", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonValue$JsonIterator, F_this$0), "Larc/util/serialization/JsonValue;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue$JsonIterator_arc_util_serialization_JsonValue, 0, "(Larc/util/serialization/JsonValue;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean, VTABLE_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue, "()Larc/util/serialization/JsonValue;", 1 },
	{ "remove", (intptr_t) M_arc_util_serialization_JsonValue$JsonIterator_remove, VTABLE_arc_util_serialization_JsonValue$JsonIterator_remove, "()V", 1 },
	{ "iterator", (intptr_t) M_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator, VTABLE_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "next", (intptr_t) M_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object, VTABLE_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_util_serialization_JsonValue$JsonIterator{
		.nativeName = (intptr_t) "arc/util/serialization/JsonValue$JsonIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_JsonValue$JsonIterator),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonValue$JsonIterator,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonValue$JsonIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonValue$JsonIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_JsonValue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonValue$JsonIterator = registerClass(&class_arc_util_serialization_JsonValue$JsonIterator);

}

