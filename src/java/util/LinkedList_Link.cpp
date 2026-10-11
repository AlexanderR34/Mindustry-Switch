#include "java/util/LinkedList_Link.h"
#include "java/lang/Object.h"
#include "java/util/LinkedList_Link.h"
#include "java/util/LinkedList.h"

extern "C" {


void mark_java_util_LinkedList$Link(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_LinkedList$Link *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_java_util_LinkedList$Link(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList$Link:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedList$Link(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(42);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[2].o);
	LINE_NUMBER(43);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedList$Link[] {
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
};

static FieldMetadata fields[] {
	{ "data", &class_java_lang_Object, offsetof(java_util_LinkedList$Link, F_data), "Ljava/lang/Object;", 0 },
	{ "previous", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList$Link, F_previous), "Ljava/util/LinkedList$Link;", 0 },
	{ "next", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList$Link, F_next), "Ljava/util/LinkedList$Link;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link, 0, "(Ljava/lang/Object;Ljava/util/LinkedList$Link;Ljava/util/LinkedList$Link;)V", 0 },
};

Class class_java_util_LinkedList$Link{
		.nativeName = (intptr_t) "java/util/LinkedList$Link",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_LinkedList$Link),
		.classVtable = (intptr_t) vtable_java_util_LinkedList$Link,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedList$Link,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedList$Link,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedList$Link = registerClass(&class_java_util_LinkedList$Link);

}

