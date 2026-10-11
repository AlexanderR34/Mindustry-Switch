#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_43.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_46.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_40.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_41.h"
#include "arc/func/Boolp.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_47.h"
#include "java/lang/Runnable.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Boolf_1.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_49.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "arc/Settings.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_55.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_54.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_57.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_51.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_52.h"
#include "arc/util/Time.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_58.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontData.h"
#include "arc/util/Http_HttpResponse.h"
#include "arc/scene/ui/layout/Collapser.h"
#include "arc/util/Http_HttpRequest.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/dialogs/PaletteDialog.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_76.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_77.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_78.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_79.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_72.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_73.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_74.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_75.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_70.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_71.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_33.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_32.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_35.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_34.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_ConsT_1.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_37.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_36.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_38.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/util/Http.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Intf_1.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/net/Host.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/JoinDialog_Server.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Boolp_1.h"
#include "arc/Events.h"
#include "arc/func/ConsT.h"
#include "mindustry/ui/dialogs/JoinDialog_2.h"
#include "mindustry/ui/dialogs/JoinDialog_1.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Floatf_1.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_58.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_59.h"
#include "arc/scene/ui/Button.h"
#include "arc/util/Timer.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_54.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_55.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_56.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_57.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_50.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_51.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_52.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_53.h"
#include "mindustry/net/ServerGroup.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "arc/func/Func.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_69.h"
#include "mindustry/core/Logic.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_65.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_66.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_67.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_68.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_61.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Prov_8.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_62.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Prov_7.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Prov_6.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_63.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Prov_5.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_64.h"
#include "arc/util/serialization/Jval_JsonArray.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_60.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Prov_9.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_62.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_61.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_63.h"
#include "arc/util/Timer_Task.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Func_1.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_arc_func_Cons_60.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/serialization/Jval.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_47.h"
#include "arc/scene/style/Style.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_48.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_49.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/io/versions/LegacyIO.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_46.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/ui/dialogs/JoinDialog_invoke_java_lang_Runnable_42.h"
#include "java/util/Objects.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Class.h"
#include "mindustry/game/EventType_ClientPreConnectEvent.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_JoinDialog_tmpElements;
jint SF_mindustry_ui_dialogs_JoinDialog_favoriteCountOffset;

void mark_mindustry_ui_dialogs_JoinDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_JoinDialog_tmpElements)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_JoinDialog_tmpElements)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_JoinDialog_tmpElements, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_JoinDialog *) object;
	if (self->F_tmpServers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpServers)->clazz)->markFunction)((jobject) self->F_tmpServers, mark, depth + 1);
	if (self->F_servers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_servers)->clazz)->markFunction)((jobject) self->F_servers, mark, depth + 1);
	if (self->F_add)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_add)->clazz)->markFunction)((jobject) self->F_add, mark, depth + 1);
	if (self->F_renaming)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renaming)->clazz)->markFunction)((jobject) self->F_renaming, mark, depth + 1);
	if (self->F_local)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_local)->clazz)->markFunction)((jobject) self->F_local, mark, depth + 1);
	if (self->F_remote)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_remote)->clazz)->markFunction)((jobject) self->F_remote, mark, depth + 1);
	if (self->F_global)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_global)->clazz)->markFunction)((jobject) self->F_global, mark, depth + 1);
	if (self->F_hosts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hosts)->clazz)->markFunction)((jobject) self->F_hosts, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_fontIgnoreDirtyTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontIgnoreDirtyTask)->clazz)->markFunction)((jobject) self->F_fontIgnoreDirtyTask, mark, depth + 1);
	if (self->F_lastIp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastIp)->clazz)->markFunction)((jobject) self->F_lastIp, mark, depth + 1);
	if (self->F_ping)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ping)->clazz)->markFunction)((jobject) self->F_ping, mark, depth + 1);
	if (self->F_serverSearch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serverSearch)->clazz)->markFunction)((jobject) self->F_serverSearch, mark, depth + 1);
}

void init_mindustry_ui_dialogs_JoinDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(57);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@joingame"_j))));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_tmpServers = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_servers = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_local = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_remote = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_global = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_hosts = (jref) sp[1].o;
	LINE_NUMBER(50);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastColumns = (jint(-1));
	LINE_NUMBER(53);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(54);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing = (jint(1));
	LINE_NUMBER(59);
	((func_mindustry_ui_dialogs_JoinDialog_makeButtonOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_makeButtonOverlay])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_JoinDialog$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog$1);
	init_mindustry_ui_dialogs_JoinDialog$1_mindustry_ui_dialogs_JoinDialog(ctx, sp[1].o, (frame[0].o));
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_style = (jref) sp[1].o;
	LINE_NUMBER(70);
	((func_mindustry_ui_dialogs_JoinDialog_loadServers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_loadServers])(ctx, (frame[0].o));
	LINE_NUMBER(73);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_14;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i != 0) goto label_14;
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(75);
	if ((frame[1].i) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	}
label_17:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_19;
	}
	(sp++)->f = jfloat(190.0f);
	goto label_20;
label_19:;
	(sp++)->f = jfloat(210.0f);
label_20:;
	{
	sp -= 2;
	((func_mindustry_ui_dialogs_JoinDialog_addCloseButton_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addCloseButton_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@server.add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(86);
	if ((frame[1].i) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"?"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_41);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)), (jfloat(64.0f)));
	}
