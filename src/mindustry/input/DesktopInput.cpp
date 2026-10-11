#include "mindustry/input/DesktopInput.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_15.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_14.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_13.h"
#include "arc/util/Tmp.h"
#include "arc/func/Intf.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_12.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/ui/fragments/PlanConfigFragment.h"
#include "java/util/Iterator.h"
#include "mindustry/input/Binding.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_11.h"
#include "arc/Graphics_Cursor.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_10.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/input/DesktopInput.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Intf_1.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Prov_2.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Prov_3.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/fragments/PlayerListFragment.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_9.h"
#include "mindustry/Vars.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_8.h"
#include "mindustry/core/World.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_7.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_6.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Intc_1.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Mechc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/input/InputProcessor.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/input/DesktopInput_invoke_java_lang_Runnable_6.h"
#include "mindustry/input/PlaceMode.h"
#include "mindustry/input/DesktopInput_invoke_java_lang_Runnable_5.h"
#include "mindustry/input/DesktopInput_invoke_java_lang_Runnable_8.h"
#include "mindustry/input/DesktopInput_invoke_java_lang_Runnable_7.h"
#include "arc/struct/Queue.h"
#include "mindustry/input/DesktopInput_invoke_java_lang_Runnable_9.h"
#include "mindustry/game/EventType_LineConfirmEvent.h"
#include "mindustry/gen/Posc.h"
#include "arc/input/KeyCode_KeyType.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/game/Schematics.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/struct/IntSeq.h"
#include "arc/files/Fi.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_10.h"
#include "java/lang/String.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolf_11.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_8.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Cons_9.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolp_8.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolp_9.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolp_5.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolp_6.h"
#include "mindustry/input/DesktopInput_invoke_arc_func_Boolp_7.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "mindustry/game/Team.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "arc/input/GestureDetector_GestureListener.h"

extern "C" {


void mark_mindustry_input_DesktopInput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_input_InputHandler(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_input_DesktopInput *) object;
	if (self->F_movement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_movement)->clazz)->markFunction)((jobject) self->F_movement, mark, depth + 1);
	if (self->F_cursorType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursorType)->clazz)->markFunction)((jobject) self->F_cursorType, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_splan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splan)->clazz)->markFunction)((jobject) self->F_splan, mark, depth + 1);
	if (self->F_prevSelected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevSelected)->clazz)->markFunction)((jobject) self->F_prevSelected, mark, depth + 1);
}

void clinit_mindustry_input_DesktopInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_input_InputHandler(ctx);
}

void init_mindustry_input_DesktopInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_mindustry_input_InputHandler(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_movement = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX = (jint(-1));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY = (jint(-1));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (jint(-1));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (jint(-1));
	LINE_NUMBER(45);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting = (jint(0));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_shouldShoot = (jint(0));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movedPlan = (jint(0));
	LINE_NUMBER(47);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panScale = (jfloat(5,000000e-03f));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panSpeed = (jfloat(4.5f));
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panBoostSpeed = (jfloat(15.0f));
	LINE_NUMBER(49);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectMillis = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_showHint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:showHint", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hints"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) != 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buildautopause"_j));
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_spawnedByCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_spawnedByCore_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	M_mindustry_input_InputHandler_reset(ctx, (frame[0].o));
	LINE_NUMBER(74);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_shouldShoot = (jint(0));
	LINE_NUMBER(75);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting = (jint(0));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:buildUI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_drawTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:drawTop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_cursorType;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[1].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[2].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[1].o))->F_cursorType = (jref) sp[2].o;
	((func_arc_Graphics_cursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(129);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileX_float_R_int])(ctx, sp[0].o, (jfloat(temp0)));
	frame[1].i = temp1;
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_mindustry_input_DesktopInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileY_float_R_int])(ctx, sp[0].o, (jfloat(temp2)));
	frame[2].i = temp3;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX;
	jint temp1 = (jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp4 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (temp4 == 0) goto label_8;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX) == (jint(-1))) goto label_8;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY) != (jint(-1))) goto label_9;
	}
label_8:;
	INST_BIPUSH(100);
	goto label_10;
label_9:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_maxSchematicSize;
label_10:;
	INST_ICONST(0);
	POP_N(7); // Pop method args
	((func_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i);
label_6:;
	{
	LINE_NUMBER(138);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(140);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX) == (jint(-1))) goto label_13;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY) == (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(141);
	((func_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY), (frame[1].i), (frame[2].i), (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxSchematicSize));
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(142);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rebuildSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(143);
	((func_mindustry_input_DesktopInput_drawRebuildSelection_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_drawRebuildSelection_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY), (frame[1].i), (frame[2].i));
	}
label_11:;
	{
	LINE_NUMBER(147);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_drawBottom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:drawBottom", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileX_float_R_int])(ctx, sp[0].o, (jfloat(temp0)));
	frame[1].i = temp1;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_mindustry_input_DesktopInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileY_float_R_int])(ctx, sp[0].o, (jfloat(temp2)));
	frame[2].i = temp3;
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	sp[2].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_rotation;
	sp[2].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp3 = (jint)((func_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, sp[2].o);
	frame[3].i = temp3;
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawArrow) == 0) goto label_6;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	sp[2].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	((func_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_rotation), (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i));
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp3 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[3].o))->F_y;
	sp[3].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[3].o))->F_block;
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_size;
	sp[3].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[2].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[2].o, temp2, temp3, temp4, sp[3].o);
	jobject temp5 = sp[1].o;
	sp[1].i = temp0;
	jobject temp6 = sp[2].o;
	sp[2].i = temp1;
	sp[3].o = temp5;
	sp += 4;
	if (temp6 == nullptr) goto label_9;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_10;
label_9:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_10:;
	POP_N(5); // Pop method args
	((func_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].o);
label_3:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(170);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[-1].o))->F_block;
label_16:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	POP_N(5); // Pop method args
	((func_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].o);
label_11:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_units_BuildPlan, 1), sp[0].o));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(179);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(180);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(181);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(182);
	((func_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(179);
	INST_IINC(5, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(186);
	frame[5].i = (jint(0));
	}
label_25:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_26;
	}
	{
	LINE_NUMBER(187);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(189);
	((func_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean])(ctx, (frame[0].o), (frame[6].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_cachedValid));
	LINE_NUMBER(186);
	INST_IINC(5, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(195);
	frame[5].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_35;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(197);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	if (temp0 != (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawArrow) == 0) goto label_38;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_rotation));
	}
label_38:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[5].i));
	((func_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(195);
	INST_IINC(5, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_30;
	}
label_32:;
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_42;
	}
	{
	jint temp0 = (jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	goto label_43;
	}
label_42:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, sp[0].o, ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].i = temp0;
	sp += 1;
	}
label_43:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_45;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawArrow) == 0) goto label_45;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[5].i));
	}
label_45:;
	{
	LINE_NUMBER(208);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[5].i));
	frame[6].i = temp2;
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	jint temp3 = frame[1].i;
	jint temp4 = frame[2].i;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_input_DesktopInput_drawPlan_int_int_mindustry_world_Block_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawPlan_int_int_mindustry_world_Block_int])(ctx, sp[0].o, temp3, temp4, sp[1].o, (frame[5].i));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Block_drawPlace_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlace_int_int_int_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveConfig) == 0) goto label_51;
	}
	{
	LINE_NUMBER(214);
	if ((frame[6].i) != 0) goto label_53;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_breakInvalid;
	goto label_54;
label_53:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_54:;
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_55;
	(sp++)->f = jfloat(0.4f);
	goto label_56;
label_55:;
	(sp++)->f = jfloat(0.24f);
label_56:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.28f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (sp[1].f + temp0));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[5].i;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_lastConfig;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	((func_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) (jobject(nullptr));
	LINE_NUMBER(219);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_51:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_input_DesktopInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[6].i));
	}
label_30:;
	{
	LINE_NUMBER(226);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:update", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	M_mindustry_input_InputHandler_update(ctx, (frame[0].o));
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_playerList;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_listfrag;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[1].o))->F_content;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_minimapfrag;
	sp[1].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[1].o))->F_elem;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(234);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_listfrag;
	((func_mindustry_ui_fragments_PlayerListFragment_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_toggle])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(237);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_locked_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(238);
	frame[2].i = (jint(0));
	LINE_NUMBER(239);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_boost;
	jint temp1 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_input_DesktopInput *) NULL_CHECK(sp[-1].o))->F_panBoostSpeed;
label_7:;
	{
	sp -= 1;
	frame[3].f = (sp[0].f * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(240);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"detach-camera"_j))), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(242);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp1 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(243);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_debugHitboxes;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_toggle_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_toggle_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drawhitboxes"_j))));
	}
label_12:;
	{
	LINE_NUMBER(245);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_teleportCursor;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_14;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_13;
	}
