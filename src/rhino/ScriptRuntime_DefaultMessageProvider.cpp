#include "rhino/ScriptRuntime_DefaultMessageProvider.h"
#include "rhino/ScriptRuntime_1.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Context.h"
#include "java/text/MessageFormat.h"
#include "rhino/ScriptRuntime_MessageProvider.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/util/MissingResourceException.h"
#include "rhino/ScriptRuntime_DefaultMessageProvider.h"
#include "java/lang/RuntimeException.h"
#include "java/util/Locale.h"

extern "C" {


void mark_rhino_ScriptRuntime$DefaultMessageProvider(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptRuntime$DefaultMessageProvider *) object;
}

void clinit_rhino_ScriptRuntime$DefaultMessageProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptRuntime$DefaultMessageProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$DefaultMessageProvider:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime$DefaultMessageProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3688);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$DefaultMessageProvider:getMessage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3691);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"rhino.resources.Messages"_j)));
	LINE_NUMBER(3694);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3695);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_rhino_Context_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_getLocale_R_java_util_Locale])(ctx, (frame[4].o));
	sp += 1;
	goto label_8;
	}
label_7:;
	sp->o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp++;
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(3698);
	sp[0].o = (jobject)SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_R_java_util_ResourceBundle(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.resources.Messages"_j))), (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_MissingResourceException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3702);
	sp[0].o = (jobject)((func_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String])(ctx, (frame[6].o), (frame[1].o));
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(3706);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(3703);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3704);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"no message resource found for message property "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(3713);
	clinit_java_text_MessageFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_MessageFormat);
	init_java_text_MessageFormat_java_lang_String(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3714);
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String])(ctx, (frame[8].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_rhino_ScriptRuntime$DefaultMessageProvider_rhino_ScriptRuntime$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$DefaultMessageProvider:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime$DefaultMessageProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3688);
	init_rhino_ScriptRuntime$DefaultMessageProvider(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptRuntime$DefaultMessageProvider[] {
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
	(void *) M_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
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
	{ "getMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_rhino_ScriptRuntime$MessageProvider, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime$DefaultMessageProvider, 0, "()V", 2 },
	{ "getMessage", (intptr_t) M_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime$DefaultMessageProvider_rhino_ScriptRuntime$1, 0, "(Lrhino/ScriptRuntime$1;)V", 4096 },
};

Class class_rhino_ScriptRuntime$DefaultMessageProvider{
		.nativeName = (intptr_t) "rhino/ScriptRuntime$DefaultMessageProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptRuntime$DefaultMessageProvider),
		.classVtable = (intptr_t) vtable_rhino_ScriptRuntime$DefaultMessageProvider,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptRuntime$DefaultMessageProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptRuntime$DefaultMessageProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptRuntime,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptRuntime$DefaultMessageProvider = registerClass(&class_rhino_ScriptRuntime$DefaultMessageProvider);

}

