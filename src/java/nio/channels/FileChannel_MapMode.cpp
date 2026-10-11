#include "java/nio/channels/FileChannel_MapMode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/channels/FileChannel_MapMode.h"
#include "java/nio/channels/FileChannel.h"

extern "C" {

jobject SF_java_nio_channels_FileChannel$MapMode_READ_ONLY;
jobject SF_java_nio_channels_FileChannel$MapMode_READ_WRITE;
jobject SF_java_nio_channels_FileChannel$MapMode_PRIVATE;

void mark_java_nio_channels_FileChannel$MapMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_channels_FileChannel$MapMode_READ_ONLY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_FileChannel$MapMode_READ_ONLY)->clazz)->markFunction)((jobject) SF_java_nio_channels_FileChannel$MapMode_READ_ONLY, mark, depth + 1);
		if (SF_java_nio_channels_FileChannel$MapMode_READ_WRITE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_FileChannel$MapMode_READ_WRITE)->clazz)->markFunction)((jobject) SF_java_nio_channels_FileChannel$MapMode_READ_WRITE, mark, depth + 1);
		if (SF_java_nio_channels_FileChannel$MapMode_PRIVATE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_FileChannel$MapMode_PRIVATE)->clazz)->markFunction)((jobject) SF_java_nio_channels_FileChannel$MapMode_PRIVATE, mark, depth + 1);
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
	auto self = (java_nio_channels_FileChannel$MapMode *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_java_nio_channels_FileChannel$MapMode_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/FileChannel$MapMode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((java_nio_channels_FileChannel$MapMode *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_FileChannel$MapMode_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/FileChannel$MapMode:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((java_nio_channels_FileChannel$MapMode *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_channels_FileChannel$MapMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/FileChannel$MapMode:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	{
	LINE_NUMBER(14);
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_FileChannel$MapMode);
	init_java_nio_channels_FileChannel$MapMode_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"READ_ONLY"_j))));
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	SF_java_nio_channels_FileChannel$MapMode_READ_ONLY = sp[0].o;
	LINE_NUMBER(16);
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_FileChannel$MapMode);
	init_java_nio_channels_FileChannel$MapMode_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"READ_WRITE"_j))));
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	SF_java_nio_channels_FileChannel$MapMode_READ_WRITE = sp[0].o;
	LINE_NUMBER(18);
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_FileChannel$MapMode);
	init_java_nio_channels_FileChannel$MapMode_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PRIVATE"_j))));
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	SF_java_nio_channels_FileChannel$MapMode_PRIVATE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_FileChannel$MapMode[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_channels_FileChannel$MapMode_toString_R_java_lang_String,
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

static FieldMetadata fields[] {
	{ "READ_ONLY", &class_java_nio_channels_FileChannel$MapMode, (intptr_t) &SF_java_nio_channels_FileChannel$MapMode_READ_ONLY, "Ljava/nio/channels/FileChannel$MapMode;", 25 },
	{ "READ_WRITE", &class_java_nio_channels_FileChannel$MapMode, (intptr_t) &SF_java_nio_channels_FileChannel$MapMode_READ_WRITE, "Ljava/nio/channels/FileChannel$MapMode;", 25 },
	{ "PRIVATE", &class_java_nio_channels_FileChannel$MapMode, (intptr_t) &SF_java_nio_channels_FileChannel$MapMode_PRIVATE, "Ljava/nio/channels/FileChannel$MapMode;", 25 },
	{ "name", &class_java_lang_String, offsetof(java_nio_channels_FileChannel$MapMode, F_name), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_FileChannel$MapMode_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "toString", (intptr_t) M_java_nio_channels_FileChannel$MapMode_toString_R_java_lang_String, VTABLE_java_nio_channels_FileChannel$MapMode_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_channels_FileChannel$MapMode, 0, "()V", 8 },
};

Class class_java_nio_channels_FileChannel$MapMode{
		.nativeName = (intptr_t) "java/nio/channels/FileChannel$MapMode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_FileChannel$MapMode),
		.classVtable = (intptr_t) vtable_java_nio_channels_FileChannel$MapMode,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_FileChannel$MapMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_FileChannel$MapMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_nio_channels_FileChannel,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_FileChannel$MapMode = registerClass(&class_java_nio_channels_FileChannel$MapMode);

}

