#include "java/util/Hashtable_7_1.h"
#include "java/util/MapEntry_Type.h"
#include "java/util/Hashtable_7_1.h"
#include "java/lang/Object.h"
#include "java/util/MapEntry.h"
#include "java/util/Hashtable_7.h"

extern "C" {


void mark_java_util_Hashtable$7$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Hashtable$7$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_java_util_Hashtable$7$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Hashtable$7$1_java_util_Hashtable$7(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$7$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable$7$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(891);
	((java_util_Hashtable$7$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$7$1_get_java_util_MapEntry_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$7$1:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Hashtable$7$1[] {
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
	(void *) M_java_util_Hashtable$7$1_get_java_util_MapEntry_R_java_lang_Object,
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
};

static jclass interfaces[] { &class_java_util_MapEntry$Type, };

static FieldMetadata fields[] {
	{ "this$1", &class_java_util_Hashtable$7, offsetof(java_util_Hashtable$7$1, F_this$1), "Ljava/util/Hashtable$7;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Hashtable$7$1_java_util_Hashtable$7, 0, "(Ljava/util/Hashtable$7;)V", 0 },
	{ "get", (intptr_t) M_java_util_Hashtable$7$1_get_java_util_MapEntry_R_java_lang_Object, VTABLE_java_util_Hashtable$7$1_get_java_util_MapEntry_R_java_lang_Object, "(Ljava/util/MapEntry;)Ljava/lang/Object;", 1 },
};

Class class_java_util_Hashtable$7$1{
		.nativeName = (intptr_t) "java/util/Hashtable$7$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Hashtable$7$1),
		.classVtable = (intptr_t) vtable_java_util_Hashtable$7$1,
		.staticInitializer = (intptr_t) clinit_java_util_Hashtable$7$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Hashtable$7$1,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_Hashtable$7$1 = registerClass(&class_java_util_Hashtable$7$1);

}

