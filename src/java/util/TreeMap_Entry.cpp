#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/MapEntry.h"
#include "java/util/TreeMap_Entry.h"

extern "C" {


void mark_java_util_TreeMap$Entry(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_MapEntry(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$Entry *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
}

void clinit_java_util_TreeMap$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_MapEntry(ctx);
}

void M_java_util_TreeMap$Entry_setLocation_java_util_TreeMap$Node_int_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$Entry:setLocation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(90);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(91);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(92);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(93);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[4].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$Entry_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$Entry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	init_java_util_MapEntry_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$Entry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	init_java_util_MapEntry_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$Entry:setValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_node;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_values;
	jint temp0 = (jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[0].o)))->F_index;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$Entry[] {
	(void *) M_java_util_MapEntry_hashCode_R_int,
	(void *) M_java_util_MapEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_MapEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_MapEntry_getKey_R_java_lang_Object,
	(void *) M_java_util_MapEntry_getValue_R_java_lang_Object,
	(void *) M_java_util_TreeMap$Entry_setValue_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$Entry_setLocation_java_util_TreeMap$Node_int_java_lang_Object_java_lang_Object,
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
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "setLocation", "(Ljava/util/TreeMap$Node;ILjava/lang/Object;Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "parent", &class_java_util_TreeMap$Entry, offsetof(java_util_TreeMap$Entry, F_parent), "Ljava/util/TreeMap$Entry;", 0 },
	{ "left", &class_java_util_TreeMap$Entry, offsetof(java_util_TreeMap$Entry, F_left), "Ljava/util/TreeMap$Entry;", 0 },
	{ "right", &class_java_util_TreeMap$Entry, offsetof(java_util_TreeMap$Entry, F_right), "Ljava/util/TreeMap$Entry;", 0 },
	{ "node", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$Entry, F_node), "Ljava/util/TreeMap$Node;", 0 },
	{ "index", &class_int, offsetof(java_util_TreeMap$Entry, F_index), "I", 0 },
	{ "color", &class_boolean, offsetof(java_util_TreeMap$Entry, F_color), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "setLocation", (intptr_t) M_java_util_TreeMap$Entry_setLocation_java_util_TreeMap$Node_int_java_lang_Object_java_lang_Object, VTABLE_java_util_TreeMap$Entry_setLocation_java_util_TreeMap$Node_int_java_lang_Object_java_lang_Object, "(Ljava/util/TreeMap$Node;ILjava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$Entry_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "setValue", (intptr_t) M_java_util_TreeMap$Entry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$Entry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
};

Class class_java_util_TreeMap$Entry{
		.nativeName = (intptr_t) "java/util/TreeMap$Entry",
		.parentClass = (intptr_t) &class_java_util_MapEntry,
		.size = sizeof(java_util_TreeMap$Entry),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$Entry,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$Entry = registerClass(&class_java_util_TreeMap$Entry);

}

