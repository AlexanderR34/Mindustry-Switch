#include "mindustry/editor/MapObjectivesCanvas_2.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/editor/MapObjectivesCanvas_2.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "arc/scene/Group.h"
#include "arc/util/Time.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/input/KeyCode.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector.h"
#include "arc/util/Tmp.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "mindustry/Vars.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesCanvas$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$2_mindustry_editor_MapObjectivesCanvas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ElementGestureListener(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_pressPointer = (jint(-1));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$2:pan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_connecting;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_tilemap;
	jfloat temp0 = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_x) + (frame[4].f);
	jfloat temp1 = jfloat(-100.0f);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_mindustry_editor_MapObjectivesCanvas_access$000_mindustry_editor_MapObjectivesCanvas_R_float(ctx, sp[1].o);
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = jfloat(100.0f);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp4, (temp5 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = temp6;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_tilemap;
	jfloat temp7 = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_y) + (frame[5].f);
	jfloat temp8 = jfloat(-100.0f);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = temp8 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)SM_mindustry_editor_MapObjectivesCanvas_access$100_mindustry_editor_MapObjectivesCanvas_R_float(ctx, sp[1].o);
	jfloat temp11 = temp9 + temp10;
	jfloat temp12 = jfloat(100.0f);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp7, temp11, (temp12 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = temp13;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$2:tap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_query;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_tilemap;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x;
	jfloat temp1 = jfloat(5.0f);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp0 - ((temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize)) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp2 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize)));
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_queryX = temp3;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = temp4 - ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp5 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize)));
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_queryY = temp6;
	LINE_NUMBER(77);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_editor_MapObjectivesCanvas_placeQuery) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_placeQuery])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$2:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(82);
	if (((jint)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_pressPointer) == (jint(-1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(83);
	((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_pressPointer = (frame[4].i);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_pressed = (jint(1));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_visualPressed = (temp0 + (jlong(100ll)));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$2:touchUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(90);
	if ((frame[4].i) != ((jint)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_pressPointer)) goto label_1;
	}
	{
	LINE_NUMBER(91);
	((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_pressPointer = (jint(-1));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_pressed = (jint(0));
	}
label_1:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$2[] {
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
	(void *) M_mindustry_editor_MapObjectivesCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapObjectivesCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapObjectivesCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapObjectivesCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float,
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
	{ "pressPointer", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas$2, F_pressPointer), "I", 0 },
	{ "this$0", &class_mindustry_editor_MapObjectivesCanvas, offsetof(mindustry_editor_MapObjectivesCanvas$2, F_this$0), "Lmindustry/editor/MapObjectivesCanvas;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$2_mindustry_editor_MapObjectivesCanvas, 0, "(Lmindustry/editor/MapObjectivesCanvas;)V", 0 },
	{ "pan", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float, VTABLE_mindustry_editor_MapObjectivesCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float, "(Larc/scene/event/InputEvent;FFFF)V", 1 },
	{ "tap", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapObjectivesCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapObjectivesCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapObjectivesCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_editor_MapObjectivesCanvas$2{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$2",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$2),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$2,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$2,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$2 = registerClass(&class_mindustry_editor_MapObjectivesCanvas$2);

}

