#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/func/Prov.h"
#include "arc/func/Boolp.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_14.h"
#include "java/util/Arrays.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_13.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_12.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_11.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_10.h"
#include "mindustry/ui/dialogs/ResearchDialog_LayoutNode.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/input/Binding.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/ui/dialogs/ResearchDialog_6.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/ResearchDialog_5.h"
#include "mindustry/ui/dialogs/ResearchDialog_4.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/ui/dialogs/ResearchDialog_3.h"
#include "mindustry/ui/dialogs/ResearchDialog_2.h"
#include "mindustry/ui/dialogs/ResearchDialog_1.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/input/KeyBind.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Boolp_2.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Boolp_3.h"
#include "mindustry/type/Sector.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/ResearchDialog_TechTreeNode.h"
#include "mindustry/Vars.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/Events.h"
#include "mindustry/ui/ItemsDisplay.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/layout/BranchTreeLayout.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Prov_2.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Prov_3.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Cons_5.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Cons_4.h"
#include "mindustry/net/Net.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Cons_6.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Boolf_3.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_8.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_java_lang_Runnable_9.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ui/dialogs/ResearchDialog_invoke_arc_func_Boolf_2.h"

extern "C" {

jbool SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements;

void mark_mindustry_ui_dialogs_ResearchDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_BaseDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog *) object;
	if (self->F_nodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodes)->clazz)->markFunction)((jobject) self->F_nodes, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_lastNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastNode)->clazz)->markFunction)((jobject) self->F_lastNode, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
	if (self->F_itemDisplay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemDisplay)->clazz)->markFunction)((jobject) self->F_itemDisplay, mark, depth + 1);
	if (self->F_view)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_view)->clazz)->markFunction)((jobject) self->F_view, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_rootPlanets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootPlanets)->clazz)->markFunction)((jobject) self->F_rootPlanets, mark, depth + 1);
}

