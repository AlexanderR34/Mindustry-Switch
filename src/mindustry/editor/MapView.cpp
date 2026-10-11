#include "mindustry/editor/MapView.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/editor/MapView.h"
#include "mindustry/world/Block.h"
#include "arc/Input.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "arc/input/KeyCode.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/event/Touchable.h"
#include "arc/math/geom/Geometry_SolidChecker.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/MapView_invoke_arc_math_geom_Geometry_SolidChecker_1.h"
#include "arc/input/KeyBind.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "mindustry/ui/GridImage.h"
#include "mindustry/editor/MapView_1.h"
#include "mindustry/core/UI.h"
#include "arc/input/GestureDetector.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/editor/EditorRenderer.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "arc/input/GestureDetector_GestureListener.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_mindustry_editor_MapView(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapView *) object;
	if (self->F_tool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tool)->clazz)->markFunction)((jobject) self->F_tool, mark, depth + 1);
	if (self->F_image)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_image)->clazz)->markFunction)((jobject) self->F_image, mark, depth + 1);
	if (self->F_vec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vec)->clazz)->markFunction)((jobject) self->F_vec, mark, depth + 1);
	if (self->F_rect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rect)->clazz)->markFunction)((jobject) self->F_rect, mark, depth + 1);
	if (self->F_brushPolygons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_brushPolygons)->clazz)->markFunction)((jobject) self->F_brushPolygons, mark, depth + 1);
	if (self->F_lastTool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTool)->clazz)->markFunction)((jobject) self->F_lastTool, mark, depth + 1);
}

