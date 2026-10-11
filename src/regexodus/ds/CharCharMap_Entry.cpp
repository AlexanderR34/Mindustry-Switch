#include "regexodus/ds/CharCharMap_Entry.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "regexodus/ds/CharCharMap_Entry.h"
#include "java/lang/Class.h"
#include "regexodus/ds/CharCharMap.h"

extern "C" {


void mark_regexodus_ds_CharCharMap$Entry(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_ds_CharCharMap$Entry *) object;
}

void clinit_regexodus_ds_CharCharMap$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_ds_CharCharMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_CharCharMap$Entry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(578);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(584);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_key));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap$Entry_getKey_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_key);
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap$Entry_getValue_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jchar M_regexodus_ds_CharCharMap$Entry_setValue_char_R_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(631);
	frame[2].i = ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(632);
	((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(639);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(641);
	frame[2].o = (checkCast(ctx, &class_regexodus_ds_CharCharMap$Entry, (frame[1].o)));
	LINE_NUMBER(643);
	if (((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_key) == ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[2].o)))->F_key)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(644);
	if (((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value) != ((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[2].o)))->F_value)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_ds_CharCharMap$Entry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/CharCharMap$Entry:hashCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>((((jlong((((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_key) ^ (bit_cast<jint>(bit_cast<uint32_t>(((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_key)) >> (32)))))) * (jlong(-7046029254386353131ll))) + (jlong((((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value) ^ (((jint)((regexodus_ds_CharCharMap$Entry *) NULL_CHECK((frame[0].o)))->F_value) << (32))))))) >> (32)))));
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_ds_CharCharMap$Entry[] {
	(void *) M_regexodus_ds_CharCharMap$Entry_hashCode_R_int,
	(void *) M_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_ds_CharCharMap$Entry_getKey_R_char,
	(void *) M_regexodus_ds_CharCharMap$Entry_getValue_R_char,
	(void *) M_regexodus_ds_CharCharMap$Entry_setValue_char_R_char,
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
	{ "getKey", "()C" },
	{ "getValue", "()C" },
	{ "setValue", "(C)C" },
};

static FieldMetadata fields[] {
	{ "key", &class_char, offsetof(regexodus_ds_CharCharMap$Entry, F_key), "C", 1 },
	{ "value", &class_char, offsetof(regexodus_ds_CharCharMap$Entry, F_value), "C", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_ds_CharCharMap$Entry, 0, "()V", 1 },
	{ "toString", (intptr_t) M_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String, VTABLE_regexodus_ds_CharCharMap$Entry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getKey", (intptr_t) M_regexodus_ds_CharCharMap$Entry_getKey_R_char, VTABLE_regexodus_ds_CharCharMap$Entry_getKey_R_char, "()C", 1 },
	{ "getValue", (intptr_t) M_regexodus_ds_CharCharMap$Entry_getValue_R_char, VTABLE_regexodus_ds_CharCharMap$Entry_getValue_R_char, "()C", 1 },
	{ "setValue", (intptr_t) M_regexodus_ds_CharCharMap$Entry_setValue_char_R_char, VTABLE_regexodus_ds_CharCharMap$Entry_setValue_char_R_char, "(C)C", 1 },
	{ "equals", (intptr_t) M_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean, VTABLE_regexodus_ds_CharCharMap$Entry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_ds_CharCharMap$Entry_hashCode_R_int, VTABLE_regexodus_ds_CharCharMap$Entry_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_ds_CharCharMap$Entry{
		.nativeName = (intptr_t) "regexodus/ds/CharCharMap$Entry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_ds_CharCharMap$Entry),
		.classVtable = (intptr_t) vtable_regexodus_ds_CharCharMap$Entry,
		.staticInitializer = (intptr_t) clinit_regexodus_ds_CharCharMap$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_ds_CharCharMap$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_ds_CharCharMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_ds_CharCharMap$Entry = registerClass(&class_regexodus_ds_CharCharMap$Entry);

}

