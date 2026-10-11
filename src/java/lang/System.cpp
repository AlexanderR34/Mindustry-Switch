#include "java/lang/System.h"
#include "java/io/NativeOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/HashMap.h"
#include "java/lang/SecurityManager.h"
#include "java/util/Map.h"
#include "java/lang/System.h"
#include "java/io/PrintStream.h"
#include "java/io/OutputStream.h"

extern "C" {

jobject SF_java_lang_System_err;
jobject SF_java_lang_System_out;

void mark_java_lang_System(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_System_err)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_System_err)->clazz)->markFunction)((jobject) SF_java_lang_System_err, mark, depth + 1);
		if (SF_java_lang_System_out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_System_out)->clazz)->markFunction)((jobject) SF_java_lang_System_out, mark, depth + 1);
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
	auto self = (java_lang_System *) object;
}

void init_java_lang_System(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_System_loadLibrary_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:loadLibrary", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	SM_java_lang_System_load_java_lang_String(ctx, (frame[0].o));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_System_exit_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:exit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(80);
	SM_java_lang_System_exit0_int(ctx, (frame[0].i));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:getProperty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_System_getenv_R_java_util_Map(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:getenv", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	{
	LINE_NUMBER(104);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:getenv", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_System_nanoTime_R_long(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:nanoTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	{
	LINE_NUMBER(117);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	popStackFrame(ctx);
	return (temp0 * (jlong(1000000ll)));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:getSecurityManager", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_lang_System(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/System:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_System(ctx);
	{
	LINE_NUMBER(40);
	clinit_java_io_PrintStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintStream);
	clinit_java_io_NativeOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_NativeOutputStream);
	init_java_io_NativeOutputStream(ctx, sp[1].o);
	init_java_io_PrintStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	clinit_java_lang_System(ctx);
	SF_java_lang_System_err = sp[0].o;
	LINE_NUMBER(49);
	clinit_java_io_PrintStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintStream);
	clinit_java_io_NativeOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_NativeOutputStream);
	init_java_io_NativeOutputStream(ctx, sp[1].o);
	init_java_io_PrintStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	clinit_java_lang_System(ctx);
	SF_java_lang_System_out = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_System[] {
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

static FieldMetadata fields[] {
	{ "err", &class_java_io_PrintStream, (intptr_t) &SF_java_lang_System_err, "Ljava/io/PrintStream;", 25 },
	{ "out", &class_java_io_PrintStream, (intptr_t) &SF_java_lang_System_out, "Ljava/io/PrintStream;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_System, 0, "()V", 1 },
	{ "arraycopy", (intptr_t) SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, 0, "(Ljava/lang/Object;ILjava/lang/Object;II)V", 265 },
	{ "currentTimeMillis", (intptr_t) SM_java_lang_System_currentTimeMillis_R_long, 0, "()J", 265 },
	{ "load", (intptr_t) SM_java_lang_System_load_java_lang_String, 0, "(Ljava/lang/String;)V", 265 },
	{ "loadLibrary", (intptr_t) SM_java_lang_System_loadLibrary_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "exit", (intptr_t) SM_java_lang_System_exit_int, 0, "(I)V", 9 },
	{ "exit0", (intptr_t) SM_java_lang_System_exit0_int, 0, "(I)V", 265 },
	{ "gc", (intptr_t) SM_java_lang_System_gc, 0, "()V", 265 },
	{ "getProperty", (intptr_t) SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 265 },
	{ "getProperty", (intptr_t) SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "getenv", (intptr_t) SM_java_lang_System_getenv_R_java_util_Map, 0, "()Ljava/util/Map;", 9 },
	{ "getenv", (intptr_t) SM_java_lang_System_getenv_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "identityHashCode", (intptr_t) SM_java_lang_System_identityHashCode_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 265 },
	{ "nanoTime", (intptr_t) SM_java_lang_System_nanoTime_R_long, 0, "()J", 9 },
	{ "getSecurityManager", (intptr_t) SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager, 0, "()Ljava/lang/SecurityManager;", 9 },
	{ "<clinit>", (intptr_t) clinit_java_lang_System, 0, "()V", 8 },
};

Class class_java_lang_System{
		.nativeName = (intptr_t) "java/lang/System",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_System),
		.classVtable = (intptr_t) vtable_java_lang_System,
		.staticInitializer = (intptr_t) clinit_java_lang_System,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_System,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_System = registerClass(&class_java_lang_System);

}
