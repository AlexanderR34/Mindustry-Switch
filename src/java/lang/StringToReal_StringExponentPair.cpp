#include "java/lang/StringToReal_StringExponentPair.h"
#include "java/lang/StringToReal_StringExponentPair.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/StringToReal.h"
#include "java/lang/StringToReal_1.h"

extern "C" {


void mark_java_lang_StringToReal$StringExponentPair(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_StringToReal$StringExponentPair *) object;
	if (self->F_s)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_s)->clazz)->markFunction)((jobject) self->F_s, mark, depth + 1);
}

void clinit_java_lang_StringToReal$StringExponentPair(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_StringToReal$StringExponentPair(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal$StringExponentPair:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal$StringExponentPair(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_java_lang_StringToReal$StringExponentPair_specialValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal$StringExponentPair:specialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[0].o)))->F_infinity) == 0) goto label_1;
	}
	{
	LINE_NUMBER(38);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[0].o)))->F_negative) == 0) goto label_3;
	}
	(sp++)->f = jfloat(-std::numeric_limits<float>::infinity());
	goto label_4;
label_3:;
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(40);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[0].o)))->F_negative) == 0) goto label_5;
	}
	(sp++)->f = jfloat(-0,000000e+00f);
	goto label_6;
label_5:;
	INST_FCONST(0);
label_6:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void init_java_lang_StringToReal$StringExponentPair_java_lang_StringToReal$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal$StringExponentPair:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal$StringExponentPair(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_java_lang_StringToReal$StringExponentPair(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_StringToReal$StringExponentPair[] {
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
	(void *) M_java_lang_StringToReal$StringExponentPair_specialValue_R_float,
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
	{ "specialValue", "()F" },
};

static FieldMetadata fields[] {
	{ "s", &class_java_lang_String, offsetof(java_lang_StringToReal$StringExponentPair, F_s), "Ljava/lang/String;", 0 },
	{ "e", &class_long, offsetof(java_lang_StringToReal$StringExponentPair, F_e), "J", 0 },
	{ "negative", &class_boolean, offsetof(java_lang_StringToReal$StringExponentPair, F_negative), "Z", 0 },
	{ "infinity", &class_boolean, offsetof(java_lang_StringToReal$StringExponentPair, F_infinity), "Z", 0 },
	{ "zero", &class_boolean, offsetof(java_lang_StringToReal$StringExponentPair, F_zero), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_StringToReal$StringExponentPair, 0, "()V", 2 },
	{ "specialValue", (intptr_t) M_java_lang_StringToReal$StringExponentPair_specialValue_R_float, VTABLE_java_lang_StringToReal$StringExponentPair_specialValue_R_float, "()F", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringToReal$StringExponentPair_java_lang_StringToReal$1, 0, "(Ljava/lang/StringToReal$1;)V", 4096 },
};

Class class_java_lang_StringToReal$StringExponentPair{
		.nativeName = (intptr_t) "java/lang/StringToReal$StringExponentPair",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_StringToReal$StringExponentPair),
		.classVtable = (intptr_t) vtable_java_lang_StringToReal$StringExponentPair,
		.staticInitializer = (intptr_t) clinit_java_lang_StringToReal$StringExponentPair,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_StringToReal$StringExponentPair,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_StringToReal,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_StringToReal$StringExponentPair = registerClass(&class_java_lang_StringToReal$StringExponentPair);

}