label_24:;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@joingame.title"_j))));
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_add = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@joingame.ip"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ip"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_32);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(320.0f);
	jfloat temp1 = jfloat(54.0f);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (100));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@cancel"_j));
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_44);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Dialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f5;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_JoinDialog_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_46(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_JoinDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_47(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_JoinDialog_onResize_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_onResize_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_refreshAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:refreshAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_refreshes = (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_refreshes) + (jint(1)));
	LINE_NUMBER(146);
	((func_mindustry_ui_dialogs_JoinDialog_refreshLocal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshLocal])(ctx, (frame[0].o));
	LINE_NUMBER(147);
	((func_mindustry_ui_dialogs_JoinDialog_refreshRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshRemote])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"communityservers"_j))), (jint(1)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(149);
	((func_mindustry_ui_dialogs_JoinDialog_refreshCommunity) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshCommunity])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_setupRemote(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:setupRemote", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server, sp[0].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_Button, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[3].o = sp[0].o;
	LINE_NUMBER(160);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_33);
		sp[2].o = (jobject) proxy;
	}
	sp[3].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_style;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_48(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_48);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = frame[0].o;
	LINE_NUMBER(169);
	jfloat temp1 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp1);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[4].o = sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp3 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	jint temp4 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	if ((temp3 % temp4) != 0) goto label_8;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(175);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = frame[5].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	((func_arc_scene_ui_Button_clearChildren) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_clearChildren])(ctx, (frame[4].o));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(181);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(183);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_49(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_49);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(3.0f);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(188);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_50(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_50);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = jfloat(3.0f);
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(193);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_51(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_51);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp2 = jfloat(3.0f);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(197);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_52(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_52);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp3 = jfloat(3.0f);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(202);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_53(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_53);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp4 = jfloat(3.0f);
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp4);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(213);
	sp[0].o = frame[2].o;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_34);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_content = (jref) (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[1].o));
	LINE_NUMBER(214);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:moveRemote", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(220);
	if (((frame[3].i) + (frame[2].i)) >= 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(221);
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	if (temp0 <= (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, ((frame[3].i) + (frame[2].i)), (frame[1].o));
	LINE_NUMBER(226);
	((func_mindustry_ui_dialogs_JoinDialog_saveServers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_saveServers])(ctx, (frame[0].o));
	LINE_NUMBER(227);
	((func_mindustry_ui_dialogs_JoinDialog_setupRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote])(ctx, (frame[0].o));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server, sp[0].o));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[5].o)))->F_lastHost;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[5].o)))->F_lastHost;
	((func_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(232);
	((func_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server])(ctx, (frame[0].o), (frame[5].o));
	}
label_13:;
	LINE_NUMBER(234);
	goto label_8;
label_9:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_refreshRemote(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:refreshRemote", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server, sp[0].o));
	LINE_NUMBER(239);
	((func_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(240);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:refreshServer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_content;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_content;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whitePane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_content;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_ip;
	jint temp0 = (jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_port;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_35);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:setupServer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(259);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_lastHost = (jref) (frame[2].o);
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_content;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[1].o)))->F_content;
	((func_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:buildServer", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(266);
	if ((frame[3].i) == 0) goto label_2;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_2;
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[banned]"_j))));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	if ((frame[5].i) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[red]\ue817 [banned]"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(269);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	frame[7].f = (temp0 - (jfloat(40.0f)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(273);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	frame[8].o = sp[0].o;
	LINE_NUMBER(275);
	if ((frame[4].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_37);
		proxy->F_field3 = (frame[7].f);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(36.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(284);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whitePane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_38);
		proxy->F_field3 = (frame[7].f);
		proxy->F_field2 = (frame[5].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:setup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(321);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@servers.local.steam"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@servers.local"_j));
label_8:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	((func_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@servers.remote"_j));
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_remote;
	((func_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(329);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"communityservers"_j))), (jint(1)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@servers.global"_j));
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	((func_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(333);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(334);
	((func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(335);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[2].o), (jint(1)), (jint(0)));
	LINE_NUMBER(337);
	((func_mindustry_ui_dialogs_JoinDialog_setupRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote])(ctx, (frame[0].o));
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(340);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_39);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[1].f;
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	jfloat temp1 = (frame[1].f) + (jfloat(5.0f));
	jint temp2 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((temp1 * (jfloat(temp2))) + (jfloat(33.0f))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:section", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(361);
	clinit_arc_scene_ui_layout_Collapser(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Collapser);
	sp[1].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"collapsed-\u0001"_j.string, 1, (frame[1].o));
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[2].o, sp[3].o, (jint(0)));
	init_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table_boolean(ctx, sp[0].o, sp[1].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_setDuration_float_R_arc_scene_ui_layout_Collapser])(ctx, (frame[4].o), (jfloat(0.1f)));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_40);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(390);
	if ((frame[3].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	LINE_NUMBER(397);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, sp[1].o);
	jfloat temp1 = temp0 + (jfloat(5.0f));
	jint temp2 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (temp1 * (jfloat(temp2))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 + (jfloat(5.0f));
	jint temp2 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (temp1 * (jfloat(temp2))));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_hosts;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_refreshLocal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:refreshLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(404);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_totalHosts = (jint(0));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_42);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_54(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_refreshCommunity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:refreshCommunity", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	frame[1].i = ((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_refreshes);
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(416);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(418);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_fetchedServers) != 0) goto label_4;
	}
	LINE_NUMBER(419);
	SM_mindustry_ui_dialogs_JoinDialog_fetchServers(ctx);
label_4:;
	{
	LINE_NUMBER(424);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_fetchedServers) == 0) goto label_6;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_defaultServers;
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_tmpServers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_cachedServers;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_defaultServers;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(426);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (((frame[3].i) + (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) / (jint(2)))) % ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_ServerGroup, sp[0].o));
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_ServerGroup_hidden_R_boolean])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(429);
	if ((frame[5].i) == 0) goto label_14;
	}
	{
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_showHidden) != 0) goto label_14;
	}
	LINE_NUMBER(430);
	goto label_16;
label_14:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_layout_Table, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (jobject(nullptr));
	frame[6].o = sp[0].o;
	LINE_NUMBER(435);
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_favorite_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_ServerGroup_favorite_R_boolean])(ctx, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(436);
	if (((jint)((mindustry_net_ServerGroup *) NULL_CHECK((frame[4].o)))->F_prioritized) == 0) goto label_19;
	}
	{
	LINE_NUMBER(437);
	((func_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[4].o), (frame[5].i), (frame[7].i), (jint(0)));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(438);
	if ((frame[7].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(439);
	((func_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[4].o), (frame[5].i), (jint(1)), (jint(1)));
	}
label_21:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[4].o)))->F_addresses;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_23:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_16;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(443);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ALOAD(11);
label_26:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(444);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))));
	sp[0].i = temp0;
	sp += 1;
	goto label_29;
	}
label_28:;
	INST_SIPUSH(6567);
label_29:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(445);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = frame[12].o;
	jint temp0 = frame[13].i;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_44);
		proxy->F_field5 = (frame[7].i);
		proxy->F_field4 = (frame[5].i);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_45);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	LINE_NUMBER(442);
	INST_IINC(10, 1);
	goto label_23;
	}
label_16:;
	{
	LINE_NUMBER(426);
	INST_IINC(3, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(498);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:addHeader", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(501);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_46);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_47);
		proxy->F_field0 = (frame[4].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (frame[5].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(505);
	if ((frame[5].i) != 0) goto label_4;
	}
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_48);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	LINE_NUMBER(536);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (temp0 * (jfloat(temp1))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-2.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(538);
	sp[0].o = frame[1].o;
	jint temp2 = jint(1);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[1].o));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_JoinDialog_columns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:columns", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	jfloat temp3 = (temp1 / temp2) * (jfloat(0.9f));
	jfloat temp4 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	jint temp5 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint((temp3 / temp4))), (jint(1)), (jint(4)));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:addCommunityHost", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(548);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(552);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_Button, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[5].o = sp[0].o;
	LINE_NUMBER(554);
	sp[0].o = frame[5].o;
	jint temp1 = jint(0);
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_49);
		sp[2].o = (jobject) proxy;
	}
	sp[3].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_style;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_55(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_55);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp2 = frame[4].f;
	LINE_NUMBER(568);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp2);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(7.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(4.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (checkCast(ctx, &class_arc_scene_ui_Button, sp[1].o));
	LINE_NUMBER(570);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(571);
	sp[0].o = frame[6].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(573);
	((func_arc_scene_ui_Button_clearChildren) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_clearChildren])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(45.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(576);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001   \u0001"_j.string, 2, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(578);
	sp[0].o = frame[6].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_add;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_56(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_56);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp3 = jfloat(3.0f);
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(587);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_row_R_arc_scene_ui_layout_Table])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_50);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[2].o);
	((func_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[2].o)), (jint(0)), (jint(0)));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[2].o));
	jint temp4 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	jint temp5 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	if ((temp4 % temp5) != 0) goto label_17;
	}
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_17:;
	LINE_NUMBER(594);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_finishLocalHosts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:finishLocalHosts", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_totalHosts) != 0) goto label_1;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(600);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@hosts.none"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(602);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_refresh;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_57(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-12.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(70.0f)));
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_7:;
	LINE_NUMBER(606);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_addLocalHost_mindustry_net_Host(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:addLocalHost", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(609);
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_totalHosts) != 0) goto label_1;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(613);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_totalHosts = (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_totalHosts) + (jint(1)));
	LINE_NUMBER(614);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp1 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	jint temp2 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	if ((temp1 % temp2) != 0) goto label_6;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_local;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_51);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_style;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_58(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_58);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[2].f;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:connect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(627);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@noname"_j))));
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(632);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@connecting"_j))));
	LINE_NUMBER(634);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_59(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_59);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(639);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(641);
	jfloat temp0 = jfloat(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_60(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_60);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_reconnect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:reconnect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastIp;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastIp;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(656);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@reconnecting"_j))));
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_61(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task(ctx, sp[1].o, (jfloat(1)), (jfloat(1)));
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_ping = (jref) sp[1].o;
	LINE_NUMBER(667);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_62(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:safeConnect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(676);
	if ((frame[3].i) == (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_1;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_1;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(677);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp += 1;
	if ((frame[3].i) <= (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_3;
	}
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_clientOutdated;
	goto label_4;
label_3:;
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_serverOutdated;
label_4:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"server.versions"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_core_Version(ctx);
	jint temp1 = (jint)SF_mindustry_core_Version_build;
	LINE_NUMBER(678);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	jint temp2 = jint(1);
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[4].o, temp2) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]\u0001\n[]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(677);
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(680);
	((func_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_7:;
	LINE_NUMBER(682);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:targetWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((temp1 / temp2) * (jfloat(0.9f))), (jfloat(550.0f)));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_loadServers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:loadServers", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sort-servers-ping"_j))), (jint(1)));
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_sortPing = temp0;
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"servers"_j));
	sp[3].o = ((jobject) &class_arc_struct_Seq);
	sp[4].o = ((jobject) &class_mindustry_ui_dialogs_JoinDialog$Server);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_6);
		sp[5].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_servers = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(694);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_has_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server-list"_j))));
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_versions_LegacyIO_readServers_R_arc_struct_Seq(ctx);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_servers = (jref) sp[1].o;
	LINE_NUMBER(696);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server-list"_j))));
	}
