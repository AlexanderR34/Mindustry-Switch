#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Prov_2.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Boolp_1.h"
#include "arc/Events.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/ItemsDisplay.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Boolf_3.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_16.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Boolf_2.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Prov_3.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/math/Interp.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "arc/scene/ui/Label.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_9.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/scene/actions/ColorAction.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/net/Net.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_3.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_4.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_1.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_2.h"
#include "arc/scene/Action.h"
#include "mindustry/game/Objectives_Objective.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_8.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_9.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_6.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/game/EventType_ResearchEvent.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_10.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_arc_func_Cons_11.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/actions/Actions.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_13.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_12.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_15.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_14.h"
#include "arc/audio/Sound.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_11.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_invoke_java_lang_Runnable_10.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/ResearchDialog_TechTreeNode.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$View(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Group(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$View *) object;
	if (self->F_hoverNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hoverNode)->clazz)->markFunction)((jobject) self->F_hoverNode, mark, depth + 1);
	if (self->F_infoTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_infoTable)->clazz)->markFunction)((jobject) self->F_infoTable, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$View(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Group(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$View_mindustry_ui_dialogs_ResearchDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_Group(ctx, (frame[0].o));
	LINE_NUMBER(442);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panX = (jfloat(0));
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panY = (jfloat(-200.0f));
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_lastZoom = (jfloat(-1.0f));
	LINE_NUMBER(443);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_moved = (jint(0));
	LINE_NUMBER(445);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_infoTable = (jref) sp[1].o;
	LINE_NUMBER(448);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll])(ctx, (frame[0].o));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:rebuildAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	((func_mindustry_ui_dialogs_ResearchDialog$View_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_clear])(ctx, (frame[0].o));
	LINE_NUMBER(453);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_nodes;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, sp[0].o));
	LINE_NUMBER(458);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[1].o))->F_content;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_nodei;
	init_arc_scene_ui_ImageButton_arc_graphics_g2d_TextureRegion_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(459);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[3].o), (jfloat(32.0f)));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[3].o));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(463);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_hovered_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_hovered_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(496);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_11);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_exited_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_exited_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_touchable_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_touchable_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(503);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_userObject = (jref) sp[1].o;
	LINE_NUMBER(504);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ImageButton_setSize_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setSize_float])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_nodeSize));
	LINE_NUMBER(505);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_12);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(515);
	((func_mindustry_ui_dialogs_ResearchDialog$View_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(516);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(518);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_21;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$View$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View$2);
	init_mindustry_ui_dialogs_ResearchDialog$View$2_mindustry_ui_dialogs_ResearchDialog$View(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog$View_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(534);
	((func_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setOrigin_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(535);
	((func_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ResearchDialog$View_released_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_released_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_clamp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:clamp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].f = ((jfloat)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_nodeSize);
	LINE_NUMBER(542);
	frame[2].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	frame[3].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds;
	frame[4].f = ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panX)) + (frame[2].f));
	jfloat temp0 = ((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panY) + (frame[3].f);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds;
	frame[5].f = (temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds;
	frame[6].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_bounds;
	frame[7].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height);
	LINE_NUMBER(545);
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (-(frame[6].f)) + (frame[1].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp1, temp2, ((jfloat(temp3)) - (frame[1].f)));
	frame[4].f = temp4;
	LINE_NUMBER(546);
	jfloat temp5 = frame[5].f;
	jfloat temp6 = (-(frame[7].f)) + (frame[1].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp7 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp5, temp6, ((jfloat(temp7)) - (frame[1].f)));
	frame[5].f = temp8;
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	jfloat temp9 = frame[4].f;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_bounds;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panX = ((temp9 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x)) - (frame[2].f));
	LINE_NUMBER(548);
	sp[0].o = frame[0].o;
	jfloat temp10 = frame[5].f;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_bounds;
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK(sp[0].o))->F_panY = ((temp10 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y)) - (frame[3].f));
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:canSpend", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(557);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_finishedRequirements;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_amount;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	if (temp0 >= ((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_amount)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_item;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(557);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_locked_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:spend", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(570);
	frame[2].i = (jint(1));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(573);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	frame[4].o = sp[0].o;
	LINE_NUMBER(575);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_requirements;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_finishedRequirements;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(580);
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount) - ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp1 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, (jint(0)));
	frame[8].i = temp3;
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	((func_mindustry_type_ItemSeq_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[8].i));
	LINE_NUMBER(582);
	sp[0].o = frame[7].o;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) + (frame[8].i));
	LINE_NUMBER(584);
	if ((frame[8].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(585);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[5].i)) = (jint(1));
	LINE_NUMBER(586);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)) = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(590);
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount) >= ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount)) goto label_16;
	}
	{
	LINE_NUMBER(591);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(575);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(595);
	if ((frame[2].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(596);
	((func_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode])(ctx, (frame[0].o), (frame[1].o));
	}
label_18:;
	{
	LINE_NUMBER(599);
	((func_mindustry_content_TechTree$TechNode_save) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_save])(ctx, (frame[1].o));
	LINE_NUMBER(602);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_act) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act])(ctx, sp[0].o);
	LINE_NUMBER(603);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_itemDisplay;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_items;
	((func_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq_Array1_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_ItemsDisplay_rebuild_mindustry_type_ItemSeq_Array1_boolean])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(605);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_ResearchDialog_checkMargin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkMargin])(ctx, sp[0].o);
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:unlock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	((func_mindustry_ctype_UnlockableContent_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlock])(ctx, sp[0].o);
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(613);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	((func_mindustry_ctype_UnlockableContent_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlock])(ctx, sp[0].o);
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_root;
	((func_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkNodes_mindustry_ui_dialogs_ResearchDialog$TechTreeNode])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(619);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_ResearchDialog_treeLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_treeLayout])(ctx, sp[0].o);
	LINE_NUMBER(621);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(622);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_act) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act])(ctx, sp[0].o);
	LINE_NUMBER(623);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiUnlock;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	LINE_NUMBER(624);
	clinit_mindustry_game_EventType$ResearchEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ResearchEvent);
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	init_mindustry_game_EventType$ResearchEvent_mindustry_ctype_UnlockableContent(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:rebuild", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:rebuild", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(635);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(636);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(637);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(640);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_userObject;
	frame[3].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	clinit_mindustry_ui_dialogs_ResearchDialog$View$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View$3);
	init_mindustry_ui_dialogs_ResearchDialog$View$3_mindustry_ui_dialogs_ResearchDialog$View_arc_scene_ui_ImageButton(ctx, sp[1].o, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(656);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(658);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(659);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(661);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(663);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_6);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(769);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(771);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_description;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[3].o)))->F_content;
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_inlineDescription) == 0) goto label_16;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_16;
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(774);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(777);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	((func_mindustry_ui_dialogs_ResearchDialog$View_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(779);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_ResearchDialog_checkMargin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkMargin])(ctx, sp[0].o);
	LINE_NUMBER(780);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(782);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(783);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(784);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_drawChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:drawChildren", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(788);
	((func_mindustry_ui_dialogs_ResearchDialog$View_clamp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_clamp])(ctx, (frame[0].o));
	LINE_NUMBER(789);
	frame[1].f = (((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panX) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	frame[2].f = (((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panY) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(790);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(1)));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_nodes;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, sp[0].o));
	LINE_NUMBER(793);
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[4].o)))->F_visible) != 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_children;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 1), sp[0].o));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(795);
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[8].o)))->F_visible) != 0) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(796);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[4].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[8].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
label_14:;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(797);
	if ((frame[9].i) == 0) goto label_18;
	}
	INST_FCONST(1);
	goto label_19;
