#include "mindustry/ui/builder/UiHotReload.h"
#include "mindustry/ui/builder/UiHotReload_invoke_java_lang_Runnable_1.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "arc/files/Fi.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildResult.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/ui/builder/UiBuilder_TableBuilder.h"
#include "java/lang/Throwable.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "java/lang/Exception.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "arc/util/Time.h"
#include "mindustry/ui/builder/UiTreeBuilder.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiHotReload_invoke_arc_func_Cons_3.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/builder/UiHotReload_invoke_arc_func_Cons_2.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/builder/UiBuilder.h"
#include "mindustry/ui/builder/UiHotReload.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_builder_UiHotReload(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_builder_UiHotReload *) object;
}

void clinit_mindustry_ui_builder_UiHotReload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiHotReload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiHotReload_show(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"msui"_j)));
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiHotReload_reload_arc_files_Fi_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:reload", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiBuilder_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiHotReload_invoke_arc_func_Cons_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(62);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(46);
	frame[2].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"line "_j))));
	if (temp0 == 0) goto label_13;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"line "_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(5))));
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[4].i = temp1;
	LINE_NUMBER(52);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(54);
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), ((frame[4].i) - (jint(1))))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), ((frame[4].i) - (jint(1))))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[red]Error:[] \u0001\n\nLine: [red]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(59);
	goto label_13;
label_6:;
	LINE_NUMBER(58);
	INST_ASTORE(3);
label_13:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	sp[1].o = (jobject)SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[red]Error reading file![] \n\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	}
label_10:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiHotReload_lambda$reload$0_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:lambda$reload$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_ui_builder_MenuResult_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_MenuResult_toString_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiHotReload_lambda$show$0_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:lambda$show$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	jint temp0 = jint(0);
	jlong temp1 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, (frame[0].o));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(0))) = (jlong(0));
	frame[2].o = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[3].o = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mindustry DSL Preview"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiHotReload_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_builder_UiHotReload_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiHotReload_invoke_java_lang_Runnable_1);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	SM_mindustry_ui_builder_UiHotReload_reload_arc_files_Fi_mindustry_ui_dialogs_BaseDialog(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(34);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[4].o));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[4].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiHotReload_lambda$show$1_Array1_long_arc_files_Fi_Array1_boolean_Array1_long_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiHotReload:lambda$show$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiHotReload(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(22);
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, (frame[0].o), (jint(0)));
	jlong temp1 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jlong temp1 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, (frame[1].o));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	LINE_NUMBER(24);
	ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0))) = (jint(1));
	LINE_NUMBER(25);
	sp[0].o = frame[3].o;
	jint temp2 = jint(0);
	jlong temp3 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	ARRAY_ACCESS(jlong, sp[0].o, temp2) = temp3;
	}
label_1:;
	{
	LINE_NUMBER(28);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))) == 0) goto label_5;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0)))));
	if ((longCompare(temp0, (jlong(100ll)))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(29);
	ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0))) = (jint(0));
	LINE_NUMBER(30);
	SM_mindustry_ui_builder_UiHotReload_reload_arc_files_Fi_mindustry_ui_dialogs_BaseDialog(ctx, (frame[1].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiHotReload[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiHotReload, 0, "()V", 1 },
	{ "show", (intptr_t) SM_mindustry_ui_builder_UiHotReload_show, 0, "()V", 9 },
	{ "reload", (intptr_t) SM_mindustry_ui_builder_UiHotReload_reload_arc_files_Fi_mindustry_ui_dialogs_BaseDialog, 0, "(Larc/files/Fi;Lmindustry/ui/dialogs/BaseDialog;)V", 8 },
	{ "lambda$reload$0", (intptr_t) SM_mindustry_ui_builder_UiHotReload_lambda$reload$0_mindustry_ui_builder_MenuResult, 0, "(Lmindustry/ui/builder/MenuResult;)V", 4106 },
	{ "lambda$show$0", (intptr_t) SM_mindustry_ui_builder_UiHotReload_lambda$show$0_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$show$1", (intptr_t) SM_mindustry_ui_builder_UiHotReload_lambda$show$1_Array1_long_arc_files_Fi_Array1_boolean_Array1_long_mindustry_ui_dialogs_BaseDialog, 0, "([JLarc/files/Fi;[Z[JLmindustry/ui/dialogs/BaseDialog;)V", 4106 },
};

Class class_mindustry_ui_builder_UiHotReload{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiHotReload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiHotReload),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiHotReload,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiHotReload,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiHotReload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiHotReload = registerClass(&class_mindustry_ui_builder_UiHotReload);

}
