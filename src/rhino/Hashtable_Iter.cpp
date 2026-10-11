#include "rhino/Hashtable_Iter.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "rhino/Hashtable_Iter.h"
#include "rhino/Hashtable.h"
#include "rhino/Hashtable_Entry.h"

extern "C" {


void mark_rhino_Hashtable$Iter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Hashtable$Iter *) object;
	if (self->F_pos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pos)->clazz)->markFunction)((jobject) self->F_pos, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_Hashtable$Iter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Hashtable$Iter_rhino_Hashtable_rhino_Hashtable$Entry(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Iter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable$Iter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(217);
	((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(219);
	sp[0].o = (jobject)SM_rhino_Hashtable_access$000_rhino_Hashtable_R_rhino_Hashtable$Entry(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(220);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(221);
	((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos = (jref) (frame[3].o);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Hashtable$Iter_skipDeleted(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Iter:skipDeleted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (((jint)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_deleted) == 0) goto label_1;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_Hashtable$Iter *) NULL_CHECK(sp[0].o))->F_pos = (jref) sp[1].o;
	goto label_0;
	}
label_1:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_Hashtable$Iter_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Iter:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	M_rhino_Hashtable$Iter_skipDeleted(ctx, (frame[0].o));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_2;
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

jobject M_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Iter:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	M_rhino_Hashtable$Iter_skipDeleted(ctx, (frame[0].o));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(243);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Hashtable$Iter *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_Hashtable$Iter *) NULL_CHECK(sp[0].o))->F_pos = (jref) sp[1].o;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable$Iter_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Iter:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Hashtable$Iter[] {
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
	(void *) M_rhino_Hashtable$Iter_hasNext_R_boolean,
	(void *) M_rhino_Hashtable$Iter_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_rhino_Hashtable$Iter_skipDeleted,
	(void *) M_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry,
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
	{ "skipDeleted", "()V" },
	{ "next", "()Lrhino/Hashtable$Entry;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "pos", &class_rhino_Hashtable$Entry, offsetof(rhino_Hashtable$Iter, F_pos), "Lrhino/Hashtable$Entry;", 2 },
	{ "this$0", &class_rhino_Hashtable, offsetof(rhino_Hashtable$Iter, F_this$0), "Lrhino/Hashtable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Hashtable$Iter_rhino_Hashtable_rhino_Hashtable$Entry, 0, "(Lrhino/Hashtable;Lrhino/Hashtable$Entry;)V", 0 },
	{ "skipDeleted", (intptr_t) M_rhino_Hashtable$Iter_skipDeleted, VTABLE_rhino_Hashtable$Iter_skipDeleted, "()V", 2 },
	{ "hasNext", (intptr_t) M_rhino_Hashtable$Iter_hasNext_R_boolean, VTABLE_rhino_Hashtable$Iter_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry, VTABLE_rhino_Hashtable$Iter_next_R_rhino_Hashtable$Entry, "()Lrhino/Hashtable$Entry;", 1 },
	{ "next", (intptr_t) M_rhino_Hashtable$Iter_next_R_java_lang_Object, VTABLE_rhino_Hashtable$Iter_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_rhino_Hashtable$Iter{
		.nativeName = (intptr_t) "rhino/Hashtable$Iter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Hashtable$Iter),
		.classVtable = (intptr_t) vtable_rhino_Hashtable$Iter,
		.staticInitializer = (intptr_t) clinit_rhino_Hashtable$Iter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Hashtable$Iter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Hashtable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Hashtable$Iter = registerClass(&class_rhino_Hashtable$Iter);

}

