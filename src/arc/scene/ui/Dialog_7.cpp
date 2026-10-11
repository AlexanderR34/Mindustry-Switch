#include "arc/scene/ui/Dialog_7.h"
#include "arc/scene/ui/Dialog_7.h"
#include "java/lang/Object.h"
#include "arc/scene/event/ResizeListener.h"
#include "arc/scene/ui/Dialog.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_scene_ui_Dialog$7(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ResizeListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Dialog$7 *) object;
	if (self->F_val$run)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$run)->clazz)->markFunction)((jobject) self->F_val$run, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Dialog$7(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ResizeListener(ctx);
}

void init_arc_scene_ui_Dialog$7_arc_scene_ui_Dialog_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$7:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog$7(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(443);
	((arc_scene_ui_Dialog$7 *) NULL_CHECK((frame[0].o)))->F_val$run = (jref) (frame[2].o);
	((arc_scene_ui_Dialog$7 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ResizeListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Dialog$7_resized(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$7:resized", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$7 *) NULL_CHECK((frame[0].o)))->F_val$run;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$7 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_Dialog_updateScrollFocus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_updateScrollFocus])(ctx, sp[0].o);
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog$7[] {
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
	(void *) M_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_ui_Dialog$7_resized,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "resized", "()V" },
};

static FieldMetadata fields[] {
	{ "val$run", &class_java_lang_Runnable, offsetof(arc_scene_ui_Dialog$7, F_val$run), "Ljava/lang/Runnable;", 4112 },
	{ "this$0", &class_arc_scene_ui_Dialog, offsetof(arc_scene_ui_Dialog$7, F_this$0), "Larc/scene/ui/Dialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog$7_arc_scene_ui_Dialog_java_lang_Runnable, 0, "(Larc/scene/ui/Dialog;Ljava/lang/Runnable;)V", 0 },
	{ "resized", (intptr_t) M_arc_scene_ui_Dialog$7_resized, VTABLE_arc_scene_ui_Dialog$7_resized, "()V", 1 },
};

Class class_arc_scene_ui_Dialog$7{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog$7",
		.parentClass = (intptr_t) &class_arc_scene_event_ResizeListener,
		.size = sizeof(arc_scene_ui_Dialog$7),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog$7,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog$7,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog$7,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Dialog$7 = registerClass(&class_arc_scene_ui_Dialog$7);

}

