extern "C" void clinit_arc_scene_ui_layout_Scl(jcontext ctx);
extern "C" void SM_arc_scene_ui_layout_Scl_setProduct_float(jcontext ctx, jfloat param0);
#include "mindustry/switchplatform/SwitchLauncher.h"
#include "arc/ApplicationCore.h"
#include "mindustry/switchplatform/SwitchLauncher_1.h"
#include "java/lang/Boolean.h"
#include "java/lang/Integer.h"
#include "arc/audio/Audio.h"
#include "arc/Events.h"
#include "arc/backend/sdl/SdlConfig.h"
#include "mindustry/ClientLauncher.h"
#include "mindustry/core/Version.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlApplication.h"
#include "mindustry/core/Control.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "mindustry/game/EventType_ClientCreateEvent.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "mindustry/core/Platform.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"
#include "mindustry/switchplatform/SwitchLauncher.h"
#include "mindustry/switchplatform/SwitchLauncher_invoke_arc_func_Cons_0.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"
#include "java/lang/System.h"
#include "mindustry/input/DesktopInput.h"

extern "C" {

jint SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_WIDTH;
jint SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_HEIGHT;
jint SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_WIDTH;
jint SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_HEIGHT;

void mark_mindustry_switchplatform_SwitchLauncher(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ClientLauncher(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_switchplatform_SwitchLauncher *) object;
	if (self->F_args)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_args)->clazz)->markFunction)((jobject) self->F_args, mark, depth + 1);
}

void clinit_mindustry_switchplatform_SwitchLauncher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ClientLauncher(ctx);
	SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_WIDTH = jint(1280);
	SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_HEIGHT = jint(720);
	SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_WIDTH = jint(1920);
	SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_HEIGHT = jint(1080);
}

void init_mindustry_switchplatform_SwitchLauncher_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_switchplatform_SwitchLauncher(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_mindustry_ClientLauncher(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((mindustry_switchplatform_SwitchLauncher *) NULL_CHECK((frame[0].o)))->F_args = (jref) (frame[1].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_switchplatform_SwitchLauncher_main_Array1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:main", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_switchplatform_SwitchLauncher(ctx);
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_useColors = false;
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	printf("[SwitchLauncher] Step 1: Version init\n"); fflush(stdout);
	LINE_NUMBER(39);
	SM_mindustry_core_Version_init(ctx);
	printf("[SwitchLauncher] Step 2: Vars loadLogger\n"); fflush(stdout);
	LINE_NUMBER(40);
	SM_mindustry_Vars_loadLogger(ctx);
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_useColors = false;
	printf("[SwitchLauncher] Step 3: Save directory setup\n"); fflush(stdout);
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"mindustry.switch.dir"_j))), (((jobject) createStringLiteral(ctx, u8"switch/mindustry"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, (frame[2].o));
	}
label_8:;
	{
	printf("[SwitchLauncher] Step 4: Storage directory setup complete\n"); fflush(stdout);
	printf("[SwitchLauncher] Step 5: Logging starting info...\n"); fflush(stdout);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Starting Mindustry on Nintendo Switch platform..."_j))));
	LINE_NUMBER(52);
	printf("[SwitchLauncher] Step 6: Creating SdlApplication and Window...\n"); fflush(stdout);
	clinit_arc_backend_sdl_SdlApplication(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication);
	clinit_mindustry_switchplatform_SwitchLauncher(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_switchplatform_SwitchLauncher);
	init_mindustry_switchplatform_SwitchLauncher_Array1_java_lang_String(ctx, sp[1].o, (frame[0].o));
	clinit_mindustry_switchplatform_SwitchLauncher$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_switchplatform_SwitchLauncher$1);
	init_mindustry_switchplatform_SwitchLauncher$1(ctx, sp[2].o);
	init_arc_backend_sdl_SdlApplication_arc_ApplicationListener_arc_backend_sdl_SdlConfig(ctx, sp[0].o, sp[1].o, sp[2].o);
	printf("[SwitchLauncher] SdlApplication created and initialized!\n"); fflush(stdout);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(69);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(67);
	frame[1].o = sp[0].o;
	LINE_NUMBER(68);
	printf("[SwitchLauncher] FATAL EXCEPTION in main!\n");
	auto th = (java_lang_Throwable*)frame[1].o;
	if (th) {
		auto cls = (jclass)((jobject)th)->clazz;
		if (cls && cls->nativeName) {
			printf("[SwitchLauncher] Exception Class: %s\n", (const char*)cls->nativeName);
		}
		if (th->F_message) {
			printf("[SwitchLauncher] Exception Message: %s\n", stringToNative(ctx, (jstring)th->F_message));
		}
		if (th->F_stack) {
			printf("[SwitchLauncher] Exception Stack Trace:\n%s\n", stringToNative(ctx, (jstring)th->F_stack));
		}
	}
	fflush(stdout);
	SM_mindustry_switchplatform_SwitchLauncher_handleCrash_java_lang_Throwable(ctx, (frame[1].o));
	}
