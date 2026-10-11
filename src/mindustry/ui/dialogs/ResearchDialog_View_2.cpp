#include "mindustry/ui/dialogs/ResearchDialog_View_2.h"
#include "arc/scene/Scene.h"
#include "arc/Core.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/Input.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_2.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$View$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_ResearchDialog$View$2 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$View$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$View$2_mindustry_ui_dialogs_ResearchDialog$View(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(519);
	((mindustry_ui_dialogs_ResearchDialog$View$2 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$2:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(522);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(523);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_int_R_int])(ctx, sp[1].o, (frame[4].i));
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_int_R_int])(ctx, sp[1].o, (frame[4].i));
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp1, (jfloat(temp2)), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(524);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$2 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$View$2[] {
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
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
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
	{ "this$1", &class_mindustry_ui_dialogs_ResearchDialog$View, offsetof(mindustry_ui_dialogs_ResearchDialog$View$2, F_this$1), "Lmindustry/ui/dialogs/ResearchDialog$View;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$View$2_mindustry_ui_dialogs_ResearchDialog$View, 0, "(Lmindustry/ui/dialogs/ResearchDialog$View;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$View$2{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$View$2",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$View$2),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$View$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$View$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$View$2,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$View$2 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$View$2);

}

