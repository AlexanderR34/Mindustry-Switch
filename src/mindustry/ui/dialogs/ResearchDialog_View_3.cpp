#include "mindustry/ui/dialogs/ResearchDialog_View_3.h"
#include "arc/scene/Scene.h"
#include "arc/Core.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/Input.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_3.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/Application.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$View$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_ResearchDialog$View$3 *) object;
	if (self->F_val$button)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$button)->clazz)->markFunction)((jobject) self->F_val$button, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$View$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$View$3_mindustry_ui_dialogs_ResearchDialog$View_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(644);
	((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_val$button = (jref) (frame[2].o);
	((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$3:exit", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(647);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp += 2;
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ILOAD(4);
label_2:;
	{
	sp -= 2;
	jint temp0 = (jint)((func_arc_Input_mouseX_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseX_int_R_int])(ctx, sp[0].o, sp[1].i);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jobject temp2 = sp[0].o;
	sp[0].f = temp1;
	sp[1].o = temp2;
	sp += 2;
	if ((frame[4].i) != (jint(-1))) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	INST_ILOAD(4);
label_4:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_arc_Input_mouseY_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseY_int_R_int])(ctx, sp[2].o, sp[3].i);
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, sp[1].f, (jfloat(temp0)), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_val$button;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_7;
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[1].o))->F_infoTable;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[1].o))->F_infoTable;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[1].o))->F_hoverNode;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[1].o))->F_hoverNode;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
label_7:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_6;
label_8:;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View$3 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(653);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$View$3[] {
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
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
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
	{ "val$button", &class_arc_scene_ui_ImageButton, offsetof(mindustry_ui_dialogs_ResearchDialog$View$3, F_val$button), "Larc/scene/ui/ImageButton;", 4112 },
	{ "this$1", &class_mindustry_ui_dialogs_ResearchDialog$View, offsetof(mindustry_ui_dialogs_ResearchDialog$View$3, F_this$1), "Lmindustry/ui/dialogs/ResearchDialog$View;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$View$3_mindustry_ui_dialogs_ResearchDialog$View_arc_scene_ui_ImageButton, 0, "(Lmindustry/ui/dialogs/ResearchDialog$View;Larc/scene/ui/ImageButton;)V", 0 },
	{ "exit", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_mindustry_ui_dialogs_ResearchDialog$View$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$View$3{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$View$3",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$View$3),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$View$3,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$View$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$View$3,
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
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$View$3 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$View$3);

}