label_12:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_switchplatform_SwitchLauncher_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:setup", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (18));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"uiscale"_j)));
	jint temp0 = jint(1);
	jfloat temp1 = jfloat(1);
	LINE_NUMBER(76);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, jint(100));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"showfps"_j)));
	jint temp2 = jint(3);
	jint temp3 = jint(0);
	LINE_NUMBER(77);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp3);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"vsync"_j)));
	jint temp4 = jint(5);
	jint temp5 = jint(1);
	LINE_NUMBER(78);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp5);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (((jobject) createStringLiteral(ctx, u8"touchscreen"_j)));
	jint temp6 = 7;
	jint temp7 = jint(1);
	LINE_NUMBER(79);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp7);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (8)) = (((jobject) createStringLiteral(ctx, u8"gamepad"_j)));
	jint temp8 = 9;
	jint temp9 = jint(1);
	LINE_NUMBER(80);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp9);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (10)) = (((jobject) createStringLiteral(ctx, u8"sfxvol"_j)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, jint(100));
	ARRAY_ACCESS(jobject, sp[1].o, 11) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (12)) = (((jobject) createStringLiteral(ctx, u8"musicvol"_j)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, jint(100));
	ARRAY_ACCESS(jobject, sp[1].o, 13) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (14)) = (((jobject) createStringLiteral(ctx, u8"ambientvol"_j)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, jint(100));
	ARRAY_ACCESS(jobject, sp[1].o, 15) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (16)) = (((jobject) createStringLiteral(ctx, u8"hints"_j)));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, 17) = sp[2].o;
	LINE_NUMBER(75);
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	if (SF_arc_Core_audio) {
		((arc_audio_Audio *) SF_arc_Core_audio)->F_sfxVolume = 1.0f;
	}
	LINE_NUMBER(83);
	M_mindustry_ClientLauncher_setup(ctx, (frame[0].o));
	LINE_NUMBER(85);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientCreateEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_switchplatform_SwitchLauncher_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_switchplatform_SwitchLauncher_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_switchplatform_SwitchLauncher_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_switchplatform_SwitchLauncher_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	M_mindustry_ClientLauncher_update(ctx, (frame[0].o));
	LINE_NUMBER(98);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(103);
	if ((frame[1].i) < (1920)) goto label_2;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_scene;
	if ((--sp)->o == nullptr) goto label_2;
label_2:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_switchplatform_SwitchLauncher_handleCrash_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:handleCrash", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_switchplatform_SwitchLauncher(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	printf("[SwitchLauncher] Exception details logged in handleCrash\n");
	auto th = (java_lang_Throwable*)param0;
	if (th && th->F_message) {
		printf("[SwitchLauncher] Throwable message: %s\n", stringToNative(ctx, (jstring)th->F_message));
	}
	fflush(stdout);
	LINE_NUMBER(113);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Fatal crash on Switch platform: "_j))), (frame[0].o));
	LINE_NUMBER(114);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"switch/mindustry/crash_log.txt"_j))));
	sp[1].o = (jobject)SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, (frame[0].o));
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(116);
	goto label_5;
