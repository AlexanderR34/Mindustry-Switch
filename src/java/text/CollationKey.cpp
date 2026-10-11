#include "java/text/CollationKey.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "java/text/CollationKey.h"

extern "C" {


void mark_java_text_CollationKey(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_CollationKey *) object;
	if (self->F_source)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_source)->clazz)->markFunction)((jobject) self->F_source, mark, depth + 1);
}

void clinit_java_text_CollationKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_text_CollationKey_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/CollationKey:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_CollationKey(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((java_text_CollationKey *) NULL_CHECK((frame[0].o)))->F_source = (jref) (frame[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_CollationKey_getSourceString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/CollationKey:getSourceString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_text_CollationKey *) NULL_CHECK((frame[0].o)))->F_source;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_text_CollationKey_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/CollationKey:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_text_CollationKey_compareTo_java_text_CollationKey_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_CollationKey_compareTo_java_text_CollationKey_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_text_CollationKey, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_CollationKey[] {
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
	(void *) M_java_text_CollationKey_compareTo_java_lang_Object_R_int,
	(void *) nullptr,
	(void *) M_java_text_CollationKey_getSourceString_R_java_lang_String,
	(void *) nullptr,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/text/CollationKey;)I" },
	{ "getSourceString", "()Ljava/lang/String;" },
	{ "toByteArray", "()[B" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "source", &class_java_lang_String, offsetof(java_text_CollationKey, F_source), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_CollationKey_java_lang_String, 0, "(Ljava/lang/String;)V", 4 },
	{ "compareTo", 0, VTABLE_java_text_CollationKey_compareTo_java_text_CollationKey_R_int, "(Ljava/text/CollationKey;)I", 1025 },
	{ "getSourceString", (intptr_t) M_java_text_CollationKey_getSourceString_R_java_lang_String, VTABLE_java_text_CollationKey_getSourceString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toByteArray", 0, VTABLE_java_text_CollationKey_toByteArray_R_Array1_byte, "()[B", 1025 },
	{ "compareTo", (intptr_t) M_java_text_CollationKey_compareTo_java_lang_Object_R_int, VTABLE_java_text_CollationKey_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_text_CollationKey{
		.nativeName = (intptr_t) "java/text/CollationKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_CollationKey),
		.classVtable = (intptr_t) vtable_java_text_CollationKey,
		.staticInitializer = (intptr_t) clinit_java_text_CollationKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_CollationKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_CollationKey = registerClass(&class_java_text_CollationKey);

}
