#include "rhino/regexp/SubString.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/regexp/SubString.h"

extern "C" {


void mark_rhino_regexp_SubString(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_SubString *) object;
	if (self->F_str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str)->clazz)->markFunction)((jobject) self->F_str, mark, depth + 1);
}

void clinit_rhino_regexp_SubString(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_SubString(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/SubString:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_SubString(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_regexp_SubString_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/SubString:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_SubString(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[1].o);
	LINE_NUMBER(13);
	((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = temp0;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_regexp_SubString_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/SubString:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_SubString(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[1].o);
	LINE_NUMBER(19);
	((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(20);
	((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_length = (frame[3].i);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_SubString_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/SubString:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_str;
	jint temp0 = (jint)((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_index;
	jint temp1 = ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_index) + ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	}
label_2:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_SubString[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_regexp_SubString_toString_R_java_lang_String,
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
	{ "str", &class_java_lang_String, offsetof(rhino_regexp_SubString, F_str), "Ljava/lang/String;", 0 },
	{ "index", &class_int, offsetof(rhino_regexp_SubString, F_index), "I", 0 },
	{ "length", &class_int, offsetof(rhino_regexp_SubString, F_length), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_SubString, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_regexp_SubString_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_regexp_SubString_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 1 },
	{ "toString", (intptr_t) M_rhino_regexp_SubString_toString_R_java_lang_String, VTABLE_rhino_regexp_SubString_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_regexp_SubString{
		.nativeName = (intptr_t) "rhino/regexp/SubString",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_SubString),
		.classVtable = (intptr_t) vtable_rhino_regexp_SubString,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_SubString,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_SubString,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_SubString = registerClass(&class_rhino_regexp_SubString);

}
