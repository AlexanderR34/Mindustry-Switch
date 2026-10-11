#include "java/io/Writer.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/Writer.h"
#include "java/io/Closeable.h"
#include "java/lang/Appendable.h"
#include "java/lang/Throwable.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_io_Writer(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_Writer *) object;
	if (self->F_lock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lock)->clazz)->markFunction)((jobject) self->F_lock, mark, depth + 1);
}

void clinit_java_io_Writer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_io_Writer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_Writer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock = (jref) (frame[0].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_Writer_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_Writer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(51);
	((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock = (jref) (frame[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_Writer_write_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_Writer_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	ARRAY_ACCESS(jchar, (frame[3].o), (jint(0))) = (jchar((frame[1].i)));
	LINE_NUMBER(84);
	((func_java_io_Writer_write_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_Array1_char])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(85);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_10:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_Writer_write_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_Writer_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:write", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(99);
	if ((frame[3].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(100);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(103);
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[3].i)), (frame[4].o), (jint(0)));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((java_io_Writer *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(106);
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, (frame[0].o), (frame[4].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(107);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_12:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_Writer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Writer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_io_Writer_append_char_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_append_char_R_java_io_Writer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_Writer[] {
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
	(void *) M_java_io_Writer_append_char_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) nullptr,
	(void *) M_java_io_Writer_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_java_io_Writer_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([C)V" },
	{ "write", "([CII)V" },
	{ "write", "(I)V" },
	{ "write", "(Ljava/lang/String;)V" },
	{ "write", "(Ljava/lang/String;II)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;" },
	{ "append", "(C)Ljava/io/Writer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;" },
};

static jclass interfaces[] { &class_java_lang_Appendable, &class_java_io_Closeable, };

static FieldMetadata fields[] {
	{ "lock", &class_java_lang_Object, offsetof(java_io_Writer, F_lock), "Ljava/lang/Object;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_Writer, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_java_io_Writer_java_lang_Object, 0, "(Ljava/lang/Object;)V", 4 },
	{ "close", 0, VTABLE_java_io_Writer_close, "()V", 1025 },
	{ "flush", 0, VTABLE_java_io_Writer_flush, "()V", 1025 },
	{ "write", (intptr_t) M_java_io_Writer_write_Array1_char, VTABLE_java_io_Writer_write_Array1_char, "([C)V", 1 },
	{ "write", 0, VTABLE_java_io_Writer_write_Array1_char_int_int, "([CII)V", 1025 },
	{ "write", (intptr_t) M_java_io_Writer_write_int, VTABLE_java_io_Writer_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_Writer_write_java_lang_String, VTABLE_java_io_Writer_write_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "write", (intptr_t) M_java_io_Writer_write_java_lang_String_int_int, VTABLE_java_io_Writer_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "append", (intptr_t) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer, VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer, "(Ljava/lang/CharSequence;)Ljava/io/Writer;", 1 },
	{ "append", (intptr_t) M_java_io_Writer_append_char_R_java_io_Writer, VTABLE_java_io_Writer_append_char_R_java_io_Writer, "(C)Ljava/io/Writer;", 1 },
	{ "append", (intptr_t) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer, VTABLE_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer, "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", 1 },
	{ "append", (intptr_t) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_Writer_append_char_R_java_lang_Appendable, VTABLE_java_io_Writer_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_io_Writer{
		.nativeName = (intptr_t) "java/io/Writer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_Writer),
		.classVtable = (intptr_t) vtable_java_io_Writer,
		.staticInitializer = (intptr_t) clinit_java_io_Writer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_Writer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_Writer = registerClass(&class_java_io_Writer);

}