label_14:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(249);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(253);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_detachCamera;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(254);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"detach-camera"_j));
	sp += 2;
	if ((frame[4].i) != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 3;
	frame[4].i = sp[2].i;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(255);
	if ((frame[4].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(256);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(258);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_18:;
	{
	LINE_NUMBER(261);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pan;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(262);
	frame[2].i = (jint(1));
	LINE_NUMBER(263);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(264);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_25:;
	{
	LINE_NUMBER(267);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (jfloat(0)), -1)) > 0) goto label_29;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (jfloat(0)), -1)) > 0) goto label_29;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_mouseMove;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(268);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(0));
	LINE_NUMBER(269);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_panning = (((jint)((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_panning) | (frame[4].i));
	LINE_NUMBER(276);
	if ((frame[1].i) != 0) goto label_32;
	}
	{
	LINE_NUMBER(277);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_34;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_34;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_35;
label_34:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(278);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_mouseMove;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(279);
	frame[2].i = (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(282);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[2].o, sp[3].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_39;
	}
label_35:;
	{
	LINE_NUMBER(283);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	if (sp[0].o == nullptr) goto label_39;
	}
label_40:;
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning) != 0) goto label_39;
	}
	{
	LINE_NUMBER(285);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_won) == 0) goto label_42;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp += 1;
	goto label_43;
	}
label_42:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp++;
label_43:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) == 0) goto label_45;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_45;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_lastCore;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_lastCore;
	sp += 1;
	goto label_46;
	}
label_45:;
	INST_ACONST_NULL();
label_46:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(287);
	if ((frame[6].o) == nullptr) goto label_48;
	}
	INST_ALOAD(6);
	goto label_49;
label_48:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	sp += 1;
	goto label_49;
	}
label_50:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
label_49:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(289);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = frame[7].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"smoothcamera"_j))));
	sp += 2;
	if (temp0 == 0) goto label_52;
	}
	(sp++)->f = jfloat(0.08f);
	goto label_53;
label_52:;
	INST_FCONST(1);
label_53:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	INST_POP();
label_39:;
	{
	LINE_NUMBER(292);
	if ((frame[2].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(293);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp1 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp2 = jfloat(temp1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((temp2 - ((jfloat(temp3)) / (jfloat(2)))) * ((jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panScale)), (jfloat(-1.0f)), (jfloat(1)));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp4 * (frame[3].f)));
	LINE_NUMBER(294);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp6 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp8 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((temp7 - ((jfloat(temp8)) / (jfloat(2)))) * ((jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panScale)), (jfloat(-1.0f)), (jfloat(1)));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp5 + (temp9 * (frame[3].f)));
	}
label_32:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_56;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_56;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_56;
	}
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ICONST(0);
label_57:;
	{
	sp -= 2;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_shouldShoot = sp[1].i;
	LINE_NUMBER(300);
	if ((frame[1].i) != 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(302);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_61;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_61;
	}
	{
	clinit_mindustry_input_Binding(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Binding_commandMode;
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_boost;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o == sp[1].o) goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(303);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"commandmodehold"_j))));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_commandMode;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode = temp0;
	goto label_64;
	}
label_62:;
	{
	LINE_NUMBER(305);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_commandMode;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_66;
	}
	INST_ICONST(1);
	goto label_67;
label_66:;
	INST_ICONST(0);
label_67:;
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode = sp[1].i;
	goto label_64;
label_59:;
	{
	LINE_NUMBER(309);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode = (jint(0));
	}
label_64:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(315);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_69;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_69;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_69;
	}
	{
	LINE_NUMBER(316);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAllUnits;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAcrossScreen;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_75;
	}
	{
	LINE_NUMBER(320);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq])(ctx, sp[1].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height));
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_7);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_71;
	}
label_75:;
	{
	LINE_NUMBER(323);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_78:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_80;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_controlSelectGlobal) == 0) goto label_80;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_80:;
	LINE_NUMBER(327);
	goto label_78;
label_71:;
	{
	LINE_NUMBER(331);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAllUnitTransport;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_82;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(334);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAcrossScreen;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_86;
	}
	{
	LINE_NUMBER(335);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_8);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_82;
	}
label_86:;
	{
	LINE_NUMBER(338);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_89:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_91;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Payloadc)) == 0) goto label_91;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_91:;
	LINE_NUMBER(342);
	goto label_89;
label_82:;
	{
	LINE_NUMBER(346);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAllUnitFactories;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_93;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_97:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_98;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(350);
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_100;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_100:;
	LINE_NUMBER(353);
	goto label_97;
label_98:;
	{
	LINE_NUMBER(354);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_selectAcrossScreen;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_93;
	}
	{
	LINE_NUMBER(355);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_93:;
	{
	LINE_NUMBER(360);
	frame[5].i = (jint(0));
	}
label_104:;
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_input_DesktopInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_controlGroupBindings;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_69;
	}
	{
	LINE_NUMBER(361);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_DesktopInput(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_controlGroupBindings;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))));
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlGroups;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) != nullptr) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlGroups;
	jint temp0 = frame[5].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_108:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlGroups;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(367);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_createControlGroup;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(371);
	if ((frame[7].i) == 0) goto label_111;
	}
	{
	LINE_NUMBER(372);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[6].o));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(375);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"distinctcontrolgroups"_j))), (jint(1)));
	if (temp0 == 0) goto label_115;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlGroups;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_117:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_115;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(377);
	if ((frame[12].o) == nullptr) goto label_119;
	}
	{
	LINE_NUMBER(378);
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean])(ctx, (frame[12].o), (frame[8].o));
	}
label_119:;
	{
	LINE_NUMBER(376);
	INST_IINC(11, 1);
	goto label_117;
	}
label_115:;
	{
	LINE_NUMBER(382);
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, (frame[6].o), (frame[8].o));
	}
label_111:;
	{
	LINE_NUMBER(386);
	frame[8].i = (jint(0));
	}
label_121:;
	{
	if ((frame[8].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_122;
	}
	{
	LINE_NUMBER(387);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[6].o), (frame[8].i));
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, temp0);
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(388);
	if ((frame[9].o) == nullptr) goto label_125;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_125;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_126;
	}
label_125:;
	{
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, (frame[6].o), (frame[8].i));
	LINE_NUMBER(390);
	INST_IINC(8, -1);
	}
label_126:;
	{
	LINE_NUMBER(386);
	INST_IINC(8, 1);
	goto label_121;
	}
label_122:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_arc_struct_IntSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntSeq_isEmpty_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_106;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_106;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(399);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(407);
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastCtrlGroup) != (frame[5].i)) goto label_132;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastCtrlGroupSelectMillis));
	if ((longCompare(temp0, (jlong(400ll)))) >= 0) goto label_132;
	}
	{
	LINE_NUMBER(408);
	frame[8].f = (jfloat(0));
	frame[9].f = (jfloat(0));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_136:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_137;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(410);
	frame[8].f = ((frame[8].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_x));
	LINE_NUMBER(411);
	frame[9].f = ((frame[9].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_y));
	LINE_NUMBER(412);
	goto label_136;
	}
label_137:;
	{
	LINE_NUMBER(413);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(414);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = frame[8].f;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jfloat temp1 = temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	jfloat temp2 = frame[9].f;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)))));
	}
label_132:;
	{
	LINE_NUMBER(416);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastCtrlGroup = (frame[5].i);
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_lastCtrlGroupSelectMillis = temp0;
	}
label_106:;
	{
	LINE_NUMBER(360);
	INST_IINC(5, 1);
	goto label_104;
	}
label_69:;
	{
	LINE_NUMBER(423);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_143;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_143;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) == 0) goto label_143;
	}
	{
	LINE_NUMBER(424);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_control;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_143;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_143;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_selectedUnit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_selectedUnit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_selectedControlBuild_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_selectedControlBuild_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(427);
	if ((frame[5].o) == nullptr) goto label_148;
	}
	{
	LINE_NUMBER(428);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(429);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_shouldShoot = (jint(0));
	LINE_NUMBER(430);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	goto label_143;
	}
label_148:;
	{
	LINE_NUMBER(431);
	if ((frame[6].o) == nullptr) goto label_143;
	}
	{
	LINE_NUMBER(432);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(433);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	}
