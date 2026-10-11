#include "mindustry/ui/fragments/MinimapFragment_2.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ui/fragments/MinimapFragment_2.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "mindustry/input/Binding.h"
#include "mindustry/core/UI.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/MinimapFragment_2_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/Player.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyBind.h"

extern "C" {


void mark_mindustry_ui_fragments_MinimapFragment$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_MinimapFragment$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_MinimapFragment$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_fragments_MinimapFragment$2_mindustry_ui_fragments_MinimapFragment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MinimapFragment$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	((mindustry_ui_fragments_MinimapFragment$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_MinimapFragment$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$2:scrolled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom;
	jfloat temp1 = (frame[5].f) / (jfloat(10.0f));
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 - (temp1 * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom))), (jfloat(0.25f)), (jfloat(10.0f)));
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_zoom = temp2;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_MinimapFragment$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$2:keyDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_ping;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[1].o)))->F_stageX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[1].o)))->F_stageY));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(132);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@ping.text"_j));
	jint temp0 = 40;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment$2_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment$2_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment$2_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), (jobject(nullptr)));
	}
label_1:;
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MinimapFragment$2_lambda$keyDown$0_arc_math_geom_Vec2_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$2:lambda$keyDown$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MinimapFragment$2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_MinimapFragment$2[] {
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
	(void *) M_mindustry_ui_fragments_MinimapFragment$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_mindustry_ui_fragments_MinimapFragment$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
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
	{ "this$0", &class_mindustry_ui_fragments_MinimapFragment, offsetof(mindustry_ui_fragments_MinimapFragment$2, F_this$0), "Lmindustry/ui/fragments/MinimapFragment;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MinimapFragment$2_mindustry_ui_fragments_MinimapFragment, 0, "(Lmindustry/ui/fragments/MinimapFragment;)V", 0 },
	{ "scrolled", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_mindustry_ui_fragments_MinimapFragment$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
	{ "keyDown", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_fragments_MinimapFragment$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z", 1 },
	{ "lambda$keyDown$0", (intptr_t) SM_mindustry_ui_fragments_MinimapFragment$2_lambda$keyDown$0_arc_math_geom_Vec2_java_lang_String, 0, "(Larc/math/geom/Vec2;Ljava/lang/String;)V", 4106 },
};

Class class_mindustry_ui_fragments_MinimapFragment$2{
		.nativeName = (intptr_t) "mindustry/ui/fragments/MinimapFragment$2",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_fragments_MinimapFragment$2),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_MinimapFragment$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_MinimapFragment$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_MinimapFragment$2,
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
static bool registered_mindustry_ui_fragments_MinimapFragment$2 = registerClass(&class_mindustry_ui_fragments_MinimapFragment$2);

}

