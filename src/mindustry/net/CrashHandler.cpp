#include "mindustry/net/CrashHandler.h"
#include "mindustry/net/CrashHandler_invoke_arc_func_Func_3.h"
#include "mindustry/net/CrashHandler_invoke_arc_func_Func_2.h"
#include "java/lang/Integer.h"
#include "java/io/Writer.h"
#include "mindustry/core/Version.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/mod/Mods.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/util/OS.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/Settings.h"
#include "java/io/Reader.h"
#include "java/io/StringWriter.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "arc/func/Boolf.h"
#include "java/util/Locale.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/util/Nullable.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/System.h"
#include "mindustry/net/Net.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "java/util/Date.h"
#include "arc/Application.h"
#include "java/io/InputStream.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/io/PrintWriter.h"
#include "java/io/InputStreamReader.h"
#include "mindustry/mod/DataManager.h"
#include "java/text/SimpleDateFormat.h"
#include "java/lang/Math.h"
#include "java/lang/Runtime.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/net/CrashHandler_invoke_arc_func_Boolf_1.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/net/CrashHandler.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "java/lang/StackTraceElement.h"

extern "C" {


void mark_mindustry_net_CrashHandler(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_CrashHandler *) object;
}

void clinit_mindustry_net_CrashHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_CrashHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_CrashHandler_createReport_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[25];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:createReport", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_mindustry_net_CrashHandler_writeException_java_lang_Throwable_R_java_lang_String(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_mindustry_net_CrashHandler_getModCause_java_lang_Throwable_R_mindustry_mod_Mods$LoadedMod(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(26);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Mindustry has crashed. How unfortunate.\n"_j));
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"The mod '\u0001' (\u0001) has caused Mindustry to crash.\n"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_6;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001Report this at https://github.com/Anuken/Mindustry/issues/new?labels=bug&template=bug_report.md\n\n"_j.string, 1, (frame[3].o));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o != nullptr) goto label_8;
	}
	INST_ACONST_NULL();
	goto label_9;
label_8:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_net_CrashHandler_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_net_CrashHandler_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_net_CrashHandler_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = frame[3].o;
	LINE_NUMBER(34);
	sp[1].o = (jobject)SM_mindustry_core_Version_combined_R_java_lang_String(ctx);
	clinit_mindustry_core_Version(ctx);
	sp[2].o = (jobject)SF_mindustry_core_Version_buildDate;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp += 2;
	if (temp0 == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_13;
label_12:;
	clinit_mindustry_core_Version(ctx);
	(sp++)->o = SF_mindustry_core_Version_buildDate;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8" (Built \u0001)"_j.string, 1, sp[0].o);
label_13:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_14;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" (Server)"_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_15:;
	{
	clinit_java_text_SimpleDateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MMMM d, yyyy HH:mm:ss a"_j));
	LINE_NUMBER(35);
	sp[2].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	init_java_text_SimpleDateFormat_java_lang_String_java_util_Locale(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_OS(ctx);
	sp[1].o = (jobject)SF_arc_util_OS_osName;
	LINE_NUMBER(36);
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_osArchBits;
	sp += 2;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_osArchBits;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" x\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_19:;
	{
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_osArch;
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp += 1;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_22;
	}
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_23;
label_22:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"GL Version: \u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_23:;
	{
	LINE_NUMBER(38);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) != 0) goto label_24;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i == 0) goto label_25;
label_24:;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_app;
	if ((--sp)->o == nullptr) goto label_25;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_getVersion_R_int) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getVersion_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Android API level: \u0001\n"_j.string, 1, boxInteger(ctx, temp0));
	sp += 1;
	goto label_26;
	}
label_25:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_26:;
	{
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_javaVersion;
	LINE_NUMBER(40);
	sp[1].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jlong temp0 = (jlong)((func_java_lang_Runtime_maxMemory_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Runtime_maxMemory_R_long])(ctx, sp[1].o);
	jlong temp1 = (temp0 / (jlong(1024ll))) / (jlong(1024ll));
	clinit_arc_util_OS(ctx);
	jint temp2 = (jint)SF_arc_util_OS_cores;
	LINE_NUMBER(42);
	sp[1].l = temp1;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[2].o) != nullptr) goto label_29;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_30;
label_29:;
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_name;
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_meta;
	sp[2].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[2].o))->F_version;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Likely Cause: \u0001 (\u0001 v\u0001)\n"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_30:;
	{
	LINE_NUMBER(43);
	if ((frame[4].o) != nullptr) goto label_31;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<no mod init>"_j));
	goto label_32;
label_31:;
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_33;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"none (vanilla)"_j));
	goto label_34;
