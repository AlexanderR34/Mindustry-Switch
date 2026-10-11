#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Mover.h"
#include "arc/math/Mathf.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Mover.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Element.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "arc/util/Tmp.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) object;
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(431);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover:touchDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving = (jref) sp[1].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving;
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_toFront])(ctx, sp[0].o);
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[1].o))->F_moving;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK(sp[0].o))->F_prevX = ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[1].o))->F_editorX);
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[1].o))->F_moving;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK(sp[0].o))->F_prevY = ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[1].o))->F_editorY);
	LINE_NUMBER(445);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(446);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(447);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover:touchDragged", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving;
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_moveBy_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_moveBy_float_float])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x) - ((jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastX)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y) - ((jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastY)));
	LINE_NUMBER(456);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(457);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover:touchUp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[1].o))->F_moving;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[2].o))->F_this$1;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[2].o))->F_moving;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[2].o))->F_this$1;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[2].o))->F_this$0;
	jfloat temp1 = temp0 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[2].o))->F_unitSize);
	LINE_NUMBER(463);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp1);
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[2].o))->F_this$1;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[2].o))->F_moving;
	jfloat temp3 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[2].o))->F_this$1;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[2].o))->F_this$0;
	jfloat temp4 = temp3 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[2].o))->F_unitSize);
	LINE_NUMBER(464);
	jint temp5 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp4);
	LINE_NUMBER(462);
	jint temp6 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp2, temp5);
	if (temp6 != 0) goto label_4;
	}
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving;
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int])(ctx, sp[0].o, ((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_prevX), ((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_prevY));
	}
label_4:;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover *) NULL_CHECK((frame[0].o)))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_moving = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover[] {
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
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDragged_arc_scene_event_InputEvent_float_float_int,
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
	{ "prevX", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, F_prevX), "I", 1 },
	{ "prevY", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, F_prevY), "I", 1 },
	{ "lastX", &class_float, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, F_lastX), "F", 1 },
	{ "lastY", &class_float, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, F_lastY), "F", 1 },
	{ "this$2", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, F_this$2), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, 0, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover = registerClass(&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover);

}