label_3:;
	{
	LINE_NUMBER(699);
	SM_mindustry_ui_dialogs_JoinDialog_fetchServers(ctx);
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_fetchServers(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:fetchServers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(703);
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_type;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bleeding-edge"_j))));
	if (temp0 != 0) goto label_5;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_forceBeServers;
	if ((--sp)->i == 0) goto label_6;
label_5:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_serverJsonBeURLs;
	goto label_7;
label_6:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_serverJsonURLs;
label_7:;
	{
	sp -= 1;
	frame[0].o = sp[0].o;
	LINE_NUMBER(705);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"communityservers"_j))), (jint(1)));
	if (temp0 == 0) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(707);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadedServerCache) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_serverCacheFile;
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(708);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedServerCache = (jint(1));
	LINE_NUMBER(709);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_cachedServers;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_serverCacheFile;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_ui_dialogs_JoinDialog_parseServerString_java_lang_String_R_arc_struct_Seq(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(713);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(711);
	frame[1].o = sp[0].o;
	LINE_NUMBER(712);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to load cached server file"_j))), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(715);
	SM_mindustry_ui_dialogs_JoinDialog_fetchServers_Array1_java_lang_String_int(ctx, (frame[0].o), (jint(0)));
	}
label_9:;
	LINE_NUMBER(717);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_fetchServers_Array1_java_lang_String_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:fetchServers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(720);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (frame[1].i);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_ConsT_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_ConsT_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_ConsT_1);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(733);
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_JoinDialog_parseServerString_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:parseServerString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(757);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_serialization_Jval$JsonArray_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(769);
	sp[0].o = (jobject)((func_arc_struct_Seq_shuffle_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_saveServers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:saveServers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"servers"_j));
	sp[2].o = ((jobject) &class_mindustry_ui_dialogs_JoinDialog$Server);
	sp[3].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:getVersionString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(778);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(779);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server.version"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"server.custombuild"_j))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(780);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version) != 0) goto label_3;
	}
	{
	LINE_NUMBER(781);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server.outdated"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(782);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version) >= (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_5;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(783);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server.version"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_versionType;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"server.outdated"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\u0001 \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(784);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version) <= (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_7;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(785);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server.version"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_versionType;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"server.outdated.client"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\u0001 \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(786);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version) != (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_9;
	}
	{
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_type;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_versionType;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_9:;
	{
	LINE_NUMBER(790);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server.version"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"official"_j));
	sp[4].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_versionType;
	jint temp2 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[3].o, sp[4].o);
	sp[3].o = sp[2].o;
	sp[4].i = temp1;
	sp += 5;
	if (temp2 == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_12;
label_11:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_net_Host *) NULL_CHECK(sp[-1].o))->F_versionType;
label_12:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$parseServerString$0_arc_struct_Seq_arc_util_serialization_Jval(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$parseServerString$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(760);
	jint temp0 = (jint)((func_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getBool_java_lang_String_boolean_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"prioritized"_j))), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(762);
	jint temp1 = (jint)((func_arc_util_serialization_Jval_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"addresses"_j))));
	if (temp1 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_Jval_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"address"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"address"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_Jval_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(763);
	jint temp0 = (jint)((func_arc_util_serialization_Jval_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"addresses"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"addresses"_j))));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_get_java_lang_String_R_arc_util_serialization_Jval])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"address"_j))));
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_String)));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"address"_j))), (((jobject) createStringLiteral(ctx, u8"<invalid>"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_ServerGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_ServerGroup);
	init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String_boolean(ctx, sp[1].o, (frame[2].o), (frame[4].o), (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$1_arc_util_Http$HttpResponse(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$fetchServers$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(734);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_fetchedServers) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(737);
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_JoinDialog_parseServerString_java_lang_String_R_arc_struct_Seq(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(739);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_63(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_63);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$2_java_lang_String_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$fetchServers$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(740);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_fetchedServers) == 0) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(744);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_serverCacheFile;
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(747);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(745);
	frame[2].o = sp[0].o;
	LINE_NUMBER(746);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to write server cache"_j))), (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(748);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_defaultServers;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(749);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_fetchedServers = (jint(1));
	LINE_NUMBER(750);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Fetched @ community servers."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_defaultServers;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Intf_1);
		sp[3].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$3_mindustry_net_ServerGroup_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$fetchServers$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_addresses;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$0_int_Array1_java_lang_String_java_lang_Throwable(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$fetchServers$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(724);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_fetchedServers) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(726);
	if ((frame[0].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(728);
	SM_mindustry_ui_dialogs_JoinDialog_fetchServers_Array1_java_lang_String_int(ctx, (frame[1].o), ((frame[0].i) + (jint(1))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(730);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to fetch community servers"_j))), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(732);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$reconnect$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(669);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(671);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping = (jref) (jobject(nullptr));
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$reconnect$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastIp;
	jint temp0 = (jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastPort;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_55);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$2_java_lang_Exception(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$reconnect$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(664);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$1_mindustry_net_Host(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$reconnect$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(662);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_ping = (jref) (jobject(nullptr));
	LINE_NUMBER(663);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastIp;
	((func_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastPort));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$connect$1_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$connect$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(642);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(643);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_reset])(ctx, sp[0].o);
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_beginConnecting) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_beginConnecting])(ctx, sp[0].o);
	LINE_NUMBER(645);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[1].o))->F_lastIp = (jref) sp[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[1].o))->F_lastPort = temp0;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_64(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable])(ctx, sp[0].o, sp[2].o, temp0, sp[1].o);
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$connect$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$connect$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(647);
	((func_mindustry_ui_dialogs_JoinDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(650);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$connect$0(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$connect$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(635);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(636);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$1_mindustry_net_Host(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addLocalHost$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(621);
	clinit_mindustry_game_EventType$ClientPreConnectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientPreConnectEvent);
	init_mindustry_game_EventType$ClientPreConnectEvent_mindustry_net_Host(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_address;
	((func_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_port), ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version));
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$0_mindustry_net_Host_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addLocalHost$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(620);
	((func_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$5_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(589);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$4_mindustry_net_Host(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	clinit_mindustry_ui_dialogs_JoinDialog$Server(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server);
	init_mindustry_ui_dialogs_JoinDialog$Server(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(580);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_address;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_port)));
	((func_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(582);
	((func_mindustry_ui_dialogs_JoinDialog_saveServers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_saveServers])(ctx, (frame[0].o));
	LINE_NUMBER(583);
	((func_mindustry_ui_dialogs_JoinDialog_setupRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote])(ctx, (frame[0].o));
	LINE_NUMBER(584);
	((func_mindustry_ui_dialogs_JoinDialog_refreshRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshRemote])(ctx, (frame[0].o));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$1_Array1_arc_scene_ui_Button_mindustry_net_Host(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((func_arc_scene_ui_Button_childrenPressed_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_childrenPressed_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(557);
	clinit_mindustry_game_EventType$ClientPreConnectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientPreConnectEvent);
	init_mindustry_game_EventType$ClientPreConnectEvent_mindustry_net_Host(ctx, sp[0].o, (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(558);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server-disclaimer"_j))), (jint(0)));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@warning"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@servers.disclaimer"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"@ok"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_65(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_65);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_66(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_66);
		sp[6].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[2].o)))->F_address;
	((func_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[2].o)))->F_port), ((jint)((mindustry_net_Host *) NULL_CHECK((frame[2].o)))->F_version));
	}
label_5:;
	LINE_NUMBER(568);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$3(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(563);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server-disclaimer"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$2_mindustry_net_Host(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(560);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"server-disclaimer"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_address;
	((func_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_port), ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_version));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$0_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addCommunityHost$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$3_mindustry_net_ServerGroup_boolean_boolean_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$3", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(510);
	if (((jint)((mindustry_net_ServerGroup *) NULL_CHECK((frame[1].o)))->F_prioritized) == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
label_2:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_4:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(517);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_ui_ImageButton, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (jobject(nullptr));
	frame[7].o = sp[0].o;
	LINE_NUMBER(518);
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	sp[1].o = frame[5].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_star;
	clinit_mindustry_ui_dialogs_JoinDialog$2(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog$2);
	init_mindustry_ui_dialogs_JoinDialog$2_mindustry_ui_dialogs_JoinDialog_boolean(ctx, sp[3].o, (frame[0].o), (frame[2].i));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_67(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_67);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(524);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, temp1);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[1].o));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))));
	sp += 1;
	if ((frame[2].i) == 0) goto label_10;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_11;
