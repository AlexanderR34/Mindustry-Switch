#include "regexodus/PerlSubstitution_IntRefHandler.h"
#include "java/lang/Integer.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "regexodus/PerlSubstitution.h"
#include "regexodus/PerlSubstitution_1.h"
#include "java/lang/String.h"
#include "regexodus/Pattern.h"
#include "regexodus/PerlSubstitution_IntRefHandler.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/PerlSubstitution_Element.h"
#include "java/lang/Class.h"

extern "C" {


void mark_regexodus_PerlSubstitution$IntRefHandler(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_PerlSubstitution$IntRefHandler *) object;
	if (self->F_index)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_index)->clazz)->markFunction)((jobject) self->F_index, mark, depth + 1);
}

void clinit_regexodus_PerlSubstitution$IntRefHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_PerlSubstitution$Element(ctx);
}

void init_regexodus_PerlSubstitution$IntRefHandler_java_lang_String_java_lang_Integer_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$IntRefHandler:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution$IntRefHandler(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(282);
	init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(283);
	((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[1].o);
	LINE_NUMBER(284);
	((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index = (jref) (frame[2].o);
	LINE_NUMBER(285);
	((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_modes = (frame[3].i);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$IntRefHandler:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(289);
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
	LINE_NUMBER(290);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(292);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((func_regexodus_MatchResult_pattern_R_regexodus_Pattern) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_pattern_R_regexodus_Pattern, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_regexodus_Pattern_groupCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupCount_R_int])(ctx, sp[0].o);
	if (temp1 < temp2) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_int_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_int_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i), (frame[2].o), ((jint)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_modes));
	}
label_5:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$IntRefHandler:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(299);
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
	LINE_NUMBER(301);
	frame[2].o = (checkCast(ctx, &class_regexodus_PerlSubstitution$IntRefHandler, (frame[1].o)));
	LINE_NUMBER(303);
	if (((jint)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_modes) == ((jint)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[2].o)))->F_modes)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	sp[1].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[2].o)))->F_index;
	jint temp0 = (jint)((func_java_lang_Integer_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[2].o)))->F_index;
	if (sp[0].o != nullptr) goto label_8;
	}
	INST_ICONST(1);
	goto label_7;
label_8:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$IntRefHandler:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_index;
	jint temp0 = (jint)((func_java_lang_Integer_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(311);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_PerlSubstitution$IntRefHandler *) NULL_CHECK((frame[0].o)))->F_modes));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_PerlSubstitution$IntRefHandler[] {
	(void *) M_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int,
	(void *) M_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer,
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
	{ "index", &class_java_lang_Integer, offsetof(regexodus_PerlSubstitution$IntRefHandler, F_index), "Ljava/lang/Integer;", 2 },
	{ "modes", &class_int, offsetof(regexodus_PerlSubstitution$IntRefHandler, F_modes), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution$IntRefHandler_java_lang_String_java_lang_Integer_int, 0, "(Ljava/lang/String;Ljava/lang/Integer;I)V", 0 },
	{ "append", (intptr_t) M_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_regexodus_PerlSubstitution$IntRefHandler_append_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 0 },
	{ "equals", (intptr_t) M_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean, VTABLE_regexodus_PerlSubstitution$IntRefHandler_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int, VTABLE_regexodus_PerlSubstitution$IntRefHandler_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_PerlSubstitution$IntRefHandler{
		.nativeName = (intptr_t) "regexodus/PerlSubstitution$IntRefHandler",
		.parentClass = (intptr_t) &class_regexodus_PerlSubstitution$Element,
		.size = sizeof(regexodus_PerlSubstitution$IntRefHandler),
		.classVtable = (intptr_t) vtable_regexodus_PerlSubstitution$IntRefHandler,
		.staticInitializer = (intptr_t) clinit_regexodus_PerlSubstitution$IntRefHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_PerlSubstitution$IntRefHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_PerlSubstitution,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_PerlSubstitution$IntRefHandler = registerClass(&class_regexodus_PerlSubstitution$IntRefHandler);

}

