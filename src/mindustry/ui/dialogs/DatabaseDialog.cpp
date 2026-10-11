#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_10.h"
#include "arc/Input.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_11.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Intf_1.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_14.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_15.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Cons_9.h"
#include "arc/Settings.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/func/Boolf.h"
#include "java/util/Locale.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/scene/ui/Tooltip.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Structs.h"
#include "arc/util/Time.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Boolf_5.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Boolf_3.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_arc_func_Boolf_4.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/content/Planets.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ui/dialogs/DatabaseDialog_1.h"
#include "arc/struct/OrderedMap.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/event/HandCursorListener.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/dialogs/DatabaseDialog.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_java_lang_Runnable_9.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_java_lang_Runnable_8.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/scene/event/ClickListener.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_java_lang_Runnable_5.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_java_lang_Runnable_7.h"
#include "mindustry/ui/dialogs/DatabaseDialog_invoke_java_lang_Runnable_6.h"

extern "C" {


void mark_mindustry_ui_dialogs_DatabaseDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_DatabaseDialog *) object;
	if (self->F_sortedContents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sortedContents)->clazz)->markFunction)((jobject) self->F_sortedContents, mark, depth + 1);
	if (self->F_tmpCategory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpCategory)->clazz)->markFunction)((jobject) self->F_tmpCategory, mark, depth + 1);
	if (self->F_search)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_search)->clazz)->markFunction)((jobject) self->F_search, mark, depth + 1);
	if (self->F_all)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_all)->clazz)->markFunction)((jobject) self->F_all, mark, depth + 1);
	if (self->F_allTabs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allTabs)->clazz)->markFunction)((jobject) self->F_allTabs, mark, depth + 1);
	if (self->F_tab)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tab)->clazz)->markFunction)((jobject) self->F_tab, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_DatabaseDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_DatabaseDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@database"_j))));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_sortedContents = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_tmpCategory = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_tab = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_ui_dialogs_BaseDialog *) NULL_CHECK((frame[0].o)))->F_shouldPause = (jint(1));
	LINE_NUMBER(41);
	((func_mindustry_ui_dialogs_DatabaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_DatabaseDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_DatabaseDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(30.0f)));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[1].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_checkTabList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:checkTabList", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_allTabs;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(69);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(73);
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_11;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[8].o)));
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_databaseTabs;
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	LINE_NUMBER(76);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(71);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_allTabs = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_allTabs;
	jint temp0 = jint(0);
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_1:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_sortContents(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:sortContents", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	((func_arc_struct_OrderedMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(86);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(88);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_9;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[7].o)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_databaseCategory;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(8);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_databaseCategory;
label_12:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_databaseTag;
	if (sp[0].o != nullptr) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"default"_j));
	goto label_15;
label_14:;
	INST_ALOAD(8);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_databaseTag;
label_15:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	sp[1].o = frame[9].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[11].o = (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[11].o;
	sp[1].o = frame[10].o;
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[12].o), (frame[8].o));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[11].o), (frame[10].o), (frame[12].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[9].o), (frame[11].o));
	}
label_9:;
	LINE_NUMBER(99);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(86);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:rebuild", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	((func_mindustry_ui_dialogs_DatabaseDialog_checkTabList) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_checkTabList])(ctx, (frame[0].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_search;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(123);
	frame[2].i = (jint(0));
	LINE_NUMBER(125);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	if (temp0 >= ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_sortedContents;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	((func_arc_struct_OrderedMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(131);
	frame[6].i = (jint(0));
	LINE_NUMBER(133);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_ObjectMap *) NULL_CHECK((frame[5].o)))->F_size)) goto label_15;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), (frame[8].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_20;
	}
	goto label_21;
label_20:;
	{
	LINE_NUMBER(141);
	frame[2].i = (jint(1));
	LINE_NUMBER(142);
	frame[6].i = (jint(1));
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Intf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[8].o), (frame[9].o));
	}
