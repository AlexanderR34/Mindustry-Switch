#include "java/util/Hashtable_4_1.h"
#include "java/util/MapEntry_Type.h"
#include "java/lang/Object.h"
#include "java/util/Map_Entry.h"
#include "java/util/Hashtable_4.h"
#include "java/util/MapEntry.h"
#include "java/util/Hashtable_4_1.h"

extern "C" {


void mark_java_util_Hashtable$4$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Hashtable$4$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_java_util_Hashtable$4$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Hashtable$4$1_java_util_Hashtable$4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$4$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable$4$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	((java_util_Hashtable$4$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$4$1:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$4$1:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Hashtable$4$1[] {
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
	(void *) M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object,
	(void *) M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry,
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
	{ "get", "(Ljava/util/MapEntry;)Ljava/lang/Object;" },
	{ "get", "(Ljava/util/MapEntry;)Ljava/util/Map$Entry;" },
};

static jclass interfaces[] { &class_java_util_MapEntry$Type, };

static FieldMetadata fields[] {
	{ "this$1", &class_java_util_Hashtable$4, offsetof(java_util_Hashtable$4$1, F_this$1), "Ljava/util/Hashtable$4;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Hashtable$4$1_java_util_Hashtable$4, 0, "(Ljava/util/Hashtable$4;)V", 0 },
	{ "get", (intptr_t) M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry, VTABLE_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry, "(Ljava/util/MapEntry;)Ljava/util/Map$Entry;", 1 },
	{ "get", (intptr_t) M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object, VTABLE_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object, "(Ljava/util/MapEntry;)Ljava/lang/Object;", 4161 },
};

Class class_java_util_Hashtable$4$1{
		.nativeName = (intptr_t) "java/util/Hashtable$4$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Hashtable$4$1),
		.classVtable = (intptr_t) vtable_java_util_Hashtable$4$1,
		.staticInitializer = (intptr_t) clinit_java_util_Hashtable$4$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Hashtable$4$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_Hashtable$4$1 = registerClass(&class_java_util_Hashtable$4$1);

}

