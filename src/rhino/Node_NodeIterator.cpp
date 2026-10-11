#include "rhino/Node_NodeIterator.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/Node_NodeIterator.h"

extern "C" {


void mark_rhino_Node$NodeIterator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Node$NodeIterator *) object;
	if (self->F_cursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursor)->clazz)->markFunction)((jobject) self->F_cursor, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_prev2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev2)->clazz)->markFunction)((jobject) self->F_prev2, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_Node$NodeIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Node$NodeIterator_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$NodeIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node$NodeIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_Node_access$000_R_rhino_Node(ctx);
	((rhino_Node$NodeIterator *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(337);
	((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_removed = (jint(0));
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_first;
	((rhino_Node$NodeIterator *) NULL_CHECK(sp[0].o))->F_cursor = (jref) sp[1].o;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Node$NodeIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$NodeIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_cursor;
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

jobject M_rhino_Node$NodeIterator_next_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$NodeIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_cursor;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(351);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(353);
	((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_removed = (jint(0));
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	((rhino_Node$NodeIterator *) NULL_CHECK(sp[0].o))->F_prev2 = (jref) sp[1].o;
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_cursor;
	((rhino_Node$NodeIterator *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_cursor;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_Node$NodeIterator *) NULL_CHECK(sp[0].o))->F_cursor = (jref) sp[1].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Node$NodeIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$NodeIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[1].o = (jobject)SM_rhino_Node_access$000_R_rhino_Node(ctx);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(363);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next() has not been called"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(365);
	if (((jint)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_removed) == 0) goto label_3;
	}
	{
	LINE_NUMBER(366);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"remove() already called for current element"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK(sp[1].o))->F_first;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[1].o;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK(sp[1].o))->F_last;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev2;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev2;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[1].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_prev2;
	sp[1].o = (jobject)((rhino_Node$NodeIterator *) NULL_CHECK((frame[0].o)))->F_cursor;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_7:;
	LINE_NUMBER(377);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Node$NodeIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$NodeIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_rhino_Node$NodeIterator_next_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node$NodeIterator_next_R_rhino_Node])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Node$NodeIterator[] {
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
	(void *) M_rhino_Node$NodeIterator_hasNext_R_boolean,
	(void *) M_rhino_Node$NodeIterator_next_R_java_lang_Object,
	(void *) M_rhino_Node$NodeIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_rhino_Node$NodeIterator_next_R_rhino_Node,
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
	{ "next", "()Lrhino/Node;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "cursor", &class_rhino_Node, offsetof(rhino_Node$NodeIterator, F_cursor), "Lrhino/Node;", 2 },
	{ "prev", &class_rhino_Node, offsetof(rhino_Node$NodeIterator, F_prev), "Lrhino/Node;", 2 },
	{ "prev2", &class_rhino_Node, offsetof(rhino_Node$NodeIterator, F_prev2), "Lrhino/Node;", 2 },
	{ "removed", &class_boolean, offsetof(rhino_Node$NodeIterator, F_removed), "Z", 2 },
	{ "this$0", &class_rhino_Node, offsetof(rhino_Node$NodeIterator, F_this$0), "Lrhino/Node;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Node$NodeIterator_rhino_Node, 0, "(Lrhino/Node;)V", 1 },
	{ "hasNext", (intptr_t) M_rhino_Node$NodeIterator_hasNext_R_boolean, VTABLE_rhino_Node$NodeIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_Node$NodeIterator_next_R_rhino_Node, VTABLE_rhino_Node$NodeIterator_next_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "remove", (intptr_t) M_rhino_Node$NodeIterator_remove, VTABLE_rhino_Node$NodeIterator_remove, "()V", 1 },
	{ "next", (intptr_t) M_rhino_Node$NodeIterator_next_R_java_lang_Object, VTABLE_rhino_Node$NodeIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_rhino_Node$NodeIterator{
		.nativeName = (intptr_t) "rhino/Node$NodeIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Node$NodeIterator),
		.classVtable = (intptr_t) vtable_rhino_Node$NodeIterator,
		.staticInitializer = (intptr_t) clinit_rhino_Node$NodeIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Node$NodeIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Node,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Node$NodeIterator = registerClass(&class_rhino_Node$NodeIterator);

}