label_33:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8", "_j));
	{ /* InvokeDynamic */
		clinit_mindustry_net_CrashHandler_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_net_CrashHandler_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_net_CrashHandler_invoke_arc_func_Func_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_34:;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"Mods: \u0001"_j.string, 1, sp[0].o);
label_32:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp += 1;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n---\n"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_net_CrashHandler_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_net_CrashHandler_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_net_CrashHandler_invoke_arc_func_Func_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\n\nPatches: \n\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_37;
	}
label_36:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_37:;
	{
	sp -= 17;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001Version: \u0001\u0001\u0001\nDate: \u0001\nOS: \u0001\u0001 (\u0001)\n\u0001\u0001Java Version: \u0001\nRuntime Available Memory: \u0001mb\nCores: \u0001\n\u0001\u0001\n\n\n\u0001\u0001"_j.string, 17, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o, sp[10].o, boxLong(ctx, sp[11].l), boxInteger(ctx, sp[12].i), sp[13].o, sp[14].o, sp[15].o, sp[16].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_CrashHandler_log_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:log", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crashes"_j))));
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"crash_\u0001.txt"_j.string, 1, boxLong(ctx, temp0));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	LINE_NUMBER(51);
	sp[1].o = (jobject)SM_mindustry_net_CrashHandler_createReport_java_lang_Throwable_R_java_lang_String(ctx, sp[1].o);
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(53);
	goto label_5;
label_2:;
	LINE_NUMBER(52);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_CrashHandler_handle_java_lang_Throwable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:handle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(60);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[0].o));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_manualSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_manualSave])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(68);
	goto label_24;
label_6:;
	INST_ASTORE(2);
label_24:;
	{
	LINE_NUMBER(71);
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_username;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"anuke"_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"steam"_j));
	clinit_mindustry_core_Version(ctx);
	sp[1].o = (jobject)SF_mindustry_core_Version_modifier;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(72);
	SM_java_lang_System_exit_int(ctx, (jint(1)));
	}
label_25:;
	{
	LINE_NUMBER(76);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_number) != 0) goto label_12;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(78);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = frame[2].o;
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_net_CrashHandler)))->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, (((jobject) &class_mindustry_net_CrashHandler)), (((jobject) createStringLiteral(ctx, u8"/version.properties"_j))));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_type = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"number"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_number = temp0;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"modifier"_j))));
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_modifier = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"build"_j))));
	jint temp1 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp1 == 0) goto label_32;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"build"_j))));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_build = temp0;
	LINE_NUMBER(87);
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_revision = temp1;
	LINE_NUMBER(88);
	goto label_9;
	}
label_32:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"build"_j))));
	jint temp0 = (jint)SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"build"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	sp[0].i = temp0;
	sp += 1;
	goto label_38;
	}
label_37:;
	INST_ICONST(-1);
label_38:;
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_build = (--sp)->i;
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(94);
	goto label_12;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(91);
	frame[2].o = sp[0].o;
	LINE_NUMBER(92);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[2].o));
	LINE_NUMBER(93);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to parse version."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(98);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	clinit_java_text_SimpleDateFormat(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	init_java_text_SimpleDateFormat_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"MM_dd_yyyy_HH_mm_ss"_j))));
	clinit_java_util_Date(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"crashes/crash-report-\u0001.txt"_j.string, 1, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(99);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crashes"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(100);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_io_File(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)SM_mindustry_net_CrashHandler_createReport_java_lang_Throwable_R_java_lang_String(ctx, (frame[0].o));
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(104);
	goto label_16;
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(102);
	frame[2].o = sp[0].o;
	LINE_NUMBER(103);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to save local crash report."_j))), (frame[2].o));
	}
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_dispose])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(110);
	goto label_20;
label_18:;
	LINE_NUMBER(109);
	INST_ASTORE(2);
label_20:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(114);
	goto label_45;
label_21:;
	{
	sp -= 1;
	LINE_NUMBER(112);
	frame[2].o = sp[0].o;
	LINE_NUMBER(113);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[2].o));
	}
