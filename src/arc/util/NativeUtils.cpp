#include "arc/util/NativeUtils.h"
#include "arc/util/NativeUtils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/OS.h"

extern "C" {


void mark_arc_util_NativeUtils(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_NativeUtils *) object;
}

void clinit_arc_util_NativeUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_NativeUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/NativeUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_NativeUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_NativeUtils_forceUtf8Locale(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/NativeUtils:forceUtf8Locale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_NativeUtils(ctx);
	{
	LINE_NUMBER(47);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isLinux) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)SM_arc_util_NativeUtils_setEnv_java_lang_String_java_lang_String_boolean_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"LC_ALL"_j))), (((jobject) createStringLiteral(ctx, u8"en_US.UTF-8"_j))), (jint(1)));
	LINE_NUMBER(49);
	jint temp1 = (jint)SM_arc_util_NativeUtils_setEnv_java_lang_String_java_lang_String_boolean_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"LANG"_j))), (((jobject) createStringLiteral(ctx, u8"en_US.UTF-8"_j))), (jint(1)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_NativeUtils[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_NativeUtils, 0, "()V", 1 },
	{ "setEnv", (intptr_t) SM_arc_util_NativeUtils_setEnv_java_lang_String_java_lang_String_boolean_R_int, 0, "(Ljava/lang/String;Ljava/lang/String;Z)I", 265 },
	{ "unsetEnv", (intptr_t) SM_arc_util_NativeUtils_unsetEnv_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 265 },
	{ "getEnv", (intptr_t) SM_arc_util_NativeUtils_getEnv_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 265 },
	{ "forceUtf8Locale", (intptr_t) SM_arc_util_NativeUtils_forceUtf8Locale, 0, "()V", 9 },
};

Class class_arc_util_NativeUtils{
		.nativeName = (intptr_t) "arc/util/NativeUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_NativeUtils),
		.classVtable = (intptr_t) vtable_arc_util_NativeUtils,
		.staticInitializer = (intptr_t) clinit_arc_util_NativeUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_NativeUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_NativeUtils = registerClass(&class_arc_util_NativeUtils);

}
