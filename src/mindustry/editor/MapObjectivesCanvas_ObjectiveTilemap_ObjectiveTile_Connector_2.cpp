#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector_2.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "arc/scene/Group.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector_2.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Element.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) object;
	if (self->F_this$3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$3)->clazz)->markFunction)((jobject) self->F_this$3, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(485);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_val$findParent = (frame[2].i);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(486);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer = (jint(-1));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2:touchDown", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(490);
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(491);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer = (frame[4].i);
	LINE_NUMBER(493);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_connecting;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_connecting = (jref) sp[1].o;
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_pointX = (frame[2].f);
	LINE_NUMBER(497);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_pointY = (frame[3].f);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2:touchDragged", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(503);
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer) == (frame[4].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_pointX = (frame[2].f);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_pointY = (frame[3].f);
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2:touchUp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(510);
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer) != (frame[4].i)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_connecting;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(511);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_conPointer = (jint(-1));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[1].o))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_this$1;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y), (jint(1)));
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector)) == 0) goto label_5;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, (frame[8].o)));
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_canConnectTo_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_canConnectTo_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(515);
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_val$findParent) == 0) goto label_8;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[1].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile])(ctx, (frame[7].o));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[1].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile])(ctx, (frame[7].o));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile])(ctx, (frame[7].o));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[1].o))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_tile_R_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile])(ctx, (frame[7].o));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[1].o))->F_this$2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_obj;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 *) NULL_CHECK((frame[0].o)))->F_this$3;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_this$2;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[0].o))->F_this$1;
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_connecting = (jref) (jobject(nullptr));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2[] {
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
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDragged_arc_scene_event_InputEvent_float_float_int,
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
	{ "conPointer", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2, F_conPointer), "I", 0 },
	{ "val$findParent", &class_boolean, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2, F_val$findParent), "Z", 4112 },
	{ "this$3", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2, F_this$3), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_boolean, 0, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector;Z)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "touchUp", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
};

Class class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2 = registerClass(&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$2);

}

