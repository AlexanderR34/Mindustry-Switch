#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Cons_7.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Cons_6.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Cons_5.h"
#include "arc/graphics/Color.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Cons_9.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Cons_8.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/event/Touchable.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Boolc.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/scene/ui/Label.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "arc/func/Cons.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Prov_3.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_arc_func_Prov_2.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Mover.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/editor/MapObjectivesDialog_FieldInterpreter.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_java_lang_Runnable_2.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/editor/MapObjectivesDialog_TypeInfo.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) object;
	if (self->F_obj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_obj)->clazz)->markFunction)((jobject) self->F_obj, mark, depth + 1);
	if (self->F_mover)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mover)->clazz)->markFunction)((jobject) self->F_mover, mark, depth + 1);
	if (self->F_conParent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_conParent)->clazz)->markFunction)((jobject) self->F_conParent, mark, depth + 1);
	if (self->F_conChildren)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_conChildren)->clazz)->markFunction)((jobject) self->F_conChildren, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(347);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(348);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (frame[2].o);
	LINE_NUMBER(349);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(350);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setClip_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector);
	init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_boolean(ctx, sp[2].o, (frame[0].o), (jint(1)));
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_conParent = (jref) sp[2].o;
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp2 = temp0 / temp1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp3 = ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize) * (jfloat(2));
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2, (temp3 / temp4));
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_5);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(386);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp5 = (jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize;
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((temp5 / temp6) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o);
	sp[1].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover);
	init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx, sp[2].o, (frame[0].o));
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_mover = (jref) sp[2].o;
	jint temp7 = (jint)((func_arc_scene_ui_layout_Table_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector);
	init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_boolean(ctx, sp[2].o, (frame[0].o), (jint(0)));
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK(sp[1].o))->F_conChildren = (jref) sp[2].o;
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp8 = (jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize;
	jfloat temp9 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp10 = temp8 / temp9;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp11 = (jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize;
	jfloat temp12 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp10, ((temp11 / temp12) * (jfloat(2))));
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jfloat temp13 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp14 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_setSize_float_float])(ctx, sp[0].o, temp13, temp14);
	LINE_NUMBER(390);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:pos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj;
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_editorX = (frame[1].i);
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj;
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_editorY = (frame[2].i);
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[1].i));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[1].o))->F_this$0;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize));
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	jfloat temp1 = jfloat((frame[2].i));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[1].o))->F_this$0;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_unitSize));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:getPrefWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	jfloat temp0 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_this$0;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:getPrefHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	jfloat temp0 = jfloat(2);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_this$0;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	jint temp0 = (jint)M_arc_scene_Element_remove_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(418);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(419);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[1].o)))(ctx, (frame[1].o));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[2].o)))->F_parents;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(423);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$0_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[1].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	frame[4].f = ((((temp0 / temp1) - (jfloat(32.0f))) / (jfloat(2))) - (jfloat(4.0f)));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (frame[4].f));
	LINE_NUMBER(356);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_layout_Table_touchable_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_touchable_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(357);
	sp[0].o = frame[3].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(359);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o);
	jint temp2 = 8;
	LINE_NUMBER(362);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, temp2);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(366);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_6);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$2_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(369);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(384);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trashSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$8_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$3_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(370);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.objectives"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_noBarPane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(381);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$4_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = (jfloat(temp0)) * (jfloat(0.95f));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = temp1 / temp2;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(20.0f)));
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp3 - temp4), (jfloat(700.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp5);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$5_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(0)));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	LINE_NUMBER(374);
	sp[2].o = (jobject)((func_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String])(ctx, sp[2].o);
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[4].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[3].o, sp[4].o);
	sp[4].o = jobject(nullptr);
	sp[5].o = jobject(nullptr);
	sp[6].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_invoke_arc_func_Cons_9);
		sp[8].o = (jobject) proxy;
	}
	LINE_NUMBER(373);
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$7_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = param0;
	LINE_NUMBER(377);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$6_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$1_R_arc_scene_event_Touchable(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile:lambda$new$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	{
	LINE_NUMBER(356);
	clinit_arc_scene_event_Touchable(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile[] {
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
	(void *) M_arc_scene_ui_layout_Table_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean,
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
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float,
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
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$0_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$2_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$8_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
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
	{ "pos", "(II)V" },
	{ "lambda$new$0", "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;Lmindustry/game/MapObjectives$MapObjective;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$2", "(Lmindustry/game/MapObjectives$MapObjective;Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$8", "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector,
	&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover,
};

static FieldMetadata fields[] {
	{ "obj", &class_mindustry_game_MapObjectives$MapObjective, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, F_obj), "Lmindustry/game/MapObjectives$MapObjective;", 17 },
	{ "mover", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, F_mover), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Mover;", 17 },
	{ "conParent", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, F_conParent), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector;", 17 },
	{ "conChildren", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, F_conChildren), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector;", 17 },
	{ "this$1", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, F_this$1), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_int_int, 0, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;Lmindustry/game/MapObjectives$MapObjective;II)V", 1 },
	{ "pos", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int, "(II)V", 1 },
	{ "getPrefWidth", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_getPrefHeight_R_float, "()F", 1 },
	{ "remove", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean, "()Z", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$0_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$0_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;Lmindustry/game/MapObjectives$MapObjective;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$2_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_arc_scene_ui_layout_Table, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$2_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_arc_scene_ui_layout_Table, "(Lmindustry/game/MapObjectives$MapObjective;Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$8_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$8_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap;)V", 4098 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$3_mindustry_game_MapObjectives$MapObjective, 0, "(Lmindustry/game/MapObjectives$MapObjective;)V", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$4_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/MapObjectives$MapObjective;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$5_mindustry_game_MapObjectives$MapObjective_arc_scene_ui_layout_Table, 0, "(Lmindustry/game/MapObjectives$MapObjective;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$7_mindustry_game_MapObjectives$MapObjective, 0, "(Lmindustry/game/MapObjectives$MapObjective;)V", 4106 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$6_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective, 0, "(Lmindustry/game/MapObjectives$MapObjective;)Lmindustry/game/MapObjectives$MapObjective;", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_lambda$new$1_R_arc_scene_event_Touchable, 0, "()Larc/scene/event/Touchable;", 4106 },
};

Class class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 259,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile = registerClass(&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile);

}

