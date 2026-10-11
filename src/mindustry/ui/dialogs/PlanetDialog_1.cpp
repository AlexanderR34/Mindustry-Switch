#include "mindustry/ui/dialogs/PlanetDialog_1.h"
#include "mindustry/ui/dialogs/PlanetDialog_1.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/Core.h"
#include "mindustry/input/Binding.h"
#include "mindustry/type/Sector.h"
#include "arc/Application.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/dialogs/PlanetDialog_1_invoke_java_lang_Runnable_1.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/Seq.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyBind.h"

extern "C" {


void mark_mindustry_ui_dialogs_PlanetDialog$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_PlanetDialog$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_PlanetDialog$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_PlanetDialog$1_mindustry_ui_dialogs_PlanetDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_PlanetDialog$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$1:keyDown", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_planetMap;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_newPresets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_newPresets;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (jint(1)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selected;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_selectSector_mindustry_type_Sector])(ctx, sp[0].o, (jobject(nullptr)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog$1_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog$1_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$1_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog$1_lambda$keyDown$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$1:lambda$keyDown$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_PlanetDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_hide])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_PlanetDialog$1[] {
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
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog$1_lambda$keyDown$0,
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
	{ "lambda$keyDown$0", "()V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_ui_dialogs_PlanetDialog, offsetof(mindustry_ui_dialogs_PlanetDialog$1, F_this$0), "Lmindustry/ui/dialogs/PlanetDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_PlanetDialog$1_mindustry_ui_dialogs_PlanetDialog, 0, "(Lmindustry/ui/dialogs/PlanetDialog;)V", 0 },
	{ "keyDown", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_dialogs_PlanetDialog$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "lambda$keyDown$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog$1_lambda$keyDown$0, VTABLE_mindustry_ui_dialogs_PlanetDialog$1_lambda$keyDown$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_PlanetDialog$1{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/PlanetDialog$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_PlanetDialog$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_PlanetDialog$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_PlanetDialog$1,
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
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_PlanetDialog$1 = registerClass(&class_mindustry_ui_dialogs_PlanetDialog$1);

}

