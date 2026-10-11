#include "java/nio/NativeUtils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_nio_NativeUtils(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_NativeUtils *) object;
}

void clinit_java_nio_NativeUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_NativeUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/NativeUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_NativeUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/NativeUtils:getPrimitive", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_NativeUtils(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(32);
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_nio_NativeUtils[] {
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
	{ "<init>", (intptr_t) init_java_nio_NativeUtils, 0, "()V", 1 },
	{ "getLong", (intptr_t) SM_java_nio_NativeUtils_getLong_long_R_long, 0, "(J)J", 265 },
	{ "putLong", (intptr_t) SM_java_nio_NativeUtils_putLong_long_long, 0, "(JJ)V", 265 },
	{ "getInt", (intptr_t) SM_java_nio_NativeUtils_getInt_long_R_int, 0, "(J)I", 265 },
	{ "putInt", (intptr_t) SM_java_nio_NativeUtils_putInt_long_int, 0, "(JI)V", 265 },
	{ "getShort", (intptr_t) SM_java_nio_NativeUtils_getShort_long_R_short, 0, "(J)S", 265 },
	{ "putShort", (intptr_t) SM_java_nio_NativeUtils_putShort_long_short, 0, "(JS)V", 265 },
	{ "getChar", (intptr_t) SM_java_nio_NativeUtils_getChar_long_R_char, 0, "(J)C", 265 },
	{ "putChar", (intptr_t) SM_java_nio_NativeUtils_putChar_long_char, 0, "(JC)V", 265 },
	{ "getByte", (intptr_t) SM_java_nio_NativeUtils_getByte_long_R_byte, 0, "(J)B", 265 },
	{ "putByte", (intptr_t) SM_java_nio_NativeUtils_putByte_long_byte, 0, "(JB)V", 265 },
	{ "copyMemory", (intptr_t) SM_java_nio_NativeUtils_copyMemory_long_long_long, 0, "(JJJ)V", 265 },
	{ "getArrayAddress", (intptr_t) SM_java_nio_NativeUtils_getArrayAddress_java_lang_Object_R_long, 0, "(Ljava/lang/Object;)J", 265 },
	{ "getPrimitive", (intptr_t) SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/String;)Ljava/lang/Class;", 9 },
	{ "getArrayClass", (intptr_t) SM_java_nio_NativeUtils_getArrayClass_java_lang_Class_int_R_java_lang_Class, 0, "(Ljava/lang/Class;I)Ljava/lang/Class;", 265 },
};

Class class_java_nio_NativeUtils{
		.nativeName = (intptr_t) "java/nio/NativeUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_NativeUtils),
		.classVtable = (intptr_t) vtable_java_nio_NativeUtils,
		.staticInitializer = (intptr_t) clinit_java_nio_NativeUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_NativeUtils,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_NativeUtils = registerClass(&class_java_nio_NativeUtils);

}
