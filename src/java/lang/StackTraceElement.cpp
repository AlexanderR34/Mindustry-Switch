#include "java/lang/StackTraceElement.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/StackTraceElement.h"

extern "C" {


void mark_java_lang_StackTraceElement(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_StackTraceElement *) object;
	if (self->F_declaringClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_declaringClass)->clazz)->markFunction)((jobject) self->F_declaringClass, mark, depth + 1);
	if (self->F_methodName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_methodName)->clazz)->markFunction)((jobject) self->F_methodName, mark, depth + 1);
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
}

void clinit_java_lang_StackTraceElement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_StackTraceElement_java_lang_String_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StackTraceElement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(36);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(38);
	((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_declaringClass = (jref) (frame[1].o);
	LINE_NUMBER(39);
	((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_methodName = (jref) (frame[2].o);
	LINE_NUMBER(40);
	((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_fileName = (jref) (frame[3].o);
	LINE_NUMBER(41);
	((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_lineNumber = (frame[4].i);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StackTraceElement_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_declaringClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StackTraceElement_getMethodName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:getMethodName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_methodName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StackTraceElement_getFileName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:getFileName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_fileName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_StackTraceElement_getLineNumber_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:getLineNumber", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((jint)((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_lineNumber);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_StackTraceElement_isNativeMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StackTraceElement:isNativeMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_lang_StackTraceElement *) NULL_CHECK((frame[0].o)))->F_fileName;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_StackTraceElement[] {
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
	(void *) M_java_lang_StackTraceElement_getClassName_R_java_lang_String,
	(void *) M_java_lang_StackTraceElement_getMethodName_R_java_lang_String,
	(void *) M_java_lang_StackTraceElement_getFileName_R_java_lang_String,
	(void *) M_java_lang_StackTraceElement_getLineNumber_R_int,
	(void *) M_java_lang_StackTraceElement_isNativeMethod_R_boolean,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "getMethodName", "()Ljava/lang/String;" },
	{ "getFileName", "()Ljava/lang/String;" },
	{ "getLineNumber", "()I" },
	{ "isNativeMethod", "()Z" },
};

static FieldMetadata fields[] {
	{ "declaringClass", &class_java_lang_String, offsetof(java_lang_StackTraceElement, F_declaringClass), "Ljava/lang/String;", 2 },
	{ "methodName", &class_java_lang_String, offsetof(java_lang_StackTraceElement, F_methodName), "Ljava/lang/String;", 2 },
	{ "fileName", &class_java_lang_String, offsetof(java_lang_StackTraceElement, F_fileName), "Ljava/lang/String;", 2 },
	{ "lineNumber", &class_int, offsetof(java_lang_StackTraceElement, F_lineNumber), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_StackTraceElement_java_lang_String_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", 1 },
	{ "getClassName", (intptr_t) M_java_lang_StackTraceElement_getClassName_R_java_lang_String, VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMethodName", (intptr_t) M_java_lang_StackTraceElement_getMethodName_R_java_lang_String, VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFileName", (intptr_t) M_java_lang_StackTraceElement_getFileName_R_java_lang_String, VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getLineNumber", (intptr_t) M_java_lang_StackTraceElement_getLineNumber_R_int, VTABLE_java_lang_StackTraceElement_getLineNumber_R_int, "()I", 1 },
	{ "isNativeMethod", (intptr_t) M_java_lang_StackTraceElement_isNativeMethod_R_boolean, VTABLE_java_lang_StackTraceElement_isNativeMethod_R_boolean, "()Z", 1 },
};

Class class_java_lang_StackTraceElement{
		.nativeName = (intptr_t) "java/lang/StackTraceElement",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_StackTraceElement),
		.classVtable = (intptr_t) vtable_java_lang_StackTraceElement,
		.staticInitializer = (intptr_t) clinit_java_lang_StackTraceElement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_StackTraceElement,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_StackTraceElement = registerClass(&class_java_lang_StackTraceElement);

}
