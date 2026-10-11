#include "java/nio/charset/CodingErrorAction.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/CodingErrorAction.h"

extern "C" {

jobject SF_java_nio_charset_CodingErrorAction_IGNORE;
jobject SF_java_nio_charset_CodingErrorAction_REPLACE;
jobject SF_java_nio_charset_CodingErrorAction_REPORT;

void mark_java_nio_charset_CodingErrorAction(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_charset_CodingErrorAction_IGNORE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_CodingErrorAction_IGNORE)->clazz)->markFunction)((jobject) SF_java_nio_charset_CodingErrorAction_IGNORE, mark, depth + 1);
		if (SF_java_nio_charset_CodingErrorAction_REPLACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_CodingErrorAction_REPLACE)->clazz)->markFunction)((jobject) SF_java_nio_charset_CodingErrorAction_REPLACE, mark, depth + 1);
		if (SF_java_nio_charset_CodingErrorAction_REPORT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_CodingErrorAction_REPORT)->clazz)->markFunction)((jobject) SF_java_nio_charset_CodingErrorAction_REPORT, mark, depth + 1);
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
	auto self = (java_nio_charset_CodingErrorAction *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_java_nio_charset_CodingErrorAction_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CodingErrorAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CodingErrorAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((java_nio_charset_CodingErrorAction *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CodingErrorAction_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CodingErrorAction:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_nio_charset_CodingErrorAction *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_charset_CodingErrorAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CodingErrorAction:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CodingErrorAction(ctx);
	{
	LINE_NUMBER(55);
	clinit_java_nio_charset_CodingErrorAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_CodingErrorAction);
	init_java_nio_charset_CodingErrorAction_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IGNORE"_j))));
	clinit_java_nio_charset_CodingErrorAction(ctx);
	SF_java_nio_charset_CodingErrorAction_IGNORE = sp[0].o;
	LINE_NUMBER(63);
	clinit_java_nio_charset_CodingErrorAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_CodingErrorAction);
	init_java_nio_charset_CodingErrorAction_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REPLACE"_j))));
	clinit_java_nio_charset_CodingErrorAction(ctx);
	SF_java_nio_charset_CodingErrorAction_REPLACE = sp[0].o;
	LINE_NUMBER(72);
	clinit_java_nio_charset_CodingErrorAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_CodingErrorAction);
	init_java_nio_charset_CodingErrorAction_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REPORT"_j))));
	clinit_java_nio_charset_CodingErrorAction(ctx);
	SF_java_nio_charset_CodingErrorAction_REPORT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_CodingErrorAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_charset_CodingErrorAction_toString_R_java_lang_String,
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
	{ "name", &class_java_lang_String, offsetof(java_nio_charset_CodingErrorAction, F_name), "Ljava/lang/String;", 2 },
	{ "IGNORE", &class_java_nio_charset_CodingErrorAction, (intptr_t) &SF_java_nio_charset_CodingErrorAction_IGNORE, "Ljava/nio/charset/CodingErrorAction;", 25 },
	{ "REPLACE", &class_java_nio_charset_CodingErrorAction, (intptr_t) &SF_java_nio_charset_CodingErrorAction_REPLACE, "Ljava/nio/charset/CodingErrorAction;", 25 },
	{ "REPORT", &class_java_nio_charset_CodingErrorAction, (intptr_t) &SF_java_nio_charset_CodingErrorAction_REPORT, "Ljava/nio/charset/CodingErrorAction;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_CodingErrorAction_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "toString", (intptr_t) M_java_nio_charset_CodingErrorAction_toString_R_java_lang_String, VTABLE_java_nio_charset_CodingErrorAction_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_charset_CodingErrorAction, 0, "()V", 8 },
};

Class class_java_nio_charset_CodingErrorAction{
		.nativeName = (intptr_t) "java/nio/charset/CodingErrorAction",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_CodingErrorAction),
		.classVtable = (intptr_t) vtable_java_nio_charset_CodingErrorAction,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_CodingErrorAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_CodingErrorAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_CodingErrorAction = registerClass(&class_java_nio_charset_CodingErrorAction);

}
