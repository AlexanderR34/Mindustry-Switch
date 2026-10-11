#include "mindustry/ui/dialogs/ResearchDialog_2.h"
#include "arc/math/Mathf.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/ResearchDialog_2.h"
#include "arc/scene/Group.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$2_mindustry_ui_dialogs_ResearchDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$2:scrolled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX;
	jfloat temp1 = (frame[5].f) / (jfloat(10.0f));
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 - (temp1 * ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX))), (jfloat(0.25f)), (jfloat(1)));
	((func_mindustry_ui_dialogs_ResearchDialog$View_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setScale_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$2:mouseMoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_requestScroll])(ctx, sp[0].o);
	LINE_NUMBER(169);
	jint temp0 = (jint)M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$2[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$2, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$2_mindustry_ui_dialogs_ResearchDialog, 0, "(Lmindustry/ui/dialogs/ResearchDialog;)V", 0 },
	{ "scrolled", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
	{ "mouseMoved", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean, "(Larc/scene/event/InputEvent;FF)Z", 1 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$2{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$2",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$2),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$2 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$2);

}

