#include "mindustry/net/SteamAdmin.h"
#include "arc/util/Http_HttpRequest.h"
#include "mindustry/gen/Groups.h"
#include "arc/util/Timer_Task.h"
#include "arc/func/ConsT.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/net/SteamAdmin_invoke_java_lang_Runnable_6.h"
#include "mindustry/net/SteamAdmin_invoke_java_lang_Runnable_5.h"
#include "mindustry/net/SteamAdmin_invoke_arc_func_Cons_2.h"
#include "mindustry/net/SteamAdmin_SteamAdminData.h"
#include "mindustry/net/SteamAdmin_invoke_arc_func_Cons_3.h"
#include "java/lang/String.h"
#include "arc/util/Timer.h"
#include "mindustry/net/SteamAdmin_invoke_java_lang_Runnable_7.h"
#include "mindustry/net/SteamAdmin_invoke_java_lang_Runnable_4.h"
#include "arc/struct/Seq.h"
#include "mindustry/net/SteamAdmin_invoke_arc_func_ConsT_2.h"
#include "mindustry/net/SteamAdmin_invoke_arc_func_ConsT_3.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/net/SteamAdmin.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "arc/util/serialization/Jval.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/net/Packets_KickReason.h"
#include "java/lang/CharSequence.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "arc/util/Http.h"
#include "arc/struct/ObjectSet.h"
#include "arc/util/Http_HttpResponse.h"
#include "java/lang/Class.h"
#include "mindustry/net/SteamAdmin_invoke_arc_func_Boolf_1.h"
#include "mindustry/Vars.h"
#include "arc/util/serialization/Jval_JsonArray.h"

extern "C" {

jbool SF_mindustry_net_SteamAdmin_scheduled;
jobject SF_mindustry_net_SteamAdmin_data;
jfloat SF_mindustry_net_SteamAdmin_checkInterval;

void mark_mindustry_net_SteamAdmin(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_SteamAdmin_data)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_SteamAdmin_data)->clazz)->markFunction)((jobject) SF_mindustry_net_SteamAdmin_data, mark, depth + 1);
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
	auto self = (mindustry_net_SteamAdmin *) object;
}

void init_mindustry_net_SteamAdmin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_fetch(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:fetch", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	{
	LINE_NUMBER(18);
	SM_mindustry_net_SteamAdmin_fetch_boolean(ctx, (jint(0)));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_fetch_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:fetch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(22);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(24);
	if ((frame[0].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (((jobject) createStringLiteral(ctx, u8"https://api.github.com/repos/Anuken/MindustrySteamBans/commits?path=data.json&per_page=1"_j))));
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_arc_func_ConsT_2(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_arc_func_ConsT_2 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_arc_func_ConsT_2);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(34);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_steamBansURLs;
	SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	}
label_4:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:fetchImpl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_4);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_net_SteamAdmin_fetch_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	if ((clinit_mindustry_net_SteamAdmin(ctx), (jint)SF_mindustry_net_SteamAdmin_scheduled) != 0) goto label_2;
	}
	{
	LINE_NUMBER(41);
	clinit_mindustry_net_SteamAdmin(ctx);
	SF_mindustry_net_SteamAdmin_scheduled = (jint(1));
	LINE_NUMBER(42);
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_5);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task(ctx, sp[0].o, (jfloat(300.0f)), (jfloat(300.0f)));
	}