label_45:;
	{
	LINE_NUMBER(116);
	SM_java_lang_System_exit_int(ctx, (jint(1)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_CrashHandler_getModCause_java_lang_Throwable_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:getModCause", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o != nullptr) goto label_0;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_16; }
	if (bypasses[4]) { bypasses[4] = false; goto label_11; }
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[2].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_8
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_lang_String_matches_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_matches_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"(mindustry|arc|java|javax|sun|jdk)\\..*"_j))));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_14
	}
	{
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_9; } // goto label_14
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[7].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_main;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[7].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_main;
	jint temp0 = (jint)SM_mindustry_net_CrashHandler_getMatches_java_lang_String_java_lang_String_R_int(ctx, sp[0].o, (frame[5].o));
	if (temp0 <= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(128);
	INST_ALOAD(7);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[4].o));
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".js"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	LINE_NUMBER(130);
	INST_ALOAD(7);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	if (bypasses[1]) { bypasses[1] = false; goto label_14; }
	if (bypasses[2]) { bypasses[2] = false; goto label_14; }
	LINE_NUMBER(132);
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_3; } // goto label_16
label_14:;
	{
	LINE_NUMBER(123);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_3; } // goto label_11
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(135);
	goto label_20;
label_2:;
	INST_ASTORE(1);
label_20:;
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_net_CrashHandler_getMatches_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:getMatches", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(141);
	frame[4].i = (jint(0));
	LINE_NUMBER(142);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_7:;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_java_lang_String_matches_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))->vtable)[VTABLE_java_lang_String_matches_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))), (((jobject) createStringLiteral(ctx, u8"net|org|com|io"_j))));
	if (temp0 != 0) goto label_9;
	}
	LINE_NUMBER(147);
	INST_IINC(4, 1);
label_9:;
	{
	LINE_NUMBER(142);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_CrashHandler_writeException_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:writeException", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(154);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(155);
	clinit_java_io_PrintWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintWriter);
	init_java_io_PrintWriter_java_io_Writer(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(156);
	((func_java_lang_Throwable_printStackTrace_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_CrashHandler_lambda$createReport$2_mindustry_mod_data_PatchAsset_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:lambda$createReport$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_CrashHandler_lambda$createReport$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:lambda$createReport$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_version;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_CrashHandler_lambda$createReport$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/CrashHandler:lambda$createReport$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_CrashHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean])(ctx, (frame[0].o));
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_CrashHandler;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getModCause
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_CrashHandler[] {
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
	{ "<init>", (intptr_t) init_mindustry_net_CrashHandler, 0, "()V", 1 },
	{ "createReport", (intptr_t) SM_mindustry_net_CrashHandler_createReport_java_lang_Throwable_R_java_lang_String, 0, "(Ljava/lang/Throwable;)Ljava/lang/String;", 9 },
	{ "log", (intptr_t) SM_mindustry_net_CrashHandler_log_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 9 },
	{ "handle", (intptr_t) SM_mindustry_net_CrashHandler_handle_java_lang_Throwable_arc_func_Cons, 0, "(Ljava/lang/Throwable;Larc/func/Cons;)V", 9 },
	{ "getModCause", (intptr_t) SM_mindustry_net_CrashHandler_getModCause_java_lang_Throwable_R_mindustry_mod_Mods$LoadedMod, 0, "(Ljava/lang/Throwable;)Lmindustry/mod/Mods$LoadedMod;", 9 },
	{ "getMatches", (intptr_t) SM_mindustry_net_CrashHandler_getMatches_java_lang_String_java_lang_String_R_int, 0, "(Ljava/lang/String;Ljava/lang/String;)I", 10 },
	{ "writeException", (intptr_t) SM_mindustry_net_CrashHandler_writeException_java_lang_Throwable_R_java_lang_String, 0, "(Ljava/lang/Throwable;)Ljava/lang/String;", 10 },
	{ "lambda$createReport$2", (intptr_t) SM_mindustry_net_CrashHandler_lambda$createReport$2_mindustry_mod_data_PatchAsset_R_java_lang_String, 0, "(Lmindustry/mod/data/PatchAsset;)Ljava/lang/String;", 4106 },
	{ "lambda$createReport$1", (intptr_t) SM_mindustry_net_CrashHandler_lambda$createReport$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String, 0, "(Lmindustry/mod/Mods$LoadedMod;)Ljava/lang/String;", 4106 },
	{ "lambda$createReport$0", (intptr_t) SM_mindustry_net_CrashHandler_lambda$createReport$0_mindustry_mod_Mods$LoadedMod_R_boolean, 0, "(Lmindustry/mod/Mods$LoadedMod;)Z", 4106 },
};

Class class_mindustry_net_CrashHandler{
		.nativeName = (intptr_t) "mindustry/net/CrashHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_CrashHandler),
		.classVtable = (intptr_t) vtable_mindustry_net_CrashHandler,
		.staticInitializer = (intptr_t) clinit_mindustry_net_CrashHandler,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_CrashHandler,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_CrashHandler = registerClass(&class_mindustry_net_CrashHandler);

}
