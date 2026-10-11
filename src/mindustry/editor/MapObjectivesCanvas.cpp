#include "mindustry/editor/MapObjectivesCanvas.h"
#include "mindustry/editor/MapObjectivesCanvas_1.h"
#include "arc/Core.h"
#include "mindustry/editor/MapObjectivesCanvas_2.h"
#include "arc/scene/Group.h"
#include "arc/util/Time.h"
#include "arc/Graphics.h"
#include "arc/scene/Element.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {

jint SF_mindustry_editor_MapObjectivesCanvas_objWidth;
jint SF_mindustry_editor_MapObjectivesCanvas_objHeight;
jint SF_mindustry_editor_MapObjectivesCanvas_bounds;

void mark_mindustry_editor_MapObjectivesCanvas(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapObjectivesCanvas *) object;
	if (self->F_objectives)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectives)->clazz)->markFunction)((jobject) self->F_objectives, mark, depth + 1);
	if (self->F_tilemap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tilemap)->clazz)->markFunction)((jobject) self->F_tilemap, mark, depth + 1);
	if (self->F_query)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_query)->clazz)->markFunction)((jobject) self->F_query, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	SF_mindustry_editor_MapObjectivesCanvas_objWidth = jint(5);
	SF_mindustry_editor_MapObjectivesCanvas_objHeight = jint(2);
	SF_mindustry_editor_MapObjectivesCanvas_bounds = jint(100);
}

void init_mindustry_editor_MapObjectivesCanvas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(48.0f)));
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize = temp0;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_objectives = (jref) sp[1].o;
	LINE_NUMBER(38);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_queryX = (-5);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_queryY = (-2);
	LINE_NUMBER(41);
	((func_mindustry_editor_MapObjectivesCanvas_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap);
	init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_editor_MapObjectivesCanvas(ctx, sp[2].o, (frame[0].o));
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_tilemap = (jref) sp[2].o;
	((func_mindustry_editor_MapObjectivesCanvas_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_addChild_arc_scene_Element])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$1);
	init_mindustry_editor_MapObjectivesCanvas$1_mindustry_editor_MapObjectivesCanvas(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_MapObjectivesCanvas_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$2);
	init_mindustry_editor_MapObjectivesCanvas$2_mindustry_editor_MapObjectivesCanvas(ctx, sp[1].o, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_editor_MapObjectivesCanvas_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas_clearObjectives(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:clearObjectives", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	((func_mindustry_editor_MapObjectivesCanvas_stopQuery) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_stopQuery])(ctx, (frame[0].o));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_tilemap;
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles])(ctx, sp[0].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_tilemap;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (jfloat(0));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_tilemap;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (jfloat(0));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas_stopQuery(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:stopQuery", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(107);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query = (jref) (jobject(nullptr));
	LINE_NUMBER(109);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_restoreCursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_restoreCursor])(ctx, sp[0].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas_query_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:query", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((func_mindustry_editor_MapObjectivesCanvas_stopQuery) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_stopQuery])(ctx, (frame[0].o));
	LINE_NUMBER(114);
	((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query = (jref) (frame[1].o);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas_placeQuery(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:placeQuery", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_tilemap;
	jint temp0 = (jint)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_queryX;
	jint temp1 = (jint)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_queryY;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query;
	jint temp2 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 == 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_objectives;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	((func_mindustry_editor_MapObjectivesCanvas_stopQuery) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_stopQuery])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:isQuerying", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_query;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:isVisualPressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	if (((jint)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_pressed) != 0) goto label_1;
	}
	{
	jlong temp0 = (jlong)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK((frame[0].o)))->F_visualPressed;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	if ((longCompare(temp0, temp1)) <= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_MapObjectivesCanvas_access$000_mindustry_editor_MapObjectivesCanvas_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_MapObjectivesCanvas_access$100_mindustry_editor_MapObjectivesCanvas_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_Group_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas_clearObjectives,
	(void *) M_mindustry_editor_MapObjectivesCanvas_stopQuery,
	(void *) M_mindustry_editor_MapObjectivesCanvas_query_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_editor_MapObjectivesCanvas_placeQuery,
	(void *) M_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "clearObjectives", "()V" },
	{ "stopQuery", "()V" },
	{ "query", "(Lmindustry/game/MapObjectives$MapObjective;)V" },
	{ "placeQuery", "()V" },
	{ "isQuerying", "()Z" },
	{ "isVisualPressed", "()Z" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
};

static FieldMetadata fields[] {
	{ "objWidth", &class_int, (intptr_t) &SF_mindustry_editor_MapObjectivesCanvas_objWidth, "I", 25 },
	{ "objHeight", &class_int, (intptr_t) &SF_mindustry_editor_MapObjectivesCanvas_objHeight, "I", 25 },
	{ "bounds", &class_int, (intptr_t) &SF_mindustry_editor_MapObjectivesCanvas_bounds, "I", 25 },
	{ "unitSize", &class_float, offsetof(mindustry_editor_MapObjectivesCanvas, F_unitSize), "F", 17 },
	{ "objectives", &class_arc_struct_Seq, offsetof(mindustry_editor_MapObjectivesCanvas, F_objectives), "Larc/struct/Seq;", 1 },
	{ "tilemap", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, offsetof(mindustry_editor_MapObjectivesCanvas, F_tilemap), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;", 1 },
	{ "query", &class_mindustry_game_MapObjectives$MapObjective, offsetof(mindustry_editor_MapObjectivesCanvas, F_query), "Lmindustry/game/MapObjectives$MapObjective;", 4 },
	{ "pressed", &class_boolean, offsetof(mindustry_editor_MapObjectivesCanvas, F_pressed), "Z", 2 },
	{ "visualPressed", &class_long, offsetof(mindustry_editor_MapObjectivesCanvas, F_visualPressed), "J", 2 },
	{ "queryX", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas, F_queryX), "I", 2 },
	{ "queryY", &class_int, offsetof(mindustry_editor_MapObjectivesCanvas, F_queryY), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas, 0, "()V", 1 },
	{ "clearObjectives", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_clearObjectives, VTABLE_mindustry_editor_MapObjectivesCanvas_clearObjectives, "()V", 1 },
	{ "stopQuery", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_stopQuery, VTABLE_mindustry_editor_MapObjectivesCanvas_stopQuery, "()V", 4 },
	{ "query", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_query_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_editor_MapObjectivesCanvas_query_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)V", 1 },
	{ "placeQuery", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_placeQuery, VTABLE_mindustry_editor_MapObjectivesCanvas_placeQuery, "()V", 1 },
	{ "isQuerying", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean, "()Z", 1 },
	{ "isVisualPressed", (intptr_t) M_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean, "()Z", 1 },
	{ "access$000", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas_access$000_mindustry_editor_MapObjectivesCanvas_R_float, 0, "(Lmindustry/editor/MapObjectivesCanvas;)F", 4104 },
	{ "access$100", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas_access$100_mindustry_editor_MapObjectivesCanvas_R_float, 0, "(Lmindustry/editor/MapObjectivesCanvas;)F", 4104 },
};

Class class_mindustry_editor_MapObjectivesCanvas{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 157,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas = registerClass(&class_mindustry_editor_MapObjectivesCanvas);

}
