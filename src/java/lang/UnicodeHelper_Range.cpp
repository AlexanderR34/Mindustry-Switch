#include "java/lang/UnicodeHelper_Range.h"
#include "java/lang/UnicodeHelper.h"
#include "java/lang/Object.h"
#include "java/lang/UnicodeHelper_Range.h"

extern "C" {


void mark_java_lang_UnicodeHelper$Range(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_UnicodeHelper$Range *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_java_lang_UnicodeHelper$Range(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_UnicodeHelper$Range_int_int_Array1_byte(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper$Range:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper$Range(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1605);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1606);
	((java_lang_UnicodeHelper$Range *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(1607);
	((java_lang_UnicodeHelper$Range *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(1608);
	((java_lang_UnicodeHelper$Range *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[3].o);
	LINE_NUMBER(1609);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_UnicodeHelper$Range[] {
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
	{ "start", &class_int, offsetof(java_lang_UnicodeHelper$Range, F_start), "I", 17 },
	{ "end", &class_int, offsetof(java_lang_UnicodeHelper$Range, F_end), "I", 17 },
	{ "data", getArrayClass(&class_byte, 1), offsetof(java_lang_UnicodeHelper$Range, F_data), "[B", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_UnicodeHelper$Range_int_int_Array1_byte, 0, "(II[B)V", 1 },
};

Class class_java_lang_UnicodeHelper$Range{
		.nativeName = (intptr_t) "java/lang/UnicodeHelper$Range",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_UnicodeHelper$Range),
		.classVtable = (intptr_t) vtable_java_lang_UnicodeHelper$Range,
		.staticInitializer = (intptr_t) clinit_java_lang_UnicodeHelper$Range,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_UnicodeHelper$Range,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_UnicodeHelper,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_java_lang_UnicodeHelper$Range = registerClass(&class_java_lang_UnicodeHelper$Range);

}