void clinit_mindustry_editor_MapView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_editor_MapView(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapView(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_zoom;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(24);
	((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_grid = (jint(0));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_GridImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_GridImage);
	init_mindustry_ui_GridImage_int_int(ctx, sp[1].o, (jint(0)), (jint(0)));
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_image = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_vec = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_math_geom_Vec2, {(((jarray) nullCheck(ctx, sp[1].o))->length), (jint(0))});
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_brushPolygons = (jref) sp[1].o;
	LINE_NUMBER(38);
	frame[1].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	LINE_NUMBER(40);
	frame[3].f = (fmodf((frame[2].f), (jfloat(1))));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_brushPolygons;
	jint temp0 = frame[1].i;
	jfloat temp1 = frame[2].f;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapView_invoke_arc_math_geom_Geometry$SolidChecker_1(ctx);
		auto proxy = (mindustry_editor_MapView_invoke_arc_math_geom_Geometry$SolidChecker_1 *) gcAlloc(ctx, &class_mindustry_editor_MapView_invoke_arc_math_geom_Geometry$SolidChecker_1);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[3].f);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_pixelCircle_float_arc_math_geom_Geometry$SolidChecker_R_Array1_arc_math_geom_Vec2(ctx, temp1, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(38);
	INST_IINC(1, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(44);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_getInputProcessors_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getInputProcessors_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = jint(0);
	clinit_arc_input_GestureDetector(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_GestureDetector);
	init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(ctx, sp[1].o, (jfloat(20.0f)), (jfloat(0.5f)), (jfloat(2)), (jfloat(0.15f)), (frame[0].o));
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(47);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapView$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapView$1);
	init_mindustry_editor_MapView$1_mindustry_editor_MapView_arc_math_geom_Point2(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)((func_mindustry_editor_MapView_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:getTool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:setTool", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool = (jref) (frame[1].o);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView_isGrid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:isGrid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return ((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_grid);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_setGrid_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:setGrid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_grid = (frame[1].i);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_center(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:center", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_editor_MapView *) NULL_CHECK(sp[1].o))->F_offsety = temp0;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsetx = temp0;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:act", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(178);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(180);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(182);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp1;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsetx = (((jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsetx) - ((((frame[2].f) * (jfloat(15.0f))) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) / ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsety = (((jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsety) - ((((frame[3].f) * (jfloat(15.0f))) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) / ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	}
label_3:;
	{
	LINE_NUMBER(187);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altLeft;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_lastTool = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pick;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(192);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altLeft;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_lastTool;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_lastTool;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_tool = (jref) sp[1].o;
	LINE_NUMBER(194);
	((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_lastTool = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(197);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_14;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_zoom;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_zoom;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_zoom = (temp0 + ((temp1 / (jfloat(10.0f))) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	}
label_15:;
	{
	LINE_NUMBER(200);
	((func_mindustry_editor_MapView_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_clampZoom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:clampZoom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom), (jfloat(0.2f)), (jfloat(20.0f)));
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_zoom = temp0;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:project", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(208);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	frame[3].f = (temp0 / (temp2 / (jfloat(temp3))));
	LINE_NUMBER(209);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	frame[4].f = temp4;
	LINE_NUMBER(210);
	frame[5].f = ((frame[4].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(211);
	frame[6].f = (((frame[4].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)) * (frame[3].f));
	LINE_NUMBER(212);
	jfloat temp5 = frame[1].f;
	jfloat temp6 = (jfloat)((func_mindustry_editor_MapView_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp7 = (((temp5 - (temp6 / (jfloat(2)))) + ((frame[5].f) / (jfloat(2)))) - (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsetx) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom))) / (frame[5].f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp8 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	frame[1].f = (temp7 * (jfloat(temp8)));
	LINE_NUMBER(213);
	jfloat temp9 = frame[2].f;
	jfloat temp10 = (jfloat)((func_mindustry_editor_MapView_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp11 = (((temp9 - (temp10 / (jfloat(2)))) + ((frame[6].f) / (jfloat(2)))) - (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsety) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom))) / (frame[6].f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp12 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	frame[2].f = (temp11 * (jfloat(temp12)));
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_eraser;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(216);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_p1;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, (jint(((frame[1].f) - (jfloat(0.5f))))), (jint(((frame[2].f) - (jfloat(0.5f))))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(218);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_p1;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, (jint((frame[1].f))), (jint((frame[2].f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:unproject", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(223);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	frame[3].f = (temp0 / (temp2 / (jfloat(temp3))));
	LINE_NUMBER(224);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	frame[4].f = temp4;
	LINE_NUMBER(225);
	frame[5].f = ((frame[4].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(226);
	frame[6].f = (((frame[4].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)) * (frame[3].f));
	LINE_NUMBER(227);
	jfloat temp5 = jfloat((frame[1].i));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp6 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	jfloat temp7 = (((temp5 / (jfloat(temp6))) * (frame[5].f)) + (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsetx) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom))) - ((frame[5].f) / (jfloat(2)));
	jfloat temp8 = (jfloat)((func_mindustry_editor_MapView_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_getWidth_R_float])(ctx, (frame[0].o));
	frame[7].f = (temp7 + (temp8 / (jfloat(2))));
	LINE_NUMBER(228);
	jfloat temp9 = jfloat((frame[2].i));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp10 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	jfloat temp11 = (((temp9 / (jfloat(temp10))) * (frame[6].f)) + (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsety) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom))) - ((frame[6].f) / (jfloat(2)));
	sp[0].o = frame[0].o;
	LINE_NUMBER(229);
	jfloat temp12 = (jfloat)((func_mindustry_editor_MapView_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapView_getHeight_R_float])(ctx, sp[0].o);
	frame[8].f = (temp11 + (temp12 / (jfloat(2))));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f), (frame[8].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(238);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	frame[1].f = (temp0 / (temp2 / (jfloat(temp3))));
	LINE_NUMBER(239);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	frame[2].f = temp4;
	LINE_NUMBER(240);
	frame[3].f = ((frame[2].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(241);
	frame[4].f = (((frame[2].f) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)) * (frame[1].f));
	LINE_NUMBER(242);
	frame[5].f = ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))) + (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsetx) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(243);
	frame[6].f = ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))) + (((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_offsety) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_image;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp5 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp6 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[1].o);
	((func_mindustry_ui_GridImage_setImageSize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_GridImage_setImageSize_int_int])(ctx, sp[0].o, temp5, temp6);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_rect;
	jfloat temp7 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp8 = temp7 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp9 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp8, (temp9 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	jint temp10 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, sp[0].o);
	if (temp10 != 0) goto label_10;
	}
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(251);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(252);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(253);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, (((frame[5].f) - ((frame[3].f) / (jfloat(2)))) - (jfloat(1))), (((frame[6].f) - ((frame[4].f) / (jfloat(2)))) - (jfloat(1))), ((frame[3].f) + (jfloat(2))), ((frame[4].f) + (jfloat(2))));
	LINE_NUMBER(254);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	jfloat temp0 = (frame[5].f) - ((frame[3].f) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp2 = (frame[6].f) - ((frame[4].f) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_mindustry_editor_EditorRenderer_draw_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_draw_float_float_float_float])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)), (frame[3].f), (frame[4].f));
	LINE_NUMBER(255);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(257);
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_grid) == 0) goto label_17;
	}
	{
	LINE_NUMBER(258);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_image;
	((func_mindustry_ui_GridImage_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_GridImage_setBounds_float_float_float_float])(ctx, sp[0].o, ((frame[5].f) - ((frame[3].f) / (jfloat(2)))), ((frame[6].f) - ((frame[4].f) / (jfloat(2)))), (frame[3].f), (frame[4].f));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_image;
	((func_mindustry_ui_GridImage_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_GridImage_draw])(ctx, sp[0].o);
	LINE_NUMBER(262);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(263);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_bulletYellowBack;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(264);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[5].f) - ((frame[3].f) / (jfloat(2)))), ((frame[6].f) - ((frame[4].f) / (jfloat(4.0f)))), ((frame[5].f) + ((frame[3].f) / (jfloat(2)))), ((frame[6].f) - ((frame[4].f) / (jfloat(4.0f)))));
	LINE_NUMBER(265);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[5].f) - ((frame[3].f) / (jfloat(4.0f)))), ((frame[6].f) - ((frame[4].f) / (jfloat(2)))), ((frame[5].f) - ((frame[3].f) / (jfloat(4.0f)))), ((frame[6].f) + ((frame[4].f) / (jfloat(2)))));
	LINE_NUMBER(266);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[5].f) - ((frame[3].f) / (jfloat(2)))), ((frame[6].f) + ((frame[4].f) / (jfloat(4.0f)))), ((frame[5].f) + ((frame[3].f) / (jfloat(2)))), ((frame[6].f) + ((frame[4].f) / (jfloat(4.0f)))));
	LINE_NUMBER(267);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[5].f) + ((frame[3].f) / (jfloat(4.0f)))), ((frame[6].f) - ((frame[4].f) / (jfloat(2)))), ((frame[5].f) + ((frame[3].f) / (jfloat(4.0f)))), ((frame[6].f) + ((frame[4].f) / (jfloat(2)))));
	LINE_NUMBER(269);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(270);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(271);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[5].f) - ((frame[3].f) / (jfloat(2)))), (frame[6].f), ((frame[5].f) + ((frame[3].f) / (jfloat(2)))), (frame[6].f));
	LINE_NUMBER(272);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[5].f), ((frame[6].f) - ((frame[4].f) / (jfloat(2)))), (frame[5].f), ((frame[6].f) + ((frame[4].f) / (jfloat(2)))));
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_17:;
	{
	LINE_NUMBER(277);
	frame[7].i = (jint(0));
	LINE_NUMBER(278);
	frame[8].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[8].i;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_34;
	}
	{
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jfloat temp0 = (jfloat)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_brushSize;
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapEditor_brushSizes;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[8].i))), -1)) != 0) goto label_36;
	}
	{
	LINE_NUMBER(280);
	frame[7].i = (frame[8].i);
	LINE_NUMBER(281);
	goto label_34;
	}