label_10:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_lightishGray;
label_11:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(528);
	sp[0].o = frame[7].o;
	jint temp0 = jint(1);
	sp[1].o = frame[5].o;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp[2].o = temp1;
	sp += 3;
	if ((frame[3].i) == 0) goto label_13;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeOffSmall;
	goto label_14;
label_13:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeSmall;
label_14:;
	{
	sp -= 4;
	clinit_mindustry_ui_Styles(ctx);
	sp[4].o = (jobject)SF_mindustry_ui_Styles_grayi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_68(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_68);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(534);
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[2].o, temp0);
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[2].o));
	LINE_NUMBER(535);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)));
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[1].o, sp[2].o);
	jint temp1 = (jint)((func_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$6_mindustry_net_ServerGroup_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$7_mindustry_net_ServerGroup_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(535);
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_hidden_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@server.shown"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@server.hidden"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$5_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton_Array1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(529);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_ServerGroup_hidden_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_net_ServerGroup_setHidden_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_ServerGroup_setHidden_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_ServerGroup_hidden_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeOffSmall;
	goto label_5;
label_4:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeSmall;
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(531);
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_ServerGroup_hidden_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_showHidden) != 0) goto label_7;
	}
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	}
label_7:;
	LINE_NUMBER(534);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$4_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_favorite_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_favorite_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_net_ServerGroup_setFavorite_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_ServerGroup_setFavorite_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	jint temp0 = (jint)((func_mindustry_net_ServerGroup_favorite_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_favorite_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_5;
label_4:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_lightishGray;
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$2_boolean_R_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$1_boolean_arc_scene_ui_layout_Table(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[0].i) == 0) goto label_1;
	}
	(sp++)->i = jint(9999999);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[1].i);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_userObject = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$0_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$addHeader$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(502);
	ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))) = (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$3_java_lang_Exception(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshCommunity$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$0_int_mindustry_net_ServerGroup_Array1_arc_scene_ui_layout_Table_boolean_boolean_mindustry_net_Host(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jbool param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshCommunity$0", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(446);
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_refreshes) == (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_fontIgnoreDirtyTask;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(450);
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty = (jint(1));
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(36.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_69(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_fontIgnoreDirtyTask = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_name;
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_description;
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_mapname;
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_modeName;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_modeName;
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
label_9:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(463);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(464);
	((func_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[2].o), (frame[4].i), (frame[5].i), (jint(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(465);
	if (((jint)((arc_scene_Element *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))->F_visible) != 0) goto label_13;
	}
	{
	LINE_NUMBER(466);
	((func_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[2].o), (frame[4].i), (frame[5].i), (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(469);
	frame[7].i = (jint(0));
	LINE_NUMBER(472);
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing) != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_name;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hub"_j))));
	if (temp0 != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))->F_userObject;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_java_lang_Integer)) == 0) goto label_16;
	}
	{
	frame[8].o = (checkCast(ctx, &class_java_lang_Integer, (frame[9].o)));
	LINE_NUMBER(474);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[8].o));
	if (temp0 < (jint(9999999))) goto label_19;
	}
	{
	jint temp0 = ((jint)((mindustry_net_Host *) NULL_CHECK((frame[6].o)))->F_players) + (jint(9999999));
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ALOAD(6);
	sp[-1].i = ((mindustry_net_Host *) NULL_CHECK(sp[-1].o))->F_players;
label_20:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(475);
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[8].o));
	if (temp0 <= temp1) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(476);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (frame[9].i));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_userObject = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(479);
	((func_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	LINE_NUMBER(481);
	if ((frame[7].i) == 0) goto label_26;
	}
	{
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing) != 0) goto label_26;
	}
	{
	LINE_NUMBER(483);
	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_JoinDialog_tmpElements;
	frame[8].o = sp[0].o;
	LINE_NUMBER(484);
	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_JoinDialog_tmpElements;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[1].o);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(485);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_32:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_global;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(490);
	goto label_32;
	}
label_26:;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jfloat(5.0f)));
	LINE_NUMBER(494);
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$2_arc_scene_Element_R_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshCommunity$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(485);
	if ((isInstance(ctx, (frame[0].o), &class_arc_scene_ui_layout_Table)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, (frame[0].o)));
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_userObject;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Integer)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_Integer, (frame[3].o)));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	jfloat temp1 = jfloat((-temp0));
	sp[0].f = temp1;
	sp += 1;
	goto label_5;
	}
label_1:;
	INST_FCONST(0);
label_5:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshCommunity$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty = (jint(0));
	LINE_NUMBER(453);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_fontIgnoreDirtyTask = (jref) (jobject(nullptr));
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshLocal$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshLocal$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshLocal$1_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshLocal$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(408);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hosts.discovering.any"_j))));
	sp[1].o = (jobject)SM_arc_util_Strings_animated_float_int_float_java_lang_String_R_java_lang_String(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jint(4)), (jfloat(10.0f)), (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$9_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@search"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(393);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_serverSearch;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_70(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_70 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(396);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_71(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_71 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_71);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(54.0f)));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$10", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" +"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_serverSearch = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$0_java_lang_String_boolean_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(367);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_chartBar;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_72(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_72 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_72);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_boolean_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(375);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_eyeSmall;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_73(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_73 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_73);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(40.0f);
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp2);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@servers.showhidden"_j))));
	}
