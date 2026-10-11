#include "arc/scene/ui/Dialog_6.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog_6.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/event/VisibilityListener.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_scene_ui_Dialog$6(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_VisibilityListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Dialog$6 *) object;
	if (self->F_val$run)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$run)->clazz)->markFunction)((jobject) self->F_val$run, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Dialog$6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_VisibilityListener(ctx);
}

void init_arc_scene_ui_Dialog$6_arc_scene_ui_Dialog_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$6:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Dialog$6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(418);
	((arc_scene_ui_Dialog$6 *) NULL_CHECK((frame[0].o)))->F_val$run = (jref) (frame[2].o);
	((arc_scene_ui_Dialog$6 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_VisibilityListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Dialog$6_hidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Dialog$6:hidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((arc_scene_ui_Dialog$6 *) NULL_CHECK((frame[0].o)))->F_val$run;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Dialog$6[] {
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
	(void *) M_arc_scene_event_VisibilityListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_VisibilityListener_shown_R_boolean,
	(void *) M_arc_scene_ui_Dialog$6_hidden_R_boolean,
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
	{ "shown", "()Z" },
	{ "hidden", "()Z" },
};

static FieldMetadata fields[] {
	{ "val$run", &class_java_lang_Runnable, offsetof(arc_scene_ui_Dialog$6, F_val$run), "Ljava/lang/Runnable;", 4112 },
	{ "this$0", &class_arc_scene_ui_Dialog, offsetof(arc_scene_ui_Dialog$6, F_this$0), "Larc/scene/ui/Dialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Dialog$6_arc_scene_ui_Dialog_java_lang_Runnable, 0, "(Larc/scene/ui/Dialog;Ljava/lang/Runnable;)V", 0 },
	{ "hidden", (intptr_t) M_arc_scene_ui_Dialog$6_hidden_R_boolean, VTABLE_arc_scene_ui_Dialog$6_hidden_R_boolean, "()Z", 1 },
};

Class class_arc_scene_ui_Dialog$6{
		.nativeName = (intptr_t) "arc/scene/ui/Dialog$6",
		.parentClass = (intptr_t) &class_arc_scene_event_VisibilityListener,
		.size = sizeof(arc_scene_ui_Dialog$6),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Dialog$6,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Dialog$6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Dialog$6,
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
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Dialog$6 = registerClass(&class_arc_scene_ui_Dialog$6);

}