label_18:;
	INST_FCONST(2);
label_19:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_z_float(ctx, sp[0].f);
	LINE_NUMBER(799);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	sp[0].f = temp0;
	sp += 1;
	if ((frame[9].i) == 0) goto label_21;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_gray;
	goto label_22;
label_21:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_22:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, sp[0].f, sp[1].o);
	LINE_NUMBER(800);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(801);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y) - ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_y)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_x) - ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x)));
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, temp0, temp1, (jfloat(1)));
	if (temp2 == 0) goto label_25;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dstm_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y), ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_y));
	if ((floatCompare(temp0, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_width) * (jfloat(3.0f))), 1)) > 0) goto label_25;
	}
	{
	LINE_NUMBER(802);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y) + (frame[2].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_y) + (frame[2].f)));
	goto label_13;
	}
label_25:;
	{
	LINE_NUMBER(804);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y) + (frame[2].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(805);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_y) + (frame[2].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_y) + (frame[2].f)));
	}
label_13:;
	{
	LINE_NUMBER(794);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(808);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(810);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(0)));
	LINE_NUMBER(811);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(812);
	M_arc_scene_Group_drawChildren(ctx, (frame[0].o));
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_ResearchDialog_checkMargin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_checkMargin])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$11_mindustry_content_TechTree$TechNode_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(774);
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 <= (20)) goto label_2;
	}
	(sp++)->f = jfloat(270.0f);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(773);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$1_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(667);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flati;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	}
