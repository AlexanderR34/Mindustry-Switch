#include "mindustry/ui/FileChooser.h"
#include "mindustry/ui/FileChooser_invoke_arc_func_Cons_3.h"
#include "mindustry/ui/FileChooser_invoke_arc_func_Cons_2.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "arc/files/Fi.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/FileChooser_invoke_arc_func_Boolf_2.h"
#include "java/lang/String.h"
#include "mindustry/ui/FileChooser_invoke_arc_func_Boolf_3.h"
#include "mindustry/ui/FileChooser_invoke_java_lang_Runnable_2.h"
#include "mindustry/ui/FileChooser_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/FileChooser.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "arc/util/Structs.h"
#include "mindustry/ui/dialogs/FileChooserDialog.h"
#include "mindustry/core/Platform.h"
#include "mindustry/core/UI.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_FileChooser(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_FileChooser *) object;
}

void clinit_mindustry_ui_FileChooser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_FileChooser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:export", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(16);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) != 0) goto label_1;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_save_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8".\u0001"_j.string, 1, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	INST_ALOAD(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001"_j.string, 2, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(28);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_java_lang_Runnable_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:open", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	clinit_mindustry_ui_FileChooser$FileChooserParams(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_FileChooser$FileChooserParams);
	init_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_FileChooser_save_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:save", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	clinit_mindustry_ui_FileChooser$FileChooserParams(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_FileChooser$FileChooserParams);
	init_mindustry_ui_FileChooser$FileChooserParams(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_FileChooser_createFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams_R_mindustry_ui_dialogs_FileChooserDialog(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:createFallbackFileChooser", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	clinit_mindustry_ui_dialogs_FileChooserDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_FileChooserDialog);
	sp[1].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_title;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_open;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_dialogs_FileChooserDialog_java_lang_String_arc_func_Boolf_boolean_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_showFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:showFallbackFileChooser", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_mindustry_ui_FileChooser_createFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams_R_mindustry_ui_dialogs_FileChooserDialog(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_FileChooserDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$1_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:lambda$createFallbackFileChooser$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	if (((jint)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_files_Fi, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	sp[4].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001"_j.string, 2, sp[3].o, ((jobject)ARRAY_ACCESS(jobject, sp[4].o, (jint(0)))));
	sp[2].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_files_Fi, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	((func_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$0_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:lambda$createFallbackFileChooser$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_lambda$export$2_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:lambda$export$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001"_j.string, 2, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(31);
	((func_mindustry_core_Platform$FileWriter_write_arc_files_Fi) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform$FileWriter, INDEX_mindustry_core_Platform$FileWriter_write_arc_files_Fi, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(32);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_shareFile_arc_files_Fi) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_shareFile_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(36);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(33);
	frame[3].o = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(35);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	}
label_6:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_lambda$export$0_mindustry_core_Platform$FileWriter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:lambda$export$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(18);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_FileChooser_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_FileChooser_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_FileChooser_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_loadAnd_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_FileChooser_lambda$export$1_mindustry_core_Platform$FileWriter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser:lambda$export$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(20);
	((func_mindustry_core_Platform$FileWriter_write_arc_files_Fi) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform$FileWriter, INDEX_mindustry_core_Platform$FileWriter_write_arc_files_Fi, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(24);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(21);
	frame[2].o = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(23);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_FileChooser[] {
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

static jclass innerClasses[] {
	&class_mindustry_ui_FileChooser$FileChooserParams,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_FileChooser, 0, "()V", 1 },
	{ "export", (intptr_t) SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/core/Platform$FileWriter;)V", 9 },
	{ "open", (intptr_t) SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, 0, "([Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;", 137 },
	{ "save", (intptr_t) SM_mindustry_ui_FileChooser_save_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, 0, "([Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;", 137 },
	{ "createFallbackFileChooser", (intptr_t) SM_mindustry_ui_FileChooser_createFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams_R_mindustry_ui_dialogs_FileChooserDialog, 0, "(Lmindustry/ui/FileChooser$FileChooserParams;)Lmindustry/ui/dialogs/FileChooserDialog;", 9 },
	{ "showFallbackFileChooser", (intptr_t) SM_mindustry_ui_FileChooser_showFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams, 0, "(Lmindustry/ui/FileChooser$FileChooserParams;)V", 9 },
	{ "lambda$createFallbackFileChooser$1", (intptr_t) SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$1_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi, 0, "(Lmindustry/ui/FileChooser$FileChooserParams;Larc/files/Fi;)V", 4106 },
	{ "lambda$createFallbackFileChooser$0", (intptr_t) SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$0_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi_R_boolean, 0, "(Lmindustry/ui/FileChooser$FileChooserParams;Larc/files/Fi;)Z", 4106 },
	{ "lambda$export$2", (intptr_t) SM_mindustry_ui_FileChooser_lambda$export$2_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/core/Platform$FileWriter;)V", 4106 },
	{ "lambda$export$0", (intptr_t) SM_mindustry_ui_FileChooser_lambda$export$0_mindustry_core_Platform$FileWriter_arc_files_Fi, 0, "(Lmindustry/core/Platform$FileWriter;Larc/files/Fi;)V", 4106 },
	{ "lambda$export$1", (intptr_t) SM_mindustry_ui_FileChooser_lambda$export$1_mindustry_core_Platform$FileWriter_arc_files_Fi, 0, "(Lmindustry/core/Platform$FileWriter;Larc/files/Fi;)V", 4106 },
};

Class class_mindustry_ui_FileChooser{
		.nativeName = (intptr_t) "mindustry/ui/FileChooser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_FileChooser),
		.classVtable = (intptr_t) vtable_mindustry_ui_FileChooser,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_FileChooser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_FileChooser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_FileChooser = registerClass(&class_mindustry_ui_FileChooser);

}
