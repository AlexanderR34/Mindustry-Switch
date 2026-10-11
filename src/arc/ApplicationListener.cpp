#include "arc/ApplicationListener.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_ApplicationListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_ApplicationListener *) object;
}

void clinit_arc_ApplicationListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_ApplicationListener_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:resize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:pause", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:resume", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:dispose", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_exit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:exit", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationListener_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationListener:fileDropped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_ApplicationListener[] {
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
	(void *) M_arc_ApplicationListener_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_arc_ApplicationListener_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_arc_ApplicationListener_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) M_arc_ApplicationListener_init, INDEX_arc_ApplicationListener_init, "()V", 1 },
	{ "resize", (intptr_t) M_arc_ApplicationListener_resize_int_int, INDEX_arc_ApplicationListener_resize_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_arc_ApplicationListener_update, INDEX_arc_ApplicationListener_update, "()V", 1 },
	{ "pause", (intptr_t) M_arc_ApplicationListener_pause, INDEX_arc_ApplicationListener_pause, "()V", 1 },
	{ "resume", (intptr_t) M_arc_ApplicationListener_resume, INDEX_arc_ApplicationListener_resume, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_ApplicationListener_dispose, INDEX_arc_ApplicationListener_dispose, "()V", 1 },
	{ "exit", (intptr_t) M_arc_ApplicationListener_exit, INDEX_arc_ApplicationListener_exit, "()V", 1 },
	{ "fileDropped", (intptr_t) M_arc_ApplicationListener_fileDropped_arc_files_Fi, INDEX_arc_ApplicationListener_fileDropped_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
};

Class class_arc_ApplicationListener{
		.nativeName = (intptr_t) "arc/ApplicationListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_ApplicationListener),
		.classVtable = (intptr_t) vtable_arc_ApplicationListener,
		.staticInitializer = (intptr_t) clinit_arc_ApplicationListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_ApplicationListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_ApplicationListener = registerClass(&class_arc_ApplicationListener);

}