label_3:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(671);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_8);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(9.0f);
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(758);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(760);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@research"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	clinit_mindustry_ui_dialogs_ResearchDialog$View$4(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View$4);
	init_mindustry_ui_dialogs_ResearchDialog$View$4_mindustry_ui_dialogs_ResearchDialog$View(ctx, sp[3].o, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_java_lang_Runnable_17);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(767);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(44.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	}
label_8:;
	LINE_NUMBER(769);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$10_mindustry_content_TechTree$TechNode_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$9_mindustry_content_TechTree$TechNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(767);
	((func_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$3_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(673);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[accent]???"_j));
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(675);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements;
	if ((--sp)->i == 0) goto label_7;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(677);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@locked"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(680);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_9);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"@completed"_j))));
	}
label_10:;
	LINE_NUMBER(756);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$4_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$4", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(682);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_finishedRequirements;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(686);
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	LINE_NUMBER(687);
	frame[7].i = (jint(0));
	LINE_NUMBER(689);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(690);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)))))->F_item;
	jfloat temp1 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_cost;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	frame[5].f = (temp0 + (temp1 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)))))->F_amount)))));
	LINE_NUMBER(691);
	jfloat temp2 = frame[6].f;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_finishedRequirements;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)))))->F_item;
	jfloat temp3 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_cost;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_finishedRequirements;
	frame[6].f = (temp2 + (temp3 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)))))->F_amount)))));
	LINE_NUMBER(692);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	frame[7].i = ((frame[7].i) | ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[8].i))));
	}
label_14:;
	{
	LINE_NUMBER(689);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(695);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"research.progress"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint((((frame[6].f) / (frame[5].f)) * (jfloat(100.0f))))), (99));
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[8].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(697);
	if ((frame[7].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(698);
	sp[0].o = frame[8].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(699);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lightGray;
	jfloat temp1 = jfloat(0.75f);
	clinit_arc_math_Interp(ctx);
	sp[3].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction(ctx, sp[2].o, temp1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_scene_ui_Label_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(701);
	sp[0].o = frame[8].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_4:;
	{
	LINE_NUMBER(707);
	frame[5].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_21;
	}
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_requirements;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(709);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_finishedRequirements;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(712);
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount) > ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount)) goto label_25;
	}
	clinit_mindustry_ui_dialogs_ResearchDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements;
	if ((--sp)->i != 0) goto label_25;
	goto label_26;
label_25:;
	{
	LINE_NUMBER(713);
	if ((frame[3].o) == nullptr) goto label_27;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[5].i))) == 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(715);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_10);
		proxy->F_field3 = (frame[8].i);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_26:;
	{
	LINE_NUMBER(707);
	INST_IINC(5, 1);
	goto label_20;
	}
label_21:;
	goto label_32;
label_2:;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_objectives;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(749);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_32:;
	LINE_NUMBER(751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$8_mindustry_content_TechTree$TechNode_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$8", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@complete"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(741);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Objectives$Objective, sp[0].o));
	LINE_NUMBER(742);
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_game_Objectives$Objective_display_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_display_R_java_lang_String, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"> \u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(745);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	sp += 1;
	if (temp0 == 0) goto label_8;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
	goto label_9;
label_8:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
label_9:;
	{
	jint temp0 = (jint)((func_mindustry_game_Objectives$Objective_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_Objectives$Objective, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_11;
label_10:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_scarlet;
label_11:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(747);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(748);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$6_mindustry_type_ItemStack_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$6", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(716);
	if ((clinit_mindustry_ui_dialogs_ResearchDialog(ctx), (jint)SF_mindustry_ui_dialogs_ResearchDialog_debugShowRequirements) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount) - ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_amount);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(719);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(720);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(721);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View_invoke_arc_func_Prov_3);
		proxy->F_field2 = (frame[5].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(725);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_10;
label_9:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_scarlet;
label_10:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(727);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(728);
	sp[0].o = frame[6].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(729);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = frame[7].o;
	jfloat temp1 = jfloat(0.75f);
	clinit_arc_math_Interp(ctx);
	sp[3].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction(ctx, sp[2].o, temp1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_scene_ui_Label_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(731);
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, (frame[6].o), (frame[7].o));
	}
label_15:;
	LINE_NUMBER(734);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$7_mindustry_type_ItemStack_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	LINE_NUMBER(722);
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[2].i));
	sp[0].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(temp1)));
	jlong temp2 = jlong((frame[2].i));
	LINE_NUMBER(723);
	sp[1].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, temp2);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001 / \u0001"_j.string, 2, sp[0].o, sp[1].o);
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$5_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(685);
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount) <= 0) goto label_1;
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

void SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$2_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(668);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$0_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuild$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ImageButton_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getWidth_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)((func_arc_scene_ui_ImageButton_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getHeight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, temp2, (temp3 + temp4), (10));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_moved = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$5_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$5", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(506);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i != 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_ImageButton_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(507);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[3].f = ((jfloat((temp0 % (jint(2))))) / (jfloat(2)));
	LINE_NUMBER(508);
	((func_arc_scene_ui_ImageButton_setPosition_float_float_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setPosition_float_float_int])(ctx, (frame[1].o), ((((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_x) + ((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panX)) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_y) + ((jfloat)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_panY)) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))) + (frame[3].f)), (jint(1)));
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp1 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp1 != 0) goto label_6;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonOver;
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_selectable_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
label_8:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonRed;
	goto label_7;
label_9:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_button;
label_7:;
	{
	sp -= 2;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp;
	sp[0].o = checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_selectable) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	sp += 1;
	goto label_12;
	}
label_11:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_lock;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp++;
label_12:;
	{
	sp -= 2;
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 != 0) goto label_14;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_15;
label_14:;
	{
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_selectable) == 0) goto label_16;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
	goto label_15;
label_16:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_gray;
label_15:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[1].o));
	((func_arc_scene_ui_Image_layout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_layout])(ctx, sp[0].o);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$4_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_arc_scene_event_Touchable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(502);
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_visible) != 0) goto label_1;
	}
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_disabled;
	goto label_2;