label_143:;
	{
	LINE_NUMBER(438);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_154;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_154;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_154;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_154;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	((func_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_respawn;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_154;
	}
	{
	LINE_NUMBER(442);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType = (jref) (jobject(nullptr));
	LINE_NUMBER(443);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	LINE_NUMBER(444);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(0));
	LINE_NUMBER(445);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_unitClear_mindustry_gen_Player(ctx, sp[0].o);
	}
label_154:;
	{
	LINE_NUMBER(449);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_161;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_161;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_161;
	}
	{
	LINE_NUMBER(450);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_minimap;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_163;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	((func_mindustry_ui_fragments_MinimapFragment_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_toggle])(ctx, sp[0].o);
	}
label_163:;
	{
	LINE_NUMBER(451);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_planetMap;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_164;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_164;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	((func_mindustry_ui_dialogs_PlanetDialog_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_toggle])(ctx, sp[0].o);
	}
label_164:;
	{
	LINE_NUMBER(452);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_research;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_165;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_165;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_research;
	((func_mindustry_ui_dialogs_ResearchDialog_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_toggle])(ctx, sp[0].o);
	}
label_165:;
	{
	LINE_NUMBER(453);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicMenu;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_166;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	((func_mindustry_ui_dialogs_SchematicsDialog_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_toggle])(ctx, sp[0].o);
	}
label_166:;
	{
	LINE_NUMBER(455);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_toggleBlockStatus;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_167;
	}
	{
	LINE_NUMBER(456);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blockstatus"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"blockstatus"_j))));
	sp += 2;
	if (temp0 != 0) goto label_169;
	}
	INST_ICONST(1);
	goto label_170;
label_169:;
	INST_ICONST(0);
label_170:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	POP_N(3); // Pop method args
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
label_167:;
	{
	LINE_NUMBER(459);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_togglePowerLines;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_161;
	}
	{
	LINE_NUMBER(460);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lasersopacity"_j))));
	if (temp0 != 0) goto label_172;
	}
	{
	LINE_NUMBER(461);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lasersopacity"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"preferredlaseropacity"_j))), (100));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_161;
	}
label_172:;
	{
	LINE_NUMBER(463);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"preferredlaseropacity"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"lasersopacity"_j))));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(464);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lasersopacity"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_161:;
	{
	LINE_NUMBER(469);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_175;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_176;
	}
label_175:;
	{
	LINE_NUMBER(470);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_177;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_177:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_178;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_breakBlock;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_178;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_178:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_179;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_179;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_179:;
	LINE_NUMBER(474);
	popStackFrame(ctx);
	INST_RETURN();
label_176:;
	{
	LINE_NUMBER(478);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasScroll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasScroll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_180;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_181;
	}
label_180:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_181;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_181;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_zoom;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (jfloat(0)), -1)) <= 0) goto label_181;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotatePlaced;
	LINE_NUMBER(479);
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_181;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_183;
	}
	{
	clinit_mindustry_input_Binding(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Binding_zoom;
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotate;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_183;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_185;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_185;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) != 0) goto label_181;
	}
label_185:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_181;
	}
label_183:;
	{
	LINE_NUMBER(481);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_zoom;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_core_Renderer_scaleCamera_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_scaleCamera_float])(ctx, sp[0].o, temp0);
	}
label_181:;
	{
	LINE_NUMBER(484);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_186;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_186;
	}
	{
	LINE_NUMBER(485);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[5].o = sp[0].o;
	LINE_NUMBER(486);
	if ((frame[5].o) == nullptr) goto label_186;
	}
	{
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_tileTap_mindustry_gen_Player_mindustry_world_Tile(ctx, sp[0].o, (frame[5].o));
	}
label_186:;
	{
	LINE_NUMBER(491);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_ping;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_190;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_190;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_190;
	}
	{
	LINE_NUMBER(492);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_192;
	}
	{
	LINE_NUMBER(493);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@ping.text"_j));
	jint temp0 = 40;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_11);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	goto label_190;
	}
label_192:;
	{
	LINE_NUMBER(495);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, temp0, temp1, (jobject(nullptr)));
	}
label_190:;
	{
	LINE_NUMBER(499);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_194;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect) == 0) goto label_194;
	}
	{
	LINE_NUMBER(500);
	((func_mindustry_input_DesktopInput_selectUnitsRect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_selectUnitsRect])(ctx, (frame[0].o));
	}
label_194:;
	{
	LINE_NUMBER(503);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_196;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_197;
label_196:;
	{
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	LINE_NUMBER(505);
	if ((frame[1].i) != 0) goto label_199;
	}
	{
	LINE_NUMBER(506);
	((func_mindustry_input_DesktopInput_pollInputNoPlayer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_pollInputNoPlayer])(ctx, (frame[0].o));
	goto label_199;
	}
label_197:;
	{
	LINE_NUMBER(509);
	((func_mindustry_input_DesktopInput_pollInputPlayer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_pollInputPlayer])(ctx, (frame[0].o));
	}
label_199:;
	{
	LINE_NUMBER(512);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_201;
	}
	{
	LINE_NUMBER(513);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_201:;
	{
	LINE_NUMBER(516);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_203;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_MinimapFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_203;
	}
	{
	LINE_NUMBER(517);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_cursorType;
	((func_arc_Graphics_cursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_cursorType;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[2].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	sp += 1;
	if (sp[0].o == sp[1].o) goto label_206;
	}
	INST_ICONST(1);
	goto label_207;
label_206:;
	INST_ICONST(0);
label_207:;
	sp -= 2;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_changedCursor = sp[1].i;
	goto label_208;
label_203:;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	LINE_NUMBER(521);
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_changedCursor) == 0) goto label_208;
	}
	{
	LINE_NUMBER(522);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((func_arc_Graphics_cursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(523);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_changedCursor = (jint(0));
	}
label_208:;
	LINE_NUMBER(526);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:useSchematic", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(530);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_input_DesktopInput_getMouseX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getMouseX_R_float])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileX_float_R_int])(ctx, sp[1].o, temp0);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicX = temp1;
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_input_DesktopInput_getMouseY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getMouseY_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_mindustry_input_DesktopInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileY_float_R_int])(ctx, sp[1].o, temp2);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicY = temp3;
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((func_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq])(ctx, sp[1].o, (frame[1].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schematicX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schematicY), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_isBreaking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:isBreaking", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:buildPlacementUI", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_paste;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_java_lang_Runnable_5);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematics"_j));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_book;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_java_lang_Runnable_6);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@database"_j));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(556);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_tree;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_java_lang_Runnable_7);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolp_5);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@research"_j))));
	LINE_NUMBER(560);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_map;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_java_lang_Runnable_8);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolp_6(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolp_6 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolp_6);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@planetmap"_j))));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_pollInputNoPlayer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:pollInputNoPlayer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(566);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(567);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_tappedOne = (jint(0));
	LINE_NUMBER(569);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(571);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_5;
	}
	{
	LINE_NUMBER(572);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(1));
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectX = temp0;
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectY = temp1;
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(575);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(579);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_pollInputPlayer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:pollInputPlayer", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(586);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp3 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jint temp4 = (jint)((func_mindustry_input_DesktopInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileX_float_R_int])(ctx, sp[0].o, (jfloat(temp3)));
	frame[2].i = temp4;
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp5 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp6 = (jint)((func_mindustry_input_DesktopInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileY_float_R_int])(ctx, sp[0].o, (jfloat(temp5)));
	frame[3].i = temp6;
	LINE_NUMBER(588);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp7 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	frame[4].i = temp7;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp8 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	frame[5].i = temp8;
	LINE_NUMBER(591);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp9 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildautopause"_j))));
	if (temp9 == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(592);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding = (jint(0));
	LINE_NUMBER(593);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_buildWasAutoPaused = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(597);
	frame[6].i = ((frame[4].i) - ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schematicX));
	frame[7].i = ((frame[5].i) - ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schematicY));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_12);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (frame[6].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicX = (((jint)((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicX) + (frame[6].i));
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicY = (((jint)((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_schematicY) + (frame[7].i));
	}
label_10:;
	{
	LINE_NUMBER(608);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_deselect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_16;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_MinimapFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_16;
	}
	{
	LINE_NUMBER(609);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(612);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_clearBuilding;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(613);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(616);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rebuildSelect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_21;
	}
label_20:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(617);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (frame[4].i);
	LINE_NUMBER(618);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (frame[5].i);
	}
label_21:;
	{
	LINE_NUMBER(621);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_clearBuilding;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(622);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(626);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX) != (jint(-1))) goto label_27;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY) != (jint(-1))) goto label_27;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX) == (jint(-1))) goto label_27;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY) == (jint(-1))) goto label_27;
	}
	{
	LINE_NUMBER(627);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((func_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic])(ctx, sp[1].o, ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY), (frame[4].i), (frame[5].i));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_lastSchematic = (jref) sp[1].o;
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	((func_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(630);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(631);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	}
label_33:;
	{
	LINE_NUMBER(633);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rebuildSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_27;
	}
	{
	LINE_NUMBER(634);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (jint(-1));
	LINE_NUMBER(635);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (jint(-1));
	goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(637);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rebuildSelect;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(639);
	((func_mindustry_input_DesktopInput_rebuildArea_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_rebuildArea_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY), (frame[4].i), (frame[5].i));
	LINE_NUMBER(640);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_27;
	}
	{
	LINE_NUMBER(641);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (jint(-1));
	LINE_NUMBER(642);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (jint(-1));
	}
label_27:;
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_41;
	}
	{
	LINE_NUMBER(648);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicFlipX;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(649);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_43:;
	{
	LINE_NUMBER(652);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicFlipY;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_41:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(658);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_buildPlanMouseOffsetX)) / (jfloat(8.0f))));
	frame[6].i = temp0;
	LINE_NUMBER(659);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_buildPlanMouseOffsetY)) / (jfloat(8.0f))));
	frame[7].i = temp1;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x) != (frame[6].i)) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y) == (frame[7].i)) goto label_46;
	}
