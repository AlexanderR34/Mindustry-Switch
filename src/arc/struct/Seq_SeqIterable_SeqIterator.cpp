#include "arc/struct/Seq_SeqIterable_SeqIterator.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq_SeqIterable.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq_SeqIterable_SeqIterator.h"
#include "arc/struct/Seq.h"

extern "C" {


void mark_arc_struct_Seq$SeqIterable$SeqIterator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Seq$SeqIterable$SeqIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_struct_Seq$SeqIterable$SeqIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable$SeqIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq$SeqIterable$SeqIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1160);
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1154);
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_done = (jint(1));
	LINE_NUMBER(1157);
	clinit_arc_struct_Seq(ctx);
	SF_arc_struct_Seq_iteratorsAllocated = ((clinit_arc_struct_Seq(ctx), (jint)SF_arc_struct_Seq_iteratorsAllocated) + (jint(1)));
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable$SeqIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1165);
	jint temp0 = (jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_array;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_done = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1166);
	jint temp0 = (jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable$SeqIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1171);
	jint temp0 = (jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_array;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_index));
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[1].o))->F_index;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_arc_struct_Seq$SeqIterable$SeqIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable$SeqIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1177);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_allowRemove) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Remove not allowed."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1178);
	sp[0].o = frame[0].o;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_index = (((jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(1179);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(1180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_Seq$SeqIterable$SeqIterator[] {
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
	(void *) M_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean,
	(void *) M_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object,
	(void *) M_arc_struct_Seq$SeqIterable$SeqIterator_remove,
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
	{ "index", &class_int, offsetof(arc_struct_Seq$SeqIterable$SeqIterator, F_index), "I", 0 },
	{ "done", &class_boolean, offsetof(arc_struct_Seq$SeqIterable$SeqIterator, F_done), "Z", 0 },
	{ "this$0", &class_arc_struct_Seq$SeqIterable, offsetof(arc_struct_Seq$SeqIterable$SeqIterator, F_this$0), "Larc/struct/Seq$SeqIterable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable, 0, "(Larc/struct/Seq$SeqIterable;)V", 0 },
	{ "hasNext", (intptr_t) M_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean, VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object, VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_arc_struct_Seq$SeqIterable$SeqIterator_remove, VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_remove, "()V", 1 },
};

Class class_arc_struct_Seq$SeqIterable$SeqIterator{
		.nativeName = (intptr_t) "arc/struct/Seq$SeqIterable$SeqIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Seq$SeqIterable$SeqIterator),
		.classVtable = (intptr_t) vtable_arc_struct_Seq$SeqIterable$SeqIterator,
		.staticInitializer = (intptr_t) clinit_arc_struct_Seq$SeqIterable$SeqIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_Seq$SeqIterable$SeqIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_Seq$SeqIterable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Seq$SeqIterable$SeqIterator = registerClass(&class_arc_struct_Seq$SeqIterable$SeqIterator);

}

