#include "mindustry/ui/dialogs/KeybindDialog_3.h"
#include "mindustry/ui/dialogs/KeybindDialog.h"
#include "arc/Core.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/KeybindDialog_3.h"
#include "arc/scene/event/InputListener.h"
#include "arc/input/KeyBind.h"
#include "arc/Application.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_ui_dialogs_KeybindDialog$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_KeybindDialog$3 *) object;
	if (self->F_val$keyBind)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$keyBind)->clazz)->markFunction)((jobject) self->F_val$keyBind, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_KeybindDialog$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_KeybindDialog$3_mindustry_ui_dialogs_KeybindDialog_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog$3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_KeybindDialog$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(178);
	((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_val$keyBind = (jref) (frame[2].o);
	((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_KeybindDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog$3:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_val$keyBind;
	((func_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_KeybindDialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog$3:keyDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[0].o))->F_rebindDialog;
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_val$keyBind;
	((func_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_KeybindDialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/KeybindDialog$3:scrolled", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[0].o))->F_rebindAxis) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog *) NULL_CHECK(sp[0].o))->F_rebindDialog;
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_KeybindDialog$3 *) NULL_CHECK((frame[0].o)))->F_val$keyBind;
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_scroll;
	((func_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_KeybindDialog_rebind_arc_input_KeyBind_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_KeybindDialog$3[] {
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
	(void *) M_mindustry_ui_dialogs_KeybindDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_KeybindDialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_mindustry_ui_dialogs_KeybindDialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
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
	{ "val$keyBind", &class_arc_input_KeyBind, offsetof(mindustry_ui_dialogs_KeybindDialog$3, F_val$keyBind), "Larc/input/KeyBind;", 4112 },
	{ "this$0", &class_mindustry_ui_dialogs_KeybindDialog, offsetof(mindustry_ui_dialogs_KeybindDialog$3, F_this$0), "Lmindustry/ui/dialogs/KeybindDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_KeybindDialog$3_mindustry_ui_dialogs_KeybindDialog_arc_input_KeyBind, 0, "(Lmindustry/ui/dialogs/KeybindDialog;Larc/input/KeyBind;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_dialogs_KeybindDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "keyDown", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_dialogs_KeybindDialog$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "scrolled", (intptr_t) M_mindustry_ui_dialogs_KeybindDialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_mindustry_ui_dialogs_KeybindDialog$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
};

Class class_mindustry_ui_dialogs_KeybindDialog$3{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/KeybindDialog$3",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_KeybindDialog$3),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_KeybindDialog$3,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_KeybindDialog$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_KeybindDialog$3,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_KeybindDialog$3 = registerClass(&class_mindustry_ui_dialogs_KeybindDialog$3);

}

