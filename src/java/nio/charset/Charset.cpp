#include "java/nio/charset/Charset.h"
#include "java/nio/charset/CharsetEncoder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/StandardCharsets.h"
#include "java/nio/charset/UnsupportedCharsetException.h"
#include "java/lang/Comparable.h"
#include "java/nio/charset/Charset.h"
#include "java/nio/charset/CharsetDecoder.h"
#include "java/io/UnsupportedOperationException.h"

extern "C" {


void mark_java_nio_charset_Charset(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_charset_Charset *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_java_nio_charset_Charset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_charset_Charset_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_Charset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((java_nio_charset_Charset *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_charset_Charset_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_Charset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((java_nio_charset_Charset *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((java_nio_charset_Charset *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((java_nio_charset_Charset *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_Charset_displayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:displayName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((java_nio_charset_Charset *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:forName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_Charset(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	frame[1].o = (frame[0].o);
	frame[2].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case -1781783509: goto label_1;
		case -185735358: goto label_2;
		case 81070450: goto label_3;
		case 1398001070: goto label_4;
		case 1398001380: goto label_5;
		case 2027158704: goto label_6;
		default: goto label_7;
	}
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	frame[2].i = (jint(0));
	goto label_7;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ISO-8859-1"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	frame[2].i = (jint(1));
	goto label_7;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-16"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	frame[2].i = (jint(2));
	goto label_7;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-16LE"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	frame[2].i = (jint(3));
	goto label_7;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-16BE"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	frame[2].i = (jint(4));
	goto label_7;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"US-ASCII"_j))));
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(5);
	INST_ISTORE(2);
label_7:;
	INST_ILOAD(2);
	switch((--sp)->i) {
		case 0: goto label_8;
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		case 4: goto label_12;
		case 5: goto label_13;
		default: goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(53);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_8;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(54);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_ISO_8859_1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(55);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_16;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(56);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_16LE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(57);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_16BE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(58);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_US_ASCII;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(59);
	clinit_java_nio_charset_UnsupportedCharsetException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_UnsupportedCharsetException);
	init_java_nio_charset_UnsupportedCharsetException_java_lang_String(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_charset_Charset_defaultCharset_R_java_nio_charset_Charset(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:defaultCharset", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_Charset(ctx);
	{
	LINE_NUMBER(64);
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[0].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_8;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:newDecoder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:newEncoder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_nio_charset_Charset_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/Charset:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_charset_Charset, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_Charset[] {
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
	(void *) M_java_nio_charset_Charset_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int,
	(void *) M_java_nio_charset_Charset_displayName_R_java_lang_String,
	(void *) M_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder,
	(void *) M_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder,
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
	{ "compareTo", "(Ljava/nio/charset/Charset;)I" },
	{ "displayName", "()Ljava/lang/String;" },
	{ "newDecoder", "()Ljava/nio/charset/CharsetDecoder;" },
	{ "newEncoder", "()Ljava/nio/charset/CharsetEncoder;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_nio_charset_Charset, F_name), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_Charset_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_nio_charset_Charset_java_lang_String_Array1_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/String;)V", 4 },
	{ "compareTo", (intptr_t) M_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int, VTABLE_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int, "(Ljava/nio/charset/Charset;)I", 1 },
	{ "displayName", (intptr_t) M_java_nio_charset_Charset_displayName_R_java_lang_String, VTABLE_java_nio_charset_Charset_displayName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "forName", (intptr_t) SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset, 0, "(Ljava/lang/String;)Ljava/nio/charset/Charset;", 9 },
	{ "defaultCharset", (intptr_t) SM_java_nio_charset_Charset_defaultCharset_R_java_nio_charset_Charset, 0, "()Ljava/nio/charset/Charset;", 9 },
	{ "newDecoder", (intptr_t) M_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder, VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder, "()Ljava/nio/charset/CharsetDecoder;", 1 },
	{ "newEncoder", (intptr_t) M_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder, VTABLE_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder, "()Ljava/nio/charset/CharsetEncoder;", 1 },
	{ "compareTo", (intptr_t) M_java_nio_charset_Charset_compareTo_java_lang_Object_R_int, VTABLE_java_nio_charset_Charset_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_nio_charset_Charset{
		.nativeName = (intptr_t) "java/nio/charset/Charset",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_Charset),
		.classVtable = (intptr_t) vtable_java_nio_charset_Charset,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_Charset,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_Charset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_Charset = registerClass(&class_java_nio_charset_Charset);

}
