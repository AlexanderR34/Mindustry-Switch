#include "regexodus/Replacer_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/Replacer_1.h"
#include "java/io/Writer.h"
#include "regexodus/Replacer_WriteException.h"
#include "regexodus/TextBuffer.h"
#include "java/io/IOException.h"

extern "C" {


void mark_regexodus_Replacer$1(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Replacer$1 *) object;
	if (self->F_val$writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$writer)->clazz)->markFunction)((jobject) self->F_val$writer, mark, depth + 1);
}

void clinit_regexodus_Replacer$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_Replacer$1_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(529);
	((regexodus_Replacer$1 *) NULL_CHECK((frame[0].o)))->F_val$writer = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer$1_append_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$1:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((regexodus_Replacer$1 *) NULL_CHECK((frame[0].o)))->F_val$writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(535);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(533);
	frame[2].o = sp[0].o;
	LINE_NUMBER(534);
	clinit_regexodus_Replacer$WriteException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$WriteException);
	init_regexodus_Replacer$WriteException_java_io_IOException(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_Replacer$1_append_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$1:append", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((regexodus_Replacer$1 *) NULL_CHECK((frame[0].o)))->F_val$writer;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(543);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(541);
	frame[4].o = sp[0].o;
	LINE_NUMBER(542);
	clinit_regexodus_Replacer$WriteException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$WriteException);
	init_regexodus_Replacer$WriteException_java_io_IOException(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(544);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_Replacer$1_append_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$1:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((regexodus_Replacer$1 *) NULL_CHECK((frame[0].o)))->F_val$writer;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(551);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(549);
	frame[2].o = sp[0].o;
	LINE_NUMBER(550);
	clinit_regexodus_Replacer$WriteException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$WriteException);
	init_regexodus_Replacer$WriteException_java_io_IOException(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(552);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_regexodus_Replacer$1[] {
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
	(void *) M_regexodus_Replacer$1_append_char,
	(void *) M_regexodus_Replacer$1_append_Array1_char_int_int,
	(void *) M_regexodus_Replacer$1_append_java_lang_String,
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
	{ "append", "(C)V" },
	{ "append", "([CII)V" },
	{ "append", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_regexodus_TextBuffer, };

static FieldMetadata fields[] {
	{ "val$writer", &class_java_io_Writer, offsetof(regexodus_Replacer$1, F_val$writer), "Ljava/io/Writer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Replacer$1_java_io_Writer, 0, "(Ljava/io/Writer;)V", 0 },
	{ "append", (intptr_t) M_regexodus_Replacer$1_append_char, VTABLE_regexodus_Replacer$1_append_char, "(C)V", 1 },
	{ "append", (intptr_t) M_regexodus_Replacer$1_append_Array1_char_int_int, VTABLE_regexodus_Replacer$1_append_Array1_char_int_int, "([CII)V", 1 },
	{ "append", (intptr_t) M_regexodus_Replacer$1_append_java_lang_String, VTABLE_regexodus_Replacer$1_append_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_regexodus_Replacer$1{
		.nativeName = (intptr_t) "regexodus/Replacer$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Replacer$1),
		.classVtable = (intptr_t) vtable_regexodus_Replacer$1,
		.staticInitializer = (intptr_t) clinit_regexodus_Replacer$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Replacer$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_regexodus_Replacer$1 = registerClass(&class_regexodus_Replacer$1);

}