void init_mindustry_ui_dialogs_ResearchDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(54);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(60.0f)));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_nodeSize = temp0;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode);
	sp[2].o = frame[0].o;
	clinit_mindustry_content_TechTree(ctx);
	sp[3].o = (jobject)SF_mindustry_content_TechTree_roots;
	sp[3].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[3].o);
	init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[3].o)), (jobject(nullptr)));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK(sp[1].o))->F_node;
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_lastNode = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, (jint(0)), (jint(4)));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jint temp1 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ResearchDialog_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(3)));
	jint temp2 = jint(0);
	sp[2].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View);
	init_mindustry_ui_dialogs_ResearchDialog$View_mindustry_ui_dialogs_ResearchDialog(ctx, sp[3].o, (frame[0].o));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[2].o))->F_view = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[3].o;
	jint temp4 = jint(2);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_ItemsDisplay(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_ItemsDisplay);
	init_mindustry_ui_ItemsDisplay(ctx, sp[3].o);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[2].o))->F_itemDisplay = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[3].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolp_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_ItemsDisplay_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_titleTable;
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, sp[0].o);
	LINE_NUMBER(116);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ResearchDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ResearchDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_planet;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ResearchDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	((func_mindustry_ui_dialogs_ResearchDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ResearchDialog_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@database"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_book;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp5 = jfloat(210.0f);
	jfloat temp6 = jfloat(64.0f);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5, temp6);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"database"_j))));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$2);
	init_mindustry_ui_dialogs_ResearchDialog$2_mindustry_ui_dialogs_ResearchDialog(ctx, sp[1].o, (frame[0].o));
	jint temp7 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$3);
	init_mindustry_ui_dialogs_ResearchDialog$3_mindustry_ui_dialogs_ResearchDialog(ctx, sp[1].o, (frame[0].o));
	jint temp8 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_checkMargin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:checkMargin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_showTechSelect) == 0) goto label_1;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	sp[0].o = (jobject)((func_mindustry_ui_ItemsDisplay_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(60.0f)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	sp[0].o = (jobject)((func_mindustry_ui_ItemsDisplay_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	}
label_3:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	((func_mindustry_ui_ItemsDisplay_invalidate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_invalidate])(ctx, sp[0].o);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	((func_mindustry_ui_ItemsDisplay_layout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_layout])(ctx, sp[0].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_rebuildItems(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:rebuildItems", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$4(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$4);
	init_mindustry_ui_dialogs_ResearchDialog$4_mindustry_ui_dialogs_ResearchDialog(ctx, sp[1].o, (frame[0].o));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ResearchDialog_getPrefRoot_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:getPrefRoot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(303);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	goto label_3;
	}
label_4:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(305);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_type_Planet *) NULL_CHECK(sp[-1].o))->F_techTree;
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:switchTree", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_nodes;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode);
	init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx, sp[1].o, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(312);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_lastNode = (jref) (frame[1].o);
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll])(ctx, sp[0].o);
	LINE_NUMBER(315);
	((func_mindustry_ui_dialogs_ResearchDialog_rebuildItems) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_rebuildItems])(ctx, (frame[0].o));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_rebuildTree_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:rebuildTree", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	((func_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX = (jfloat(0));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panY = (jfloat(-200.0f));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_infoTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_infoTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	((func_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	((func_mindustry_ui_dialogs_ResearchDialog_treeLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_treeLayout])(ctx, (frame[0].o));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_treeLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:treeLayout", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	frame[1].f = (jfloat(20.0f));
	LINE_NUMBER(334);
	clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$LayoutNode);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	init_mindustry_ui_dialogs_ResearchDialog$LayoutNode_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog$LayoutNode(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o);
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[1].o))))->length))) / (jfloat(2))));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, temp1);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[1].o))))->length))) / (jfloat(2))));
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(ctx, sp[0].o, temp2, (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[1].o))))->length));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o));
	LINE_NUMBER(339);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children = (jref) (frame[4].o);
	LINE_NUMBER(340);
	clinit_mindustry_ui_dialogs_ResearchDialog$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$5);
	init_mindustry_ui_dialogs_ResearchDialog$5_mindustry_ui_dialogs_ResearchDialog_float(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	sp[1].o = frame[2].o;
	LINE_NUMBER(343);
	((func_mindustry_ui_dialogs_ResearchDialog$5_layout_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$5_layout_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(345);
	frame[6].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(347);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(349);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children = (jref) (frame[5].o);
	LINE_NUMBER(350);
	clinit_mindustry_ui_dialogs_ResearchDialog$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$6);
	init_mindustry_ui_dialogs_ResearchDialog$6_mindustry_ui_dialogs_ResearchDialog_float(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	sp[1].o = frame[2].o;
	LINE_NUMBER(353);
	((func_mindustry_ui_dialogs_ResearchDialog$6_layout_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$6_layout_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(355);
	((func_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float])(ctx, (frame[0].o), (frame[4].o), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_y) - (frame[6].f)));
	}
label_10:;
	{
	LINE_NUMBER(358);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children = (jref) (frame[3].o);
	LINE_NUMBER(360);
	frame[7].f = (jfloat(0));
	frame[8].f = (jfloat(0));
	frame[9].f = (jfloat(0));
	frame[10].f = (jfloat(0));
	LINE_NUMBER(361);
	((func_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, sp[0].o));
	LINE_NUMBER(364);
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[12].o)))->F_visible) != 0) goto label_24;
	}
	goto label_21;
label_24:;
	{
	LINE_NUMBER(365);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_x) - (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_width) / (jfloat(2)))), (frame[7].f));
	frame[7].f = temp0;
	LINE_NUMBER(366);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_x) + (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_width) / (jfloat(2)))), (frame[9].f));
	frame[9].f = temp1;
	LINE_NUMBER(367);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_y) - (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_height) / (jfloat(2)))), (frame[8].f));
	frame[8].f = temp2;
	LINE_NUMBER(368);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_y) + (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[12].o)))->F_height) / (jfloat(2)))), (frame[10].f));
	frame[10].f = temp3;
	LINE_NUMBER(369);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[1].o, (frame[7].f), (frame[8].f), ((frame[9].f) - (frame[7].f)), ((frame[10].f) - (frame[8].f)));
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_bounds;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_nodeSize) * (jfloat(1.5f))));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:shift", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(375);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(376);
	sp[0].o = frame[6].o;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_children;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_children;
	if ((((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o))))->length) <= 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_children;
	((func_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float])(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[1].o)), (frame[2].f));
	}
