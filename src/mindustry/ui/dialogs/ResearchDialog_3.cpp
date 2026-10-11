#include "mindustry/ui/dialogs/ResearchDialog_3.h"
#include "arc/math/Mathf.h"
#include "mindustry/ui/dialogs/ResearchDialog_3.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/Group.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ElementGestureListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$3_mindustry_ui_dialogs_ResearchDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ElementGestureListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$3_zoom_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$3:zoom", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_lastZoom), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_lastZoom = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX);
	}
label_1:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	jfloat temp0 = (frame[3].f) / (frame[2].f);
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 * ((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[1].o))->F_lastZoom)), (jfloat(0.25f)), (jfloat(1)));
	((func_mindustry_ui_dialogs_ResearchDialog$View_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setScale_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$3:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_lastZoom = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$3:pan", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX = (temp0 + (temp1 / ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX)));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	jfloat temp2 = (jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panY;
	jfloat temp3 = frame[5].f;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panY = (temp2 + (temp3 / ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleY)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_moved = (jint(1));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_clamp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_clamp])(ctx, sp[0].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$3[] {
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
	(void *) M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$3_zoom_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector,
	(void *) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "tap", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "longPress", "(Larc/scene/Element;FF)Z" },
	{ "fling", "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V" },
	{ "pan", "(Larc/scene/event/InputEvent;FFFF)V" },
	{ "zoom", "(Larc/scene/event/InputEvent;FF)V" },
	{ "pinch", "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "getGestureDetector", "()Larc/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Larc/scene/Element;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$3, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$3_mindustry_ui_dialogs_ResearchDialog, 0, "(Lmindustry/ui/dialogs/ResearchDialog;)V", 0 },
	{ "zoom", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$3_zoom_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_dialogs_ResearchDialog$3_zoom_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_ResearchDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "pan", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float, VTABLE_mindustry_ui_dialogs_ResearchDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float, "(Larc/scene/event/InputEvent;FFFF)V", 1 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$3{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$3",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$3),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$3,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$3,
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
static bool registered_mindustry_ui_dialogs_ResearchDialog$3 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$3);

}

