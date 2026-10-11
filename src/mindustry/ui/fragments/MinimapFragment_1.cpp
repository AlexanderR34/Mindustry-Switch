#include "mindustry/ui/fragments/MinimapFragment_1.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "mindustry/ui/fragments/MinimapFragment_1.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_ui_fragments_MinimapFragment$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_MinimapFragment$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_MinimapFragment$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_mindustry_ui_fragments_MinimapFragment$1_mindustry_ui_fragments_MinimapFragment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MinimapFragment$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ElementGestureListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment$1_zoom_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:zoom", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_lastZoom), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_lastZoom = ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom);
	}
label_1:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (frame[3].f) / (frame[2].f);
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_lastZoom)), (jfloat(0.25f)), (jfloat(10.0f)));
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_zoom = temp1;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment$1_pan_arc_scene_event_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:pan", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[1].o)))->F_keyCode;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_panx;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_panx = (temp0 + (temp1 / ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom)));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_pany;
	jfloat temp3 = frame[5].f;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_pany = (temp2 + (temp3 / ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom)));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_fragments_MinimapFragment_panTo_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_panTo_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_4:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:touchDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(99);
	M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(100);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_fragments_MinimapFragment_panTo_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_panTo_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_2:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:tap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(107);
	M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(108);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	{
	if ((frame[4].i) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[6].o = sp[0].o;
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y), (jobject(nullptr)));
	}
label_2:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment$1:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_lastZoom = ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_zoom);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_MinimapFragment$1[] {
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
	(void *) M_mindustry_ui_fragments_MinimapFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_fragments_MinimapFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_fragments_MinimapFragment$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_mindustry_ui_fragments_MinimapFragment$1_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_mindustry_ui_fragments_MinimapFragment$1_zoom_arc_scene_event_InputEvent_float_float,
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
	{ "this$0", &class_mindustry_ui_fragments_MinimapFragment, offsetof(mindustry_ui_fragments_MinimapFragment$1, F_this$0), "Lmindustry/ui/fragments/MinimapFragment;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MinimapFragment$1_mindustry_ui_fragments_MinimapFragment, 0, "(Lmindustry/ui/fragments/MinimapFragment;)V", 0 },
	{ "zoom", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$1_zoom_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_fragments_MinimapFragment$1_zoom_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
	{ "pan", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$1_pan_arc_scene_event_InputEvent_float_float_float_float, VTABLE_mindustry_ui_fragments_MinimapFragment$1_pan_arc_scene_event_InputEvent_float_float_float_float, "(Larc/scene/event/InputEvent;FFFF)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_fragments_MinimapFragment$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "tap", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_fragments_MinimapFragment$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_ui_fragments_MinimapFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_fragments_MinimapFragment$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_ui_fragments_MinimapFragment$1{
		.nativeName = (intptr_t) "mindustry/ui/fragments/MinimapFragment$1",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(mindustry_ui_fragments_MinimapFragment$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_MinimapFragment$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_MinimapFragment$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_MinimapFragment$1,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_MinimapFragment$1 = registerClass(&class_mindustry_ui_fragments_MinimapFragment$1);

}