label_50:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = (frame[6].i);
	LINE_NUMBER(662);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = (frame[7].i);
	LINE_NUMBER(663);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movedPlan = (jint(1));
	}
label_46:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o == sp[1].o) goto label_54;
	}
label_53:;
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_54:;
	{
	LINE_NUMBER(671);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pauseBuilding;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(672);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) != 0) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	{
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_isBuilding = sp[1].i;
	LINE_NUMBER(673);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_buildWasAutoPaused = (jint(0));
	LINE_NUMBER(675);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) == 0) goto label_55;
	}
	{
	LINE_NUMBER(676);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_55:;
	{
	LINE_NUMBER(680);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_62;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_62;
	}
	{
	if ((frame[2].i) != ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineX)) goto label_63;
	}
	{
	if ((frame[3].i) != ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineY)) goto label_63;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_63;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(681);
	((func_mindustry_input_DesktopInput_updateLine_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_updateLine_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY));
	LINE_NUMBER(682);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineX = (frame[2].i);
	LINE_NUMBER(683);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineY = (frame[3].i);
	}
label_62:;
	{
	LINE_NUMBER(686);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_66;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_66;
	}
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(689);
	if ((frame[6].o) == nullptr) goto label_66;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movedPlan) != 0) goto label_66;
	}
	{
	LINE_NUMBER(691);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[6].o), (jint(1)));
	frame[7].i = temp0;
	LINE_NUMBER(692);
	if ((frame[7].i) == (jint(-1))) goto label_66;
	}
	{
	LINE_NUMBER(693);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(694);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_66:;
	{
	LINE_NUMBER(699);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_73;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_73;
	}
	{
	LINE_NUMBER(700);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_tappedOne = (jint(0));
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(703);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_breakBlock;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_77;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	goto label_79;
	}
label_77:;
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_80;
	}
	{
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(707);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movedPlan = (jint(1));
	goto label_79;
	}
label_80:;
	{
	LINE_NUMBER(708);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_83;
	}
	{
	LINE_NUMBER(709);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX = (frame[2].i);
	LINE_NUMBER(710);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY = (frame[3].i);
	LINE_NUMBER(711);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineX = (frame[2].i);
	LINE_NUMBER(712);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastLineY = (frame[3].i);
	LINE_NUMBER(713);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(714);
	((func_mindustry_input_DesktopInput_updateLine_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_updateLine_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY));
	goto label_79;
	}
label_83:;
	{
	LINE_NUMBER(715);
	if ((frame[6].o) == nullptr) goto label_90;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_breaking) != 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_90;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_initialized) != 0) goto label_90;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_progress), (jfloat(0)), 1)) > 0) goto label_90;
	}
	{
	LINE_NUMBER(716);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan = (jref) (frame[6].o);
	LINE_NUMBER(717);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movedPlan = (jint(0));
	LINE_NUMBER(718);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_x) * (8)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_buildPlanMouseOffsetX = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(719);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jfloat temp1 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_y) * (8)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_buildPlanMouseOffsetY = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	goto label_79;
	}
label_90:;
	{
	LINE_NUMBER(720);
	if ((frame[6].o) == nullptr) goto label_95;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_breaking) == 0) goto label_95;
	}
	{
	LINE_NUMBER(721);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting = (jint(1));
	goto label_79;
	}
label_95:;
	{
	LINE_NUMBER(722);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_97;
	}
	{
	LINE_NUMBER(723);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(1));
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectX = temp0;
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectY = temp1;
	goto label_79;
	}
label_97:;
	{
	LINE_NUMBER(726);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_checkConfigTap_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_checkConfigTap_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_101;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_101;
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_tryRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_101;
	}
	{
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_tryTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tryTapPlayer_float_float_R_boolean])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	if (temp1 != 0) goto label_79;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_79;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_79;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem) != 0) goto label_79;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(729);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_tryStopMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tryStopMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_79;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"doubletapmine"_j))));
	if (temp0 == 0) goto label_104;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_prevSelected;
	if (sp[0].o != sp[1].o) goto label_105;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectMillis));
	if ((longCompare(temp0, (jlong(500ll)))) >= 0) goto label_105;
	}
label_104:;
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_tryBeginMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryBeginMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_79;
	}
label_105:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_79;
	}
	{
	LINE_NUMBER(730);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_shouldShoot);
	goto label_79;
	}
label_101:;
	{
	LINE_NUMBER(732);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_79;
	}
	{
	LINE_NUMBER(733);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_shouldShoot);
	}
label_79:;
	{
	LINE_NUMBER(735);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_selectMillis = temp0;
	LINE_NUMBER(736);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_prevSelected = (jref) (frame[1].o);
	LINE_NUMBER(737);
	goto label_110;
	}
label_73:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_deselect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_111;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_111;
	}
	{
	LINE_NUMBER(738);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(739);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	goto label_110;
	}
label_111:;
	{
	LINE_NUMBER(740);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_deselect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_114;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_114;
	}
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(742);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	goto label_110;
	}
label_114:;
	{
	LINE_NUMBER(743);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_breakBlock;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_110;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_110;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_110;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_110;
	}
	{
	LINE_NUMBER(745);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting = (jint(0));
	LINE_NUMBER(746);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileX_float_R_int])(ctx, sp[1].o, (jfloat(temp0)));
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_selectX = temp1;
	LINE_NUMBER(748);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[2].o);
	jint temp3 = (jint)((func_mindustry_input_DesktopInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileY_float_R_int])(ctx, sp[1].o, (jfloat(temp2)));
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_selectY = temp3;
	LINE_NUMBER(749);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (frame[4].i);
	LINE_NUMBER(750);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (frame[5].i);
	}
label_110:;
	{
	LINE_NUMBER(753);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_123;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_123;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_123;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting) == 0) goto label_123;
	}
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(755);
	if ((frame[6].o) == nullptr) goto label_126;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[6].o)))->F_breaking) == 0) goto label_126;
	}
	{
	LINE_NUMBER(756);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	}
label_126:;
	LINE_NUMBER(758);
	goto label_128;
label_123:;
	{
	LINE_NUMBER(759);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_deleting = (jint(0));
	}
