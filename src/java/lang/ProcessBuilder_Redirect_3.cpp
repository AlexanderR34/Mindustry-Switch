#include "java/lang/ProcessBuilder_Redirect_3.h"
#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/lang/ProcessBuilder_1.h"
#include "java/lang/ProcessBuilder_Redirect_3.h"
#include "java/lang/Enum.h"
#include "java/io/File.h"

extern "C" {


void mark_java_lang_ProcessBuilder$Redirect$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ProcessBuilder$Redirect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ProcessBuilder$Redirect$3 *) object;
}

void clinit_java_lang_ProcessBuilder$Redirect$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
}

void init_java_lang_ProcessBuilder$Redirect$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$3:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(306);
	init_java_lang_ProcessBuilder$Redirect_java_lang_ProcessBuilder$1(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$3:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_WRITE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$3:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$3:file", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)SM_java_lang_ProcessBuilder$Redirect_access$100_R_java_io_File(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ProcessBuilder$Redirect$3_append_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$3:append", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$Redirect$3[] {
	(void *) M_java_lang_ProcessBuilder$Redirect_hashCode_R_int,
	(void *) M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type,
	(void *) M_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File,
	(void *) M_java_lang_ProcessBuilder$Redirect$3_append_R_boolean,
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
	{ "type", "()Ljava/lang/ProcessBuilder$Redirect$Type;" },
	{ "file", "()Ljava/io/File;" },
	{ "append", "()Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$Redirect$3, 0, "()V", 0 },
	{ "type", (intptr_t) M_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type, VTABLE_java_lang_ProcessBuilder$Redirect$3_type_R_java_lang_ProcessBuilder$Redirect$Type, "()Ljava/lang/ProcessBuilder$Redirect$Type;", 1 },
	{ "toString", (intptr_t) M_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String, VTABLE_java_lang_ProcessBuilder$Redirect$3_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "file", (intptr_t) M_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File, VTABLE_java_lang_ProcessBuilder$Redirect$3_file_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "append", (intptr_t) M_java_lang_ProcessBuilder$Redirect$3_append_R_boolean, VTABLE_java_lang_ProcessBuilder$Redirect$3_append_R_boolean, "()Z", 0 },
};

Class class_java_lang_ProcessBuilder$Redirect$3{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$Redirect$3",
		.parentClass = (intptr_t) &class_java_lang_ProcessBuilder$Redirect,
		.size = sizeof(java_lang_ProcessBuilder$Redirect$3),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$Redirect$3,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$Redirect$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$Redirect$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$Redirect$3 = registerClass(&class_java_lang_ProcessBuilder$Redirect$3);

}