label_2:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_fetch_java_lang_String_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:fetch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_arc_func_ConsT_3(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_arc_func_ConsT_3 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_arc_func_ConsT_3);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(51);
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_SteamAdmin_isBanned_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:isBanned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steampublichost2"_j))));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(68);
	clinit_mindustry_net_SteamAdmin(ctx);
	sp[0].o = (jobject)SF_mindustry_net_SteamAdmin_data;
	sp[0].o = (jobject)((mindustry_net_SteamAdmin$SteamAdminData *) NULL_CHECK(sp[0].o))->F_bans;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_SteamAdmin_isAdmin_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:isAdmin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(73);
	clinit_mindustry_net_SteamAdmin(ctx);
	sp[0].o = (jobject)SF_mindustry_net_SteamAdmin_data;
	sp[0].o = (jobject)((mindustry_net_SteamAdmin$SteamAdminData *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp0);
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetch$2_arc_util_Http$HttpResponse(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetch$3_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_net_SteamAdmin$SteamAdminData)), (frame[0].o));
	clinit_mindustry_net_SteamAdmin(ctx);
	SF_mindustry_net_SteamAdmin_data = (checkCast(ctx, &class_mindustry_net_SteamAdmin$SteamAdminData, sp[0].o));
	LINE_NUMBER(57);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_arc_func_Cons_3);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(60);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(58);
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to parse Steam ban data"_j))), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetch$5_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	((func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_SteamAdmin_lambda$fetch$4_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	clinit_mindustry_net_SteamAdmin(ctx);
	sp[0].o = (jobject)SF_mindustry_net_SteamAdmin_data;
	sp[0].o = (jobject)((mindustry_net_SteamAdmin$SteamAdminData *) NULL_CHECK(sp[0].o))->F_bans;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetch$1_java_lang_Runnable_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(49);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to fetch Steam bans"_j))), (frame[1].o));
	LINE_NUMBER(50);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetchImpl$0(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetchImpl$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	{
	LINE_NUMBER(39);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_steamBansURLs;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	{ /* InvokeDynamic */
		clinit_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_net_SteamAdmin_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_net_SteamAdmin_invoke_java_lang_Runnable_7);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_net_SteamAdmin_fetch_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetchImpl$1(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetchImpl$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_SteamAdmin_lambda$fetch$0_arc_util_Http$HttpResponse(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:lambda$fetch$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_steamBansURLs;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"master"_j));
	sp[2].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_serialization_Jval, sp[2].o)))->vtable)[VTABLE_arc_util_serialization_Jval_getString_java_lang_String_R_java_lang_String])(ctx, (checkCast(ctx, &class_arc_util_serialization_Jval, sp[2].o)), (((jobject) createStringLiteral(ctx, u8"sha"_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(31);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(28);
	frame[1].o = sp[0].o;
	LINE_NUMBER(29);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to fetch latest commit"_j))), (frame[1].o));
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_steamBansURLs;
	SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	}
label_4:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_net_SteamAdmin(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_net_SteamAdmin_checkInterval = jfloat(300.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin(ctx);
	{
	LINE_NUMBER(13);
	clinit_mindustry_net_SteamAdmin(ctx);
	SF_mindustry_net_SteamAdmin_scheduled = (jint(0));
	LINE_NUMBER(14);
	clinit_mindustry_net_SteamAdmin$SteamAdminData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_SteamAdmin$SteamAdminData);
	init_mindustry_net_SteamAdmin$SteamAdminData(ctx, sp[0].o);
	clinit_mindustry_net_SteamAdmin(ctx);
	SF_mindustry_net_SteamAdmin_data = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_SteamAdmin[] {
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
	&class_mindustry_net_SteamAdmin$SteamAdminData,
};

static FieldMetadata fields[] {
	{ "scheduled", &class_boolean, (intptr_t) &SF_mindustry_net_SteamAdmin_scheduled, "Z", 10 },
	{ "data", &class_mindustry_net_SteamAdmin$SteamAdminData, (intptr_t) &SF_mindustry_net_SteamAdmin_data, "Lmindustry/net/SteamAdmin$SteamAdminData;", 10 },
	{ "checkInterval", &class_float, (intptr_t) &SF_mindustry_net_SteamAdmin_checkInterval, "F", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_SteamAdmin, 0, "()V", 1 },
	{ "fetch", (intptr_t) SM_mindustry_net_SteamAdmin_fetch, 0, "()V", 9 },
	{ "fetch", (intptr_t) SM_mindustry_net_SteamAdmin_fetch_boolean, 0, "(Z)V", 9 },
	{ "fetchImpl", (intptr_t) SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String, 0, "(Ljava/lang/String;)V", 10 },
	{ "fetch", (intptr_t) SM_mindustry_net_SteamAdmin_fetch_java_lang_String_java_lang_Runnable, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 10 },
	{ "isBanned", (intptr_t) SM_mindustry_net_SteamAdmin_isBanned_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "isAdmin", (intptr_t) SM_mindustry_net_SteamAdmin_isAdmin_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "lambda$fetch$2", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$2_arc_util_Http$HttpResponse, 0, "(Larc/util/Http$HttpResponse;)V", 4106 },
	{ "lambda$fetch$3", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$3_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$fetch$5", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$5_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$fetch$4", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$4_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$fetch$1", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$1_java_lang_Runnable_java_lang_Throwable, 0, "(Ljava/lang/Runnable;Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$fetchImpl$0", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetchImpl$0, 0, "()V", 4106 },
	{ "lambda$fetchImpl$1", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetchImpl$1, 0, "()V", 4106 },
	{ "lambda$fetch$0", (intptr_t) SM_mindustry_net_SteamAdmin_lambda$fetch$0_arc_util_Http$HttpResponse, 0, "(Larc/util/Http$HttpResponse;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_SteamAdmin, 0, "()V", 8 },
};

Class class_mindustry_net_SteamAdmin{
		.nativeName = (intptr_t) "mindustry/net/SteamAdmin",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_SteamAdmin),
		.classVtable = (intptr_t) vtable_mindustry_net_SteamAdmin,
		.staticInitializer = (intptr_t) clinit_mindustry_net_SteamAdmin,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_SteamAdmin,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_SteamAdmin = registerClass(&class_mindustry_net_SteamAdmin);

}