label_36:;
	{
	LINE_NUMBER(278);
	INST_IINC(8, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(285);
	jfloat temp0 = (jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	jfloat temp2 = temp0 * temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	frame[8].f = (temp2 / (jfloat(temp3)));
	LINE_NUMBER(287);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(288);
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(2)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp4);
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp5 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp5 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_eraser;
	if (sp[0].o != sp[1].o) goto label_43;
	}
label_42:;
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_fill;
	if (sp[0].o == sp[1].o) goto label_43;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	if (sp[0].o != sp[1].o) goto label_45;
	}
	{
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_45;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_startx), ((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_starty));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[9].o = sp[0].o;
	LINE_NUMBER(293);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_x);
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_y);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_lastx), ((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_lasty));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[12].o = sp[0].o;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_brushPolygons;
	SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), (frame[10].f), (frame[11].f), (frame[8].f));
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_brushPolygons;
	SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y), (frame[8].f));
	}
label_45:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_edit) != 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	if (sp[0].o != sp[1].o) goto label_53;
	}
	{
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_53;
	}
label_52:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_54;
	{
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, (frame[0].o), ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_mousex), ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_mousey));
	frame[9].o = sp[0].o;
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[10].o = sp[0].o;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pencil;
	if (sp[0].o != sp[1].o) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_mode) != (jint(1))) goto label_57;
	}
	{
	LINE_NUMBER(306);
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x) + ((frame[8].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y) + ((frame[8].f) / (jfloat(2)));
	jfloat temp2 = frame[8].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jobject temp3 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_editor_MapEditor *) NULL_CHECK(temp3))->F_brushSize), (jfloat(1.5f)), -1)) != 0) goto label_59;
	}
	INST_FCONST(1);
	goto label_60;
label_59:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_editor;
	sp[-1].f = ((mindustry_editor_MapEditor *) NULL_CHECK(sp[-1].o))->F_brushSize;
