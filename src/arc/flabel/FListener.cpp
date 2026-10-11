#include "arc/flabel/FListener.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/flabel/FListener.h"

extern "C" {


void mark_arc_flabel_FListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_FListener *) object;
}

void clinit_arc_flabel_FListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_flabel_FListener_event_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FListener:event", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(13);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_FListener_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FListener:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FListener:replaceVariable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FListener_onChar_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FListener:onChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FListener[] {
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
	(void *) M_arc_flabel_FListener_event_java_lang_String,
	(void *) M_arc_flabel_FListener_end,
	(void *) M_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String,
	(void *) M_arc_flabel_FListener_onChar_char,
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
	{ "event", "(Ljava/lang/String;)V" },
	{ "end", "()V" },
	{ "replaceVariable", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "onChar", "(C)V" },
};

static MethodMetadata methods[] {
	{ "event", (intptr_t) M_arc_flabel_FListener_event_java_lang_String, INDEX_arc_flabel_FListener_event_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "end", (intptr_t) M_arc_flabel_FListener_end, INDEX_arc_flabel_FListener_end, "()V", 1 },
	{ "replaceVariable", (intptr_t) M_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String, INDEX_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "onChar", (intptr_t) M_arc_flabel_FListener_onChar_char, INDEX_arc_flabel_FListener_onChar_char, "(C)V", 1 },
};

Class class_arc_flabel_FListener{
		.nativeName = (intptr_t) "arc/flabel/FListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FListener),
		.classVtable = (intptr_t) vtable_arc_flabel_FListener,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FListener,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FListener = registerClass(&class_arc_flabel_FListener);

}