label_21:;
	{
	LINE_NUMBER(133);
	INST_IINC(7, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_26;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_27;
	goto label_26;
label_27:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@database-category.\u0001"_j.string, 1, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(125);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(238);
	if ((frame[2].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@none.found"_j))));
	}
label_34:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:unlocked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlocked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlocked_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$6", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	if (temp0 >= ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tmpCategory;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(163);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"default"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"default"_j))), (frame[3].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(4.0f);
	jfloat temp1 = jfloat(8.0f);
	jfloat temp2 = jfloat(4.0f);
	jfloat temp3 = jfloat(8.0f);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(160);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$8_arc_struct_Seq_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$8", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(176);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(30.0f)));
	jfloat temp3 = temp1 - temp2;
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(44.0f)));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp3 / temp4), (jfloat(1)), (jfloat(22.0f)));
	frame[3].i = (jint(temp5));
	LINE_NUMBER(177);
	frame[4].i = (jint(0));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_9;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_10;
label_9:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
label_10:;
	{
	sp -= 4;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[0].o, sp[2].o, sp[3].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_11;
	}
label_7:;
	{
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_lock;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_gray;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(183);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[7].o);
	jint temp0 = jint(1);
	clinit_mindustry_ui_dialogs_DatabaseDialog$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog$1);
	init_mindustry_ui_dialogs_DatabaseDialog$1_mindustry_ui_dialogs_DatabaseDialog_mindustry_ctype_UnlockableContent(ctx, sp[2].o, (frame[0].o), (frame[6].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(32.0f);
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(199);
	clinit_arc_scene_event_ClickListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_ClickListener);
	init_arc_scene_event_ClickListener(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(200);
	jint temp2 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(201);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[7].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_7);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	sp[0].o = frame[7].o;
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(218);
	INST_IINC(4, 1);
	if (((frame[4].i) % (frame[3].i)) != 0) goto label_23;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_23:;
	LINE_NUMBER(221);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(223);
	frame[5].i = (jint(0));
	}
label_25:;
	{
	if ((frame[5].i) >= ((frame[3].i) - (frame[4].i))) goto label_26;
	}
	{
	LINE_NUMBER(224);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = frame[6].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(223);
	INST_IINC(5, 1);
	goto label_25;
	}
label_26:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$11_mindustry_ctype_UnlockableContent_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$11", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	sp += 2;
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n[gray]\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$10_mindustry_ctype_UnlockableContent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(208);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(209);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar(temp0))));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(212);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$9_arc_scene_ui_Image_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(0.4f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$7_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@database-tag.\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$5_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$4_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_hideDatabase) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tab;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	if (((jint)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_allDatabaseTabs) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_databaseTabs;
	sp[1].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tab;
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_localizedName;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
label_5:;
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	frame[2].i = (jint(0));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_allTabs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	sp[1].o = frame[4].o;
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_sun;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeSmall;
	goto label_6;
label_5:;
	{
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_Planet)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Planet, (frame[4].o)));
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_icon;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_commandRally;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Boolf_5);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[4].o;
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_sun;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@all"_j));
	goto label_11;
