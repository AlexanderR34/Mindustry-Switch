#include "mindustry/ui/dialogs/ModBrowserDialog.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/core/Version.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Nullable.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/Http_HttpResponse.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_1.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/util/Date.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_20.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_21.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_22.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_23.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Func_7.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Func_6.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Func_5.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Func_4.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_13.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_14.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_16.h"
#include "arc/util/Http.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_17.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_18.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Cons_19.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/ModsDialog.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_19.h"
#include "arc/func/ConsT.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_18.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_16.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_15.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_14.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Boolf_5.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_24.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Boolf_4.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_23.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_21.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_20.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Boolf_3.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "arc/scene/ui/Tooltip.h"
#include "mindustry/mod/ModListing.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_ConsT_1.h"
#include "mindustry/ui/dialogs/ModBrowserDialog.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/text/SimpleDateFormat.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_invoke_arc_func_Prov_1.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_ui_dialogs_ModBrowserDialog(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_ModBrowserDialog *) object;
	if (self->F_browserTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_browserTable)->clazz)->markFunction)((jobject) self->F_browserTable, mark, depth + 1);
	if (self->F_searchtxt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchtxt)->clazz)->markFunction)((jobject) self->F_searchtxt, mark, depth + 1);
	if (self->F_modList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modList)->clazz)->markFunction)((jobject) self->F_modList, mark, depth + 1);
	if (self->F_fetchCallbacks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fetchCallbacks)->clazz)->markFunction)((jobject) self->F_fetchCallbacks, mark, depth + 1);
	if (self->F_textureCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureCache)->clazz)->markFunction)((jobject) self->F_textureCache, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ModBrowserDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_ModBrowserDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@mods.browser"_j))));
	LINE_NUMBER(31);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_searchtxt = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_fetchCallbacks = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_orderDate = (jint(1));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(0);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(60);
	((func_mindustry_ui_dialogs_ModBrowserDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((func_mindustry_ui_dialogs_ModBrowserDialog_makeButtonOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_makeButtonOverlay])(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModBrowserDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModBrowserDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:getCachedMod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_modList;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_modList;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_ModListing, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:getModList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_modList;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_modList;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(83);
	if (((jint)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchingMods) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(85);
	((func_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:getModListInternal", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modJsonURLs;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(92);
	clinit_arc_util_serialization_Json(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Json);
	init_arc_util_serialization_Json(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(93);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchingMods = (jint(1));
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modJsonURLs;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_ConsT_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_ConsT_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_ConsT_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_14);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_downloadDependencies_arc_struct_Seq_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:downloadDependencies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_15);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:displayDependencyImportStatus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	clinit_mindustry_ui_dialogs_ModBrowserDialog$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$1);
	init_mindustry_ui_dialogs_ModBrowserDialog$1_mindustry_ui_dialogs_ModBrowserDialog_java_lang_String_arc_struct_Seq_arc_struct_Seq(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[2].o), (frame[1].o));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModBrowserDialog$1_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog$1_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:rebuildBrowser", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_asSet_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_asSet_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@loading"_j))));
	LINE_NUMBER(213);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(480.0f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp1 / temp2), (jfloat(1)));
	frame[2].i = (jint(temp3));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_16);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$1_arc_struct_ObjectSet_int_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(217);
	frame[4].i = (jint(0));
	LINE_NUMBER(219);
	frame[5].o = (frame[3].o);
	LINE_NUMBER(220);
	if (((jint)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_orderDate) != 0) goto label_4;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(222);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_ModListing, sp[0].o));
	LINE_NUMBER(226);
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[7].o)))->F_hasJava) != 0) goto label_10;
	}
	{
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[7].o)))->F_hasScripts) == 0) goto label_11;
	}
	{
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[7].o)))->F_iosCompatible) != 0) goto label_11;
	}
label_10:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_ios;
	if ((--sp)->i != 0) goto label_7;
label_11:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_searchtxt;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[7].o)))->F_name;
	LINE_NUMBER(227);
	jint temp0 = (jint)SM_arc_util_Strings_matches_java_lang_String_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_searchtxt;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[7].o)))->F_repo;
	jint temp0 = (jint)SM_arc_util_Strings_matches_java_lang_String_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	LINE_NUMBER(228);
	goto label_7;
