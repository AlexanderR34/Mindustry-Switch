#include "mindustry/core/NetServer_VoteSession.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/core/NetServer_VoteSession.h"
#include "java/lang/Integer.h"
#include "mindustry/gen/Groups.h"
#include "arc/util/Timer_Task.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/Packets_KickReason.h"
#include "arc/func/Cons.h"
#include "arc/util/Strings.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "arc/util/Timer.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/net/Administration.h"
#include "mindustry/core/NetServer_VoteSession_invoke_java_lang_Runnable_1.h"
#include "mindustry/core/NetServer_VoteSession_invoke_arc_func_Cons_1.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/gen/Call.h"
#include "arc/func/Boolf.h"
#include "mindustry/core/NetServer_VoteSession_invoke_arc_func_Boolf_1.h"

extern "C" {


void mark_mindustry_core_NetServer$VoteSession(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_NetServer$VoteSession *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_voted)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_voted)->clazz)->markFunction)((jobject) self->F_voted, mark, depth + 1);
	if (self->F_task)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_task)->clazz)->markFunction)((jobject) self->F_task, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_NetServer$VoteSession(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_NetServer$VoteSession_mindustry_core_NetServer_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer$VoteSession(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1441);
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1437);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_voted = (jref) sp[1].o;
	LINE_NUMBER(1442);
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[2].o);
	LINE_NUMBER(1443);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer$VoteSession_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_core_NetServer$VoteSession_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer$VoteSession_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Timer_schedule_java_lang_Runnable_float_R_arc_util_Timer$Task(ctx, sp[1].o, (clinit_mindustry_core_NetServer(ctx), (jfloat)SF_mindustry_core_NetServer_voteDuration));
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_task = (jref) sp[1].o;
	LINE_NUMBER(1450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:vote", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_voted;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_voted;
	sp[1].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_admins;
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[1].o))->F_lastIP;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[3].i = (temp0 | temp1);
	LINE_NUMBER(1454);
	sp[0].o = frame[0].o;
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_votes = (((jint)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_votes) - (frame[3].i));
	LINE_NUMBER(1456);
	sp[0].o = frame[0].o;
	((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_votes = (((jint)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_votes) + (frame[2].i));
	LINE_NUMBER(1457);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_voted;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_voted;
	sp[1].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_admins;
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[1].o))->F_lastIP;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(1460);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[lightgray]@[lightgray] has voted on kicking[orange] @[lightgray].[accent] (@/@)\n[lightgray]Type[orange] /vote <y/n>[] to agree."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp2 = jint(0);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	sp[2].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(2);
	jint temp5 = (jint)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_votes;
	LINE_NUMBER(1461);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp5);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp6 = jint(3);
	sp[2].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp7 = (jint)((func_mindustry_core_NetServer_votesRequired_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_NetServer_votesRequired_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp7);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	LINE_NUMBER(1460);
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1463);
	jint temp8 = (jint)((func_mindustry_core_NetServer$VoteSession_checkPass_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer$VoteSession_checkPass_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(1464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_NetServer$VoteSession_checkPass_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:checkPass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1467);
	jint temp0 = (jint)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_votes;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_core_NetServer_votesRequired_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_votesRequired_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_1;
	}
	{
	LINE_NUMBER(1468);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[orange]Vote passed.[scarlet] @[orange] will be banned from the server for @ minutes."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((clinit_mindustry_core_NetServer(ctx), (jint)SF_mindustry_core_NetServer_kickDuration) / (60)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1469);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer$VoteSession_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_core_NetServer$VoteSession_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer$VoteSession_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer$VoteSession_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_core_NetServer$VoteSession_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer$VoteSession_invoke_arc_func_Cons_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_currentlyKicking = (jref) (jobject(nullptr));
	LINE_NUMBER(1471);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_task;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(1472);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1474);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer$VoteSession_lambda$checkPass$1_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:lambda$checkPass$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer$VoteSession(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1469);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_vote;
	((func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long])(ctx, sp[0].o, sp[1].o, (jlong(((clinit_mindustry_core_NetServer(ctx), (jint)SF_mindustry_core_NetServer_kickDuration) * (1000)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:lambda$checkPass$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1469);
	sp[0].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer$VoteSession:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1444);
	jint temp0 = (jint)((func_mindustry_core_NetServer$VoteSession_checkPass_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer$VoteSession_checkPass_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1445);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[lightgray]Vote failed. Not enough votes to kick[orange] @[lightgray]."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1446);
	((mindustry_core_NetServer *) NULL_CHECK((frame[2].o)))->F_currentlyKicking = (jref) (jobject(nullptr));
	LINE_NUMBER(1447);
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK((frame[0].o)))->F_task;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1449);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_core_NetServer$VoteSession[] {
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
	(void *) M_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int,
	(void *) M_mindustry_core_NetServer$VoteSession_checkPass_R_boolean,
	(void *) M_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer,
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
	{ "vote", "(Lmindustry/gen/Player;I)V" },
	{ "checkPass", "()Z" },
	{ "lambda$checkPass$0", "(Lmindustry/gen/Player;)Z" },
	{ "lambda$new$0", "(Lmindustry/gen/Player;Lmindustry/core/NetServer;)V" },
};

static FieldMetadata fields[] {
	{ "target", &class_mindustry_gen_Player, offsetof(mindustry_core_NetServer$VoteSession, F_target), "Lmindustry/gen/Player;", 0 },
	{ "voted", &class_arc_struct_ObjectIntMap, offsetof(mindustry_core_NetServer$VoteSession, F_voted), "Larc/struct/ObjectIntMap;", 0 },
	{ "task", &class_arc_util_Timer$Task, offsetof(mindustry_core_NetServer$VoteSession, F_task), "Larc/util/Timer$Task;", 0 },
	{ "votes", &class_int, offsetof(mindustry_core_NetServer$VoteSession, F_votes), "I", 0 },
	{ "this$0", &class_mindustry_core_NetServer, offsetof(mindustry_core_NetServer$VoteSession, F_this$0), "Lmindustry/core/NetServer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_NetServer$VoteSession_mindustry_core_NetServer_mindustry_gen_Player, 0, "(Lmindustry/core/NetServer;Lmindustry/gen/Player;)V", 1 },
	{ "vote", (intptr_t) M_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int, VTABLE_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int, "(Lmindustry/gen/Player;I)V", 0 },
	{ "checkPass", (intptr_t) M_mindustry_core_NetServer$VoteSession_checkPass_R_boolean, VTABLE_mindustry_core_NetServer$VoteSession_checkPass_R_boolean, "()Z", 0 },
	{ "lambda$checkPass$1", (intptr_t) SM_mindustry_core_NetServer$VoteSession_lambda$checkPass$1_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$checkPass$0", (intptr_t) M_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean, VTABLE_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer, VTABLE_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer, "(Lmindustry/gen/Player;Lmindustry/core/NetServer;)V", 4098 },
};

Class class_mindustry_core_NetServer$VoteSession{
		.nativeName = (intptr_t) "mindustry/core/NetServer$VoteSession",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_NetServer$VoteSession),
		.classVtable = (intptr_t) vtable_mindustry_core_NetServer$VoteSession,
		.staticInitializer = (intptr_t) clinit_mindustry_core_NetServer$VoteSession,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_NetServer$VoteSession,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_core_NetServer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_NetServer$VoteSession = registerClass(&class_mindustry_core_NetServer$VoteSession);

}

