#include "java/nio/charset/StandardCharsets.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/StandardCharsets.h"
#include "java/nio/charset/Charset.h"

extern "C" {

jobject SF_java_nio_charset_StandardCharsets_US_ASCII;
jobject SF_java_nio_charset_StandardCharsets_ISO_8859_1;
jobject SF_java_nio_charset_StandardCharsets_UTF_8;
jobject SF_java_nio_charset_StandardCharsets_UTF_16BE;
jobject SF_java_nio_charset_StandardCharsets_UTF_16LE;
jobject SF_java_nio_charset_StandardCharsets_UTF_16;

void mark_java_nio_charset_StandardCharsets(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_charset_StandardCharsets_US_ASCII)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_US_ASCII)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_US_ASCII, mark, depth + 1);
		if (SF_java_nio_charset_StandardCharsets_ISO_8859_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_ISO_8859_1)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_ISO_8859_1, mark, depth + 1);
		if (SF_java_nio_charset_StandardCharsets_UTF_8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_UTF_8)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_UTF_8, mark, depth + 1);
		if (SF_java_nio_charset_StandardCharsets_UTF_16BE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_UTF_16BE)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_UTF_16BE, mark, depth + 1);
		if (SF_java_nio_charset_StandardCharsets_UTF_16LE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_UTF_16LE)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_UTF_16LE, mark, depth + 1);
		if (SF_java_nio_charset_StandardCharsets_UTF_16)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_StandardCharsets_UTF_16)->clazz)->markFunction)((jobject) SF_java_nio_charset_StandardCharsets_UTF_16, mark, depth + 1);
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
	auto self = (java_nio_charset_StandardCharsets *) object;
}

void init_java_nio_charset_StandardCharsets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/StandardCharsets:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_StandardCharsets(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_charset_StandardCharsets(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/StandardCharsets:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_StandardCharsets(ctx);
	{
	LINE_NUMBER(4);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"US-ASCII"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_US_ASCII = sp[0].o;
	LINE_NUMBER(5);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ISO-8859-1"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_ISO_8859_1 = sp[0].o;
	LINE_NUMBER(6);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_UTF_8 = sp[0].o;
	LINE_NUMBER(7);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UTF-16BE"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_UTF_16BE = sp[0].o;
	LINE_NUMBER(8);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UTF-16LE"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_UTF_16LE = sp[0].o;
	LINE_NUMBER(9);
	clinit_java_nio_charset_Charset(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_charset_Charset);
	init_java_nio_charset_Charset_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UTF-16"_j))));
	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_java_nio_charset_StandardCharsets_UTF_16 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_StandardCharsets[] {
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
	{ "US_ASCII", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_US_ASCII, "Ljava/nio/charset/Charset;", 25 },
	{ "ISO_8859_1", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_ISO_8859_1, "Ljava/nio/charset/Charset;", 25 },
	{ "UTF_8", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_UTF_8, "Ljava/nio/charset/Charset;", 25 },
	{ "UTF_16BE", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_UTF_16BE, "Ljava/nio/charset/Charset;", 25 },
	{ "UTF_16LE", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_UTF_16LE, "Ljava/nio/charset/Charset;", 25 },
	{ "UTF_16", &class_java_nio_charset_Charset, (intptr_t) &SF_java_nio_charset_StandardCharsets_UTF_16, "Ljava/nio/charset/Charset;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_StandardCharsets, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_charset_StandardCharsets, 0, "()V", 8 },
};

Class class_java_nio_charset_StandardCharsets{
		.nativeName = (intptr_t) "java/nio/charset/StandardCharsets",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_StandardCharsets),
		.classVtable = (intptr_t) vtable_java_nio_charset_StandardCharsets,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_StandardCharsets,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_StandardCharsets,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_StandardCharsets = registerClass(&class_java_nio_charset_StandardCharsets);

}
