#include "arc/util/serialization/SerializationException.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/serialization/SerializationException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_arc_util_serialization_SerializationException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_RuntimeException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_serialization_SerializationException *) object;
	if (self->F_trace)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trace)->clazz)->markFunction)((jobject) self->F_trace, mark, depth + 1);
}

void clinit_arc_util_serialization_SerializationException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_RuntimeException(ctx);
}

void init_arc_util_serialization_SerializationException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_SerializationException(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_RuntimeException(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_SerializationException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(15);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_SerializationException_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_SerializationException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_RuntimeException_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_SerializationException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_SerializationException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_SerializationException_causedBy_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:causedBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)M_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean(ctx, (frame[0].o), (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:causedBy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_lang_Throwable_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	if ((frame[3].o) != (frame[1].o)) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)M_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_SerializationException_getMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:getMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_util_serialization_SerializationException *) NULL_CHECK((frame[0].o)))->F_trace;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)M_java_lang_Throwable_getMessage_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(40);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (512));
	frame[1].o = sp[0].o;
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_java_lang_Throwable_getMessage_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	}
label_4:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Serialization trace:"_j))));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_serialization_SerializationException *) NULL_CHECK((frame[0].o)))->F_trace;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_SerializationException_addTrace_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/SerializationException:addTrace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"info cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_util_serialization_SerializationException *) NULL_CHECK((frame[0].o)))->F_trace;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[1].o, (512));
	((arc_util_serialization_SerializationException *) NULL_CHECK(sp[0].o))->F_trace = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_util_serialization_SerializationException *) NULL_CHECK((frame[0].o)))->F_trace;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (10));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_util_serialization_SerializationException *) NULL_CHECK((frame[0].o)))->F_trace;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_SerializationException[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Throwable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getStack_R_java_lang_String,
	(void *) M_java_lang_Throwable_getCause_R_java_lang_Throwable,
	(void *) M_arc_util_serialization_SerializationException_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintStream,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
	(void *) M_arc_util_serialization_SerializationException_causedBy_java_lang_Class_R_boolean,
	(void *) M_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean,
	(void *) M_arc_util_serialization_SerializationException_addTrace_java_lang_String,
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
	{ "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;" },
	{ "getStack", "()Ljava/lang/String;" },
	{ "getCause", "()Ljava/lang/Throwable;" },
	{ "getMessage", "()Ljava/lang/String;" },
	{ "fillInStack", "()V" },
	{ "fillInStackTrace", "()Ljava/lang/Throwable;" },
	{ "printStackTrace", "()V" },
	{ "printStackTrace", "(Ljava/io/PrintStream;)V" },
	{ "printStackTrace", "(Ljava/io/PrintWriter;)V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setStackTrace", "([Ljava/lang/StackTraceElement;)V" },
	{ "addSuppressed", "(Ljava/lang/Throwable;)V" },
	{ "getSuppressed", "()[Ljava/lang/Throwable;" },
	{ "getLocalizedMessage", "()Ljava/lang/String;" },
	{ "causedBy", "(Ljava/lang/Class;)Z" },
	{ "causedBy", "(Ljava/lang/Throwable;Ljava/lang/Class;)Z" },
	{ "addTrace", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "trace", &class_java_lang_StringBuilder, offsetof(arc_util_serialization_SerializationException, F_trace), "Ljava/lang/StringBuilder;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_SerializationException, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable, 0, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_SerializationException_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_serialization_SerializationException_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 1 },
	{ "causedBy", (intptr_t) M_arc_util_serialization_SerializationException_causedBy_java_lang_Class_R_boolean, VTABLE_arc_util_serialization_SerializationException_causedBy_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "causedBy", (intptr_t) M_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean, VTABLE_arc_util_serialization_SerializationException_causedBy_java_lang_Throwable_java_lang_Class_R_boolean, "(Ljava/lang/Throwable;Ljava/lang/Class;)Z", 2 },
	{ "getMessage", (intptr_t) M_arc_util_serialization_SerializationException_getMessage_R_java_lang_String, VTABLE_arc_util_serialization_SerializationException_getMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addTrace", (intptr_t) M_arc_util_serialization_SerializationException_addTrace_java_lang_String, VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_arc_util_serialization_SerializationException{
		.nativeName = (intptr_t) "arc/util/serialization/SerializationException",
		.parentClass = (intptr_t) &class_java_lang_RuntimeException,
		.size = sizeof(arc_util_serialization_SerializationException),
		.classVtable = (intptr_t) vtable_arc_util_serialization_SerializationException,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_SerializationException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_SerializationException,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_SerializationException = registerClass(&class_arc_util_serialization_SerializationException);

}