label_128:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_129;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_129;
	}
	{
	LINE_NUMBER(763);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overrideLineRotation) != 0) goto label_131;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_131;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX) != (frame[2].i)) goto label_132;
	}
	{
	if (((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY) == (frame[3].i)) goto label_131;
	}
label_132:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	if ((jint(temp0)) == 0) goto label_131;
	}
	{
	LINE_NUMBER(764);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (jfloat(((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX))), (jfloat(((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY))), (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_rotation = ((jint(((temp0 + (jfloat(45.0f))) / (jfloat(90.0f))))) % (jint(4)));
	LINE_NUMBER(765);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overrideLineRotation = (jint(1));
	goto label_131;
	}
label_129:;
	{
	LINE_NUMBER(768);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overrideLineRotation = (jint(0));
	}
label_131:;
	{
	LINE_NUMBER(771);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_breakBlock;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_135;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_135;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((func_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic])(ctx, sp[1].o, ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY), (frame[4].i), (frame[5].i));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_lastSchematic = (jref) sp[1].o;
	LINE_NUMBER(773);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemX = (jint(-1));
	LINE_NUMBER(774);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_schemY = (jint(-1));
	}
label_135:;
	{
	LINE_NUMBER(777);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_breakBlock;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_139;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_140;
	}
label_139:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_141;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_141;
	}
	{
	LINE_NUMBER(780);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_boost;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_143;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	((func_mindustry_input_DesktopInput_flushPlansReverse_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_flushPlansReverse_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_145;
	}
label_143:;
	{
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	((func_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_145:;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(787);
	clinit_mindustry_game_EventType$LineConfirmEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$LineConfirmEvent);
	init_mindustry_game_EventType$LineConfirmEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_147;
	}
label_141:;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_147;
	}
	{
	LINE_NUMBER(789);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX;
	jint temp1 = (jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY;
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp4 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (temp4 != 0) goto label_149;
	}
	INST_BIPUSH(100);
	goto label_150;
label_149:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_maxSchematicSize;
label_150:;
	{
	sp -= 6;
	((func_mindustry_input_DesktopInput_removeSelection_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_removeSelection_int_int_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
	LINE_NUMBER(790);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o == nullptr) goto label_147;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	((func_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(792);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	}
label_147:;
	{
	LINE_NUMBER(795);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX = (jint(-1));
	LINE_NUMBER(796);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY = (jint(-1));
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_156;
	}
	INST_ACONST_NULL();
	goto label_157;
label_156:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_world_Tile *) NULL_CHECK(sp[-1].o))->F_build;
label_157:;
	{
	sp -= 2;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	sp[2].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[2].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	sp[2].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[2].o);
	((func_mindustry_input_DesktopInput_tryDropItems_mindustry_gen_Building_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tryDropItems_mindustry_gen_Building_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	LINE_NUMBER(800);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (sp[0].o == nullptr) goto label_159;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	jint temp2 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	if (sp[0].o == nullptr) goto label_161;
	}
	{
	LINE_NUMBER(802);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_161:;
	{
	LINE_NUMBER(805);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_163;
	}
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inv;
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(807);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	LINE_NUMBER(808);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_planConfig;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	((func_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	goto label_167;
	}
label_163:;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_planConfig;
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, sp[0].o);
	}
label_167:;
	{
	LINE_NUMBER(813);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan = (jref) (jobject(nullptr));
	}
label_159:;
	{
	LINE_NUMBER(816);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_140:;
	{
	LINE_NUMBER(821);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_168;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_168;
	}
	{
	LINE_NUMBER(822);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_168:;
	{
	LINE_NUMBER(825);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_170;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_canShoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_canShoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_170;
	}
	{
	LINE_NUMBER(826);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_170:;
	{
	LINE_NUMBER(829);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_172;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_172;
	}
	{
	LINE_NUMBER(830);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	LINE_NUMBER(831);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectScale), (jfloat(1)), (jfloat(0.2f)));
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_selectScale = temp0;
	goto label_175;
	}
label_172:;
	{
	LINE_NUMBER(833);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectScale = (jfloat(0));
	}
label_175:;
	{
	LINE_NUMBER(836);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_176;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (jint(temp0)));
	if (temp1 <= 0) goto label_176;
	}
	{
	LINE_NUMBER(837);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp1 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (temp0 + (jint(temp1))), (jint(4)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(839);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	if (sp[0].o == nullptr) goto label_179;
	}
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_rotation;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp1 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (temp0 + (jint(temp1))), (jint(4)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	}
label_179:;
	{
	LINE_NUMBER(843);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_181;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_181;
	}
	{
	LINE_NUMBER(844);
	((func_mindustry_input_DesktopInput_updateLine_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_updateLine_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectX), ((jint)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_selectY));
	goto label_176;
	}
label_181:;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_176;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_176;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[2].o, sp[3].o);
	jint temp1 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, temp0);
	((func_mindustry_input_DesktopInput_rotatePlans_arc_struct_Seq_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_rotatePlans_arc_struct_Seq_int])(ctx, sp[0].o, sp[1].o, temp1);
	}
label_176:;
	{
	LINE_NUMBER(850);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(852);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	LINE_NUMBER(854);
	if ((frame[6].o) == nullptr) goto label_186;
	}
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_188;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_188;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor])(ctx, sp[1].o);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_188:;
	{
	LINE_NUMBER(859);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_canRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_canRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_190;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_190;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_190;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_repairCursor;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_190:;
	{
	LINE_NUMBER(863);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_192;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_193;
	}
label_192:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_194;
	}
label_193:;
	{
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_194:;
	{
	LINE_NUMBER(867);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_195;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_canMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_canMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_195;
	}
	{
	LINE_NUMBER(868);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_drillCursor;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_195:;
	{
	LINE_NUMBER(871);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_197;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_197;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_199;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_199;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_199;
	}
	INST_ICONST(1);
	goto label_200;
label_199:;
	INST_ICONST(0);
label_200:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(874);
	if ((frame[7].i) != 0) goto label_202;
	}
	{
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, temp0, temp1);
	frame[8].o = sp[0].o;
	LINE_NUMBER(876);
	if ((frame[8].o) == nullptr) goto label_202;
	}
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	}
label_202:;
	{
	LINE_NUMBER(881);
	if ((frame[7].i) == 0) goto label_206;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_targetCursor;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_206:;
	{
	LINE_NUMBER(885);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_commandQueue;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_197;
	}
	{
	clinit_mindustry_input_Binding(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Binding_commandQueue;
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK(sp[0].o))->F_type;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	if (sp[0].o == sp[1].o) goto label_197;
	}
	{
	LINE_NUMBER(886);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	((func_mindustry_input_DesktopInput_commandTap_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_commandTap_float_float_boolean])(ctx, sp[0].o, temp1, (jfloat(temp2)), (jint(1)));
	}
label_197:;
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if (sp[0].o == nullptr) goto label_209;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_209;
	}
	{
	LINE_NUMBER(891);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_209:;
	{
	LINE_NUMBER(894);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_canTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_DesktopInput_canTapPlayer_float_float_R_boolean])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	if (temp1 == 0) goto label_211;
	}
	{
	LINE_NUMBER(895);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_unloadCursor;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_cursorType = (jref) sp[1].o;
	}
label_211:;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_186;
	}
	{
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_186;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_186;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (jfloat(0)), -1)) <= 0) goto label_186;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotatePlaced;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_186;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_186;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_quickRotate) == 0) goto label_186;
	}
	{
	LINE_NUMBER(899);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_rotate;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[2].o, sp[3].o);
	sp += 2;
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_214;
	}
	INST_ICONST(1);
	goto label_215;
label_214:;
	INST_ICONST(0);
label_215:;
	POP_N(3); // Pop method args
	SM_mindustry_gen_Call_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(ctx, sp[0].o, sp[1].o, sp[2].i);
label_186:;
	LINE_NUMBER(902);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:tap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(906);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(908);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_tappedOne = (jint(1));
	LINE_NUMBER(911);
	sp[0].o = frame[4].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(912);
	if ((frame[3].i) < (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(913);
	((func_mindustry_input_DesktopInput_selectTypedUnits) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_selectTypedUnits])(ctx, (frame[0].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(915);
	((func_mindustry_input_DesktopInput_tapCommandUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tapCommandUnit])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(920);
	jint temp0 = (jint)M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:touchDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(925);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(927);
	sp[0].o = frame[4].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(928);
	((func_mindustry_input_DesktopInput_commandTap_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_commandTap_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	}
label_3:;
	{
	LINE_NUMBER(931);
	sp[0].o = frame[4].o;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_commandQueue;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(932);
	((func_mindustry_input_DesktopInput_commandTap_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_commandTap_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(935);
	jint temp0 = (jint)M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_selectedBlock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:selectedBlock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(940);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o == sp[1].o) goto label_1;
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

jfloat M_mindustry_input_DesktopInput_getMouseX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:getMouseX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_input_DesktopInput_getMouseY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:getMouseY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(950);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_updateState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:updateState", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(955);
	M_mindustry_input_InputHandler_updateState(ctx, (frame[0].o));
	LINE_NUMBER(957);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(958);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	LINE_NUMBER(959);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(0));
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(961);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(962);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_splan = (jref) (jobject(nullptr));
	LINE_NUMBER(963);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(965);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:panCamera", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(969);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(970);
	((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_panning = (jint(1));
	LINE_NUMBER(971);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(973);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:updateMovement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(976);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	frame[2].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement);
	LINE_NUMBER(978);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(979);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp1;
	LINE_NUMBER(980);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp2 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp2;
	LINE_NUMBER(981);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Mechc)) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(983);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"detach-camera"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(984);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[7].o = sp[0].o;
	LINE_NUMBER(986);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(988);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[7].o), (jfloat(15.0f)));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(990);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec2_ZERO;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, ((temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel)) / (jfloat(2))));
	}
label_12:;
	LINE_NUMBER(992);
	goto label_15;
label_8:;
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(994);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_mouseMove;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movement;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat(0.04f)) * (frame[3].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	}
label_15:;
	{
	LINE_NUMBER(999);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_mouseAngle_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	frame[7].f = temp0;
	LINE_NUMBER(1000);
	if ((frame[2].i) == 0) goto label_19;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_faceTarget) == 0) goto label_19;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_19;
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1002);
	if ((frame[8].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1003);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, (frame[1].o), (frame[7].f));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(1005);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, (frame[1].o));
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_24:;
	{
	LINE_NUMBER(1008);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_movement;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1010);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_aim_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float_boolean])(ctx, sp[0].o, temp0, temp1, (jint(1)));
	LINE_NUMBER(1011);
	sp[0].o = frame[1].o;
	jint temp2 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jobject temp3 = sp[1].o;
	sp[1].i = temp2;
	sp += 2;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(temp3))->F_shooting) == 0) goto label_27;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_27;
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 3;
	((func_mindustry_gen_Unit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1013);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_boost;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = temp0;
	LINE_NUMBER(1014);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_aimX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_aimX_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = temp1;
	LINE_NUMBER(1015);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_aimY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_aimY_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = temp2;
	LINE_NUMBER(1018);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_33;
	}
	{
	LINE_NUMBER(1019);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pickupCargo;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(1020);
	((func_mindustry_input_DesktopInput_tryPickupPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryPickupPayload])(ctx, (frame[0].o));
	LINE_NUMBER(1021);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_lastPayloadKeyTapMillis = temp0;
	}
