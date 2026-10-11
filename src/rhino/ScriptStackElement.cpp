#include "rhino/ScriptStackElement.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/ScriptStackElement.h"

extern "C" {


void mark_rhino_ScriptStackElement(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptStackElement *) object;
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
	if (self->F_functionName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functionName)->clazz)->markFunction)((jobject) self->F_functionName, mark, depth + 1);
}

void clinit_rhino_ScriptStackElement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptStackElement_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptStackElement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_fileName = (jref) (frame[1].o);
	LINE_NUMBER(17);
	((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName = (jref) (frame[2].o);
	LINE_NUMBER(18);
	((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber = (frame[3].i);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptStackElement_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(24);
	((func_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:renderJavaStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\tat "_j))));
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	if (((jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber) <= (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (58));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber));
	}
label_2:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (41));
	}
label_4:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:renderMozillaStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"()"_j))));
	}
label_1:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (64));
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	if (((jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber) <= (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (58));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber));
	}
label_4:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:renderV8Style", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"    at "_j))));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"anonymous"_j));
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(71);
	M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	LINE_NUMBER(75);
	M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	}
label_5:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptStackElement:appendV8Location", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (58));
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber) <= (jint(-1))) goto label_2;
	}
	{
	jint temp0 = (jint)((rhino_ScriptStackElement *) NULL_CHECK((frame[0].o)))->F_lineNumber;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":0"_j))));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptStackElement[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ScriptStackElement_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder,
	(void *) M_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder,
	(void *) M_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder,
	(void *) M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder,
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
	{ "renderJavaStyle", "(Ljava/lang/StringBuilder;)V" },
	{ "renderMozillaStyle", "(Ljava/lang/StringBuilder;)V" },
	{ "renderV8Style", "(Ljava/lang/StringBuilder;)V" },
	{ "appendV8Location", "(Ljava/lang/StringBuilder;)V" },
};

static FieldMetadata fields[] {
	{ "fileName", &class_java_lang_String, offsetof(rhino_ScriptStackElement, F_fileName), "Ljava/lang/String;", 17 },
	{ "functionName", &class_java_lang_String, offsetof(rhino_ScriptStackElement, F_functionName), "Ljava/lang/String;", 17 },
	{ "lineNumber", &class_int, offsetof(rhino_ScriptStackElement, F_lineNumber), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptStackElement_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;I)V", 1 },
	{ "toString", (intptr_t) M_rhino_ScriptStackElement_toString_R_java_lang_String, VTABLE_rhino_ScriptStackElement_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "renderJavaStyle", (intptr_t) M_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder, VTABLE_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "renderMozillaStyle", (intptr_t) M_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder, VTABLE_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "renderV8Style", (intptr_t) M_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder, VTABLE_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "appendV8Location", (intptr_t) M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder, VTABLE_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 2 },
};

Class class_rhino_ScriptStackElement{
		.nativeName = (intptr_t) "rhino/ScriptStackElement",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptStackElement),
		.classVtable = (intptr_t) vtable_rhino_ScriptStackElement,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptStackElement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptStackElement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptStackElement = registerClass(&class_rhino_ScriptStackElement);

}
