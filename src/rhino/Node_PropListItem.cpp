#include "rhino/Node_PropListItem.h"
#include "rhino/Node_PropListItem.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "rhino/Node_1.h"

extern "C" {


void mark_rhino_Node$PropListItem(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Node$PropListItem *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_objectValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectValue)->clazz)->markFunction)((jobject) self->F_objectValue, mark, depth + 1);
}

void clinit_rhino_Node$PropListItem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Node$PropListItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$PropListItem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node$PropListItem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(76);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node$PropListItem_rhino_Node$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node$PropListItem:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node$PropListItem(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	init_rhino_Node$PropListItem(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Node$PropListItem[] {
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
	{ "next", &class_rhino_Node$PropListItem, offsetof(rhino_Node$PropListItem, F_next), "Lrhino/Node$PropListItem;", 0 },
	{ "type", &class_int, offsetof(rhino_Node$PropListItem, F_type), "I", 0 },
	{ "intValue", &class_int, offsetof(rhino_Node$PropListItem, F_intValue), "I", 0 },
	{ "objectValue", &class_java_lang_Object, offsetof(rhino_Node$PropListItem, F_objectValue), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Node$PropListItem, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_Node$PropListItem_rhino_Node$1, 0, "(Lrhino/Node$1;)V", 4096 },
};

Class class_rhino_Node$PropListItem{
		.nativeName = (intptr_t) "rhino/Node$PropListItem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Node$PropListItem),
		.classVtable = (intptr_t) vtable_rhino_Node$PropListItem,
		.staticInitializer = (intptr_t) clinit_rhino_Node$PropListItem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Node$PropListItem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Node,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Node$PropListItem = registerClass(&class_rhino_Node$PropListItem);

}