label_35:;
	{
	LINE_NUMBER(1024);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pickupCargo;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	{
	jlong temp0 = (jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastPayloadKeyHoldMillis;
	LINE_NUMBER(1025);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, temp0);
	if ((longCompare(temp1, (jlong(20ll)))) <= 0) goto label_38;
	}
	{
	jlong temp0 = (jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastPayloadKeyTapMillis;
	LINE_NUMBER(1026);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, temp0);
	if ((longCompare(temp1, (jlong(200ll)))) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(1027);
	((func_mindustry_input_DesktopInput_tryPickupPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryPickupPayload])(ctx, (frame[0].o));
	LINE_NUMBER(1028);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_lastPayloadKeyHoldMillis = temp0;
	}
label_38:;
	{
	LINE_NUMBER(1031);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_dropCargo;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(1032);
	((func_mindustry_input_DesktopInput_tryDropPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryDropPayload])(ctx, (frame[0].o));
	LINE_NUMBER(1033);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_lastPayloadKeyTapMillis = temp0;
	}
label_43:;
	{
	LINE_NUMBER(1036);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_dropCargo;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_33;
	}
	{
	jlong temp0 = (jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastPayloadKeyHoldMillis;
	LINE_NUMBER(1037);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, temp0);
	if ((longCompare(temp1, (jlong(20ll)))) <= 0) goto label_33;
	}
	{
	jlong temp0 = (jlong)((mindustry_input_DesktopInput *) NULL_CHECK((frame[0].o)))->F_lastPayloadKeyTapMillis;
	LINE_NUMBER(1038);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, temp0);
	if ((longCompare(temp1, (jlong(200ll)))) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(1039);
	((func_mindustry_input_DesktopInput_tryDropPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_tryDropPayload])(ctx, (frame[0].o));
	LINE_NUMBER(1040);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_input_DesktopInput *) NULL_CHECK(sp[0].o))->F_lastPayloadKeyHoldMillis = temp0;
	}
label_33:;
	LINE_NUMBER(1043);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$1_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$pollInputPlayer$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(877);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$0_int_int_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$pollInputPlayer$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(600);
	sp[0].o = frame[2].o;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x) + (frame[0].i));
	LINE_NUMBER(601);
	sp[0].o = frame[2].o;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y) + (frame[1].i));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$5_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(562);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$4(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(561);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$3_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(558);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(557);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_research;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$1(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(553);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_database;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$0(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildPlacementUI$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_DesktopInput_lambda$update$6_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(493);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_lambda$update$5_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(400);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(401);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Unit, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_input_DesktopInput_lambda$update$4_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$update$3_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(356);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp0 - (temp1 / (jfloat(2)));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp5 = temp3 - (temp4 / (jfloat(2)));
	jfloat temp6 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp7 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[0].o));
	jint temp8 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, temp5, temp6, temp7);
	popStackFrame(ctx);
	return temp8;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$update$2_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_gen_Payloadc));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_DesktopInput_lambda$update$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_controlSelectGlobal) != 0) goto label_1;
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

jbool SM_mindustry_input_DesktopInput_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_mindustry_gen_Unit_allowCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_allowCommand_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
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

void M_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolp_7(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolp_7 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolp_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(6.0f);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolp_8(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolp_8 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolp_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_save;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)), (jfloat(50.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_file;
	if (sp[0].o == nullptr) goto label_2;
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

jbool SM_mindustry_input_DesktopInput_lambda$buildUI$8_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hints"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_DesktopInput_lambda$buildUI$7_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DesktopInput(ctx);
	{
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"schematic.flip"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_schematicFlipX;
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[3].o))->F_value;
	sp[3].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[3].o))->F_key;
	LINE_NUMBER(113);
	sp[3].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_schematicFlipY;
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[3].o))->F_value;
	sp[3].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[3].o))->F_key;
	LINE_NUMBER(114);
	sp[3].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Boolp_9(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Boolp_9 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Boolp_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_DesktopInput_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_input_DesktopInput_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_input_DesktopInput_invoke_arc_func_Prov_3);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_mindustry_input_DesktopInput_showHint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_showHint_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(90);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(91);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) != 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildautopause"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"enablebuilding"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_pauseBuilding;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp += 2;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"pausebuilding"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"resumebuilding"_j));
