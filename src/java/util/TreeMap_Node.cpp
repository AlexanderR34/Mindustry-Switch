#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/TreeMap_Node.h"

extern "C" {

jint SF_java_util_TreeMap$Node_NODE_SIZE;

void mark_java_util_TreeMap$Node(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$Node *) object;
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
}

void clinit_java_util_TreeMap$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_TreeMap$Node_NODE_SIZE = jint(64);
}

void init_java_util_TreeMap$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$Node:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$Node(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_left_idx = (jint(0));
	LINE_NUMBER(63);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_right_idx = (jint(-1));
	LINE_NUMBER(65);
	((java_util_TreeMap$Node *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (64));
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (64));
	((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$Node[] {
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
	{ "NODE_SIZE", &class_int, (intptr_t) &SF_java_util_TreeMap$Node_NODE_SIZE, "I", 24 },
	{ "prev", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Node, F_prev), "Ljava/util/TreeMap$Node;", 0 },
	{ "next", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Node, F_next), "Ljava/util/TreeMap$Node;", 0 },
	{ "parent", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Node, F_parent), "Ljava/util/TreeMap$Node;", 0 },
	{ "left", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Node, F_left), "Ljava/util/TreeMap$Node;", 0 },
	{ "right", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Node, F_right), "Ljava/util/TreeMap$Node;", 0 },
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_TreeMap$Node, F_values), "[Ljava/lang/Object;", 0 },
	{ "keys", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_TreeMap$Node, F_keys), "[Ljava/lang/Object;", 0 },
	{ "left_idx", &class_int, offsetof(java_util_TreeMap$Node, F_left_idx), "I", 0 },
	{ "right_idx", &class_int, offsetof(java_util_TreeMap$Node, F_right_idx), "I", 0 },
	{ "size", &class_int, offsetof(java_util_TreeMap$Node, F_size), "I", 0 },
	{ "color", &class_boolean, offsetof(java_util_TreeMap$Node, F_color), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$Node, 0, "()V", 1 },
};

Class class_java_util_TreeMap$Node{
		.nativeName = (intptr_t) "java/util/TreeMap$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_TreeMap$Node),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$Node,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$Node = registerClass(&class_java_util_TreeMap$Node);

}

