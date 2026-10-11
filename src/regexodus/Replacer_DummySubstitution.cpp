#include "regexodus/Replacer_DummySubstitution.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"
#include "java/lang/String.h"
#include "regexodus/Replacer_DummySubstitution.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer.h"

extern "C" {


void mark_regexodus_Replacer$DummySubstitution(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Replacer$DummySubstitution *) object;
	if (self->F_str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str)->clazz)->markFunction)((jobject) self->F_str, mark, depth + 1);
}

void clinit_regexodus_Replacer$DummySubstitution(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_Replacer$DummySubstitution_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$DummySubstitution:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$DummySubstitution(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(353);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(354);
	((regexodus_Replacer$DummySubstitution *) NULL_CHECK((frame[0].o)))->F_str = (jref) (frame[1].o);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer$DummySubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$DummySubstitution:appendSubstitution", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((regexodus_Replacer$DummySubstitution *) NULL_CHECK((frame[0].o)))->F_str;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Replacer$DummySubstitution *) NULL_CHECK((frame[0].o)))->F_str;
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_regexodus_Replacer$DummySubstitution[] {
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
	(void *) M_regexodus_Replacer$DummySubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer,
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
	{ "appendSubstitution", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
};

static jclass interfaces[] { &class_regexodus_Substitution, };

static FieldMetadata fields[] {
	{ "str", &class_java_lang_String, offsetof(regexodus_Replacer$DummySubstitution, F_str), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Replacer$DummySubstitution_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "appendSubstitution", (intptr_t) M_regexodus_Replacer$DummySubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_regexodus_Replacer$DummySubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 1 },
};

Class class_regexodus_Replacer$DummySubstitution{
		.nativeName = (intptr_t) "regexodus/Replacer$DummySubstitution",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Replacer$DummySubstitution),
		.classVtable = (intptr_t) vtable_regexodus_Replacer$DummySubstitution,
		.staticInitializer = (intptr_t) clinit_regexodus_Replacer$DummySubstitution,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Replacer$DummySubstitution,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_Replacer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Replacer$DummySubstitution = registerClass(&class_regexodus_Replacer$DummySubstitution);

}

