#include "arc/util/Log_DefaultLogFormatter.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/util/Log_DefaultLogFormatter.h"
#include "arc/util/Log_LogFormatter.h"

extern "C" {


void mark_arc_util_Log$DefaultLogFormatter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Log$DefaultLogFormatter *) object;
}

void clinit_arc_util_Log$DefaultLogFormatter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Log$DefaultLogFormatter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$DefaultLogFormatter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$DefaultLogFormatter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(109);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$DefaultLogFormatter:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[1].o), (frame[3].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(113);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Log_addColors_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_Log$DefaultLogFormatter[] {
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
	(void *) M_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String,
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
	{ "format", "(Ljava/lang/String;Z[Ljava/lang/Object;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_util_Log$LogFormatter, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Log$DefaultLogFormatter, 0, "()V", 1 },
	{ "format", (intptr_t) M_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String, VTABLE_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;Z[Ljava/lang/Object;)Ljava/lang/String;", 129 },
};

Class class_arc_util_Log$DefaultLogFormatter{
		.nativeName = (intptr_t) "arc/util/Log$DefaultLogFormatter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Log$DefaultLogFormatter),
		.classVtable = (intptr_t) vtable_arc_util_Log$DefaultLogFormatter,
		.staticInitializer = (intptr_t) clinit_arc_util_Log$DefaultLogFormatter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Log$DefaultLogFormatter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Log,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Log$DefaultLogFormatter = registerClass(&class_arc_util_Log$DefaultLogFormatter);

}

