#include "regexodus/Replacer_StringBufferBuffer.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer_StringBufferBuffer.h"
#include "regexodus/Replacer.h"
#include "java/lang/StringBuffer.h"

extern "C" {

jlong SF_regexodus_Replacer$StringBufferBuffer_serialVersionUID;

void mark_regexodus_Replacer$StringBufferBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Replacer$StringBufferBuffer *) object;
	if (self->F_sb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sb)->clazz)->markFunction)((jobject) self->F_sb, mark, depth + 1);
}

void clinit_regexodus_Replacer$StringBufferBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Replacer$StringBufferBuffer_serialVersionUID = jlong(2589054766833218313ll);
}

void init_regexodus_Replacer$StringBufferBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$StringBufferBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(499);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[1].o);
	((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK(sp[0].o))->F_sb = (jref) sp[1].o;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Replacer$StringBufferBuffer_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$StringBufferBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(503);
	((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb = (jref) (frame[1].o);
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer$StringBufferBuffer_append_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer$StringBufferBuffer_append_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer$StringBufferBuffer_append_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer$StringBufferBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer$StringBufferBuffer_toStringBuffer_R_java_lang_StringBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$StringBufferBuffer:toStringBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((regexodus_Replacer$StringBufferBuffer *) NULL_CHECK((frame[0].o)))->F_sb;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Replacer$StringBufferBuffer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Replacer$StringBufferBuffer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Replacer$StringBufferBuffer_append_char,
	(void *) M_regexodus_Replacer$StringBufferBuffer_append_Array1_char_int_int,
	(void *) M_regexodus_Replacer$StringBufferBuffer_append_java_lang_String,
	(void *) M_regexodus_Replacer$StringBufferBuffer_toStringBuffer_R_java_lang_StringBuffer,
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
	{ "toStringBuffer", "()Ljava/lang/StringBuffer;" },
};

static jclass interfaces[] { &class_regexodus_TextBuffer, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Replacer$StringBufferBuffer_serialVersionUID, "J", 26 },
	{ "sb", &class_java_lang_StringBuffer, offsetof(regexodus_Replacer$StringBufferBuffer, F_sb), "Ljava/lang/StringBuffer;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Replacer$StringBufferBuffer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Replacer$StringBufferBuffer_java_lang_StringBuffer, 0, "(Ljava/lang/StringBuffer;)V", 1 },
	{ "append", (intptr_t) M_regexodus_Replacer$StringBufferBuffer_append_char, VTABLE_regexodus_Replacer$StringBufferBuffer_append_char, "(C)V", 1 },
	{ "append", (intptr_t) M_regexodus_Replacer$StringBufferBuffer_append_Array1_char_int_int, VTABLE_regexodus_Replacer$StringBufferBuffer_append_Array1_char_int_int, "([CII)V", 1 },
	{ "append", (intptr_t) M_regexodus_Replacer$StringBufferBuffer_append_java_lang_String, VTABLE_regexodus_Replacer$StringBufferBuffer_append_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toString", (intptr_t) M_regexodus_Replacer$StringBufferBuffer_toString_R_java_lang_String, VTABLE_regexodus_Replacer$StringBufferBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toStringBuffer", (intptr_t) M_regexodus_Replacer$StringBufferBuffer_toStringBuffer_R_java_lang_StringBuffer, VTABLE_regexodus_Replacer$StringBufferBuffer_toStringBuffer_R_java_lang_StringBuffer, "()Ljava/lang/StringBuffer;", 1 },
};

Class class_regexodus_Replacer$StringBufferBuffer{
		.nativeName = (intptr_t) "regexodus/Replacer$StringBufferBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Replacer$StringBufferBuffer),
		.classVtable = (intptr_t) vtable_regexodus_Replacer$StringBufferBuffer,
		.staticInitializer = (intptr_t) clinit_regexodus_Replacer$StringBufferBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Replacer$StringBufferBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_Replacer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Replacer$StringBufferBuffer = registerClass(&class_regexodus_Replacer$StringBufferBuffer);

}

