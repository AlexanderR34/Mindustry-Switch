#include "java/util/Collections_3.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/Enumeration.h"
#include "java/util/Collections_3.h"

extern "C" {


void mark_java_util_Collections$3(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$3 *) object;
	if (self->F_it)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_it)->clazz)->markFunction)((jobject) self->F_it, mark, depth + 1);
	if (self->F_val$c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$c)->clazz)->markFunction)((jobject) self->F_val$c, mark, depth + 1);
}

void clinit_java_util_Collections$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$3_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1569);
	((java_util_Collections$3 *) NULL_CHECK((frame[0].o)))->F_val$c = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1570);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Collections$3 *) NULL_CHECK((frame[0].o)))->F_val$c;
	sp[1].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	((java_util_Collections$3 *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$3_hasMoreElements_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$3:hasMoreElements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((java_util_Collections$3 *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$3_nextElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$3:nextElement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((java_util_Collections$3 *) NULL_CHECK((frame[0].o)))->F_it;
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$3[] {
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
	(void *) M_java_util_Collections$3_hasMoreElements_R_boolean,
	(void *) M_java_util_Collections$3_nextElement_R_java_lang_Object,
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
	{ "hasMoreElements", "()Z" },
	{ "nextElement", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Enumeration, };

static FieldMetadata fields[] {
	{ "it", &class_java_util_Iterator, offsetof(java_util_Collections$3, F_it), "Ljava/util/Iterator;", 0 },
	{ "val$c", &class_java_util_Collection, offsetof(java_util_Collections$3, F_val$c), "Ljava/util/Collection;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$3_java_util_Collection, 0, "(Ljava/util/Collection;)V", 0 },
	{ "hasMoreElements", (intptr_t) M_java_util_Collections$3_hasMoreElements_R_boolean, VTABLE_java_util_Collections$3_hasMoreElements_R_boolean, "()Z", 1 },
	{ "nextElement", (intptr_t) M_java_util_Collections$3_nextElement_R_java_lang_Object, VTABLE_java_util_Collections$3_nextElement_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_Collections$3{
		.nativeName = (intptr_t) "java/util/Collections$3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$3),
		.classVtable = (intptr_t) vtable_java_util_Collections$3,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_Collections$3 = registerClass(&class_java_util_Collections$3);

}

