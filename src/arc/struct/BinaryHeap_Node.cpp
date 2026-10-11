#include "arc/struct/BinaryHeap_Node.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Float.h"
#include "arc/struct/BinaryHeap.h"
#include "arc/struct/BinaryHeap_Node.h"

extern "C" {


void mark_arc_struct_BinaryHeap$Node(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_BinaryHeap$Node *) object;
}

void clinit_arc_struct_BinaryHeap$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_BinaryHeap$Node_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap$Node:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_BinaryHeap$Node(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(196);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(197);
	((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_BinaryHeap$Node_getValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap$Node:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_BinaryHeap$Node_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/BinaryHeap$Node:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, ((jfloat)((arc_struct_BinaryHeap$Node *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_BinaryHeap$Node[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_BinaryHeap$Node_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_BinaryHeap$Node_getValue_R_float,
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
	{ "getValue", "()F" },
};

static FieldMetadata fields[] {
	{ "value", &class_float, offsetof(arc_struct_BinaryHeap$Node, F_value), "F", 0 },
	{ "index", &class_int, offsetof(arc_struct_BinaryHeap$Node, F_index), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_BinaryHeap$Node_float, 0, "(F)V", 1 },
	{ "getValue", (intptr_t) M_arc_struct_BinaryHeap$Node_getValue_R_float, VTABLE_arc_struct_BinaryHeap$Node_getValue_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_arc_struct_BinaryHeap$Node_toString_R_java_lang_String, VTABLE_arc_struct_BinaryHeap$Node_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_struct_BinaryHeap$Node{
		.nativeName = (intptr_t) "arc/struct/BinaryHeap$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_BinaryHeap$Node),
		.classVtable = (intptr_t) vtable_arc_struct_BinaryHeap$Node,
		.staticInitializer = (intptr_t) clinit_arc_struct_BinaryHeap$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_BinaryHeap$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_BinaryHeap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_BinaryHeap$Node = registerClass(&class_arc_struct_BinaryHeap$Node);

}

