#include "rhino/regexp/RENode.h"
#include "java/lang/Object.h"
#include "rhino/regexp/RENode.h"

extern "C" {


void mark_rhino_regexp_RENode(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_RENode *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_kid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_kid)->clazz)->markFunction)((jobject) self->F_kid, mark, depth + 1);
	if (self->F_kid2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_kid2)->clazz)->markFunction)((jobject) self->F_kid2, mark, depth + 1);
}

void clinit_rhino_regexp_RENode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_RENode_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RENode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RENode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2739);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2740);
	((rhino_regexp_RENode *) NULL_CHECK((frame[0].o)))->F_op = (frame[1].i);
	LINE_NUMBER(2741);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_RENode[] {
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
	{ "op", &class_byte, offsetof(rhino_regexp_RENode, F_op), "B", 0 },
	{ "next", &class_rhino_regexp_RENode, offsetof(rhino_regexp_RENode, F_next), "Lrhino/regexp/RENode;", 0 },
	{ "kid", &class_rhino_regexp_RENode, offsetof(rhino_regexp_RENode, F_kid), "Lrhino/regexp/RENode;", 0 },
	{ "kid2", &class_rhino_regexp_RENode, offsetof(rhino_regexp_RENode, F_kid2), "Lrhino/regexp/RENode;", 0 },
	{ "parenIndex", &class_int, offsetof(rhino_regexp_RENode, F_parenIndex), "I", 0 },
	{ "min", &class_int, offsetof(rhino_regexp_RENode, F_min), "I", 0 },
	{ "max", &class_int, offsetof(rhino_regexp_RENode, F_max), "I", 0 },
	{ "parenCount", &class_int, offsetof(rhino_regexp_RENode, F_parenCount), "I", 0 },
	{ "greedy", &class_boolean, offsetof(rhino_regexp_RENode, F_greedy), "Z", 0 },
	{ "startIndex", &class_int, offsetof(rhino_regexp_RENode, F_startIndex), "I", 0 },
	{ "kidlen", &class_int, offsetof(rhino_regexp_RENode, F_kidlen), "I", 0 },
	{ "bmsize", &class_int, offsetof(rhino_regexp_RENode, F_bmsize), "I", 0 },
	{ "index", &class_int, offsetof(rhino_regexp_RENode, F_index), "I", 0 },
	{ "sense", &class_boolean, offsetof(rhino_regexp_RENode, F_sense), "Z", 0 },
	{ "chr", &class_char, offsetof(rhino_regexp_RENode, F_chr), "C", 0 },
	{ "length", &class_int, offsetof(rhino_regexp_RENode, F_length), "I", 0 },
	{ "flatIndex", &class_int, offsetof(rhino_regexp_RENode, F_flatIndex), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_RENode_byte, 0, "(B)V", 0 },
};

Class class_rhino_regexp_RENode{
		.nativeName = (intptr_t) "rhino/regexp/RENode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_RENode),
		.classVtable = (intptr_t) vtable_rhino_regexp_RENode,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_RENode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_RENode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_RENode = registerClass(&class_rhino_regexp_RENode);

}