label_2:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[4].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_74(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_74 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_74);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_61);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$section$8_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$section$7_arc_scene_ui_layout_Collapser_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(383);
	((func_arc_scene_ui_layout_Collapser_toggle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_toggle_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(384);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"collapsed-\u0001"_j.string, 1, (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Collapser_isCollapsed_R_boolean])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$6_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_showHidden) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeSmall;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_eyeOffSmall;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_showHidden) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_showHidden = sp[1].i;
	LINE_NUMBER(377);
	((func_mindustry_ui_dialogs_JoinDialog_refreshCommunity) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshCommunity])(ctx, (frame[0].o));
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black8;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Prov_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_JoinDialog_lambda$section$4_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@servers.sortping"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@servers.sortplayers"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$2_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_chartBar;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_players;
label_2:;
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$section$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$section$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_sortPing = sp[1].i;
	LINE_NUMBER(370);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sort-servers-ping"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, ((jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_sortPing));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(371);
	((func_mindustry_ui_dialogs_JoinDialog_refreshCommunity) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshCommunity])(ctx, (frame[0].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setup$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@name"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_62);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (40));
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squarei;
	jfloat temp0 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_75(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_75 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_75);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(54.0f);
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(353);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_76(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_76 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_76);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$4_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setup$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_color_R_arc_graphics_Color])(ctx, sp[1].o);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$2(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setup$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(348);
	clinit_mindustry_ui_dialogs_PaletteDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PaletteDialog);
	init_mindustry_ui_dialogs_PaletteDialog(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_arc_func_Cons_63);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PaletteDialog_show_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PaletteDialog_show_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$3_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setup$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_color_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(350);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"color-0"_j));
	jint temp0 = (jint)((func_arc_graphics_Color_rgba8888_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_R_int])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setup$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_name_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_name_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(344);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[0].o));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$buildServer$1_arc_graphics_Color_mindustry_net_Host_boolean_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jbool param2, jfloat param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$buildServer$1", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(286);
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(291);
	frame[5].i = (jint(0));
	LINE_NUMBER(292);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(293);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_description;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(295);
	if ((frame[8].i) != (10)) goto label_12;
	}
	{
	LINE_NUMBER(296);
	INST_IINC(5, 1);
	LINE_NUMBER(297);
	if ((frame[5].i) >= (jint(3))) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[8].i));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[8].i));
	}
label_15:;
	{
	LINE_NUMBER(293);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[gray]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_4:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp += 2;
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_players) != (jint(1))) goto label_17;
	}
	{
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_playerLimit) > 0) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".single"_j));
	goto label_18;
label_17:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_18:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"players\u0001"_j.string, 1, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(307);
	sp[2].o = sp[1].o;
	sp[3].i = temp0;
	sp += 4;
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_players) != 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[lightgray]"_j));
	goto label_21;
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[accent]"_j));
label_21:;
	{
	jint temp0 = (jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_players;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_playerLimit) <= 0) goto label_22;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]/[accent]\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_playerLimit)));
	sp += 1;
	goto label_23;
	}