label_10:;
	INST_ALOAD(4);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_localizedName;
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	INST_IINC(2, 1);
	if (((frame[2].i) % (10)) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_13:;
	LINE_NUMBER(120);
	goto label_2;
label_3:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$3_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_DatabaseDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_type_Planet)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Planet, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_iconColor;
	sp += 1;
	goto label_3;
	}
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$2_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tab;
	if (sp[0].o != (frame[1].o)) goto label_1;
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

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$1_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$rebuild$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_tab = (jref) (frame[1].o);
	LINE_NUMBER(114);
	((func_mindustry_ui_dialogs_DatabaseDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_DatabaseDialog_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_search = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_search;
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((func_mindustry_ui_dialogs_DatabaseDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_rebuild])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/DatabaseDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	((func_mindustry_ui_dialogs_DatabaseDialog_checkTabList) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_checkTabList])(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((func_mindustry_ui_dialogs_DatabaseDialog_sortContents) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_sortContents])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_allTabs;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_tab = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK((frame[0].o)))->F_allTabs;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_ui_dialogs_DatabaseDialog *) NULL_CHECK(sp[0].o))->F_tab = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(51);
	((func_mindustry_ui_dialogs_DatabaseDialog_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_DatabaseDialog_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_DatabaseDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field allTabs
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ui_dialogs_DatabaseDialog[] {
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
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_checkTabList,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_sortContents,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_rebuild,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$8_arc_struct_Seq_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$4_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$2_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$1_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$2_java_lang_String,
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
	{ "checkTabList", "()V" },
	{ "sortContents", "()V" },
	{ "rebuild", "()V" },
	{ "unlocked", "(Lmindustry/ctype/UnlockableContent;)Z" },
	{ "lambda$rebuild$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$8", "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$4", "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;)Z" },
	{ "lambda$rebuild$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$2", "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$rebuild$1", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "lambda$new$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$2", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "sortedContents", &class_arc_struct_OrderedMap, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_sortedContents), "Larc/struct/OrderedMap;", 18 },
	{ "tmpCategory", &class_arc_struct_OrderedMap, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_tmpCategory), "Larc/struct/OrderedMap;", 18 },
	{ "search", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_search), "Larc/scene/ui/TextField;", 2 },
	{ "all", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_all), "Larc/scene/ui/layout/Table;", 2 },
	{ "allTabs", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_allTabs), "Larc/struct/Seq;", 2 },
	{ "tab", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_ui_dialogs_DatabaseDialog, F_tab), "Lmindustry/ctype/UnlockableContent;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_DatabaseDialog, 0, "()V", 1 },
	{ "checkTabList", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_checkTabList, VTABLE_mindustry_ui_dialogs_DatabaseDialog_checkTabList, "()V", 0 },
	{ "sortContents", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_sortContents, VTABLE_mindustry_ui_dialogs_DatabaseDialog_sortContents, "()V", 0 },
	{ "rebuild", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_rebuild, VTABLE_mindustry_ui_dialogs_DatabaseDialog_rebuild, "()V", 0 },
	{ "unlocked", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean, VTABLE_mindustry_ui_dialogs_DatabaseDialog_unlocked_mindustry_ctype_UnlockableContent_R_boolean, "(Lmindustry/ctype/UnlockableContent;)Z", 0 },
	{ "lambda$rebuild$6", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$6_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$8", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$8_arc_struct_Seq_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$8_arc_struct_Seq_arc_scene_ui_layout_Table, "(Larc/struct/Seq;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$11", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$11_mindustry_ctype_UnlockableContent_arc_scene_ui_layout_Table, 0, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$10", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$10_mindustry_ctype_UnlockableContent, 0, "(Lmindustry/ctype/UnlockableContent;)V", 4106 },
	{ "lambda$rebuild$9", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$9_arc_scene_ui_Image_arc_scene_event_ClickListener, 0, "(Larc/scene/ui/Image;Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$rebuild$7", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$7_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$5_mindustry_ctype_UnlockableContent_R_int, 0, "(Lmindustry/ctype/UnlockableContent;)I", 4106 },
	{ "lambda$rebuild$4", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$4_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$4_java_lang_String_mindustry_ctype_UnlockableContent_R_boolean, "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;)Z", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$3", (intptr_t) SM_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$3_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton, 0, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$2_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$2_mindustry_ctype_UnlockableContent_arc_scene_ui_ImageButton_R_boolean, "(Lmindustry/ctype/UnlockableContent;Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$1_mindustry_ctype_UnlockableContent, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$rebuild$1_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$new$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$2_java_lang_String, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$new$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_DatabaseDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_DatabaseDialog_lambda$new$0, "()V", 4098 },
};

Class class_mindustry_ui_dialogs_DatabaseDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/DatabaseDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_DatabaseDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_DatabaseDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_DatabaseDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_DatabaseDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 309,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_DatabaseDialog = registerClass(&class_mindustry_ui_dialogs_DatabaseDialog);

}