label_5:;
	{
	LINE_NUMBER(375);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:copyInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$LayoutNode *) NULL_CHECK((frame[1].o)))->F_node;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$LayoutNode *) NULL_CHECK((frame[1].o)))->F_node;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 1), sp[0].o));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(386);
	((func_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(385);
	INST_IINC(4, 1);
	goto label_5;
	}
label_3:;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:checkNodes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[1].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(393);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_parent;
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((checkCast(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, sp[0].o))))->F_visible) == 0) goto label_2;
	}
label_3:;
	{
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[1].o)))->F_visible = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[1].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK(sp[0].o))->F_selectable = temp0;
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 1), sp[0].o));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(396);
	sp[0].o = frame[6].o;
	sp += 1;
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_parent;
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((checkCast(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, sp[0].o))))->F_visible) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK(sp[0].o))->F_visible = sp[1].i;
	LINE_NUMBER(397);
	((func_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(395);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_itemDisplay;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:selectable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
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

jbool M_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:locked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_dialogs_ResearchDialog_lambda$selectable$0_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$selectable$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(405);
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	((func_mindustry_ui_dialogs_ResearchDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_database;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$11_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_research;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(sp[1].o))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(147);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	((func_mindustry_ui_dialogs_ResearchDialog_checkMargin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkMargin])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(125);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp += 1;
	goto label_5;
	}
label_6:;
	INST_ACONST_NULL();
label_5:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(128);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_techTree;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_techTree;
	((func_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(131);
	((func_mindustry_ui_dialogs_ResearchDialog_rebuildItems) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_rebuildItems])(ctx, (frame[0].o));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	((func_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	((func_mindustry_ui_dialogs_ResearchDialog_treeLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_treeLayout])(ctx, (frame[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_infoTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_infoTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ResearchDialog_lambda$new$9_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$9", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	{
	LINE_NUMBER(112);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
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

jbool M_mindustry_ui_dialogs_ResearchDialog_lambda$new$7_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_TechTree(ctx);
	sp[1].o = (jobject)SF_mindustry_content_TechTree_roots;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 <= (jint(1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_showTechSelect = sp[1].i;
	popStackFrame(ctx);
	return sp[1].i;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ResearchDialog_lambda$new$8_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	if (((jint)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_requiresUnlock) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
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

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	clinit_mindustry_ui_dialogs_ResearchDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$1);
	init_mindustry_ui_dialogs_ResearchDialog$1_mindustry_ui_dialogs_ResearchDialog_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@techtree.select"_j))));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ResearchDialog$1_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$1_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$3_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ResearchDialog_lambda$new$5_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK(sp[0].o))->F_node;
	sp[0].o = (jobject)((func_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ResearchDialog_lambda$new$4_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK(sp[0].o))->F_node;
	sp[0].o = (jobject)((func_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$1_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_needsRebuild) != 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_needsRebuild = (jint(1));
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_needsRebuild = (jint(0));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_root;
	((func_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(68);
	((func_mindustry_ui_dialogs_ResearchDialog_treeLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_treeLayout])(ctx, (frame[0].o));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[0].o)))->F_view;
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, sp[0].o);
	LINE_NUMBER(70);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_act) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act])(ctx, sp[0].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	((func_mindustry_ui_dialogs_ResearchDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_ResearchDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	{
	LINE_NUMBER(37);
	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_ResearchDialog;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getPrefRoot
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_ui_dialogs_ResearchDialog[] {
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
	(void *) M_arc_scene_ui_Dialog_draw,
	(void *) M_arc_scene_ui_Dialog_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
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
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
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
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_keepWithinStage,
	(void *) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_centerWindow,
	(void *) M_arc_scene_ui_Dialog_isMovable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setMovable_boolean,
	(void *) M_arc_scene_ui_Dialog_isModal_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setModal_boolean,
	(void *) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean,
	(void *) M_arc_scene_ui_Dialog_isCentered_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setCentered_boolean,
	(void *) M_arc_scene_ui_Dialog_isResizable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizable_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizeBorder_int,
	(void *) M_arc_scene_ui_Dialog_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Dialog_updateScrollFocus,
	(void *) M_arc_scene_ui_Dialog_shown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton,
	(void *) M_arc_scene_ui_Dialog_closeOnBack,
	(void *) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_isShown_R_boolean,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_toggle,
	(void *) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_arc_scene_ui_Dialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
	(void *) M_mindustry_ui_dialogs_BaseDialog_setTitleColor_arc_graphics_Color,
	(void *) M_mindustry_ui_dialogs_BaseDialog_makeButtonOverlay,
	(void *) M_mindustry_ui_dialogs_BaseDialog_onResize_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseListener,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton_float,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$onResize$0_java_lang_Runnable_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_checkMargin,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_rebuildItems,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_getPrefRoot_R_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_rebuildTree_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_treeLayout,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$12,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$11_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$10,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$7_R_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$6,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$3_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$5_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$4_R_arc_scene_style_Drawable,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$1_mindustry_game_EventType$UnlockEvent,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$2,
	(void *) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$0_mindustry_game_EventType$ResetEvent,
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
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "getStyle", "()Larc/scene/ui/Dialog$DialogStyle;" },
	{ "setStyle", "(Larc/scene/ui/Dialog$DialogStyle;)V" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(FFFF)V" },
	{ "centerWindow", "()V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isCentered", "()Z" },
	{ "setCentered", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "updateScrollFocus", "()V" },
	{ "shown", "(Ljava/lang/Runnable;)V" },
	{ "hidden", "(Ljava/lang/Runnable;)V" },
	{ "resizedShown", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(ZLjava/lang/Runnable;)V" },
	{ "addCloseButton", "()V" },
	{ "closeOnBack", "()V" },
	{ "closeOnBack", "(Ljava/lang/Runnable;)V" },
	{ "isShown", "()Z" },
	{ "show", "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;" },
	{ "toggle", "()V" },
	{ "show", "()Larc/scene/ui/Dialog;" },
	{ "show", "(Larc/scene/Scene;)Larc/scene/ui/Dialog;" },
	{ "hide", "(Larc/scene/Action;)V" },
	{ "hide", "()V" },
	{ "lambda$closeOnBack$1", "(Ljava/lang/Runnable;Larc/input/KeyCode;)V" },
	{ "lambda$updateScrollFocus$0", "([Z)V" },
	{ "setTitleColor", "(Larc/graphics/Color;)V" },
	{ "makeButtonOverlay", "()V" },
	{ "onResize", "(Ljava/lang/Runnable;)V" },
	{ "addCloseListener", "()V" },
	{ "addCloseButton", "(F)V" },
	{ "lambda$onResize$0", "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
	{ "checkMargin", "()V" },
	{ "rebuildItems", "()V" },
	{ "getPrefRoot", "()Lmindustry/content/TechTree$TechNode;" },
	{ "switchTree", "(Lmindustry/content/TechTree$TechNode;)V" },
	{ "rebuildTree", "(Lmindustry/content/TechTree$TechNode;)V" },
	{ "treeLayout", "()V" },
	{ "shift", "([Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;F)V" },
	{ "copyInfo", "(Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;)V" },
	{ "checkNodes", "(Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V" },
	{ "selectable", "(Lmindustry/content/TechTree$TechNode;)Z" },
	{ "locked", "(Lmindustry/content/TechTree$TechNode;)Z" },
	{ "lambda$new$12", "()V" },
	{ "lambda$new$11", "(Larc/input/KeyCode;)V" },
	{ "lambda$new$10", "()V" },
	{ "lambda$new$7", "()Z" },
	{ "lambda$new$6", "()V" },
	{ "lambda$new$3", "(Larc/scene/ui/Button;)V" },
	{ "lambda$new$5", "()Ljava/lang/CharSequence;" },
	{ "lambda$new$4", "()Larc/scene/style/Drawable;" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$UnlockEvent;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
	&class_mindustry_ui_dialogs_ResearchDialog$View,
	&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
};

static FieldMetadata fields[] {
	{ "debugShowRequirements", &class_boolean, (intptr_t) &SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements, "Z", 9 },
	{ "nodeSize", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog, F_nodeSize), "F", 17 },
	{ "nodes", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_dialogs_ResearchDialog, F_nodes), "Larc/struct/ObjectSet;", 1 },
	{ "root", &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, offsetof(mindustry_ui_dialogs_ResearchDialog, F_root), "Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;", 1 },
	{ "lastNode", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_ui_dialogs_ResearchDialog, F_lastNode), "Lmindustry/content/TechTree$TechNode;", 1 },
	{ "bounds", &class_arc_math_geom_Rect, offsetof(mindustry_ui_dialogs_ResearchDialog, F_bounds), "Larc/math/geom/Rect;", 1 },
	{ "itemDisplay", &class_mindustry_ui_ItemsDisplay, offsetof(mindustry_ui_dialogs_ResearchDialog, F_itemDisplay), "Lmindustry/ui/ItemsDisplay;", 1 },
	{ "view", &class_mindustry_ui_dialogs_ResearchDialog$View, offsetof(mindustry_ui_dialogs_ResearchDialog, F_view), "Lmindustry/ui/dialogs/ResearchDialog$View;", 1 },
	{ "items", &class_mindustry_type_ItemSeq, offsetof(mindustry_ui_dialogs_ResearchDialog, F_items), "Lmindustry/type/ItemSeq;", 1 },
	{ "rootPlanets", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_ResearchDialog, F_rootPlanets), "Larc/struct/Seq;", 18 },
	{ "showTechSelect", &class_boolean, offsetof(mindustry_ui_dialogs_ResearchDialog, F_showTechSelect), "Z", 2 },
	{ "needsRebuild", &class_boolean, offsetof(mindustry_ui_dialogs_ResearchDialog, F_needsRebuild), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog, 0, "()V", 1 },
	{ "checkMargin", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_checkMargin, VTABLE_mindustry_ui_dialogs_ResearchDialog_checkMargin, "()V", 0 },
	{ "rebuildItems", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_rebuildItems, VTABLE_mindustry_ui_dialogs_ResearchDialog_rebuildItems, "()V", 1 },
	{ "getPrefRoot", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_getPrefRoot_R_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog_getPrefRoot_R_mindustry_content_TechTree$TechNode, "()Lmindustry/content/TechTree$TechNode;", 1 },
	{ "switchTree", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog_switchTree_mindustry_content_TechTree$TechNode, "(Lmindustry/content/TechTree$TechNode;)V", 1 },
	{ "rebuildTree", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_rebuildTree_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog_rebuildTree_mindustry_content_TechTree$TechNode, "(Lmindustry/content/TechTree$TechNode;)V", 1 },
	{ "treeLayout", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_treeLayout, VTABLE_mindustry_ui_dialogs_ResearchDialog_treeLayout, "()V", 0 },
	{ "shift", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float, VTABLE_mindustry_ui_dialogs_ResearchDialog_shift_Array1_mindustry_ui_dialogs_ResearchDialog$LayoutNode_float, "([Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;F)V", 0 },
	{ "copyInfo", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode, VTABLE_mindustry_ui_dialogs_ResearchDialog_copyInfo_mindustry_ui_dialogs_ResearchDialog$LayoutNode, "(Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;)V", 0 },
	{ "checkNodes", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, "(Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V", 0 },
	{ "selectable", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean, "(Lmindustry/content/TechTree$TechNode;)Z", 0 },
	{ "locked", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean, "(Lmindustry/content/TechTree$TechNode;)Z", 0 },
	{ "lambda$selectable$0", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog_lambda$selectable$0_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "lambda$new$12", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$12, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$12, "()V", 4098 },
	{ "lambda$new$11", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$11_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$11_arc_input_KeyCode, "(Larc/input/KeyCode;)V", 4098 },
	{ "lambda$new$10", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$10, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$10, "()V", 4098 },
	{ "lambda$new$9", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog_lambda$new$9_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$7", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$7_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$7_R_boolean, "()Z", 4098 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog_lambda$new$8_mindustry_content_TechTree$TechNode_R_boolean, 0, "(Lmindustry/content/TechTree$TechNode;)Z", 4106 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$6, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$6, "()V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$3_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$3_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$5_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$5_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$4_R_arc_scene_style_Drawable, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$4_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$1_mindustry_game_EventType$UnlockEvent, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$1_mindustry_game_EventType$UnlockEvent, "(Lmindustry/game/EventType$UnlockEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog_lambda$new$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_dialogs_ResearchDialog_lambda$new$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_ResearchDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 319,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog = registerClass(&class_mindustry_ui_dialogs_ResearchDialog);

}