label_2:;
	LINE_NUMBER(115);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_switchplatform_SwitchLauncher_lambda$setup$0_mindustry_game_EventType$ClientCreateEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_switchplatform_SwitchLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Switch Client initialized successfully."_j))));
	LINE_NUMBER(88);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mobile = (jint(1));
	clinit_arc_scene_ui_layout_Scl(ctx);
	SM_arc_scene_ui_layout_Scl_setProduct_float(ctx, 1.0f);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_switchplatform_SwitchLauncher[] {
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
	(void *) M_mindustry_ClientLauncher_init,
	(void *) M_mindustry_ClientLauncher_resize_int_int,
	(void *) M_mindustry_switchplatform_SwitchLauncher_update,
	(void *) M_mindustry_ClientLauncher_pause,
	(void *) M_mindustry_ClientLauncher_resume,
	(void *) M_arc_ApplicationCore_dispose,
	(void *) M_mindustry_ClientLauncher_exit,
	(void *) M_mindustry_ClientLauncher_fileDropped_arc_files_Fi,
	(void *) M_mindustry_ClientLauncher_add_arc_ApplicationListener,
	(void *) M_mindustry_switchplatform_SwitchLauncher_setup,
	(void *) M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader,
	(void *) M_mindustry_core_Platform_updateLobby,
	(void *) M_mindustry_core_Platform_inviteFriends,
	(void *) M_mindustry_core_Platform_publish_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListing_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListingID_java_lang_String,
	(void *) M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq,
	(void *) M_mindustry_core_Platform_openWorkshop,
	(void *) M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider,
	(void *) M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts,
	(void *) M_mindustry_core_Platform_getScriptContext_R_rhino_Context,
	(void *) M_mindustry_core_Platform_updateRPC,
	(void *) M_mindustry_core_Platform_getUUID_R_java_lang_String,
	(void *) M_mindustry_core_Platform_shareFile_arc_files_Fi,
	(void *) M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_core_Platform_hide,
	(void *) M_mindustry_core_Platform_beginForceLandscape,
	(void *) M_mindustry_core_Platform_endForceLandscape,
	(void *) M_mindustry_ClientLauncher_lambda$update$0,
	(void *) M_mindustry_ClientLauncher_lambda$update$1,
	(void *) M_mindustry_ClientLauncher_lambda$update$2,
	(void *) M_mindustry_ClientLauncher_lambda$update$3,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "add", "(Larc/ApplicationListener;)V" },
	{ "setup", "()V" },
	{ "loadJar", "(Larc/files/Fi;Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;" },
	{ "updateLobby", "()V" },
	{ "inviteFriends", "()V" },
	{ "publish", "(Lmindustry/type/Publishable;)V" },
	{ "viewListing", "(Lmindustry/type/Publishable;)V" },
	{ "viewListingID", "(Ljava/lang/String;)V" },
	{ "getWorkshopContent", "(Ljava/lang/Class;)Larc/struct/Seq;" },
	{ "openWorkshop", "()V" },
	{ "getNet", "()Lmindustry/net/Net$NetProvider;" },
	{ "createScripts", "()Lmindustry/mod/Scripts;" },
	{ "getScriptContext", "()Lrhino/Context;" },
	{ "updateRPC", "()V" },
	{ "getUUID", "()Ljava/lang/String;" },
	{ "shareFile", "(Larc/files/Fi;)V" },
	{ "showFileChooser", "(Lmindustry/ui/FileChooser$FileChooserParams;)V" },
	{ "hide", "()V" },
	{ "beginForceLandscape", "()V" },
	{ "endForceLandscape", "()V" },
	{ "lambda$update$0", "()V" },
	{ "lambda$update$1", "()V" },
	{ "lambda$update$2", "()V" },
	{ "lambda$update$3", "()V" },
};

static FieldMetadata fields[] {
	{ "args", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_switchplatform_SwitchLauncher, F_args), "[Ljava/lang/String;", 17 },
	{ "SWITCH_HANDHELD_WIDTH", &class_int, (intptr_t) &SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_WIDTH, "I", 25 },
	{ "SWITCH_HANDHELD_HEIGHT", &class_int, (intptr_t) &SF_mindustry_switchplatform_SwitchLauncher_SWITCH_HANDHELD_HEIGHT, "I", 25 },
	{ "SWITCH_DOCKED_WIDTH", &class_int, (intptr_t) &SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_WIDTH, "I", 25 },
	{ "SWITCH_DOCKED_HEIGHT", &class_int, (intptr_t) &SF_mindustry_switchplatform_SwitchLauncher_SWITCH_DOCKED_HEIGHT, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_switchplatform_SwitchLauncher_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 1 },
	{ "main", (intptr_t) SM_mindustry_switchplatform_SwitchLauncher_main_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 9 },
	{ "setup", (intptr_t) M_mindustry_switchplatform_SwitchLauncher_setup, VTABLE_mindustry_switchplatform_SwitchLauncher_setup, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_switchplatform_SwitchLauncher_update, VTABLE_mindustry_switchplatform_SwitchLauncher_update, "()V", 1 },
	{ "handleCrash", (intptr_t) SM_mindustry_switchplatform_SwitchLauncher_handleCrash_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 10 },
	{ "lambda$setup$0", (intptr_t) SM_mindustry_switchplatform_SwitchLauncher_lambda$setup$0_mindustry_game_EventType$ClientCreateEvent, 0, "(Lmindustry/game/EventType$ClientCreateEvent;)V", 4106 },
};

Class class_mindustry_switchplatform_SwitchLauncher{
		.nativeName = (intptr_t) "mindustry/switchplatform/SwitchLauncher",
		.parentClass = (intptr_t) &class_mindustry_ClientLauncher,
		.size = sizeof(mindustry_switchplatform_SwitchLauncher),
		.classVtable = (intptr_t) vtable_mindustry_switchplatform_SwitchLauncher,
		.staticInitializer = (intptr_t) clinit_mindustry_switchplatform_SwitchLauncher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_switchplatform_SwitchLauncher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_switchplatform_SwitchLauncher = registerClass(&class_mindustry_switchplatform_SwitchLauncher);

}
