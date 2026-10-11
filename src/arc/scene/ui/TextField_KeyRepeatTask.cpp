#include "arc/scene/ui/TextField_KeyRepeatTask.h"
#include "arc/scene/ui/TextField_KeyRepeatTask.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "arc/util/Timer_Task.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_ui_TextField$KeyRepeatTask(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_Timer$Task(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_TextField$KeyRepeatTask *) object;
	if (self->F_keycode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keycode)->clazz)->markFunction)((jobject) self->F_keycode, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_TextField$KeyRepeatTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_Timer$Task(ctx);
}

void init_arc_scene_ui_TextField$KeyRepeatTask_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$KeyRepeatTask:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$KeyRepeatTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(884);
	((arc_scene_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_util_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TextField$KeyRepeatTask_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$KeyRepeatTask:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((arc_scene_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_scene_ui_TextField *) NULL_CHECK(sp[0].o))->F_inputListener;
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)((arc_scene_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_keycode;
	jint temp0 = (jint)((func_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField$KeyRepeatTask[] {
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
	(void *) M_arc_scene_ui_TextField$KeyRepeatTask_run,
	(void *) M_arc_util_Timer$Task_cancel,
	(void *) M_arc_util_Timer$Task_isScheduled_R_boolean,
	(void *) M_arc_util_Timer$Task_getExecuteTimeMillis_R_long,
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
	{ "run", "()V" },
	{ "cancel", "()V" },
	{ "isScheduled", "()Z" },
	{ "getExecuteTimeMillis", "()J" },
};

static FieldMetadata fields[] {
	{ "keycode", &class_arc_input_KeyCode, offsetof(arc_scene_ui_TextField$KeyRepeatTask, F_keycode), "Larc/input/KeyCode;", 0 },
	{ "this$0", &class_arc_scene_ui_TextField, offsetof(arc_scene_ui_TextField$KeyRepeatTask, F_this$0), "Larc/scene/ui/TextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TextField$KeyRepeatTask_arc_scene_ui_TextField, 0, "(Larc/scene/ui/TextField;)V", 0 },
	{ "run", (intptr_t) M_arc_scene_ui_TextField$KeyRepeatTask_run, VTABLE_arc_scene_ui_TextField$KeyRepeatTask_run, "()V", 1 },
};

Class class_arc_scene_ui_TextField$KeyRepeatTask{
		.nativeName = (intptr_t) "arc/scene/ui/TextField$KeyRepeatTask",
		.parentClass = (intptr_t) &class_arc_util_Timer$Task,
		.size = sizeof(arc_scene_ui_TextField$KeyRepeatTask),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField$KeyRepeatTask,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField$KeyRepeatTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField$KeyRepeatTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField$KeyRepeatTask = registerClass(&class_arc_scene_ui_TextField$KeyRepeatTask);

}