label_1:;
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_enabled;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$3_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(497);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode;
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(498);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode = (jref) (jobject(nullptr));
	LINE_NUMBER(499);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$2_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(491);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_visible) == 0) goto label_1;
	}
	{
	LINE_NUMBER(492);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode = (jref) (frame[1].o);
	LINE_NUMBER(493);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$1_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(464);
	if (((jint)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_moved) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(466);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	{
	LINE_NUMBER(467);
	((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_hoverNode = (jref) (frame[1].o);
	LINE_NUMBER(468);
	((func_mindustry_ui_dialogs_ResearchDialog$View_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_infoTable;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getRight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getRight_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(470);
	jfloat temp1 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare(temp1, (jfloat(temp2)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(471);
	jfloat temp0 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[4].f = (temp0 - (jfloat(temp1)));
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_ResearchDialog$View$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$View$1);
	init_mindustry_ui_dialogs_ResearchDialog$View$1_mindustry_ui_dialogs_ResearchDialog$View_float(ctx, sp[1].o, (frame[0].o), (frame[4].f));
	((func_mindustry_ui_dialogs_ResearchDialog$View_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(484);
	goto label_10;
label_2:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$View *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog_locked_mindustry_content_TechTree$TechNode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[2].o)))->F_node;
	((func_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$0_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View:lambda$rebuildAll$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_visible);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$View[] {
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
	(void *) M_arc_scene_Group_draw,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_childrenChanged,
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
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_clamp,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_rebuild,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$12,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$1_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$10_mindustry_content_TechTree$TechNode_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$9_mindustry_content_TechTree$TechNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$3_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$4_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$6_mindustry_type_ItemStack_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$7_mindustry_type_ItemStack_int_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$0_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$6,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$5_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$3_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$2_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$1_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
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
	{ "rebuildAll", "()V" },
	{ "clamp", "()V" },
	{ "canSpend", "(Lmindustry/content/TechTree$TechNode;)Z" },
	{ "spend", "(Lmindustry/content/TechTree$TechNode;)V" },
	{ "unlock", "(Lmindustry/content/TechTree$TechNode;)V" },
	{ "rebuild", "()V" },
	{ "rebuild", "([Z)V" },
	{ "lambda$rebuild$12", "()V" },
	{ "lambda$rebuild$1", "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$10", "(Lmindustry/content/TechTree$TechNode;Larc/scene/ui/TextButton;)Z" },
	{ "lambda$rebuild$9", "(Lmindustry/content/TechTree$TechNode;)V" },
	{ "lambda$rebuild$3", "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$4", "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$6", "(Lmindustry/type/ItemStack;Lmindustry/type/ItemStack;ZLarc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$7", "(Lmindustry/type/ItemStack;I)Ljava/lang/CharSequence;" },
	{ "lambda$rebuild$0", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$rebuildAll$6", "()V" },
	{ "lambda$rebuildAll$5", "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V" },
	{ "lambda$rebuildAll$3", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$rebuildAll$2", "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V" },
	{ "lambda$rebuildAll$1", "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V" },
};

static FieldMetadata fields[] {
	{ "panX", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_panX), "F", 1 },
	{ "panY", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_panY), "F", 1 },
	{ "lastZoom", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_lastZoom), "F", 1 },
	{ "moved", &class_boolean, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_moved), "Z", 1 },
	{ "hoverNode", &class_arc_scene_ui_ImageButton, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_hoverNode), "Larc/scene/ui/ImageButton;", 1 },
	{ "infoTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_infoTable), "Larc/scene/ui/layout/Table;", 1 },
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$View, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$View_mindustry_ui_dialogs_ResearchDialog, 0, "(Lmindustry/ui/dialogs/ResearchDialog;)V", 1 },
	{ "rebuildAll", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuildAll, "()V", 1 },
	{ "clamp", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_clamp, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_clamp, "()V", 0 },
	{ "canSpend", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_canSpend_mindustry_content_TechTree$TechNode_R_boolean, "(Lmindustry/content/TechTree$TechNode;)Z", 0 },
	{ "spend", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_spend_mindustry_content_TechTree$TechNode, "(Lmindustry/content/TechTree$TechNode;)V", 0 },
	{ "unlock", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_unlock_mindustry_content_TechTree$TechNode, "(Lmindustry/content/TechTree$TechNode;)V", 0 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_rebuild, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild, "()V", 0 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_rebuild_Array1_boolean, "([Z)V", 0 },
	{ "drawChildren", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_drawChildren, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_drawChildren, "()V", 1 },
	{ "lambda$rebuild$12", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$12, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$12, "()V", 4098 },
	{ "lambda$rebuild$11", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$11_mindustry_content_TechTree$TechNode_arc_scene_ui_layout_Table, 0, "(Lmindustry/content/TechTree$TechNode;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$1_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$1_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$10", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$10_mindustry_content_TechTree$TechNode_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$10_mindustry_content_TechTree$TechNode_arc_scene_ui_TextButton_R_boolean, "(Lmindustry/content/TechTree$TechNode;Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$rebuild$9", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$9_mindustry_content_TechTree$TechNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$9_mindustry_content_TechTree$TechNode, "(Lmindustry/content/TechTree$TechNode;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$3_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$3_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$4", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$4_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$4_boolean_mindustry_content_TechTree$TechNode_Array1_boolean_arc_scene_ui_layout_Table, "(ZLmindustry/content/TechTree$TechNode;[ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$8_mindustry_content_TechTree$TechNode_arc_scene_ui_layout_Table, 0, "(Lmindustry/content/TechTree$TechNode;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$6_mindustry_type_ItemStack_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$6_mindustry_type_ItemStack_mindustry_type_ItemStack_boolean_arc_scene_ui_layout_Table, "(Lmindustry/type/ItemStack;Lmindustry/type/ItemStack;ZLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$7", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$7_mindustry_type_ItemStack_int_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$7_mindustry_type_ItemStack_int_R_java_lang_CharSequence, "(Lmindustry/type/ItemStack;I)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$5_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$rebuild$2", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$2_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/content/TechTree$TechNode;)V", 4106 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$0_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuild$0_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$rebuildAll$6", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$6, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$6, "()V", 4098 },
	{ "lambda$rebuildAll$5", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$5_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$5_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V", 4098 },
	{ "lambda$rebuildAll$4", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$4_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_arc_scene_event_Touchable, 0, "(Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)Larc/scene/event/Touchable;", 4106 },
	{ "lambda$rebuildAll$3", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$3_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$3_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$rebuildAll$2", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$2_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$2_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V", 4098 },
	{ "lambda$rebuildAll$1", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$1_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$1_arc_scene_ui_ImageButton_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, "(Larc/scene/ui/ImageButton;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V", 4098 },
	{ "lambda$rebuildAll$0", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$View_lambda$rebuildAll$0_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_boolean, 0, "(Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)Z", 4106 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$View{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$View",
		.parentClass = (intptr_t) &class_arc_scene_Group,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$View),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$View,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$View,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$View,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_ResearchDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 171,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$View = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$View);

}