label_60:;
	{
	sp -= 4;
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, sp[0].f, sp[1].f, (sp[2].f * (sp[3].f + (jfloat(0.5f)))));
	goto label_61;
	}
label_57:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_brushPolygons;
	SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y), (frame[8].f));
	}
label_61:;
	LINE_NUMBER(310);
	goto label_53;
label_43:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_edit) != 0) goto label_62;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	if (sp[0].o != sp[1].o) goto label_53;
	}
label_62:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_63;
	{
	if (((jint)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_53;
	}
label_63:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2])(ctx, (frame[0].o), ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_mousex), ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_mousey));
	frame[9].o = sp[0].o;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[10].o = sp[0].o;
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_66;
	}
	{
	jfloat temp0 = (frame[8].f) / (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_67;
	}
label_66:;
	INST_FCONST(0);
label_67:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(316);
	jfloat temp0 = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x) + ((frame[8].f) / (jfloat(2)))) + (frame[11].f);
	jfloat temp1 = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y) + ((frame[8].f) / (jfloat(2)))) + (frame[11].f);
	jfloat temp2 = frame[8].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp0, temp1, ((temp2 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(2))));
	}
label_53:;
	{
	LINE_NUMBER(323);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(324);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(325);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(326);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(328);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView_active_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:active", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_editor;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	LINE_NUMBER(334);
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_tool;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_zoom;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	LINE_NUMBER(335);
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:pan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(340);
	jint temp0 = (jint)((func_mindustry_editor_MapView_active_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_active_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsetx = (((jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsetx) + ((frame[3].f) / ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsety = (((jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_offsety) + ((frame[4].f) / ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:zoom", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_mindustry_editor_MapView_active_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_active_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(349);
	frame[3].f = ((frame[2].f) - (frame[1].f));
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_zoom;
	jfloat temp1 = (frame[3].f) / (jfloat(10000.0f));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((mindustry_editor_MapView *) NULL_CHECK(sp[0].o))->F_zoom = (temp0 + ((temp1 / temp2) * ((jfloat)((mindustry_editor_MapView *) NULL_CHECK((frame[0].o)))->F_zoom)));
	LINE_NUMBER(351);
	((func_mindustry_editor_MapView_clampZoom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapView_clampZoom])(ctx, (frame[0].o));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapView_pinchStop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:pinchStop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(363);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapView_lambda$new$0_float_float_float_int_int_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapView:lambda$new$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapView(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(41);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[3].i))), (jfloat((frame[4].i))), ((frame[2].f) - (frame[0].f)), ((frame[2].f) - (frame[0].f)));
	if ((floatCompare(temp0, ((frame[1].f) - (jfloat(0.5f))), 1)) > 0) goto label_1;
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

void *vtable_mindustry_editor_MapView[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_editor_MapView_draw,
	(void *) M_mindustry_editor_MapView_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_Element_sizeChanged,
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
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_Element_getPrefWidth_R_float,
	(void *) M_arc_scene_Element_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_Element_layout,
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
	(void *) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapView_pan_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_editor_MapView_zoom_float_float_R_boolean,
	(void *) M_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_mindustry_editor_MapView_pinchStop,
	(void *) M_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool,
	(void *) M_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool,
	(void *) M_mindustry_editor_MapView_isGrid_R_boolean,
	(void *) M_mindustry_editor_MapView_setGrid_boolean,
	(void *) M_mindustry_editor_MapView_center,
	(void *) M_mindustry_editor_MapView_clampZoom,
	(void *) M_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2,
	(void *) M_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2,
	(void *) M_mindustry_editor_MapView_active_R_boolean,
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
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
	{ "getTool", "()Lmindustry/editor/EditorTool;" },
	{ "setTool", "(Lmindustry/editor/EditorTool;)V" },
	{ "isGrid", "()Z" },
	{ "setGrid", "(Z)V" },
	{ "center", "()V" },
	{ "clampZoom", "()V" },
	{ "project", "(FF)Larc/math/geom/Point2;" },
	{ "unproject", "(II)Larc/math/geom/Vec2;" },
	{ "active", "()Z" },
};

static jclass interfaces[] { &class_arc_input_GestureDetector$GestureListener, };

static FieldMetadata fields[] {
	{ "tool", &class_mindustry_editor_EditorTool, offsetof(mindustry_editor_MapView, F_tool), "Lmindustry/editor/EditorTool;", 0 },
	{ "offsetx", &class_float, offsetof(mindustry_editor_MapView, F_offsetx), "F", 2 },
	{ "offsety", &class_float, offsetof(mindustry_editor_MapView, F_offsety), "F", 2 },
	{ "zoom", &class_float, offsetof(mindustry_editor_MapView, F_zoom), "F", 2 },
	{ "grid", &class_boolean, offsetof(mindustry_editor_MapView, F_grid), "Z", 2 },
	{ "image", &class_mindustry_ui_GridImage, offsetof(mindustry_editor_MapView, F_image), "Lmindustry/ui/GridImage;", 2 },
	{ "vec", &class_arc_math_geom_Vec2, offsetof(mindustry_editor_MapView, F_vec), "Larc/math/geom/Vec2;", 2 },
	{ "rect", &class_arc_math_geom_Rect, offsetof(mindustry_editor_MapView, F_rect), "Larc/math/geom/Rect;", 2 },
	{ "brushPolygons", getArrayClass(&class_arc_math_geom_Vec2, 2), offsetof(mindustry_editor_MapView, F_brushPolygons), "[[Larc/math/geom/Vec2;", 2 },
	{ "drawing", &class_boolean, offsetof(mindustry_editor_MapView, F_drawing), "Z", 0 },
	{ "lastx", &class_int, offsetof(mindustry_editor_MapView, F_lastx), "I", 0 },
	{ "lasty", &class_int, offsetof(mindustry_editor_MapView, F_lasty), "I", 0 },
	{ "startx", &class_int, offsetof(mindustry_editor_MapView, F_startx), "I", 0 },
	{ "starty", &class_int, offsetof(mindustry_editor_MapView, F_starty), "I", 0 },
	{ "mousex", &class_float, offsetof(mindustry_editor_MapView, F_mousex), "F", 0 },
	{ "mousey", &class_float, offsetof(mindustry_editor_MapView, F_mousey), "F", 0 },
	{ "lastTool", &class_mindustry_editor_EditorTool, offsetof(mindustry_editor_MapView, F_lastTool), "Lmindustry/editor/EditorTool;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapView, 0, "()V", 1 },
	{ "getTool", (intptr_t) M_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool, VTABLE_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool, "()Lmindustry/editor/EditorTool;", 1 },
	{ "setTool", (intptr_t) M_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool, VTABLE_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool, "(Lmindustry/editor/EditorTool;)V", 1 },
	{ "isGrid", (intptr_t) M_mindustry_editor_MapView_isGrid_R_boolean, VTABLE_mindustry_editor_MapView_isGrid_R_boolean, "()Z", 1 },
	{ "setGrid", (intptr_t) M_mindustry_editor_MapView_setGrid_boolean, VTABLE_mindustry_editor_MapView_setGrid_boolean, "(Z)V", 1 },
	{ "center", (intptr_t) M_mindustry_editor_MapView_center, VTABLE_mindustry_editor_MapView_center, "()V", 1 },
	{ "act", (intptr_t) M_mindustry_editor_MapView_act_float, VTABLE_mindustry_editor_MapView_act_float, "(F)V", 1 },
	{ "clampZoom", (intptr_t) M_mindustry_editor_MapView_clampZoom, VTABLE_mindustry_editor_MapView_clampZoom, "()V", 2 },
	{ "project", (intptr_t) M_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2, VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2, "(FF)Larc/math/geom/Point2;", 1 },
	{ "unproject", (intptr_t) M_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2, VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2, "(II)Larc/math/geom/Vec2;", 2 },
	{ "draw", (intptr_t) M_mindustry_editor_MapView_draw, VTABLE_mindustry_editor_MapView_draw, "()V", 1 },
	{ "active", (intptr_t) M_mindustry_editor_MapView_active_R_boolean, VTABLE_mindustry_editor_MapView_active_R_boolean, "()Z", 2 },
	{ "pan", (intptr_t) M_mindustry_editor_MapView_pan_float_float_float_float_R_boolean, VTABLE_mindustry_editor_MapView_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "zoom", (intptr_t) M_mindustry_editor_MapView_zoom_float_float_R_boolean, VTABLE_mindustry_editor_MapView_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "pinch", (intptr_t) M_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, VTABLE_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 1 },
	{ "pinchStop", (intptr_t) M_mindustry_editor_MapView_pinchStop, VTABLE_mindustry_editor_MapView_pinchStop, "()V", 1 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_editor_MapView_lambda$new$0_float_float_float_int_int_R_boolean, 0, "(FFFII)Z", 4106 },
};

Class class_mindustry_editor_MapView{
		.nativeName = (intptr_t) "mindustry/editor/MapView",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_editor_MapView),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapView,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 139,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapView = registerClass(&class_mindustry_editor_MapView);

}
