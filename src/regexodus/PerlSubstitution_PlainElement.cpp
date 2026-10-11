#include "regexodus/PerlSubstitution_PlainElement.h"
#include "regexodus/MatchResult.h"
#include "regexodus/PerlSubstitution_PlainElement.h"
#include "java/lang/Object.h"
#include "regexodus/PerlSubstitution.h"
#include "regexodus/PerlSubstitution_1.h"
#include "java/lang/String.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/PerlSubstitution_Element.h"
#include "java/lang/Class.h"

extern "C" {


void mark_regexodus_PerlSubstitution$PlainElement(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_regexodus_PerlSubstitution$Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (regexodus_PerlSubstitution$PlainElement *) object;
	if (self->F_str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str)->clazz)->markFunction)((jobject) self->F_str, mark, depth + 1);
}

void clinit_regexodus_PerlSubstitution$PlainElement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_PerlSubstitution$Element(ctx);
}

void init_regexodus_PerlSubstitution$PlainElement_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$PlainElement:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution$PlainElement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(248);
	((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[1].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_PerlSubstitution$PlainElement_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$PlainElement:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution$PlainElement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(251);
	init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(252);
	((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[1].o);
	LINE_NUMBER(253);
	((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[2].o);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$PlainElement:append", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[0].o)))->F_prefix;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[0].o)))->F_prefix;
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$PlainElement:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(264);
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
	LINE_NUMBER(266);
	frame[2].o = (checkCast(ctx, &class_regexodus_PerlSubstitution$PlainElement, (frame[1].o)));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	sp[1].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[2].o)))->F_str;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[2].o)))->F_str;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ICONST(1);
	goto label_6;
label_7:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_PerlSubstitution$PlainElement_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$PlainElement:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$PlainElement *) NULL_CHECK((frame[0].o)))->F_str;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_regexodus_PerlSubstitution$PlainElement[] {
	(void *) M_regexodus_PerlSubstitution$PlainElement_hashCode_R_int,
	(void *) M_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer,
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
	{ "append", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
};

static FieldMetadata fields[] {
	{ "str", &class_java_lang_String, offsetof(regexodus_PerlSubstitution$PlainElement, F_str), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution$PlainElement_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution$PlainElement_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "append", (intptr_t) M_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_regexodus_PerlSubstitution$PlainElement_append_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 0 },
	{ "equals", (intptr_t) M_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean, VTABLE_regexodus_PerlSubstitution$PlainElement_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_PerlSubstitution$PlainElement_hashCode_R_int, VTABLE_regexodus_PerlSubstitution$PlainElement_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_PerlSubstitution$PlainElement{
		.nativeName = (intptr_t) "regexodus/PerlSubstitution$PlainElement",
		.parentClass = (intptr_t) &class_regexodus_PerlSubstitution$Element,
		.size = sizeof(regexodus_PerlSubstitution$PlainElement),
		.classVtable = (intptr_t) vtable_regexodus_PerlSubstitution$PlainElement,
		.staticInitializer = (intptr_t) clinit_regexodus_PerlSubstitution$PlainElement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_PerlSubstitution$PlainElement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_PerlSubstitution,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_PerlSubstitution$PlainElement = registerClass(&class_regexodus_PerlSubstitution$PlainElement);

}

