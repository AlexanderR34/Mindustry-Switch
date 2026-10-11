#include "java/util/Formatter.h"
#include "java/lang/Object.h"
#include "java/util/Formatter_1.h"
#include "regexodus/Substitution.h"
#include "regexodus/Pattern.h"
#include "java/lang/String.h"
#include "java/util/Formatter.h"
#include "java/util/Formatter_Doormat.h"
#include "regexodus/Replacer.h"
#include "java/lang/CharSequence.h"

extern "C" {

jobject SF_java_util_Formatter_DIGITS_LOWER;
jobject SF_java_util_Formatter_DIGITS_UPPER;

void mark_java_util_Formatter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Formatter_DIGITS_LOWER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Formatter_DIGITS_LOWER)->clazz)->markFunction)((jobject) SF_java_util_Formatter_DIGITS_LOWER, mark, depth + 1);
		if (SF_java_util_Formatter_DIGITS_UPPER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Formatter_DIGITS_UPPER)->clazz)->markFunction)((jobject) SF_java_util_Formatter_DIGITS_UPPER, mark, depth + 1);
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
	auto self = (java_util_Formatter *) object;
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
	if (self->F_formatted)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_formatted)->clazz)->markFunction)((jobject) self->F_formatted, mark, depth + 1);
}

void init_java_util_Formatter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"%(?:({=index}\\d+)\\$)?(?:({=esc}%)|({=str}({=flags}[ 0-]+)?({=width}[1-9][0-9]*)?s)|({=int}({=flags}[ +0-]+)?({=width}[1-9][0-9]*)?d)|({=hex}({=flags}[0-]+)?({=width}[1-9][0-9]*)?({=case}[xX]))|({=float}({=flags}[ +0-]+)?({=width}[1-9][0-9]*)?({=pre}\\.({=precise}[0-9]+))?f))"_j))));
	((java_util_Formatter *) NULL_CHECK(sp[0].o))->F_pattern = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:format", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(30);
	clinit_java_util_Formatter$Doormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Formatter$Doormat);
	init_java_util_Formatter$Doormat_Array1_java_lang_Object_java_util_Formatter$1(ctx, sp[0].o, (frame[2].o), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(31);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	sp[1].o = (jobject)((java_util_Formatter *) NULL_CHECK((frame[0].o)))->F_pattern;
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[4].o), (frame[1].o));
	((java_util_Formatter *) NULL_CHECK(sp[0].o))->F_formatted = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Formatter_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_util_Formatter *) NULL_CHECK((frame[0].o)))->F_formatted;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Formatter_access$100_R_Array1_char(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:access$100", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter(ctx);
	{
	LINE_NUMBER(11);
	clinit_java_util_Formatter(ctx);
	sp[0].o = (jobject)SF_java_util_Formatter_DIGITS_LOWER;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Formatter_access$200_R_Array1_char(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:access$200", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter(ctx);
	{
	LINE_NUMBER(11);
	clinit_java_util_Formatter(ctx);
	sp[0].o = (jobject)SF_java_util_Formatter_DIGITS_UPPER;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Formatter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject) createArray(ctx, &class_char, (36));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (97);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (98);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (99);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (100);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (101);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (102);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (103);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (104);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (105);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (106);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (107);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (108);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (109);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (110);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (111);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (112);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (113);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (114);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (115);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (116);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (117);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (118);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (119);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (120);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (121);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (122);
	clinit_java_util_Formatter(ctx);
	SF_java_util_Formatter_DIGITS_LOWER = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject) createArray(ctx, &class_char, (36));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (65);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (66);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (67);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (68);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (69);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (70);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (71);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (72);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (73);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (74);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (75);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (76);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (77);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (78);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (79);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (80);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (81);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (82);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (83);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (84);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (85);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (86);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (87);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (88);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (89);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (90);
	clinit_java_util_Formatter(ctx);
	SF_java_util_Formatter_DIGITS_UPPER = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Formatter[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Formatter_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter,
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
	{ "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;" },
};

static jclass innerClasses[] {
	&class_java_util_Formatter$Doormat,
};

static FieldMetadata fields[] {
	{ "DIGITS_LOWER", getArrayClass(&class_char, 1), (intptr_t) &SF_java_util_Formatter_DIGITS_LOWER, "[C", 26 },
	{ "DIGITS_UPPER", getArrayClass(&class_char, 1), (intptr_t) &SF_java_util_Formatter_DIGITS_UPPER, "[C", 26 },
	{ "pattern", &class_regexodus_Pattern, offsetof(java_util_Formatter, F_pattern), "Lregexodus/Pattern;", 18 },
	{ "formatted", &class_java_lang_String, offsetof(java_util_Formatter, F_formatted), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Formatter, 0, "()V", 1 },
	{ "format", (intptr_t) M_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter, VTABLE_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;", 129 },
	{ "toString", (intptr_t) M_java_util_Formatter_toString_R_java_lang_String, VTABLE_java_util_Formatter_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "access$100", (intptr_t) SM_java_util_Formatter_access$100_R_Array1_char, 0, "()[C", 4104 },
	{ "access$200", (intptr_t) SM_java_util_Formatter_access$200_R_Array1_char, 0, "()[C", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_Formatter, 0, "()V", 8 },
};

Class class_java_util_Formatter{
		.nativeName = (intptr_t) "java/util/Formatter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Formatter),
		.classVtable = (intptr_t) vtable_java_util_Formatter,
		.staticInitializer = (intptr_t) clinit_java_util_Formatter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Formatter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Formatter = registerClass(&class_java_util_Formatter);

}
