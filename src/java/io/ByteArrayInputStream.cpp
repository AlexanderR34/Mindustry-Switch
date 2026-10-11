#include "java/io/ByteArrayInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/lang/System.h"

extern "C" {


void mark_java_io_ByteArrayInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_ByteArrayInputStream *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_ByteArrayInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_io_ByteArrayInputStream_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ByteArrayInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(57);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark = (jint(0));
	LINE_NUMBER(58);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(59);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_ByteArrayInputStream_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ByteArrayInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(74);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(76);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (frame[2].i);
	LINE_NUMBER(77);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark = (frame[2].i);
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[2].i) + (frame[3].i)) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jint temp0 = (frame[2].i) + (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((java_io_ByteArrayInputStream *) NULL_CHECK(sp[0].o))->F_count = sp[1].i;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_ByteArrayInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:available", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx, self);
	return (((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos));
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_ByteArrayInputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:mark", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(114);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark = ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(115);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_ByteArrayInputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_io_ByteArrayInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	if (((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_ByteArrayInputStream *) NULL_CHECK(sp[1].o))->F_pos;
	((java_io_ByteArrayInputStream *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255);
	sp[0].i = temp3;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(166);
	SM_java_util_Arrays_checkOffsetAndCount_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(169);
	if (((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count)) goto label_2;
	}
	{
	LINE_NUMBER(170);
	popStackFrame(ctx, self);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(172);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(173);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(176);
	if ((((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos)) >= (frame[3].i)) goto label_6;
	}
	{
	jint temp0 = ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ILOAD(3);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos), (frame[1].o), (frame[2].i), (frame[4].i));
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	((java_io_ByteArrayInputStream *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((java_io_ByteArrayInputStream *) NULL_CHECK(sp[0].o))->F_pos) + (frame[4].i));
	LINE_NUMBER(179);
	popStackFrame(ctx, self);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayInputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos = ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark);
	LINE_NUMBER(192);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_io_ByteArrayInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayInputStream:skip", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(204);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_1;
	}
	{
	LINE_NUMBER(205);
	popStackFrame(ctx, self);
	return (jlong(0));
	}
label_1:;
	{
	LINE_NUMBER(207);
	frame[3].i = ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((longCompare((jlong((((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count) - ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos)))), (frame[1].l))) >= 0) goto label_4;
	}
	{
	jint temp0 = (jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jint temp0 = jint(((jlong(((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos))) + (frame[1].l)));
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	((java_io_ByteArrayInputStream *) NULL_CHECK(sp[0].o))->F_pos = sp[1].i;
	LINE_NUMBER(209);
	popStackFrame(ctx, self);
	return (jlong((((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos) - (frame[3].i))));
	}

	popStackFrame(ctx);
}

void *vtable_java_io_ByteArrayInputStream[] {
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
	(void *) M_java_io_ByteArrayInputStream_close,
	(void *) M_java_io_ByteArrayInputStream_available_R_int,
	(void *) M_java_io_ByteArrayInputStream_mark_int,
	(void *) M_java_io_ByteArrayInputStream_markSupported_R_boolean,
	(void *) M_java_io_ByteArrayInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_ByteArrayInputStream_reset,
	(void *) M_java_io_ByteArrayInputStream_skip_long_R_long,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_io_ByteArrayInputStream, F_buf), "[B", 4 },
	{ "pos", &class_int, offsetof(java_io_ByteArrayInputStream, F_pos), "I", 4 },
	{ "mark", &class_int, offsetof(java_io_ByteArrayInputStream, F_mark), "I", 4 },
	{ "count", &class_int, offsetof(java_io_ByteArrayInputStream, F_count), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_ByteArrayInputStream_Array1_byte, 0, "([B)V", 1 },
	{ "<init>", (intptr_t) init_java_io_ByteArrayInputStream_Array1_byte_int_int, 0, "([BII)V", 1 },
	{ "available", (intptr_t) M_java_io_ByteArrayInputStream_available_R_int, VTABLE_java_io_ByteArrayInputStream_available_R_int, "()I", 33 },
	{ "close", (intptr_t) M_java_io_ByteArrayInputStream_close, VTABLE_java_io_ByteArrayInputStream_close, "()V", 1 },
	{ "mark", (intptr_t) M_java_io_ByteArrayInputStream_mark_int, VTABLE_java_io_ByteArrayInputStream_mark_int, "(I)V", 33 },
	{ "markSupported", (intptr_t) M_java_io_ByteArrayInputStream_markSupported_R_boolean, VTABLE_java_io_ByteArrayInputStream_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_ByteArrayInputStream_read_R_int, VTABLE_java_io_ByteArrayInputStream_read_R_int, "()I", 33 },
	{ "read", (intptr_t) M_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 33 },
	{ "reset", (intptr_t) M_java_io_ByteArrayInputStream_reset, VTABLE_java_io_ByteArrayInputStream_reset, "()V", 33 },
	{ "skip", (intptr_t) M_java_io_ByteArrayInputStream_skip_long_R_long, VTABLE_java_io_ByteArrayInputStream_skip_long_R_long, "(J)J", 33 },
};

Class class_java_io_ByteArrayInputStream{
		.nativeName = (intptr_t) "java/io/ByteArrayInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_io_ByteArrayInputStream),
		.classVtable = (intptr_t) vtable_java_io_ByteArrayInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_ByteArrayInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_ByteArrayInputStream,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_ByteArrayInputStream = registerClass(&class_java_io_ByteArrayInputStream);

}
