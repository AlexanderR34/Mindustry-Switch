#include "java/util/concurrent/LinkedBlockingQueue_Node.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/LinkedBlockingQueue_Node.h"

extern "C" {


void mark_java_util_concurrent_LinkedBlockingQueue$Node(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_LinkedBlockingQueue$Node *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue$Node:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	init_java_lang_Object(ctx, (frame[0].o));
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_LinkedBlockingQueue$Node[] {
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
	{ "item", &class_java_lang_Object, offsetof(java_util_concurrent_LinkedBlockingQueue$Node, F_item), "Ljava/lang/Object;", 0 },
	{ "next", &class_java_util_concurrent_LinkedBlockingQueue$Node, offsetof(java_util_concurrent_LinkedBlockingQueue$Node, F_next), "Ljava/util/concurrent/LinkedBlockingQueue$Node;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
};

Class class_java_util_concurrent_LinkedBlockingQueue$Node{
		.nativeName = (intptr_t) "java/util/concurrent/LinkedBlockingQueue$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_LinkedBlockingQueue$Node),
		.classVtable = (intptr_t) vtable_java_util_concurrent_LinkedBlockingQueue$Node,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_LinkedBlockingQueue$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_LinkedBlockingQueue$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_LinkedBlockingQueue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_LinkedBlockingQueue$Node = registerClass(&class_java_util_concurrent_LinkedBlockingQueue$Node);

}