label_22:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_23:;
	{
	sp -= 9;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001\u0001[lightgray]"_j.string, 3, sp[6].o, boxInteger(ctx, sp[7].i), sp[8].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	LINE_NUMBER(306);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(309);
	sp[0].o = frame[4].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"save.map"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_mapname;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_modeName;
	sp += 2;
	if (sp[0].o != nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_mode;
	sp[0].o = (jobject)((func_mindustry_game_Gamemode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Gamemode_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_28;
	}
label_27:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_net_Host *) NULL_CHECK(sp[-1].o))->F_modeName;
label_28:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001[lightgray] / \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (10), (32));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(311);
	if (((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_ping) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\ue819 \u0001ms"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_ping)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_30:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$buildServer$0_arc_graphics_Color_mindustry_net_Host_java_lang_String_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$buildServer$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(278);
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001   \u0001"_j.string, 2, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (10), (32));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_ellipsis_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$2_mindustry_ui_dialogs_JoinDialog$Server_java_lang_Exception(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshServer$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_content;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_content;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whitePane;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@host.invalid"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$1_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshServer$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(250);
	((func_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$0_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$refreshServer$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(248);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server.refreshing"_j))));
	sp[1].o = (jobject)SM_arc_util_Strings_animated_float_int_float_java_lang_String_R_java_lang_String(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jint(4)), (jfloat(11.0f)), (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$8_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$6_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@server.delete"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_77(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_77 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_77);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$7_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(205);
	((func_mindustry_ui_dialogs_JoinDialog_saveServers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_saveServers])(ctx, (frame[0].o));
	LINE_NUMBER(206);
	((func_mindustry_ui_dialogs_JoinDialog_setupRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote])(ctx, (frame[0].o));
	LINE_NUMBER(207);
	((func_mindustry_ui_dialogs_JoinDialog_refreshRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshRemote])(ctx, (frame[0].o));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$5_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming = (jref) (frame[1].o);
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$4_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	((func_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$3_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	((func_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$2_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	((func_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int])(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$1_Array1_arc_scene_ui_Button_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_arc_scene_ui_Button_childrenPressed_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_arc_scene_ui_Button_childrenPressed_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_lastHost;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(163);
	clinit_mindustry_game_EventType$ClientPreConnectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientPreConnectEvent);
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_lastHost;
	init_mindustry_game_EventType$ClientPreConnectEvent_mindustry_net_Host(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_lastHost;
	sp[1].o = (jobject)((mindustry_net_Host *) NULL_CHECK(sp[1].o))->F_address;
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_lastHost;
	jint temp0 = (jint)((mindustry_net_Host *) NULL_CHECK(sp[2].o))->F_port;
	sp[2].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_lastHost;
	((func_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_net_Host *) NULL_CHECK(sp[2].o))->F_version));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_ip;
	((func_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[2].o)))->F_port));
	}
label_1:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$0_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$setupRemote$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$new$9(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	jfloat temp3 = jfloat(temp2);
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	if ((floatCompare(((temp3 / temp4) * (jfloat(0.9f))), (jfloat(500.0f)), 1)) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_lastColumns;
	jint temp1 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	if (temp0 == temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(135);
	((func_mindustry_ui_dialogs_JoinDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(136);
	((func_mindustry_ui_dialogs_JoinDialog_refreshAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshAll])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_JoinDialog_columns_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int])(ctx, (frame[0].o));
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK(sp[0].o))->F_lastColumns = temp0;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$new$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	((func_mindustry_ui_dialogs_JoinDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	((func_mindustry_ui_dialogs_JoinDialog_refreshAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshAll])(ctx, (frame[0].o));
	LINE_NUMBER(125);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_3;
	}
	{
	LINE_NUMBER(126);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_78(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_78 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_78);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$new$7(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(126);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"joininfo"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_79(ctx);
		auto proxy = (mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_79 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog_invoke_java_lang_Runnable_79);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$new$8(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@join.info"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$new$5_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK(sp[0].o))->F_title;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming;
	sp += 1;
	if (sp[0].o == nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@server.edit"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@server.add"_j));
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming;
	sp[1].o = (jobject)((func_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_JoinDialog_lambda$new$4_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ip"_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_ui_dialogs_JoinDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(100);
	clinit_mindustry_ui_dialogs_JoinDialog$Server(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server);
	init_mindustry_ui_dialogs_JoinDialog$Server(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ip"_j))));
	((func_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_servers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(103);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ip"_j))));
	((func_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(106);
	((func_mindustry_ui_dialogs_JoinDialog_saveServers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_saveServers])(ctx, (frame[0].o));
	LINE_NUMBER(107);
	((func_mindustry_ui_dialogs_JoinDialog_setupRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote])(ctx, (frame[0].o));
	LINE_NUMBER(108);
	((func_mindustry_ui_dialogs_JoinDialog_refreshRemote) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_refreshRemote])(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	((func_arc_scene_ui_Dialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$new$2_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ip"_j))), (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_JoinDialog_lambda$new$1(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@join.info"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_JoinDialog_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_renaming = (jref) (jobject(nullptr));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog *) NULL_CHECK((frame[0].o)))->F_add;
	sp[0].o = (jobject)((func_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_JoinDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	SF_mindustry_ui_dialogs_JoinDialog_favoriteCountOffset = jint(9999999);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	{
	LINE_NUMBER(32);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ui_dialogs_JoinDialog(ctx);
	SF_mindustry_ui_dialogs_JoinDialog_tmpElements = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_JoinDialog[] {
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
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_JoinDialog_refreshAll,
	(void *) M_mindustry_ui_dialogs_JoinDialog_setupRemote,
	(void *) M_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int,
	(void *) M_mindustry_ui_dialogs_JoinDialog_refreshRemote,
	(void *) M_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean,
	(void *) M_mindustry_ui_dialogs_JoinDialog_setup,
	(void *) M_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean,
	(void *) M_mindustry_ui_dialogs_JoinDialog_refreshLocal,
	(void *) M_mindustry_ui_dialogs_JoinDialog_refreshCommunity,
	(void *) M_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean,
	(void *) M_mindustry_ui_dialogs_JoinDialog_columns_R_int,
	(void *) M_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_finishLocalHosts,
	(void *) M_mindustry_ui_dialogs_JoinDialog_addLocalHost_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int,
	(void *) M_mindustry_ui_dialogs_JoinDialog_reconnect,
	(void *) M_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int,
	(void *) M_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float,
	(void *) M_mindustry_ui_dialogs_JoinDialog_loadServers,
	(void *) M_mindustry_ui_dialogs_JoinDialog_saveServers,
	(void *) M_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$3,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$0,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$1_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$connect$1_java_lang_String_int,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$connect$2,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$1_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$0_mindustry_net_Host_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$4_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$1_Array1_arc_scene_ui_Button_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$2_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$3_mindustry_net_ServerGroup_boolean_boolean_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$5_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton_Array1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$0_int_mindustry_net_ServerGroup_Array1_arc_scene_ui_layout_Table_boolean_boolean_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$1,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$9_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$10_java_lang_String,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$0_java_lang_String_boolean_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$6_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$5,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$4_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$2_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$section$1,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$1_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$6_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$7_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$5_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$4_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$3_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$2_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$1_Array1_arc_scene_ui_Button_mindustry_ui_dialogs_JoinDialog$Server,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$new$9,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$new$6,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$new$5_arc_scene_ui_TextField,
	(void *) M_mindustry_ui_dialogs_JoinDialog_lambda$new$3,
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
	{ "refreshAll", "()V" },
	{ "setupRemote", "()V" },
	{ "moveRemote", "(Lmindustry/ui/dialogs/JoinDialog$Server;I)V" },
	{ "refreshRemote", "()V" },
	{ "refreshServer", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "setupServer", "(Lmindustry/ui/dialogs/JoinDialog$Server;Lmindustry/net/Host;)V" },
	{ "buildServer", "(Lmindustry/net/Host;Larc/scene/ui/layout/Table;ZZ)V" },
	{ "setup", "()V" },
	{ "section", "(Ljava/lang/String;Larc/scene/ui/layout/Table;Z)V" },
	{ "refreshLocal", "()V" },
	{ "refreshCommunity", "()V" },
	{ "addHeader", "([Larc/scene/ui/layout/Table;Lmindustry/net/ServerGroup;ZZZ)V" },
	{ "columns", "()I" },
	{ "addCommunityHost", "(Lmindustry/net/Host;Larc/scene/ui/layout/Table;)V" },
	{ "finishLocalHosts", "()V" },
	{ "addLocalHost", "(Lmindustry/net/Host;)V" },
	{ "connect", "(Ljava/lang/String;I)V" },
	{ "reconnect", "()V" },
	{ "safeConnect", "(Ljava/lang/String;II)V" },
	{ "targetWidth", "()F" },
	{ "loadServers", "()V" },
	{ "saveServers", "()V" },
	{ "getVersionString", "(Lmindustry/net/Host;)Ljava/lang/String;" },
	{ "lambda$reconnect$3", "()V" },
	{ "lambda$reconnect$0", "()V" },
	{ "lambda$reconnect$1", "(Lmindustry/net/Host;)V" },
	{ "lambda$connect$1", "(Ljava/lang/String;I)V" },
	{ "lambda$connect$2", "()V" },
	{ "lambda$addLocalHost$1", "(Lmindustry/net/Host;)V" },
	{ "lambda$addLocalHost$0", "(Lmindustry/net/Host;Larc/scene/ui/Button;)V" },
	{ "lambda$addCommunityHost$4", "(Lmindustry/net/Host;)V" },
	{ "lambda$addCommunityHost$1", "([Larc/scene/ui/Button;Lmindustry/net/Host;)V" },
	{ "lambda$addCommunityHost$2", "(Lmindustry/net/Host;)V" },
	{ "lambda$addHeader$3", "(Lmindustry/net/ServerGroup;ZZ[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$addHeader$5", "(Lmindustry/net/ServerGroup;[Larc/scene/ui/ImageButton;[Larc/scene/ui/layout/Table;)V" },
	{ "lambda$refreshCommunity$0", "(ILmindustry/net/ServerGroup;[Larc/scene/ui/layout/Table;ZZLmindustry/net/Host;)V" },
	{ "lambda$refreshCommunity$1", "()V" },
	{ "lambda$section$9", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$section$10", "(Ljava/lang/String;)V" },
	{ "lambda$section$0", "(Ljava/lang/String;ZLarc/scene/ui/layout/Collapser;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$section$6", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$section$5", "()V" },
	{ "lambda$section$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$section$4", "()Ljava/lang/CharSequence;" },
	{ "lambda$section$2", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$section$1", "()V" },
	{ "lambda$refreshServer$1", "(Lmindustry/ui/dialogs/JoinDialog$Server;Lmindustry/net/Host;)V" },
	{ "lambda$setupRemote$6", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$7", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$5", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$4", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$3", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$2", "(Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$setupRemote$1", "([Larc/scene/ui/Button;Lmindustry/ui/dialogs/JoinDialog$Server;)V" },
	{ "lambda$new$9", "()V" },
	{ "lambda$new$6", "()V" },
	{ "lambda$new$5", "(Larc/scene/ui/TextField;)V" },
	{ "lambda$new$3", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_dialogs_JoinDialog$Server,
};

static FieldMetadata fields[] {
	{ "tmpElements", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ui_dialogs_JoinDialog_tmpElements, "Larc/struct/Seq;", 8 },
	{ "favoriteCountOffset", &class_int, (intptr_t) &SF_mindustry_ui_dialogs_JoinDialog_favoriteCountOffset, "I", 24 },
	{ "tmpServers", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_JoinDialog, F_tmpServers), "Larc/struct/Seq;", 0 },
	{ "servers", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_JoinDialog, F_servers), "Larc/struct/Seq;", 0 },
	{ "add", &class_arc_scene_ui_Dialog, offsetof(mindustry_ui_dialogs_JoinDialog, F_add), "Larc/scene/ui/Dialog;", 0 },
	{ "renaming", &class_mindustry_ui_dialogs_JoinDialog$Server, offsetof(mindustry_ui_dialogs_JoinDialog, F_renaming), "Lmindustry/ui/dialogs/JoinDialog$Server;", 0 },
	{ "local", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_JoinDialog, F_local), "Larc/scene/ui/layout/Table;", 0 },
	{ "remote", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_JoinDialog, F_remote), "Larc/scene/ui/layout/Table;", 0 },
	{ "global", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_JoinDialog, F_global), "Larc/scene/ui/layout/Table;", 0 },
	{ "hosts", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_JoinDialog, F_hosts), "Larc/scene/ui/layout/Table;", 0 },
	{ "totalHosts", &class_int, offsetof(mindustry_ui_dialogs_JoinDialog, F_totalHosts), "I", 0 },
	{ "refreshes", &class_int, offsetof(mindustry_ui_dialogs_JoinDialog, F_refreshes), "I", 0 },
	{ "showHidden", &class_boolean, offsetof(mindustry_ui_dialogs_JoinDialog, F_showHidden), "Z", 0 },
	{ "style", &class_arc_scene_ui_TextButton$TextButtonStyle, offsetof(mindustry_ui_dialogs_JoinDialog, F_style), "Larc/scene/ui/TextButton$TextButtonStyle;", 0 },
	{ "fontIgnoreDirtyTask", &class_arc_util_Timer$Task, offsetof(mindustry_ui_dialogs_JoinDialog, F_fontIgnoreDirtyTask), "Larc/util/Timer$Task;", 0 },
	{ "lastIp", &class_java_lang_String, offsetof(mindustry_ui_dialogs_JoinDialog, F_lastIp), "Ljava/lang/String;", 0 },
	{ "lastPort", &class_int, offsetof(mindustry_ui_dialogs_JoinDialog, F_lastPort), "I", 0 },
	{ "lastColumns", &class_int, offsetof(mindustry_ui_dialogs_JoinDialog, F_lastColumns), "I", 0 },
	{ "ping", &class_arc_util_Timer$Task, offsetof(mindustry_ui_dialogs_JoinDialog, F_ping), "Larc/util/Timer$Task;", 0 },
	{ "serverSearch", &class_java_lang_String, offsetof(mindustry_ui_dialogs_JoinDialog, F_serverSearch), "Ljava/lang/String;", 0 },
	{ "sortPing", &class_boolean, offsetof(mindustry_ui_dialogs_JoinDialog, F_sortPing), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_JoinDialog, 0, "()V", 1 },
	{ "refreshAll", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_refreshAll, VTABLE_mindustry_ui_dialogs_JoinDialog_refreshAll, "()V", 0 },
	{ "setupRemote", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_setupRemote, VTABLE_mindustry_ui_dialogs_JoinDialog_setupRemote, "()V", 0 },
	{ "moveRemote", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int, VTABLE_mindustry_ui_dialogs_JoinDialog_moveRemote_mindustry_ui_dialogs_JoinDialog$Server_int, "(Lmindustry/ui/dialogs/JoinDialog$Server;I)V", 0 },
	{ "refreshRemote", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_refreshRemote, VTABLE_mindustry_ui_dialogs_JoinDialog_refreshRemote, "()V", 0 },
	{ "refreshServer", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_refreshServer_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 0 },
	{ "setupServer", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_setupServer_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host, "(Lmindustry/ui/dialogs/JoinDialog$Server;Lmindustry/net/Host;)V", 0 },
	{ "buildServer", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean, VTABLE_mindustry_ui_dialogs_JoinDialog_buildServer_mindustry_net_Host_arc_scene_ui_layout_Table_boolean_boolean, "(Lmindustry/net/Host;Larc/scene/ui/layout/Table;ZZ)V", 0 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_setup, VTABLE_mindustry_ui_dialogs_JoinDialog_setup, "()V", 0 },
	{ "section", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean, VTABLE_mindustry_ui_dialogs_JoinDialog_section_java_lang_String_arc_scene_ui_layout_Table_boolean, "(Ljava/lang/String;Larc/scene/ui/layout/Table;Z)V", 0 },
	{ "refreshLocal", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_refreshLocal, VTABLE_mindustry_ui_dialogs_JoinDialog_refreshLocal, "()V", 0 },
	{ "refreshCommunity", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_refreshCommunity, VTABLE_mindustry_ui_dialogs_JoinDialog_refreshCommunity, "()V", 0 },
	{ "addHeader", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean, VTABLE_mindustry_ui_dialogs_JoinDialog_addHeader_Array1_arc_scene_ui_layout_Table_mindustry_net_ServerGroup_boolean_boolean_boolean, "([Larc/scene/ui/layout/Table;Lmindustry/net/ServerGroup;ZZZ)V", 0 },
	{ "columns", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_columns_R_int, VTABLE_mindustry_ui_dialogs_JoinDialog_columns_R_int, "()I", 0 },
	{ "addCommunityHost", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_addCommunityHost_mindustry_net_Host_arc_scene_ui_layout_Table, "(Lmindustry/net/Host;Larc/scene/ui/layout/Table;)V", 0 },
	{ "finishLocalHosts", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_finishLocalHosts, VTABLE_mindustry_ui_dialogs_JoinDialog_finishLocalHosts, "()V", 0 },
	{ "addLocalHost", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_addLocalHost_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_addLocalHost_mindustry_net_Host, "(Lmindustry/net/Host;)V", 0 },
	{ "connect", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int, VTABLE_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "reconnect", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_reconnect, VTABLE_mindustry_ui_dialogs_JoinDialog_reconnect, "()V", 1 },
	{ "safeConnect", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int, VTABLE_mindustry_ui_dialogs_JoinDialog_safeConnect_java_lang_String_int_int, "(Ljava/lang/String;II)V", 0 },
	{ "targetWidth", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float, VTABLE_mindustry_ui_dialogs_JoinDialog_targetWidth_R_float, "()F", 0 },
	{ "loadServers", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_loadServers, VTABLE_mindustry_ui_dialogs_JoinDialog_loadServers, "()V", 2 },
	{ "fetchServers", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_fetchServers, 0, "()V", 9 },
	{ "fetchServers", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_fetchServers_Array1_java_lang_String_int, 0, "([Ljava/lang/String;I)V", 10 },
	{ "parseServerString", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_parseServerString_java_lang_String_R_arc_struct_Seq, 0, "(Ljava/lang/String;)Larc/struct/Seq;", 10 },
	{ "saveServers", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_saveServers, VTABLE_mindustry_ui_dialogs_JoinDialog_saveServers, "()V", 2 },
	{ "getVersionString", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String, VTABLE_mindustry_ui_dialogs_JoinDialog_getVersionString_mindustry_net_Host_R_java_lang_String, "(Lmindustry/net/Host;)Ljava/lang/String;", 2 },
	{ "lambda$parseServerString$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$parseServerString$0_arc_struct_Seq_arc_util_serialization_Jval, 0, "(Larc/struct/Seq;Larc/util/serialization/Jval;)V", 4106 },
	{ "lambda$fetchServers$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$1_arc_util_Http$HttpResponse, 0, "(Larc/util/Http$HttpResponse;)V", 4106 },
	{ "lambda$fetchServers$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$2_java_lang_String_arc_struct_Seq, 0, "(Ljava/lang/String;Larc/struct/Seq;)V", 4106 },
	{ "lambda$fetchServers$3", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$3_mindustry_net_ServerGroup_R_int, 0, "(Lmindustry/net/ServerGroup;)I", 4106 },
	{ "lambda$fetchServers$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$fetchServers$0_int_Array1_java_lang_String_java_lang_Throwable, 0, "(I[Ljava/lang/String;Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$reconnect$3", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$3, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$3, "()V", 4098 },
	{ "lambda$reconnect$0", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$0, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$0, "()V", 4098 },
	{ "lambda$reconnect$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$2_java_lang_Exception, 0, "(Ljava/lang/Exception;)V", 4106 },
	{ "lambda$reconnect$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$1_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$reconnect$1_mindustry_net_Host, "(Lmindustry/net/Host;)V", 4098 },
	{ "lambda$connect$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$connect$1_java_lang_String_int, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$connect$1_java_lang_String_int, "(Ljava/lang/String;I)V", 4098 },
	{ "lambda$connect$2", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$connect$2, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$connect$2, "()V", 4098 },
	{ "lambda$connect$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$connect$0, 0, "()V", 4106 },
	{ "lambda$addLocalHost$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$1_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$1_mindustry_net_Host, "(Lmindustry/net/Host;)V", 4098 },
	{ "lambda$addLocalHost$0", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$0_mindustry_net_Host_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addLocalHost$0_mindustry_net_Host_arc_scene_ui_Button, "(Lmindustry/net/Host;Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$addCommunityHost$5", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$5_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addCommunityHost$4", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$4_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$4_mindustry_net_Host, "(Lmindustry/net/Host;)V", 4098 },
	{ "lambda$addCommunityHost$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$1_Array1_arc_scene_ui_Button_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$1_Array1_arc_scene_ui_Button_mindustry_net_Host, "([Larc/scene/ui/Button;Lmindustry/net/Host;)V", 4098 },
	{ "lambda$addCommunityHost$3", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$3, 0, "()V", 4106 },
	{ "lambda$addCommunityHost$2", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$2_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$2_mindustry_net_Host, "(Lmindustry/net/Host;)V", 4098 },
	{ "lambda$addCommunityHost$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addCommunityHost$0_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$addHeader$3", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$3_mindustry_net_ServerGroup_boolean_boolean_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$3_mindustry_net_ServerGroup_boolean_boolean_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Lmindustry/net/ServerGroup;ZZ[Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addHeader$6", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$6_mindustry_net_ServerGroup_arc_scene_ui_layout_Table, 0, "(Lmindustry/net/ServerGroup;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addHeader$7", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$7_mindustry_net_ServerGroup_R_java_lang_CharSequence, 0, "(Lmindustry/net/ServerGroup;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addHeader$5", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$5_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton_Array1_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$5_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton_Array1_arc_scene_ui_layout_Table, "(Lmindustry/net/ServerGroup;[Larc/scene/ui/ImageButton;[Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$addHeader$4", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$4_mindustry_net_ServerGroup_Array1_arc_scene_ui_ImageButton, 0, "(Lmindustry/net/ServerGroup;[Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$addHeader$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$2_boolean_R_boolean, 0, "(Z)Z", 4106 },
	{ "lambda$addHeader$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$1_boolean_arc_scene_ui_layout_Table, 0, "(ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$addHeader$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$addHeader$0_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, 0, "([Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$refreshCommunity$3", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$3_java_lang_Exception, 0, "(Ljava/lang/Exception;)V", 4106 },
	{ "lambda$refreshCommunity$0", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$0_int_mindustry_net_ServerGroup_Array1_arc_scene_ui_layout_Table_boolean_boolean_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$0_int_mindustry_net_ServerGroup_Array1_arc_scene_ui_layout_Table_boolean_boolean_mindustry_net_Host, "(ILmindustry/net/ServerGroup;[Larc/scene/ui/layout/Table;ZZLmindustry/net/Host;)V", 4098 },
	{ "lambda$refreshCommunity$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$2_arc_scene_Element_R_float, 0, "(Larc/scene/Element;)F", 4106 },
	{ "lambda$refreshCommunity$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$1, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$refreshCommunity$1, "()V", 4098 },
	{ "lambda$refreshLocal$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshLocal$0_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$refreshLocal$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshLocal$1_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$section$9", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$9_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$9_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$section$10", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$10_java_lang_String, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$section$0", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$0_java_lang_String_boolean_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$0_java_lang_String_boolean_arc_scene_ui_layout_Collapser_arc_scene_ui_layout_Table, "(Ljava/lang/String;ZLarc/scene/ui/layout/Collapser;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$section$8", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$section$8_arc_scene_ui_layout_Collapser_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/layout/Collapser;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$section$7", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$section$7_arc_scene_ui_layout_Collapser_java_lang_String, 0, "(Larc/scene/ui/layout/Collapser;Ljava/lang/String;)V", 4106 },
	{ "lambda$section$6", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$6_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$6_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$section$5", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$5, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$5, "()V", 4098 },
	{ "lambda$section$3", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$3_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$section$4", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$4_R_java_lang_CharSequence, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$4_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$section$2", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$2_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$2_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$section$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$section$1, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$section$1, "()V", 4098 },
	{ "lambda$setup$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$0_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setup$4", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$4_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$setup$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$2, 0, "()V", 4106 },
	{ "lambda$setup$3", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$3_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 4106 },
	{ "lambda$setup$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setup$1_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$buildServer$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$buildServer$1_arc_graphics_Color_mindustry_net_Host_boolean_float_arc_scene_ui_layout_Table, 0, "(Larc/graphics/Color;Lmindustry/net/Host;ZFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildServer$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$buildServer$0_arc_graphics_Color_mindustry_net_Host_java_lang_String_float_arc_scene_ui_layout_Table, 0, "(Larc/graphics/Color;Lmindustry/net/Host;Ljava/lang/String;FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$refreshServer$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$2_mindustry_ui_dialogs_JoinDialog$Server_java_lang_Exception, 0, "(Lmindustry/ui/dialogs/JoinDialog$Server;Ljava/lang/Exception;)V", 4106 },
	{ "lambda$refreshServer$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$1_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$1_mindustry_ui_dialogs_JoinDialog$Server_mindustry_net_Host, "(Lmindustry/ui/dialogs/JoinDialog$Server;Lmindustry/net/Host;)V", 4098 },
	{ "lambda$refreshServer$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$refreshServer$0_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setupRemote$8", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$8_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setupRemote$6", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$6_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$6_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$7", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$7_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$7_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$5", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$5_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$5_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$4", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$4_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$4_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$3", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$3_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$3_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$2", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$2_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$2_mindustry_ui_dialogs_JoinDialog$Server, "(Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$1", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$1_Array1_arc_scene_ui_Button_mindustry_ui_dialogs_JoinDialog$Server, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$1_Array1_arc_scene_ui_Button_mindustry_ui_dialogs_JoinDialog$Server, "([Larc/scene/ui/Button;Lmindustry/ui/dialogs/JoinDialog$Server;)V", 4098 },
	{ "lambda$setupRemote$0", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$setupRemote$0_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$new$9", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$new$9, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$new$9, "()V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$new$6, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$new$6, "()V", 4098 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$new$7, 0, "()V", 4106 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$new$8, 0, "()V", 4106 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$new$5_arc_scene_ui_TextField, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$new$5_arc_scene_ui_TextField, "(Larc/scene/ui/TextField;)V", 4098 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$new$4_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$new$3, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$new$2_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_ui_dialogs_JoinDialog_lambda$new$1, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_JoinDialog_lambda$new$0, VTABLE_mindustry_ui_dialogs_JoinDialog_lambda$new$0, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_JoinDialog, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_JoinDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/JoinDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_JoinDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_JoinDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_JoinDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_JoinDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 102,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 355,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_JoinDialog = registerClass(&class_mindustry_ui_dialogs_JoinDialog);

}