label_8:;
	{
	sp -= 3;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_pauseBuilding;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"cancelbuilding"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_clearBuilding;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"selectschematic"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_spawnedByCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_spawnedByCore_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"respawn"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[4].o = (jobject)SF_mindustry_input_Binding_respawn;
	sp[4].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[4].o))->F_value;
	sp[4].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[4].o))->F_key;
	sp[4].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DesktopInput:lambda$buildUI$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jint temp1 = (jint)((func_mindustry_input_DesktopInput_showHint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_DesktopInput_showHint_R_boolean])(ctx, (frame[0].o));
	jint temp2 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, temp1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp0, (jfloat(temp2)), (jfloat(0.15f)));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp3;
	if ((floatCompare(temp3, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_input_DesktopInput;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field splan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_input_DesktopInput[] {
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
	(void *) M_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyTyped_char_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_scrolled_float_float_R_boolean,
	(void *) M_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinchStop,
	(void *) M_mindustry_input_InputHandler_initQuadtrees,
	(void *) M_mindustry_input_InputHandler_createPlanLists,
	(void *) M_mindustry_input_InputHandler_updateSelectQuadtree,
	(void *) M_mindustry_input_InputHandler_addLock_arc_func_Boolp,
	(void *) M_mindustry_input_InputHandler_locked_R_boolean,
	(void *) M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable,
	(void *) M_mindustry_input_InputHandler_isUsingSchematic_R_boolean,
	(void *) M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit,
	(void *) M_mindustry_input_DesktopInput_reset,
	(void *) M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq,
	(void *) M_mindustry_input_DesktopInput_update,
	(void *) M_mindustry_input_InputHandler_checkUnit,
	(void *) M_mindustry_input_InputHandler_tryPickupPayload,
	(void *) M_mindustry_input_InputHandler_tryDropPayload,
	(void *) M_mindustry_input_DesktopInput_getMouseX_R_float,
	(void *) M_mindustry_input_DesktopInput_getMouseY_R_float,
	(void *) M_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_buildUI_arc_scene_Group,
	(void *) M_mindustry_input_DesktopInput_updateState,
	(void *) M_mindustry_input_InputHandler_multiUnitSelect_R_boolean,
	(void *) M_mindustry_input_InputHandler_selectUnitsRect,
	(void *) M_mindustry_input_InputHandler_selectTypedUnits,
	(void *) M_mindustry_input_InputHandler_tapCommandUnit,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float_boolean,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_drawCommanded,
	(void *) M_mindustry_input_InputHandler_drawCommandedTargets,
	(void *) M_mindustry_input_InputHandler_drawCommanded_boolean,
	(void *) M_mindustry_input_InputHandler_drawUnitSelection,
	(void *) M_mindustry_input_InputHandler_drawOtherBuildPlans,
	(void *) M_mindustry_input_InputHandler_drawBuildPlans,
	(void *) M_mindustry_input_DesktopInput_drawBottom,
	(void *) M_mindustry_input_DesktopInput_drawTop,
	(void *) M_mindustry_input_InputHandler_drawOverSelect,
	(void *) M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color,
	(void *) M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_drawBreaking_int_int,
	(void *) M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic,
	(void *) M_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean,
	(void *) M_mindustry_input_InputHandler_showSchematicSave,
	(void *) M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int,
	(void *) M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean,
	(void *) M_mindustry_input_InputHandler_schemOriginX_R_int,
	(void *) M_mindustry_input_InputHandler_schemOriginY_R_int,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean,
	(void *) M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int,
	(void *) M_mindustry_input_InputHandler_checkConfigTap_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile,
	(void *) M_mindustry_input_InputHandler_rawTileX_R_int,
	(void *) M_mindustry_input_InputHandler_rawTileY_R_int,
	(void *) M_mindustry_input_InputHandler_tileX_float_R_int,
	(void *) M_mindustry_input_InputHandler_tileY_float_R_int,
	(void *) M_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2,
	(void *) M_mindustry_input_DesktopInput_selectedBlock_R_boolean,
	(void *) M_mindustry_input_InputHandler_isPlacing_R_boolean,
	(void *) M_mindustry_input_DesktopInput_isBreaking_R_boolean,
	(void *) M_mindustry_input_InputHandler_isRebuildSelecting_R_boolean,
	(void *) M_mindustry_input_InputHandler_mouseAngle_float_float_R_float,
	(void *) M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_remove,
	(void *) M_mindustry_input_InputHandler_add,
	(void *) M_mindustry_input_InputHandler_canShoot_R_boolean,
	(void *) M_mindustry_input_InputHandler_onConfigurable_R_boolean,
	(void *) M_mindustry_input_InputHandler_isDroppingItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_canDropItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float,
	(void *) M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_rebuildArea_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_tryBreakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean,
	(void *) M_mindustry_input_InputHandler_validBreak_int_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_breakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$2,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$1,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$0,
	(void *) M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$1_R_boolean,
	(void *) M_mindustry_input_DesktopInput_showHint_R_boolean,
	(void *) M_mindustry_input_DesktopInput_pollInputNoPlayer,
	(void *) M_mindustry_input_DesktopInput_pollInputPlayer,
	(void *) M_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit,
	(void *) M_mindustry_input_DesktopInput_lambda$update$5_int,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence,
	(void *) M_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
	{ "initQuadtrees", "()V" },
	{ "createPlanLists", "()V" },
	{ "updateSelectQuadtree", "()V" },
	{ "addLock", "(Larc/func/Boolp;)V" },
	{ "locked", "()Z" },
	{ "allPlans", "()Larc/util/Eachable;" },
	{ "isUsingSchematic", "()Z" },
	{ "spectate", "(Lmindustry/gen/Unit;)V" },
	{ "reset", "()V" },
	{ "getSyncedPlans", "(Larc/struct/Seq;)V" },
	{ "update", "()V" },
	{ "checkUnit", "()V" },
	{ "tryPickupPayload", "()V" },
	{ "tryDropPayload", "()V" },
	{ "getMouseX", "()F" },
	{ "getMouseY", "()F" },
	{ "buildPlacementUI", "(Larc/scene/ui/layout/Table;)V" },
	{ "buildUI", "(Larc/scene/Group;)V" },
	{ "updateState", "()V" },
	{ "multiUnitSelect", "()Z" },
	{ "selectUnitsRect", "()V" },
	{ "selectTypedUnits", "()V" },
	{ "tapCommandUnit", "()V" },
	{ "commandTap", "(FF)V" },
	{ "commandTap", "(FFZ)V" },
	{ "drawCommand", "(Lmindustry/gen/Unit;)V" },
	{ "drawCommand", "(Lmindustry/gen/Building;)V" },
	{ "drawCommanded", "()V" },
	{ "drawCommandedTargets", "()V" },
	{ "drawCommanded", "(Z)V" },
	{ "drawUnitSelection", "()V" },
	{ "drawOtherBuildPlans", "()V" },
	{ "drawBuildPlans", "()V" },
	{ "drawBottom", "()V" },
	{ "drawTop", "()V" },
	{ "drawOverSelect", "()V" },
	{ "drawSelected", "(IILmindustry/world/Block;Larc/graphics/Color;)V" },
	{ "drawBreaking", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverlapCheck", "(Lmindustry/world/Block;IIZ)V" },
	{ "planMatches", "(Lmindustry/entities/units/BuildPlan;)Z" },
	{ "drawBreaking", "(II)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;Z)V" },
	{ "showSchematicSave", "()V" },
	{ "rotatePlans", "(Larc/struct/Seq;I)V" },
	{ "flipPlans", "(Larc/struct/Seq;Z)V" },
	{ "schemOriginX", "()I" },
	{ "schemOriginY", "()I" },
	{ "getPlan", "(II)Lmindustry/entities/units/BuildPlan;" },
	{ "getPlan", "(IIILmindustry/entities/units/BuildPlan;)Lmindustry/entities/units/BuildPlan;" },
	{ "drawBreakSelection", "(IIIII)V" },
	{ "drawBreakSelection", "(IIIIIZ)V" },
	{ "drawRebuildSelection", "(IIII)V" },
	{ "drawBreakSelection", "(IIII)V" },
	{ "drawSelection", "(IIIII)V" },
	{ "drawSelection", "(IIIIILarc/graphics/Color;Larc/graphics/Color;Z)V" },
	{ "flushSelectPlans", "(Larc/struct/Seq;)V" },
	{ "flushPlansReverse", "(Larc/struct/Seq;)V" },
	{ "flushPlans", "(Larc/struct/Seq;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(IILmindustry/world/Block;I)V" },
	{ "removeSelection", "(IIII)V" },
	{ "removeSelection", "(IIIII)V" },
	{ "removeSelection", "(IIIIZ)V" },
	{ "removeSelection", "(IIIIZI)V" },
	{ "updateLine", "(IIII)V" },
	{ "updateLine", "(II)V" },
	{ "checkConfigTap", "()Z" },
	{ "tileTapped", "(Lmindustry/gen/Building;)Z" },
	{ "tryTapPlayer", "(FF)Z" },
	{ "canTapPlayer", "(FF)Z" },
	{ "tryBeginMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryStopMine", "()Z" },
	{ "tryStopMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canMine", "(Lmindustry/world/Tile;)Z" },
	{ "tileAt", "(FF)Lmindustry/world/Tile;" },
	{ "rawTileX", "()I" },
	{ "rawTileY", "()I" },
	{ "tileX", "(F)I" },
	{ "tileY", "(F)I" },
	{ "panCamera", "(Larc/math/geom/Vec2;)V" },
	{ "selectedBlock", "()Z" },
	{ "isPlacing", "()Z" },
	{ "isBreaking", "()Z" },
	{ "isRebuildSelecting", "()Z" },
	{ "mouseAngle", "(FF)F" },
	{ "selectedUnit", "()Lmindustry/gen/Unit;" },
	{ "selectedControlBuild", "()Lmindustry/gen/Building;" },
	{ "selectedCommandUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedEnemyUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedCommandBuildings", "(FFFF)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFFLarc/func/Boolf;)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFF)Larc/struct/Seq;" },
	{ "remove", "()V" },
	{ "add", "()V" },
	{ "canShoot", "()Z" },
	{ "onConfigurable", "()Z" },
	{ "isDroppingItem", "()Z" },
	{ "canDropItem", "()Z" },
	{ "tryDropItems", "(Lmindustry/gen/Building;FF)V" },
	{ "canDepositItem", "(Lmindustry/gen/Building;)Z" },
	{ "rebuildArea", "(IIII)V" },
	{ "tryBreakBlock", "(II)V" },
	{ "validPlace", "(IILmindustry/world/Block;I)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;Z)Z" },
	{ "validBreak", "(II)Z" },
	{ "breakBlock", "(II)V" },
	{ "drawArrow", "(Lmindustry/world/Block;III)V" },
	{ "drawArrow", "(Lmindustry/world/Block;IIIZ)V" },
	{ "iterateLine", "(IIIILarc/func/Cons;)V" },
	{ "lambda$updateLine$1", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$updateLine$0", "(Lmindustry/input/InputHandler$PlaceLine;)V" },
	{ "lambda$drawOtherBuildPlans$0", "(Lmindustry/gen/Player;)V" },
	{ "lambda$drawOtherBuildPlans$1", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Player;Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$drawCommanded$2", "()V" },
	{ "lambda$drawCommanded$1", "()V" },
	{ "lambda$drawCommanded$0", "()V" },
	{ "lambda$checkUnit$0", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$update$1", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$new$5", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$1", "()Z" },
	{ "showHint", "()Z" },
	{ "pollInputNoPlayer", "()V" },
	{ "pollInputPlayer", "()V" },
	{ "updateMovement", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$update$5", "(I)V" },
	{ "lambda$buildUI$4", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$9", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$10", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$buildUI$5", "()Z" },
	{ "lambda$buildUI$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$3", "(Ljava/lang/StringBuilder;)Ljava/lang/CharSequence;" },
	{ "lambda$buildUI$1", "(Larc/scene/ui/layout/Table;)Z" },
};

static FieldMetadata fields[] {
	{ "movement", &class_arc_math_geom_Vec2, offsetof(mindustry_input_DesktopInput, F_movement), "Larc/math/geom/Vec2;", 1 },
	{ "cursorType", &class_arc_Graphics$Cursor, offsetof(mindustry_input_DesktopInput, F_cursorType), "Larc/Graphics$Cursor;", 1 },
	{ "selectX", &class_int, offsetof(mindustry_input_DesktopInput, F_selectX), "I", 1 },
	{ "selectY", &class_int, offsetof(mindustry_input_DesktopInput, F_selectY), "I", 1 },
	{ "schemX", &class_int, offsetof(mindustry_input_DesktopInput, F_schemX), "I", 1 },
	{ "schemY", &class_int, offsetof(mindustry_input_DesktopInput, F_schemY), "I", 1 },
	{ "lastLineX", &class_int, offsetof(mindustry_input_DesktopInput, F_lastLineX), "I", 1 },
	{ "lastLineY", &class_int, offsetof(mindustry_input_DesktopInput, F_lastLineY), "I", 1 },
	{ "schematicX", &class_int, offsetof(mindustry_input_DesktopInput, F_schematicX), "I", 1 },
	{ "schematicY", &class_int, offsetof(mindustry_input_DesktopInput, F_schematicY), "I", 1 },
	{ "mode", &class_mindustry_input_PlaceMode, offsetof(mindustry_input_DesktopInput, F_mode), "Lmindustry/input/PlaceMode;", 1 },
	{ "selectScale", &class_float, offsetof(mindustry_input_DesktopInput, F_selectScale), "F", 1 },
	{ "splan", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_input_DesktopInput, F_splan), "Lmindustry/entities/units/BuildPlan;", 1 },
	{ "deleting", &class_boolean, offsetof(mindustry_input_DesktopInput, F_deleting), "Z", 1 },
	{ "shouldShoot", &class_boolean, offsetof(mindustry_input_DesktopInput, F_shouldShoot), "Z", 1 },
	{ "panning", &class_boolean, offsetof(mindustry_input_DesktopInput, F_panning), "Z", 1 },
	{ "movedPlan", &class_boolean, offsetof(mindustry_input_DesktopInput, F_movedPlan), "Z", 1 },
	{ "panScale", &class_float, offsetof(mindustry_input_DesktopInput, F_panScale), "F", 1 },
	{ "panSpeed", &class_float, offsetof(mindustry_input_DesktopInput, F_panSpeed), "F", 1 },
	{ "panBoostSpeed", &class_float, offsetof(mindustry_input_DesktopInput, F_panBoostSpeed), "F", 1 },
	{ "selectMillis", &class_long, offsetof(mindustry_input_DesktopInput, F_selectMillis), "J", 1 },
	{ "prevSelected", &class_mindustry_world_Tile, offsetof(mindustry_input_DesktopInput, F_prevSelected), "Lmindustry/world/Tile;", 1 },
	{ "lastCtrlGroup", &class_int, offsetof(mindustry_input_DesktopInput, F_lastCtrlGroup), "I", 1 },
	{ "lastCtrlGroupSelectMillis", &class_long, offsetof(mindustry_input_DesktopInput, F_lastCtrlGroupSelectMillis), "J", 1 },
	{ "lastPayloadKeyTapMillis", &class_long, offsetof(mindustry_input_DesktopInput, F_lastPayloadKeyTapMillis), "J", 1 },
	{ "lastPayloadKeyHoldMillis", &class_long, offsetof(mindustry_input_DesktopInput, F_lastPayloadKeyHoldMillis), "J", 1 },
	{ "buildPlanMouseOffsetX", &class_float, offsetof(mindustry_input_DesktopInput, F_buildPlanMouseOffsetX), "F", 2 },
	{ "buildPlanMouseOffsetY", &class_float, offsetof(mindustry_input_DesktopInput, F_buildPlanMouseOffsetY), "F", 2 },
	{ "changedCursor", &class_boolean, offsetof(mindustry_input_DesktopInput, F_changedCursor), "Z", 2 },
	{ "pressedCommandRect", &class_boolean, offsetof(mindustry_input_DesktopInput, F_pressedCommandRect), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_DesktopInput, 0, "()V", 1 },
	{ "showHint", (intptr_t) M_mindustry_input_DesktopInput_showHint_R_boolean, VTABLE_mindustry_input_DesktopInput_showHint_R_boolean, "()Z", 0 },
	{ "reset", (intptr_t) M_mindustry_input_DesktopInput_reset, VTABLE_mindustry_input_DesktopInput_reset, "()V", 1 },
	{ "buildUI", (intptr_t) M_mindustry_input_DesktopInput_buildUI_arc_scene_Group, VTABLE_mindustry_input_DesktopInput_buildUI_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "drawTop", (intptr_t) M_mindustry_input_DesktopInput_drawTop, VTABLE_mindustry_input_DesktopInput_drawTop, "()V", 1 },
	{ "drawBottom", (intptr_t) M_mindustry_input_DesktopInput_drawBottom, VTABLE_mindustry_input_DesktopInput_drawBottom, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_input_DesktopInput_update, VTABLE_mindustry_input_DesktopInput_update, "()V", 1 },
	{ "useSchematic", (intptr_t) M_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean, VTABLE_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean, "(Lmindustry/game/Schematic;Z)V", 1 },
	{ "isBreaking", (intptr_t) M_mindustry_input_DesktopInput_isBreaking_R_boolean, VTABLE_mindustry_input_DesktopInput_isBreaking_R_boolean, "()Z", 1 },
	{ "buildPlacementUI", (intptr_t) M_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "pollInputNoPlayer", (intptr_t) M_mindustry_input_DesktopInput_pollInputNoPlayer, VTABLE_mindustry_input_DesktopInput_pollInputNoPlayer, "()V", 0 },
	{ "pollInputPlayer", (intptr_t) M_mindustry_input_DesktopInput_pollInputPlayer, VTABLE_mindustry_input_DesktopInput_pollInputPlayer, "()V", 0 },
	{ "tap", (intptr_t) M_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDown", (intptr_t) M_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "selectedBlock", (intptr_t) M_mindustry_input_DesktopInput_selectedBlock_R_boolean, VTABLE_mindustry_input_DesktopInput_selectedBlock_R_boolean, "()Z", 1 },
	{ "getMouseX", (intptr_t) M_mindustry_input_DesktopInput_getMouseX_R_float, VTABLE_mindustry_input_DesktopInput_getMouseX_R_float, "()F", 1 },
	{ "getMouseY", (intptr_t) M_mindustry_input_DesktopInput_getMouseY_R_float, VTABLE_mindustry_input_DesktopInput_getMouseY_R_float, "()F", 1 },
	{ "updateState", (intptr_t) M_mindustry_input_DesktopInput_updateState, VTABLE_mindustry_input_DesktopInput_updateState, "()V", 1 },
	{ "panCamera", (intptr_t) M_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2, VTABLE_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit, VTABLE_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4 },
	{ "lambda$pollInputPlayer$1", (intptr_t) SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$1_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$pollInputPlayer$0", (intptr_t) SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$0_int_int_mindustry_entities_units_BuildPlan, 0, "(IILmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$buildPlacementUI$5", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$5_R_boolean, 0, "()Z", 4106 },
	{ "lambda$buildPlacementUI$4", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$4, 0, "()V", 4106 },
	{ "lambda$buildPlacementUI$3", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$3_R_boolean, 0, "()Z", 4106 },
	{ "lambda$buildPlacementUI$2", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$2, 0, "()V", 4106 },
	{ "lambda$buildPlacementUI$1", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$1, 0, "()V", 4106 },
	{ "lambda$buildPlacementUI$0", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$0, 0, "()V", 4106 },
	{ "lambda$update$6", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$6_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$update$5", (intptr_t) M_mindustry_input_DesktopInput_lambda$update$5_int, VTABLE_mindustry_input_DesktopInput_lambda$update$5_int, "(I)V", 4098 },
	{ "lambda$update$4", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$4_mindustry_gen_Unit_R_int, 0, "(Lmindustry/gen/Unit;)I", 4106 },
	{ "lambda$update$3", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$3_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$update$2", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$2_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$1_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_input_DesktopInput_lambda$update$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$buildUI$4", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$6", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$9", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$10", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$buildUI$8", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildUI$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$buildUI$7", (intptr_t) SM_mindustry_input_DesktopInput_lambda$buildUI$7_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$buildUI$5", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean, "()Z", 4098 },
	{ "lambda$buildUI$0", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$2", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$3", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence, "(Ljava/lang/StringBuilder;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$buildUI$1", (intptr_t) M_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean, VTABLE_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean, "(Larc/scene/ui/layout/Table;)Z", 4098 },
};

Class class_mindustry_input_DesktopInput{
		.nativeName = (intptr_t) "mindustry/input/DesktopInput",
		.parentClass = (intptr_t) &class_mindustry_input_InputHandler,
		.size = sizeof(mindustry_input_DesktopInput),
		.classVtable = (intptr_t) vtable_mindustry_input_DesktopInput,
		.staticInitializer = (intptr_t) clinit_mindustry_input_DesktopInput,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_input_DesktopInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 170,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_DesktopInput = registerClass(&class_mindustry_input_DesktopInput);

}
