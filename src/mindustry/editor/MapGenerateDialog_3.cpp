#include "mindustry/editor/MapGenerateDialog_3.h"
#include "mindustry/editor/MapGenerateDialog.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/MirrorFilter.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/editor/MapGenerateDialog_3.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_editor_MapGenerateDialog$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapGenerateDialog$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapGenerateDialog$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_editor_MapGenerateDialog$3_mindustry_editor_MapGenerateDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapGenerateDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$3:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(284);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_hit_float_float_R_mindustry_maps_filters_MirrorFilter])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragging = (jref) sp[1].o;
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_drag_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_drag_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_dragUpdate_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_dragUpdate_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$3:touchDragged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_drag_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_drag_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_dragUpdate_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_dragUpdate_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$3:touchUp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_drag_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_drag_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapGenerateDialog_dragUpdate_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapGenerateDialog_dragUpdate_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_editor_MapGenerateDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapGenerateDialog *) NULL_CHECK(sp[0].o))->F_dragging = (jref) (jobject(nullptr));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapGenerateDialog$3[] {
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
	(void *) M_mindustry_editor_MapGenerateDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapGenerateDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapGenerateDialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int,
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
	{ "this$0", &class_mindustry_editor_MapGenerateDialog, offsetof(mindustry_editor_MapGenerateDialog$3, F_this$0), "Lmindustry/editor/MapGenerateDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapGenerateDialog$3_mindustry_editor_MapGenerateDialog, 0, "(Lmindustry/editor/MapGenerateDialog;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_editor_MapGenerateDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_editor_MapGenerateDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_editor_MapGenerateDialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_editor_MapGenerateDialog$3_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_editor_MapGenerateDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapGenerateDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_editor_MapGenerateDialog$3{
		.nativeName = (intptr_t) "mindustry/editor/MapGenerateDialog$3",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_editor_MapGenerateDialog$3),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapGenerateDialog$3,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapGenerateDialog$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapGenerateDialog$3,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapGenerateDialog$3 = registerClass(&class_mindustry_editor_MapGenerateDialog$3);

}