label_13:;
	{
	LINE_NUMBER(230);
	frame[8].f = (jfloat(64.0f));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_17);
		proxy->F_field3 = (frame[8].f);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_grayt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(438.0f);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[8].f) + (jfloat(16.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(362);
	INST_IINC(4, 1);
	if (((frame[4].i) % (frame[2].i)) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_18:;
	LINE_NUMBER(363);
	goto label_7;
label_8:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$4_mindustry_mod_ModListing(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_name;
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(336);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(150.0f)), (jfloat(54.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(342);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.add"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.reinstall"_j));
label_8:;
	{
	sp -= 2;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_17);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(348);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.github.open"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.view-releases"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_zoom;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(357);
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(358);
	sp[0].o = frame[1].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$10_mindustry_mod_ModListing(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(356);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_mods;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_repo;
	((func_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_viewReleases_java_lang_String_boolean_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_hasJava), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$9_mindustry_mod_ModListing(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(353);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_repo;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"https://github.com/\u0001"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Application_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$8_mindustry_ui_dialogs_BaseDialog_mindustry_mod_ModListing(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(344);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_mods;
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_mindustry_mod_ModListing])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$7_mindustry_mod_ModListing_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_repo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_repo;
	sp[1].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$6_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(338);
	((func_mindustry_ui_dialogs_BaseDialog_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_clear])(ctx, (frame[0].o));
	LINE_NUMBER(339);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$5_mindustry_mod_ModListing_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_description;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"editor.author"_j))));
	sp[3].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_author;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n\n[accent]\u0001[lightgray] \u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	(sp++)->f = jfloat(400.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(500.0f);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)), (8));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$3_mindustry_mod_ModListing_arc_struct_ObjectSet_float_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$3", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(0)));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_repo;
	frame[5].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_dialogs_ModBrowserDialog$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2);
	init_mindustry_ui_dialogs_ModBrowserDialog$2_mindustry_ui_dialogs_ModBrowserDialog_arc_struct_ObjectSet_java_lang_String_mindustry_mod_ModListing(ctx, sp[1].o, (frame[0].o), (frame[2].o), (frame[5].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[3].f;
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(324);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_repo;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp1 == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mod.installed"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n[lightgray]\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	{
	jint temp0 = (jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_stars;
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_minGameVersion;
	jint temp1 = (jint)SM_mindustry_core_Version_isAtLeast_java_lang_String_R_boolean(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != 0) goto label_11;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mod.requiresversion"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_minGameVersion;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(328);
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_hasJava) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_minGameVersion;
	jdouble temp0 = (jdouble)SM_arc_util_Strings_parseDouble_java_lang_String_double_R_double(ctx, sp[0].o, (jdouble(0)));
	if ((doubleCompare(temp0, (jdouble(154.0)), 1)) >= 0) goto label_13;
	}
	{
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_legacyCompatible) != 0) goto label_13;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mod.incompatiblemod"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_12:;
	{
	sp -= 4;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\u0001\n[lightgray]\ue809 \u0001\u0001"_j.string, 4, sp[0].o, sp[1].o, boxInteger(ctx, sp[2].i), sp[3].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(358.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(2)), (jfloat(4.0f)), (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (10));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$2_mindustry_mod_ModListing_R_java_lang_Integer(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_stars)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$0_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$rebuildBrowser$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$0_arc_struct_Seq_arc_struct_Seq_arc_func_Cons_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$downloadDependencies$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(149);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(150);
	((func_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$2_arc_struct_Seq_mindustry_mod_ModListing(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$downloadDependencies$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_internalName;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_mods;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_repo;
	((func_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_githubImportMod_java_lang_String_boolean_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_hasJava), (jint(1)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$1_arc_struct_Seq_mindustry_mod_ModListing_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$downloadDependencies$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_internalName;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$6_int_java_lang_Throwable(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(127);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modJsonURLs;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(128);
	((func_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(130);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$7_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(132);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchingMods = (jint(0));
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_mods;
	((func_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModsDialog_showModError_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(134);
	((func_mindustry_ui_dialogs_ModBrowserDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$0_arc_util_serialization_Json_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_arc_struct_Seq)), (((jobject) &class_mindustry_mod_ModListing)), (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(101);
	clinit_java_text_SimpleDateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	init_java_text_SimpleDateFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yyyy-MM-dd'T'HH:mm:ss'Z'"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(102);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_6(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_6);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_7(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Func_7);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(111);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_23);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(125);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(118);
	frame[4].o = sp[0].o;
	LINE_NUMBER(119);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[4].o));
	LINE_NUMBER(120);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_24);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$5_java_lang_Exception(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(122);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchingMods = (jint(0));
	LINE_NUMBER(123);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$3_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchingMods = (jint(0));
	LINE_NUMBER(113);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_modList = (jref) (frame[1].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchCallbacks;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_fetchCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$4_arc_struct_Seq_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(115);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$2_arc_func_Func_mindustry_mod_ModListing_R_java_util_Date(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_lastUpdated;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Date, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$1_java_text_SimpleDateFormat_java_lang_String_R_java_util_Date(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getModListInternal$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[2].o = sp[0].o;
	LINE_NUMBER(106);
	clinit_java_util_Date(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getCachedMod$0_java_lang_String_mindustry_mod_ModListing_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$getCachedMod$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[1].o)))->F_repo;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(58);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_browserTable = (jref) (frame[1].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(43);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_searchtxt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_list;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	jfloat temp0 = jfloat(32.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o);
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(52);
	jint temp1 = (jint)((func_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$5_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	if (((jint)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_orderDate) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.sortdate"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@mods.browser.sortstars"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$3_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_orderDate) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_list;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_star;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_orderDate) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_orderDate = sp[1].i;
	LINE_NUMBER(50);
	((func_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK((frame[0].o)))->F_searchtxt = (jref) (frame[1].o);
	LINE_NUMBER(46);
	((func_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser])(ctx, (frame[0].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_dialogs_ModBrowserDialog;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field modList
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getCachedMod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_ui_dialogs_ModBrowserDialog[] {
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
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_downloadDependencies_arc_struct_Seq_arc_func_Cons,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$1_arc_struct_ObjectSet_int_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$3_mindustry_mod_ModListing_arc_struct_ObjectSet_float_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$0_arc_struct_Seq_arc_struct_Seq_arc_func_Cons_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$6_int_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$7_java_lang_Throwable,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$0_arc_util_serialization_Json_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$5_java_lang_Exception,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$3_arc_struct_Seq,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$4_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$5_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$3_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$2,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$1_java_lang_String,
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
	{ "getCachedMod", "(Ljava/lang/String;)Lmindustry/mod/ModListing;" },
	{ "getModList", "(Larc/func/Cons;)V" },
	{ "getModListInternal", "(I)V" },
	{ "downloadDependencies", "(Larc/struct/Seq;Larc/func/Cons;)V" },
	{ "displayDependencyImportStatus", "(Larc/struct/Seq;Larc/struct/Seq;)V" },
	{ "rebuildBrowser", "()V" },
	{ "lambda$rebuildBrowser$1", "(Larc/struct/ObjectSet;ILarc/struct/Seq;)V" },
	{ "lambda$rebuildBrowser$3", "(Lmindustry/mod/ModListing;Larc/struct/ObjectSet;FLarc/scene/ui/Button;)V" },
	{ "lambda$downloadDependencies$0", "(Larc/struct/Seq;Larc/struct/Seq;Larc/func/Cons;Larc/struct/Seq;)V" },
	{ "lambda$getModListInternal$6", "(ILjava/lang/Throwable;)V" },
	{ "lambda$getModListInternal$7", "(Ljava/lang/Throwable;)V" },
	{ "lambda$getModListInternal$0", "(Larc/util/serialization/Json;Larc/util/Http$HttpResponse;)V" },
	{ "lambda$getModListInternal$5", "(Ljava/lang/Exception;)V" },
	{ "lambda$getModListInternal$3", "(Larc/struct/Seq;)V" },
	{ "lambda$new$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$4", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "()Ljava/lang/CharSequence;" },
	{ "lambda$new$3", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$1", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "browserTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_browserTable), "Larc/scene/ui/layout/Table;", 4 },
	{ "searchtxt", &class_java_lang_String, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_searchtxt), "Ljava/lang/String;", 4 },
	{ "modList", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_modList), "Larc/struct/Seq;", 4 },
	{ "fetchCallbacks", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_fetchCallbacks), "Larc/struct/Seq;", 4 },
	{ "orderDate", &class_boolean, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_orderDate), "Z", 4 },
	{ "fetchingMods", &class_boolean, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_fetchingMods), "Z", 4 },
	{ "textureCache", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_dialogs_ModBrowserDialog, F_textureCache), "Larc/struct/ObjectMap;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ModBrowserDialog, 0, "()V", 1 },
	{ "getCachedMod", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getCachedMod_java_lang_String_R_mindustry_mod_ModListing, "(Ljava/lang/String;)Lmindustry/mod/ModListing;", 1 },
	{ "getModList", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModList_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getModListInternal", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_getModListInternal_int, "(I)V", 4 },
	{ "downloadDependencies", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_downloadDependencies_arc_struct_Seq_arc_func_Cons, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_downloadDependencies_arc_struct_Seq_arc_func_Cons, "(Larc/struct/Seq;Larc/func/Cons;)V", 1 },
	{ "displayDependencyImportStatus", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_displayDependencyImportStatus_arc_struct_Seq_arc_struct_Seq, "(Larc/struct/Seq;Larc/struct/Seq;)V", 1 },
	{ "rebuildBrowser", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_rebuildBrowser, "()V", 4 },
	{ "lambda$rebuildBrowser$1", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$1_arc_struct_ObjectSet_int_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$1_arc_struct_ObjectSet_int_arc_struct_Seq, "(Larc/struct/ObjectSet;ILarc/struct/Seq;)V", 4098 },
	{ "lambda$rebuildBrowser$4", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$4_mindustry_mod_ModListing, 0, "(Lmindustry/mod/ModListing;)V", 4106 },
	{ "lambda$rebuildBrowser$10", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$10_mindustry_mod_ModListing, 0, "(Lmindustry/mod/ModListing;)V", 4106 },
	{ "lambda$rebuildBrowser$9", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$9_mindustry_mod_ModListing, 0, "(Lmindustry/mod/ModListing;)V", 4106 },
	{ "lambda$rebuildBrowser$8", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$8_mindustry_ui_dialogs_BaseDialog_mindustry_mod_ModListing, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/mod/ModListing;)V", 4106 },
	{ "lambda$rebuildBrowser$7", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$7_mindustry_mod_ModListing_mindustry_mod_Mods$LoadedMod_R_boolean, 0, "(Lmindustry/mod/ModListing;Lmindustry/mod/Mods$LoadedMod;)Z", 4106 },
	{ "lambda$rebuildBrowser$6", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$6_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuildBrowser$5", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$5_mindustry_mod_ModListing_arc_scene_ui_layout_Table, 0, "(Lmindustry/mod/ModListing;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuildBrowser$3", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$3_mindustry_mod_ModListing_arc_struct_ObjectSet_float_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$3_mindustry_mod_ModListing_arc_struct_ObjectSet_float_arc_scene_ui_Button, "(Lmindustry/mod/ModListing;Larc/struct/ObjectSet;FLarc/scene/ui/Button;)V", 4098 },
	{ "lambda$rebuildBrowser$2", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$2_mindustry_mod_ModListing_R_java_lang_Integer, 0, "(Lmindustry/mod/ModListing;)Ljava/lang/Integer;", 4106 },
	{ "lambda$rebuildBrowser$0", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$rebuildBrowser$0_mindustry_mod_Mods$LoadedMod_R_java_lang_String, 0, "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;", 4106 },
	{ "lambda$downloadDependencies$0", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$0_arc_struct_Seq_arc_struct_Seq_arc_func_Cons_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$0_arc_struct_Seq_arc_struct_Seq_arc_func_Cons_arc_struct_Seq, "(Larc/struct/Seq;Larc/struct/Seq;Larc/func/Cons;Larc/struct/Seq;)V", 4098 },
	{ "lambda$downloadDependencies$2", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$2_arc_struct_Seq_mindustry_mod_ModListing, 0, "(Larc/struct/Seq;Lmindustry/mod/ModListing;)V", 4106 },
	{ "lambda$downloadDependencies$1", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$downloadDependencies$1_arc_struct_Seq_mindustry_mod_ModListing_R_boolean, 0, "(Larc/struct/Seq;Lmindustry/mod/ModListing;)Z", 4106 },
	{ "lambda$getModListInternal$6", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$6_int_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$6_int_java_lang_Throwable, "(ILjava/lang/Throwable;)V", 4098 },
	{ "lambda$getModListInternal$7", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$7_java_lang_Throwable, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$7_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$getModListInternal$0", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$0_arc_util_serialization_Json_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$0_arc_util_serialization_Json_arc_util_Http$HttpResponse, "(Larc/util/serialization/Json;Larc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$getModListInternal$5", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$5_java_lang_Exception, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$5_java_lang_Exception, "(Ljava/lang/Exception;)V", 4098 },
	{ "lambda$getModListInternal$3", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$3_arc_struct_Seq, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$3_arc_struct_Seq, "(Larc/struct/Seq;)V", 4098 },
	{ "lambda$getModListInternal$4", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$4_arc_struct_Seq_arc_func_Cons, 0, "(Larc/struct/Seq;Larc/func/Cons;)V", 4106 },
	{ "lambda$getModListInternal$2", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$2_arc_func_Func_mindustry_mod_ModListing_R_java_util_Date, 0, "(Larc/func/Func;Lmindustry/mod/ModListing;)Ljava/util/Date;", 4106 },
	{ "lambda$getModListInternal$1", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getModListInternal$1_java_text_SimpleDateFormat_java_lang_String_R_java_util_Date, 0, "(Ljava/text/SimpleDateFormat;Ljava/lang/String;)Ljava/util/Date;", 4106 },
	{ "lambda$getCachedMod$0", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog_lambda$getCachedMod$0_java_lang_String_mindustry_mod_ModListing_R_boolean, 0, "(Ljava/lang/String;Lmindustry/mod/ModListing;)Z", 4106 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$6_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$4_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$4_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$5_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$5_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$3_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$3_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$2, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$1_java_lang_String, VTABLE_mindustry_ui_dialogs_ModBrowserDialog_lambda$new$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_ui_dialogs_ModBrowserDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ModBrowserDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_ModBrowserDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ModBrowserDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ModBrowserDialog,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ModBrowserDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 318,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ModBrowserDialog = registerClass(&class_mindustry_ui_dialogs_ModBrowserDialog);

}
